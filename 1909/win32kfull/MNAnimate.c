/*
 * XREFs of MNAnimate @ 0x1C0249908
 * Callers:
 *     MNGetPopupFromMenu @ 0x1C012D050 (MNGetPopupFromMenu.c)
 *     xxxMNCloseHierarchy @ 0x1C02236C0 (xxxMNCloseHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0226024 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     FindTimer @ 0x1C007A674 (FindTimer.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     GetDPIMetrics @ 0x1C012C10C (GetDPIMetrics.c)
 *     StopFade @ 0x1C01E9510 (StopFade.c)
 *     MNDestroyAnimationBitmap @ 0x1C0210394 (MNDestroyAnimationBitmap.c)
 */

int __fastcall MNAnimate(__int64 a1, int a2)
{
  int result; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // edi
  int v9; // r14d
  __int64 DPIMetrics; // rax
  unsigned int v11; // edx
  __int64 v12; // rt2
  __int64 v13; // rax
  int v14; // ecx
  int v15; // r9d
  int v16; // r10d
  int v17; // edi
  int v18; // ecx
  int v19; // ebx
  __int64 v20; // rcx

  result = gfade[0];
  if ( (gfade[12] & 0x10) != 0 )
  {
    if ( !a2 )
      return StopFade();
    return result;
  }
  if ( !*(_QWORD *)(a1 + 96) )
    return result;
  v4 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *(_DWORD *)(a1 + 104);
  if ( !a2 || v4 > 0xA5 || ExGetExclusiveWaiterCount(gpresUser) || (result = ExGetSharedWaiterCount(gpresUser)) != 0 )
  {
    NtGdiBitBltInternal(
      *(HDC *)(a1 + 96),
      0,
      0,
      *(_DWORD *)(a1 + 116),
      *(_DWORD *)(a1 + 120),
      *(HDC *)(a1 + 136),
      0,
      0,
      -2134114272,
      0xFFFFFF,
      0);
LABEL_25:
    MNDestroyAnimationBitmap(a1);
    _ReleaseDC(*(_QWORD *)(a1 + 96));
    v20 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 96) = 0LL;
    return FindTimer(*(_QWORD *)(v20 + 56), 65531LL, 0, 1, 0LL);
  }
  v8 = *(_DWORD *)(a1 + 108);
  v9 = *(_DWORD *)(a1 + 112);
  if ( (*(_DWORD *)(a1 + 8) & 0x180000) != 0 )
  {
    DPIMetrics = GetDPIMetrics(v6, v5, v7);
    v6 = *(unsigned int *)(a1 + 116);
    v11 = (int)(v4 * *(_DWORD *)(DPIMetrics + 8) + 4) >> 31;
    LODWORD(DPIMetrics) = v4 * *(_DWORD *)(DPIMetrics + 8) + 4;
    v5 = v11;
    v12 = __SPAIR64__(v11, DPIMetrics) % 8;
    result = __SPAIR64__(v11, DPIMetrics) / 8;
    LODWORD(v5) = v12;
    *(_DWORD *)(a1 + 108) = result;
    if ( result > (int)v6 )
      *(_DWORD *)(a1 + 108) = v6;
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x600000) != 0 )
  {
    v13 = GetDPIMetrics(v6, v5, v7);
    v14 = *(_DWORD *)(a1 + 120);
    result = (int)(v4 * *(_DWORD *)(v13 + 12) + 8) / 16;
    *(_DWORD *)(a1 + 112) = result;
    if ( result > v14 )
      *(_DWORD *)(a1 + 112) = v14;
  }
  v15 = *(_DWORD *)(a1 + 108);
  if ( v15 != v8 || *(_DWORD *)(a1 + 112) != v9 )
  {
    v16 = 0;
    v17 = *(_DWORD *)(a1 + 112);
    if ( ((*(_DWORD *)(a1 + 8) >> 19) & 8) == 0 )
      v16 = *(_DWORD *)(a1 + 120) - v17;
    v18 = 0;
    v19 = (*(_DWORD *)(a1 + 8) >> 19) & 2;
    if ( !v19 )
      v18 = *(_DWORD *)(a1 + 116) - v15;
    NtGdiBitBltInternal(
      *(HDC *)(a1 + 96),
      v19 != 0 ? *(_DWORD *)(a1 + 116) - v15 : 0,
      ((*(_DWORD *)(a1 + 8) >> 19) & 8) != 0 ? *(_DWORD *)(a1 + 120) - v17 : 0,
      v15,
      v17,
      *(HDC *)(a1 + 136),
      v18,
      v16,
      -2134114272,
      0xFFFFFF,
      0);
    result = *(_DWORD *)(a1 + 108);
    if ( *(_DWORD *)(a1 + 116) == result )
    {
      result = *(_DWORD *)(a1 + 112);
      if ( *(_DWORD *)(a1 + 120) == result )
        goto LABEL_25;
    }
  }
  return result;
}
