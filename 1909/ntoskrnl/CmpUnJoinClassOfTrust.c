/*
 * XREFs of CmpUnJoinClassOfTrust @ 0x1401128CC
 * Callers:
 *     CmpCompleteUnloadKey @ 0x1406B9974 (CmpCompleteUnloadKey.c)
 *     CmShutdownSystem @ 0x140826AC4 (CmShutdownSystem.c)
 *     CmpResolveHiveLoadConflict @ 0x14082A224 (CmpResolveHiveLoadConflict.c)
 *     CmpDestroyHive @ 0x14082F334 (CmpDestroyHive.c)
 * Callees:
 *     CmpLockHiveListExclusive @ 0x14068CCDC (CmpLockHiveListExclusive.c)
 *     CmpUnlockHiveList @ 0x14068CCFC (CmpUnlockHiveList.c)
 */

void __fastcall CmpUnJoinClassOfTrust(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  _QWORD *v3; // rax

  v1 = (_QWORD *)(a1 + 4160);
  if ( (_QWORD *)*v1 != v1 )
  {
    CmpLockHiveListExclusive();
    v2 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v3 = (_QWORD *)v1[1], (_QWORD *)*v3 != v1) )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    CmpUnlockHiveList();
  }
}
