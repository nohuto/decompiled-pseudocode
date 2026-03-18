/*
 * XREFs of ?Dequeue@?$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ @ 0x1C00610D4
 * Callers:
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1C0060AC4 (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0060C5C (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@.c)
 *     ?FreeQueuedUpdates@CFlipManager@@AEAAXXZ @ 0x1C0061328 (-FreeQueuedUpdates@CFlipManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipObjectQueue<CFlipPresentUpdate>::Dequeue(_QWORD *a1)
{
  __int64 v1; // r8
  _QWORD *v2; // rdx
  __int64 v3; // rax
  _QWORD *v4; // rcx
  __int64 result; // rax

  v1 = (*a1 - 24LL) & -(__int64)(*a1 != 0LL);
  v2 = (_QWORD *)((v1 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v1 >> 64));
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2
    || (v4 = *(_QWORD **)(((v1 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v1 >> 64)) + 8),
        (_QWORD *)*v4 != v2) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  result = v1;
  v2[1] = v2;
  *v2 = v2;
  return result;
}
