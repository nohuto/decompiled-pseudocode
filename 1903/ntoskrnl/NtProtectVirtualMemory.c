/*
 * XREFs of NtProtectVirtualMemory @ 0x140603900
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     MiMakeProtectionMask @ 0x140050400 (MiMakeProtectionMask.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     MmProtectVirtualMemory @ 0x1406040D0 (MmProtectVirtualMemory.c)
 *     EtwTiLogProtectExecVm @ 0x140678608 (EtwTiLogProtectExecVm.c)
 *     VslDebugProtectSecureProcessMemory @ 0x140851F14 (VslDebugProtectSecureProcessMemory.c)
 */

NTSTATUS __stdcall NtProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        SIZE_T *NumberOfBytesToProtect,
        ULONG NewAccessProtection,
        PULONG OldAccessProtection)
{
  int ProtectionMask; // r13d
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // dl
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  PVOID v14; // rcx
  SIZE_T v15; // r14
  int v16; // esi
  NTSTATUS result; // eax
  _BYTE *v18; // rbx
  int v19; // ecx
  NTSTATUS v20; // eax
  NTSTATUS v21; // edi
  unsigned int v22; // esi
  unsigned __int8 v23; // [rsp+40h] [rbp-B8h]
  unsigned int v24; // [rsp+44h] [rbp-B4h] BYREF
  _KPROCESS *Process; // [rsp+48h] [rbp-B0h]
  PVOID v26; // [rsp+50h] [rbp-A8h] BYREF
  SIZE_T v27; // [rsp+58h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+60h] [rbp-98h]
  PVOID Object; // [rsp+68h] [rbp-90h] BYREF
  SIZE_T *v30; // [rsp+70h] [rbp-88h]
  PULONG v31; // [rsp+78h] [rbp-80h]
  _BYTE v32[48]; // [rsp+80h] [rbp-78h] BYREF

  v30 = NumberOfBytesToProtect;
  BugCheckParameter1 = (ULONG_PTR)ProcessHandle;
  v31 = OldAccessProtection;
  memset(v32, 0, sizeof(v32));
  if ( NewAccessProtection == 0x80000000 || NewAccessProtection == 0x10000000 )
  {
    LOBYTE(ProtectionMask) = 24;
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
  v23 = PreviousMode;
  if ( PreviousMode )
  {
    v11 = (__int64)BaseAddress;
    if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    v12 = (__int64)NumberOfBytesToProtect;
    if ( (unsigned __int64)NumberOfBytesToProtect >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v12 = *(_QWORD *)v12;
    v13 = (__int64)OldAccessProtection;
    if ( (unsigned __int64)OldAccessProtection >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    v14 = *BaseAddress;
    v26 = *BaseAddress;
    v15 = *NumberOfBytesToProtect;
    v27 = *NumberOfBytesToProtect;
    PreviousMode = v23;
  }
  else
  {
    v15 = *NumberOfBytesToProtect;
    v27 = *NumberOfBytesToProtect;
    v14 = *BaseAddress;
    v26 = *BaseAddress;
  }
  if ( (unsigned __int64)v14 > 0x7FFFFFFEFFFFLL )
    return -1073741584;
  if ( 0x7FFFFFFF0000LL - (__int64)v14 < v15 || !v15 )
    return -1073741583;
  v16 = 0;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             8,
             (__int64)PsProcessType,
             PreviousMode,
             0x76506D4Du,
             &Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v18 = Object;
    v19 = (int)Process;
    if ( Process != Object )
    {
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v32);
      v16 = 1;
      v19 = (int)Process;
    }
    if ( (v18[728] & 1) != 0 )
      v20 = VslDebugProtectSecureProcessMemory(
              (_DWORD)v18,
              v19,
              (unsigned int)&v26,
              (unsigned int)&v27,
              NewAccessProtection,
              (__int64)&v24);
    else
      v20 = MmProtectVirtualMemory(
              v19,
              (_DWORD)v18,
              (unsigned int)&v26,
              (unsigned int)&v27,
              NewAccessProtection,
              (__int64)&v24);
    v21 = v20;
    LODWORD(Process) = v20;
    if ( v16 )
      KiUnstackDetachProcess((struct _KTHREAD *)v32, 0);
    v22 = v24;
    if ( v21 >= 0 && (((unsigned __int8)MiMakeProtectionMask(v24) | (unsigned __int8)ProtectionMask) & 2) != 0 )
      EtwTiLogProtectExecVm((_DWORD)v18, v23, (_DWORD)v26, v15, NewAccessProtection, v22);
    ObfDereferenceObjectWithTag(v18, 0x76506D4Du);
    *v30 = v27;
    *BaseAddress = v26;
    *v31 = v22;
    return v21;
  }
  return result;
}
