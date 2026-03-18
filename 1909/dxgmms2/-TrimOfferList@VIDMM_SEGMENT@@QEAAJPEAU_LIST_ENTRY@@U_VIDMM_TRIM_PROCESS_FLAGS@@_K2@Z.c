/*
 * XREFs of ?TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C00C2170
 * Callers:
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1C00C2294 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001514 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1C00C2028 (-TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::TrimOfferList(
        __int64 a1,
        _QWORD *a2,
        char a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx

  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(*(_QWORD *)(a1 + 8) + 39952LL));
  v9 = (_QWORD *)*a2;
  while ( v9 != a2 )
  {
    v10 = (__int64)(v9 - 50);
    v11 = v9;
    v12 = v9[13];
    v9 = (_QWORD *)*v9;
    if ( *(_WORD *)(v12 + 4) != 1 )
    {
      if ( (_QWORD *)v9[1] != v11 || (v13 = (_QWORD *)v11[1], (_QWORD *)*v13 != v11) )
        __fastfail(3u);
      *v13 = v9;
      v9[1] = v13;
      *v11 = 0LL;
      if ( *(_DWORD *)(v10 + 128) == 2
        && *(_QWORD *)(v10 + 136) == a1
        && *(_WORD *)(*(_QWORD *)(v10 + 504) + 4LL) == 2
        && (int)VIDMM_SEGMENT::TrimAllocation((VIDMM_GLOBAL **)a1, v10, a3, a4, a5) >= 0 )
      {
        break;
      }
    }
  }
  v14 = *(_QWORD *)(a1 + 8) + 39952LL;
  *(_QWORD *)(v14 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v14, 0LL);
  KeLeaveCriticalRegion();
  return 3221225473LL;
}
