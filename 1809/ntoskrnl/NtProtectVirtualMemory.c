/*
 * XREFs of NtProtectVirtualMemory @ 0x1405EED70
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     MiMakeProtectionMask @ 0x140074490 (MiMakeProtectionMask.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     MmProtectVirtualMemory @ 0x1405EEFD0 (MmProtectVirtualMemory.c)
 *     EtwTiLogProtectExecVm @ 0x14067787C (EtwTiLogProtectExecVm.c)
 *     VslDebugProtectSecureProcessMemory @ 0x1408194B0 (VslDebugProtectSecureProcessMemory.c)
 */

NTSTATUS __stdcall NtProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        SIZE_T *NumberOfBytesToProtect,
        ULONG NewAccessProtection,
        PULONG OldAccessProtection)
{
  HANDLE v8; // r10
  PULONG v9; // r8
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdi
  char PreviousMode; // dl
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  PVOID v16; // rcx
  SIZE_T v17; // r12
  int v18; // esi
  NTSTATUS result; // eax
  _BYTE *v20; // rbx
  NTSTATUS v21; // eax
  NTSTATUS v22; // edi
  unsigned int v23; // esi
  unsigned __int8 v24; // [rsp+40h] [rbp-A8h]
  unsigned int v25; // [rsp+44h] [rbp-A4h] BYREF
  int ProtectionMask; // [rsp+48h] [rbp-A0h]
  PVOID v27; // [rsp+50h] [rbp-98h] BYREF
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  SIZE_T v29; // [rsp+60h] [rbp-88h] BYREF
  PULONG v30; // [rsp+68h] [rbp-80h]
  _BYTE v31[48]; // [rsp+70h] [rbp-78h] BYREF

  v8 = ProcessHandle;
  v9 = OldAccessProtection;
  v30 = OldAccessProtection;
  if ( NewAccessProtection == 0x80000000 || NewAccessProtection == 0x10000000 )
  {
    ProtectionMask = 24;
  }
  else
  {
    ProtectionMask = MiMakeProtectionMask(NewAccessProtection & 0xFFFFFFF);
    if ( ProtectionMask == -1 )
      return -1073741755;
  }
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  v24 = PreviousMode;
  if ( PreviousMode )
  {
    v13 = (__int64)BaseAddress;
    if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v13 = *(_QWORD *)v13;
    v14 = (__int64)NumberOfBytesToProtect;
    if ( (unsigned __int64)NumberOfBytesToProtect >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v15 = (__int64)v9;
    if ( (unsigned __int64)v9 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v16 = *BaseAddress;
    v27 = *BaseAddress;
    v17 = *NumberOfBytesToProtect;
    v29 = *NumberOfBytesToProtect;
    PreviousMode = v24;
  }
  else
  {
    v17 = *NumberOfBytesToProtect;
    v29 = *NumberOfBytesToProtect;
    v16 = *BaseAddress;
    v27 = *BaseAddress;
  }
  if ( (unsigned __int64)v16 > 0x7FFFFFFEFFFFLL )
    return -1073741584;
  if ( 0x7FFFFFFF0000LL - (__int64)v16 < v17 || !v17 )
    return -1073741583;
  v18 = 0;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)v8,
             8,
             (__int64)PsProcessType,
             PreviousMode,
             0x76506D4Du,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v20 = Object;
    if ( Process != Object )
    {
      KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)v31);
      v18 = 1;
    }
    if ( (v20[720] & 1) != 0 )
      v21 = VslDebugProtectSecureProcessMemory(
              (_DWORD)v20,
              (_DWORD)Process,
              (unsigned int)&v27,
              (unsigned int)&v29,
              NewAccessProtection,
              (__int64)&v25);
    else
      v21 = MmProtectVirtualMemory(
              (_DWORD)Process,
              (_DWORD)v20,
              (unsigned int)&v27,
              (unsigned int)&v29,
              NewAccessProtection,
              (__int64)&v25);
    v22 = v21;
    LODWORD(Object) = v21;
    if ( v18 )
      KiUnstackDetachProcess((__int64)v31, 0LL);
    v23 = v25;
    if ( v22 >= 0 && (((unsigned __int8)MiMakeProtectionMask(v25) | (unsigned __int8)ProtectionMask) & 2) != 0 )
      EtwTiLogProtectExecVm((_DWORD)v20, v24, (_DWORD)v27, v17, NewAccessProtection, v23);
    ObfDereferenceObjectWithTag(v20, 0x76506D4Du);
    *NumberOfBytesToProtect = v29;
    *BaseAddress = v27;
    *v30 = v23;
    return v22;
  }
  return result;
}
