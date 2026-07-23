/*
 * XREFs of NtSetSystemEnvironmentValueEx @ 0x1408D6E80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x140195BB0 (_wcsnicmp.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     PsIsProcessAppContainer @ 0x1406B9488 (PsIsProcessAppContainer.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1408D0E20 (ExSetFirmwareEnvironmentVariable.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x1408D1CD0 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1408D3760 (ExpSetFirmwareEnvironmentVariable.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetSystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        LPGUID VendorGuid,
        PVOID Value,
        PULONG ReturnLength,
        PULONG Attributes)
{
  unsigned __int16 v8; // cx
  size_t v9; // rbx
  unsigned __int64 v10; // rcx
  char *v11; // rcx
  WCHAR *PoolWithTag; // rax
  WCHAR *v13; // rdi
  __int64 v14; // rax
  NTSTATUS v15; // ebx
  char v16; // [rsp+30h] [rbp-78h]
  unsigned int v17; // [rsp+38h] [rbp-70h]
  void *Src[2]; // [rsp+50h] [rbp-58h]
  GUID v19; // [rsp+60h] [rbp-48h] BYREF

  if ( !KeGetCurrentThread()->PreviousMode )
    return ExSetFirmwareEnvironmentVariable(
             (__int64)VariableName,
             (__int64)VendorGuid,
             (__int64)Value,
             (unsigned int)ReturnLength,
             (int)Attributes);
  if ( dword_14040ADF0 != 2 )
    return -1073741822;
  if ( ((unsigned __int8)VariableName & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  *(UNICODE_STRING *)Src = *VariableName;
  v8 = _mm_cvtsi128_si32(*(__m128i *)VariableName);
  if ( !v8 )
    return -1073741819;
  if ( ((__int64)Src[1] & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = v8;
  v10 = (unsigned __int64)Src[1] + v8;
  if ( v10 > 0x7FFFFFFF0000LL || (void *)v10 < Src[1] )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( ((unsigned __int8)VendorGuid & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = Value != 0LL ? (unsigned int)ReturnLength : 0;
  if ( v17 )
  {
    v11 = (char *)Value + (Value != 0LL ? (unsigned int)ReturnLength : 0);
    if ( (unsigned __int64)v11 > 0x7FFFFFFF0000LL || v11 < Value )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v16 = SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1);
  if ( !v16 )
  {
    if ( PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
      v16 = ExpFirmwareAccessAppContainerCheck(2);
    if ( !v16 )
      return -1073741727;
  }
  v19 = *VendorGuid;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(NonPagedPoolNx, v9 + 2, 0x72766E45u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memmove(PoolWithTag, Src[1], v9);
  v13[v9 >> 1] = 0;
  v14 = *(_QWORD *)&v19.Data1 - ExpSecureBootVendorGuid;
  if ( *(_QWORD *)&v19.Data1 == ExpSecureBootVendorGuid )
    v14 = *(_QWORD *)v19.Data4 - 0x4B788FE7F42860BDLL;
  if ( v14 || wcsnicmp(v13, L"Kernel_", 7uLL) )
  {
    v15 = ExpSetFirmwareEnvironmentVariable(v13, (__int64)&v19, (unsigned __int64)Value, v17, (int)Attributes, 1);
    ExFreePoolWithTag(v13, 0);
    return v15;
  }
  else
  {
    ExFreePoolWithTag(v13, 0);
    return -1073741790;
  }
}
