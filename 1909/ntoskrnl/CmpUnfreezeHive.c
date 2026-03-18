/*
 * XREFs of CmpUnfreezeHive @ 0x14082A540
 * Callers:
 *     CmpPerformUnloadKey @ 0x1406B91E4 (CmpPerformUnloadKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x14082A0C4 (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140044154 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045AE0 (CmpDrainDelayDerefContext.c)
 *     CmpDeleteHive @ 0x1406B97A0 (CmpDeleteHive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406C53FC (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x140827440 (CmWorkerEngineDequeueWorkItem.c)
 */

void __fastcall CmpUnfreezeHive(_QWORD *P)
{
  _QWORD *v2; // rcx
  char v3; // al
  ULONG_PTR v4; // rcx
  _QWORD *v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v5[0] = 0LL;
  v5[1] = 0LL;
  CmpInitializeDelayDerefContext(v5);
  v2 = (_QWORD *)P[368];
  *((_BYTE *)P + 2936) = v3;
  if ( v2 )
  {
    if ( CmWorkerEngineDequeueWorkItem(v2)
      && _InterlockedExchangeAdd((volatile signed __int32 *)P + 1068, 0xFFFFFFFF) == 1 )
    {
      CmpDeleteHive(P);
    }
    P[368] = 0LL;
  }
  v4 = P[366];
  if ( v4 )
  {
    CmpDereferenceKeyControlBlockWithLock(v4, (__int64)v5, 0);
    P[366] = 0LL;
  }
  CmpDrainDelayDerefContext(v5);
}
