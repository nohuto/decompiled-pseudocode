/*
 * XREFs of HvHiveCleanup @ 0x1405FC440
 * Callers:
 *     CmpCompleteUnloadKey @ 0x1405B061C (CmpCompleteUnloadKey.c)
 *     CmShutdownSystem @ 0x1407EDAB4 (CmShutdownSystem.c)
 *     CmpDestroyHive @ 0x1407F7978 (CmpDestroyHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpFreeBootRegistry @ 0x14026D9C4 (CmpFreeBootRegistry.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     HvpMapEntryGetFreeBin @ 0x1405FAC1C (HvpMapEntryGetFreeBin.c)
 *     HvpGetCellMap @ 0x1405FC04C (HvpGetCellMap.c)
 *     CmpReleaseGlobalQuota @ 0x1405FC668 (CmpReleaseGlobalQuota.c)
 *     HvpFreeHiveFreeDisplay @ 0x1406B74A4 (HvpFreeHiveFreeDisplay.c)
 *     HvpViewMapCleanup @ 0x1406C5098 (HvpViewMapCleanup.c)
 *     HvpFreeMap @ 0x1406C9CC8 (HvpFreeMap.c)
 *     HvpFreeBin @ 0x1406D1230 (HvpFreeBin.c)
 */

__int64 __fastcall HvHiveCleanup(__int64 a1)
{
  unsigned int v1; // ebp
  int v3; // r13d
  unsigned int v4; // edi
  __int64 v5; // rsi
  unsigned int v6; // r12d
  unsigned int i; // r14d
  __int64 CellMap; // rax
  __int64 v9; // r15
  _QWORD *FreeBin; // rax
  __int64 v11; // r8
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  void *v14; // r14
  __int64 v15; // rcx
  void *v16; // rdi
  void *v17; // rdi
  __int64 v19; // rdx
  _QWORD *v20; // rax

  *(_DWORD *)(a1 + 160) &= ~1u;
  v1 = 0;
  v3 = *(_DWORD *)(a1 + 160) & 0x10;
  v4 = 0;
  do
  {
    v5 = 632LL * v1;
    if ( *(_QWORD *)(v5 + a1 + 280) )
    {
      v6 = v4 + *(_DWORD *)(v5 + a1 + 272);
      if ( v6 != v4 )
      {
        for ( i = v4; i < v6; i += *(_DWORD *)(v9 + 16) )
        {
          CellMap = HvpGetCellMap(a1, i);
          v9 = CellMap;
          if ( !*(_QWORD *)(CellMap + 8) )
            break;
          FreeBin = (_QWORD *)HvpMapEntryGetFreeBin((_BYTE *)CellMap);
          v12 = FreeBin;
          if ( FreeBin )
          {
            v19 = *FreeBin;
            if ( *(_QWORD **)(*FreeBin + 8LL) != FreeBin || (v20 = (_QWORD *)FreeBin[1], (_QWORD *)*v20 != v12) )
              __fastfail(3u);
            *v20 = v19;
            *(_QWORD *)(v19 + 8) = v20;
            (*(void (__fastcall **)(_QWORD *, __int64))(a1 + 32))(v12, 24LL);
            v11 = *(_QWORD *)(v9 + 8);
          }
          v13 = *(unsigned int *)(v9 + 16);
          if ( (v11 & 8) != 0 )
            HvpFreeBin(a1, (unsigned int)v13, v11 & 0xFFFFFFFFFFFFFFF0uLL);
          else
            CmpReleaseGlobalQuota(v13);
        }
        v14 = *(void **)(v5 + a1 + 280);
        HvpFreeMap(a1, v14, 0LL, (unsigned int)((*(_DWORD *)(v5 + a1 + 272) >> 12) - 1) >> 9);
        if ( v14 != (void *)(v5 + a1 + 288) )
        {
          CmpReleaseGlobalQuota(0x2000LL);
          ExFreePoolWithTag(v14, 0);
        }
        *(_QWORD *)(v5 + a1 + 280) = 0LL;
        *(_DWORD *)(v5 + a1 + 272) = 0;
      }
    }
    ++v1;
    v4 += 0x80000000;
  }
  while ( v1 < 2 );
  if ( v3 && _InterlockedExchangeAdd(&CmpPreloadedHivesCount, 0xFFFFFFFF) == 1 )
    CmpFreeBootRegistry();
  v15 = *(_QWORD *)(a1 + 64);
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v15, *(unsigned int *)(a1 + 132));
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  v16 = *(void **)(a1 + 96);
  if ( v16 )
  {
    CmpReleaseGlobalQuota(*(unsigned int *)(a1 + 108));
    ExFreePoolWithTag(v16, 0);
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  v17 = *(void **)(a1 + 120);
  if ( v17 )
  {
    CmpReleaseGlobalQuota(*(unsigned int *)(a1 + 108));
    ExFreePoolWithTag(v17, 0);
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  HvpViewMapCleanup(a1 + 216);
  return HvpFreeHiveFreeDisplay(a1);
}
