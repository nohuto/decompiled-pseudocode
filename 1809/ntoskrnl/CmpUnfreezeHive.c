/*
 * XREFs of CmpUnfreezeHive @ 0x1407F0654
 * Callers:
 *     CmpPerformUnloadKey @ 0x1406923B0 (CmpPerformUnloadKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1407F01E8 (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1405A942C (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDeleteHive @ 0x1405AFDEC (CmpDeleteHive.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x1407ED2A4 (CmWorkerEngineDequeueWorkItem.c)
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
