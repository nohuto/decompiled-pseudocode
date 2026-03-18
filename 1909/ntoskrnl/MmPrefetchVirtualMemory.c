/*
 * XREFs of MmPrefetchVirtualMemory @ 0x1406517C8
 * Callers:
 *     MiProcessWsInSwapRanges @ 0x1400D9AE4 (MiProcessWsInSwapRanges.c)
 *     MmPrefetchVirtualAddresses @ 0x1406DC3D0 (MmPrefetchVirtualAddresses.c)
 *     PfpPrefetchPrivatePages @ 0x1406F8E3C (PfpPrefetchPrivatePages.c)
 *     ExpDebuggerWorker @ 0x140953030 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     MiGetSessionVm @ 0x140075FE4 (MiGetSessionVm.c)
 *     MmDetachSession @ 0x14008CE30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008CED0 (MmAttachSession.c)
 *     MiPrefetchVirtualMemory @ 0x1400C7FA0 (MiPrefetchVirtualMemory.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     ObIsKernelHandle @ 0x140144A80 (ObIsKernelHandle.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiLockAndSelectSessionAttachProcess @ 0x1402C68A0 (MiLockAndSelectSessionAttachProcess.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall MmPrefetchVirtualMemory(ULONG_PTR BugCheckParameter1, unsigned __int64 a2, __int64 a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r12
  int v7; // ebx
  PVOID v8; // r15
  void *v9; // r14
  _DWORD *p_LockNV; // rsi
  unsigned __int64 SessionVm; // rax
  int v12; // edi
  NTSTATUS result; // eax
  _QWORD *v14; // rax
  ULONG_PTR BugCheckParameter1a; // [rsp+40h] [rbp-49h] BYREF
  PVOID Object; // [rsp+48h] [rbp-41h] BYREF
  __int64 v17; // [rsp+50h] [rbp-39h]
  unsigned __int64 v18; // [rsp+58h] [rbp-31h]
  _BYTE v19[48]; // [rsp+60h] [rbp-29h] BYREF

  v18 = a2;
  v17 = a3;
  memset(v19, 0, sizeof(v19));
  CurrentThread = KeGetCurrentThread();
  BugCheckParameter1a = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( !BugCheckParameter1 )
  {
    SessionVm = 1LL;
    goto LABEL_31;
  }
  if ( BugCheckParameter1 != -1LL )
  {
    if ( BugCheckParameter1 == -3LL )
    {
      p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
      if ( (p_LockNV[195] & 0x10000) == 0 )
        return -1073741799;
      SessionVm = MiGetSessionVm();
      goto LABEL_6;
    }
    if ( !ObIsKernelHandle((HANDLE)BugCheckParameter1) )
      return -1073741585;
    if ( (int)ObpReferenceObjectByHandleWithTag(
                BugCheckParameter1,
                8,
                (__int64)PsProcessType,
                0,
                0x66506D4Du,
                &BugCheckParameter1a,
                0LL,
                0LL) >= 0 )
    {
      p_LockNV = (_DWORD *)BugCheckParameter1a;
      if ( CurrentThread->ApcState.Process != (_KPROCESS *)BugCheckParameter1a )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0, (__int64)v19);
        v7 = 1;
      }
      goto LABEL_15;
    }
    result = ObReferenceObjectByHandle((HANDLE)BugCheckParameter1, 1u, MmSessionObjectType, 0, &Object, 0LL);
    v8 = Object;
    if ( result < 0 )
      return result;
    v14 = MiLockAndSelectSessionAttachProcess(*((_QWORD *)Object + 3));
    v9 = v14;
    if ( !v14 )
    {
LABEL_29:
      ObfDereferenceObject(v8);
      return 0;
    }
    if ( (int)MmAttachSession((ULONG_PTR)v14) < 0 )
    {
      ObfDereferenceObject(v9);
      goto LABEL_29;
    }
    SessionVm = MiGetSessionVm();
LABEL_31:
    p_LockNV = (_DWORD *)BugCheckParameter1a;
    goto LABEL_6;
  }
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
LABEL_15:
  SessionVm = (unsigned __int64)(p_LockNV + 320);
LABEL_6:
  v12 = MiPrefetchVirtualMemory(v18, v17, SessionVm, a4);
  if ( v7 )
    KiUnstackDetachProcess((struct _KTHREAD *)v19, 0);
  if ( v9 )
  {
    MmDetachSession((__int64)v9, (__int64)v19);
    ObfDereferenceObject(v9);
  }
  if ( BugCheckParameter1 == -2LL || BugCheckParameter1 - 1 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    if ( p_LockNV )
    {
      ObfDereferenceObjectWithTag(p_LockNV, 0x66506D4Du);
    }
    else if ( v8 )
    {
      ObfDereferenceObject(v8);
    }
  }
  return v12;
}
