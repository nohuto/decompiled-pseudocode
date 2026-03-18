/*
 * XREFs of ?SuppressDeadzoneContactsInFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX0UtagPOINT@@@Z @ 0x1C0146090
 * Callers:
 *     ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z @ 0x1C0150770 (-SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXUtagPOINT@@@Z.c)
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C01100CC (rimAbIsPointInPenDeadzone.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0138874 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C013B078 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _LIST_ENTRY **__fastcall CTouchProcessor::SuppressDeadzoneContactsInFrameAndGetNext(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        struct CPointerInputFrame *a3,
        struct tagPOINT a4)
{
  __int64 i; // rbp
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  struct _LIST_ENTRY **NextFrame; // rbx
  __int128 v17; // [rsp+20h] [rbp-68h] BYREF
  CInpLockGuard *v18[8]; // [rsp+30h] [rbp-58h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v18,
    (CTouchProcessor *)((char *)this + 56),
    0LL);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a3 + 12); i = (unsigned int)(i + 1) )
  {
    v9 = *((_QWORD *)a3 + 13) + 576 * i;
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v9) )
    {
      if ( *(_DWORD *)(v9 + 232) != 2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
      if ( (*(_DWORD *)(v9 + 244) & 0x10000) != 0
        && (v13 = *(_QWORD *)(v9 + 288),
            v17 = *(_OWORD *)(*((_QWORD *)a3 + 15) + 176LL),
            (unsigned int)rimAbIsPointInPenDeadzone(&v17, v13, *(_QWORD *)&a4))
        || a2
        && (ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame(
                                 (struct _KTHREAD **)this,
                                 a2,
                                 *(_WORD *)(v9 + 236),
                                 0LL)) != 0LL
        && (*(_DWORD *)ValidNodeInFrame & 0x1000) != 0 )
      {
        *(_DWORD *)v9 |= 0x1000u;
      }
    }
  }
  NextFrame = CTouchProcessor::GetNextFrame((struct _KTHREAD **)this, a3, (struct _LIST_ENTRY *)((char *)this + 72));
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v18);
  return NextFrame;
}
