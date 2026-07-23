/*
 * XREFs of MmDbgMarkPfnModifiedWorker @ 0x14018FB04
 * Callers:
 *     ExpDebuggerWorker @ 0x140916030 (ExpDebuggerWorker.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiCaptureDirtyBitToPfn @ 0x140087900 (MiCaptureDirtyBitToPfn.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

int MmDbgMarkPfnModifiedWorker()
{
  _UNKNOWN **v0; // rax
  __int64 v1; // rdi
  signed __int64 *v2; // rsi
  signed __int64 v3; // rbp
  __int64 v4; // rbp
  unsigned __int8 v5; // r14
  unsigned __int64 v6; // rbx
  struct _KEVENT *v7; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v0 = &retaddr;
  v1 = 0LL;
  v2 = qword_14043BA18;
  do
  {
    v3 = *v2;
    if ( (*v2 & 1) != 0 )
    {
      _InterlockedAnd64(&qword_14043BA18[v1], 0LL);
      v4 = v3 - 1;
      v5 = MiLockPageInline(v4);
      v6 = MiCaptureDirtyBitToPfn(v4);
      MiRemoveLockedPageChargeAndDecRef(v4);
      v7 = *(struct _KEVENT **)(qword_14043B808 + 8 * ((*(_QWORD *)(v4 + 40) >> 40) & 0x3FFLL));
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      LODWORD(v0) = v5;
      __writecr8(v5);
      if ( v6 )
        LODWORD(v0) = MiReleasePageFileInfo(v7, v6, 0);
    }
    v1 = (unsigned int)(v1 + 1);
    ++v2;
  }
  while ( (unsigned int)v1 < 0x20 );
  return (int)v0;
}
