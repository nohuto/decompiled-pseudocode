/*
 * XREFs of NtSetSystemEnvironmentValueEx @ 0x140913490
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1401A0240 (_wcsnicmp.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     PsIsProcessAppContainer @ 0x1406DA6CC (PsIsProcessAppContainer.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x14090D320 (ExSetFirmwareEnvironmentVariable.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x14090E220 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14090FD14 (ExpSetFirmwareEnvironmentVariable.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetSystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        LPGUID VendorGuid,
        PVOID Value,
        PULONG ReturnLength,
        PULONG Attributes)
{
  UNICODE_STRING v8; // xmm0
  unsigned __int64 v9; // rcx
  char *v10; // rcx
  WCHAR *PoolWithTag; // rax
  WCHAR *v12; // rdi
  __int64 v13; // rax
  NTSTATUS v14; // ebx
  char v15; // [rsp+30h] [rbp-78h]
  unsigned int v16; // [rsp+38h] [rbp-70h]
  UNICODE_STRING Src; // [rsp+48h] [rbp-60h]
  GUID v18; // [rsp+68h] [rbp-40h] BYREF

  v18 = (GUID)0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return ExSetFirmwareEnvironmentVariable(
             (__int64)VariableName,
             (__int64)VendorGuid,
             (__int64)Value,
             (unsigned int)ReturnLength,
             (int)Attributes);
  if ( dword_1404324F0 != 2 )
    return -1073741822;
  if ( ((unsigned __int8)VariableName & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = *VariableName;
  Src = *VariableName;
  if ( !VariableName->Length )
    return -1073741819;
  if ( ((__int64)Src.Buffer & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = (unsigned __int64)Src.Buffer + v8.Length;
  if ( v9 > 0x7FFFFFFF0000LL || (wchar_t *)v9 < Src.Buffer )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( ((unsigned __int8)VendorGuid & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v16 = Value != 0LL ? (unsigned int)ReturnLength : 0;
  if ( v16 )
  {
    v10 = (char *)Value + (Value != 0LL ? (unsigned int)ReturnLength : 0);
    if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < Value )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v15 = SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1);
  if ( !v15 )
  {
    if ( PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
      v15 = ExpFirmwareAccessAppContainerCheck(2);
    if ( !v15 )
      return -1073741727;
  }
  v18 = *VendorGuid;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(NonPagedPoolNx, v8.Length + 2LL, 0x72766E45u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memmove(PoolWithTag, Src.Buffer, v8.Length);
  v12[(unsigned __int64)v8.Length >> 1] = 0;
  v13 = *(_QWORD *)&v18.Data1 - ExpSecureBootVendorGuid;
  if ( *(_QWORD *)&v18.Data1 == ExpSecureBootVendorGuid )
    v13 = *(_QWORD *)v18.Data4 - 0x4B788FE7F42860BDLL;
  if ( v13 || wcsnicmp(v12, L"Kernel_", 7uLL) )
  {
    v14 = ExpSetFirmwareEnvironmentVariable(v12, (__int64)&v18, (unsigned __int64)Value, v16, (int)Attributes, 1);
    ExFreePoolWithTag(v12, 0);
    return v14;
  }
  else
  {
    ExFreePoolWithTag(v12, 0);
    return -1073741790;
  }
}
