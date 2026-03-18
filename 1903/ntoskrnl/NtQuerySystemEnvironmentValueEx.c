/*
 * XREFs of NtQuerySystemEnvironmentValueEx @ 0x1406ECA90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     PsIsProcessAppContainer @ 0x1406DA6CC (PsIsProcessAppContainer.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406ECB40 (ExGetFirmwareEnvironmentVariable.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x14090E220 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14090E5E0 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpUmdfSidCheck @ 0x140910BA4 (ExpUmdfSidCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQuerySystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        LPGUID VendorGuid,
        PVOID Value,
        PULONG ReturnLength,
        PULONG Attributes)
{
  UNICODE_STRING v8; // xmm0
  char *v9; // rcx
  __int64 v10; // rcx
  ULONG v11; // eax
  __int64 v12; // rcx
  WCHAR *PoolWithTag; // rax
  WCHAR *v14; // rbx
  NTSTATUS FirmwareEnvironmentVariable; // esi
  BOOLEAN v16; // [rsp+30h] [rbp-98h]
  ULONG v17; // [rsp+34h] [rbp-94h]
  __int64 v18; // [rsp+38h] [rbp-90h] BYREF
  PVOID P; // [rsp+40h] [rbp-88h]
  void *Src[2]; // [rsp+48h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-60h]
  GUID v22; // [rsp+70h] [rbp-58h]

  Src[0] = 0LL;
  Src[1] = 0LL;
  P = 0LL;
  v22 = (GUID)0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return ExGetFirmwareEnvironmentVariable(
             (_DWORD)VariableName,
             (_DWORD)VendorGuid,
             (_DWORD)Value,
             (_DWORD)ReturnLength,
             (__int64)Attributes);
  if ( dword_1404324F0 != 2 )
    return -1073741822;
  if ( ((unsigned __int8)VariableName & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = *VariableName;
  *(UNICODE_STRING *)Src = v8;
  if ( !v8.Length )
    return -1073741819;
  if ( ((__int64)Src[1] & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = (char *)Src[1] + v8.Length;
  if ( (unsigned __int64)v9 > 0x7FFFFFFF0000LL || v9 < Src[1] )
    MEMORY[0x7FFFFFFF0000] = 0;
  if ( ((unsigned __int8)VendorGuid & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v10 = (__int64)ReturnLength;
  if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
    v10 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v10 = *(_DWORD *)v10;
  v11 = *ReturnLength;
  v17 = *ReturnLength;
  if ( !Value )
  {
    v17 = 0;
    v11 = 0;
  }
  if ( v11 )
    ProbeForWrite(Value, v11, 1u);
  if ( Attributes )
  {
    v12 = (__int64)Attributes;
    if ( (unsigned __int64)Attributes >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
  }
  v16 = SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1);
  if ( !v16 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( PsIsProcessAppContainer(CurrentThread->ApcState.Process) )
      v16 = ExpFirmwareAccessAppContainerCheck(1LL);
    if ( !v16 && !(unsigned __int8)ExpUmdfSidCheck() )
      return -1073741727;
  }
  v22 = *VendorGuid;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(NonPagedPoolNx, v8.Length + 2LL, 0x72766E45u);
  v14 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memmove(PoolWithTag, Src[1], v8.Length);
  v14[(unsigned __int64)v8.Length >> 1] = 0;
  FirmwareEnvironmentVariable = ExpGetFirmwareEnvironmentVariable(v14, (__int64)&v18, 1);
  ExFreePoolWithTag(v14, 0);
  *ReturnLength = v17;
  if ( Attributes )
    *Attributes = v18;
  return FirmwareEnvironmentVariable;
}
