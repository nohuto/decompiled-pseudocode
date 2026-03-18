/*
 * XREFs of KeWaitForAlertByThreadId @ 0x14009A310
 * Callers:
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 *     NtWaitForAlertByThreadId @ 0x14064C4C0 (NtWaitForAlertByThreadId.c)
 * Callees:
 *     KiCommitThreadWait @ 0x140040480 (KiCommitThreadWait.c)
 *     KiBeginThreadWait @ 0x14009A470 (KiBeginThreadWait.c)
 *     KiCheckDueTimeExpired @ 0x14009A7D0 (KiCheckDueTimeExpired.c)
 *     KiCheckWaitNext @ 0x14009AE10 (KiCheckWaitNext.c)
 *     KiFastExitThreadWait @ 0x1401193C4 (KiFastExitThreadWait.c)
 */

__int64 __fastcall KeWaitForAlertByThreadId(unsigned __int8 a1, _QWORD *a2, void *a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 result; // rax
  unsigned __int8 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // r9
  int v10; // r10d
  unsigned __int8 CurrentIrql; // dl
  unsigned int v12; // ebx
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u) )
    return 257LL;
  if ( !a2 || *a2 )
  {
    v7 = KiCheckWaitNext((_DWORD)CurrentThread, (_DWORD)a2, 0, (unsigned int)&v13, (__int64)&v14);
    while ( 1 )
    {
      result = KiBeginThreadWait(CurrentThread, a1, 37LL, 0LL);
      if ( (_DWORD)result )
        return result;
      if ( _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 4u) )
        break;
      if ( (unsigned int)KiCheckDueTimeExpired(CurrentThread, v14, v13) )
      {
        v12 = 258;
        goto LABEL_14;
      }
      CurrentThread->WaitBlock[0].Object = a3;
      CurrentThread->WaitBlockFill4[17] = 5;
      CurrentThread->WaitBlockCount = 1;
      result = KiCommitThreadWait(v8, (__int64 *)&CurrentThread->320, v10, v9);
      CurrentThread->WaitReason = 0;
      if ( (_DWORD)result != 256 )
        return result;
      v7 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      CurrentThread->WaitIrql = CurrentIrql;
    }
    v12 = 257;
LABEL_14:
    CurrentThread->WaitReason = 0;
    KiFastExitThreadWait(KeGetCurrentPrcb(), CurrentThread, v7);
    return v12;
  }
  return 258LL;
}
