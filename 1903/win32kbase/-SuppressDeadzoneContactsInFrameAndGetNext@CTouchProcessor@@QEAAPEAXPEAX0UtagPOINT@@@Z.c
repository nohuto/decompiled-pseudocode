/*
 * XREFs of ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z @ 0x1C0174E80
 * Callers:
 *     ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z @ 0x1C018370C (-SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A4DE8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C013AFEC (rimAbIsPointInPenDeadzone.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0166BEC (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0169738 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016E13C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _LIST_ENTRY **__fastcall CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        struct CPointerInputFrame *a3,
        struct tagPOINT a4)
{
  unsigned int i; // ebp
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  struct _LIST_ENTRY **NextFrame; // rbx
  CInpLockGuard *v17; // [rsp+20h] [rbp-38h] BYREF
  int v18; // [rsp+28h] [rbp-30h]
  __int128 v19; // [rsp+30h] [rbp-28h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v17,
    (CTouchProcessor *)((char *)this + 48));
  for ( i = 0; i < *((_DWORD *)a3 + 12); ++i )
  {
    v9 = *((_QWORD *)a3 + 16) + 496LL * i;
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v9) )
    {
      if ( *(_DWORD *)(v9 + 176) != 2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
      if ( (*(_DWORD *)(v9 + 188) & 0x10000) != 0
        && (v13 = *(_QWORD *)(v9 + 232),
            v19 = *(_OWORD *)(*((_QWORD *)a3 + 18) + 176LL),
            (unsigned int)rimAbIsPointInPenDeadzone(&v19, v13, *(_QWORD *)&a4))
        || a2
        && (ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(this, a2, *(_WORD *)(v9 + 180), 0LL)) != 0LL
        && (*(_DWORD *)ValidNodeInFrame & 0x1000) != 0 )
      {
        *(_DWORD *)v9 |= 0x1000u;
      }
    }
  }
  NextFrame = CTouchProcessor::GetNextFrame(this, a3, (struct _LIST_ENTRY *)((char *)this + 104));
  if ( !v18 )
    CInpLockGuard::UnLock(v17);
  return NextFrame;
}
