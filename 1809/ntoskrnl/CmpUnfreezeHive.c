/*
 * XREFs of CmpUnfreezeHive @ 0x1407F1834
 * Callers:
 *     CmpPerformUnloadKey @ 0x140693550 (CmpPerformUnloadKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1407F13C8 (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405AA42C (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDeleteHive @ 0x1405B0DEC (CmpDeleteHive.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x1407EE484 (CmWorkerEngineDequeueWorkItem.c)
 */

void __fastcall CmpUnfreezeHive(_QWORD *P)
{
  _QWORD *v2; // rcx
  ULONG_PTR v3; // rcx

  *((_BYTE *)P + 2936) = 0;
  v2 = (_QWORD *)P[368];
  if ( v2 )
  {
    if ( CmWorkerEngineDequeueWorkItem(v2)
      && _InterlockedExchangeAdd((volatile signed __int32 *)P + 1072, 0xFFFFFFFF) == 1 )
    {
      CmpDeleteHive(P);
    }
    P[368] = 0LL;
  }
  v3 = P[366];
  if ( v3 )
  {
    CmpDereferenceKeyControlBlockWithLock(v3);
    P[366] = 0LL;
  }
}
