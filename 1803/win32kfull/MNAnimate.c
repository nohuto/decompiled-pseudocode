/*
 * XREFs of MNAnimate @ 0x1C02081FC
 * Callers:
 *     MNGetPopupFromMenu @ 0x1C002196C (MNGetPopupFromMenu.c)
 *     xxxMNCloseHierarchy @ 0x1C01E61D0 (xxxMNCloseHierarchy.c)
 *     xxxMNSelectItem @ 0x1C01E8994 (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GetDPIMetrics @ 0x1C0065818 (GetDPIMetrics.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     FindTimer @ 0x1C00BA330 (FindTimer.c)
 *     StopFade @ 0x1C01B18B0 (StopFade.c)
 *     MNDestroyAnimationBitmap @ 0x1C01D5070 (MNDestroyAnimationBitmap.c)
 */

int __fastcall MNAnimate(__int64 a1, int a2)
{
  int result; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // edi
  int v8; // r14d
  __int64 DPIMetrics; // rax
  unsigned int v10; // edx
  __int64 v11; // rt2
  __int64 v12; // rax
  int v13; // ecx
  int v14; // r9d
  unsigned int v15; // r11d
  int v16; // edi
  int v17; // ecx
  int v18; // ebx
  __int64 v19; // rcx

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
    v19 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 96) = 0LL;
    return FindTimer(*(_QWORD *)(v19 + 56), 65531LL, 0, 1, 0LL);
  }
  v7 = *(_DWORD *)(a1 + 108);
  v8 = *(_DWORD *)(a1 + 112);
  if ( (*(_DWORD *)(a1 + 8) & 0x180000) != 0 )
  {
    DPIMetrics = GetDPIMetrics(v6, v5);
    v6 = *(unsigned int *)(a1 + 116);
    v10 = (int)(v4 * *(_DWORD *)(DPIMetrics + 8) + 4) >> 31;
    LODWORD(DPIMetrics) = v4 * *(_DWORD *)(DPIMetrics + 8) + 4;
    v5 = v10;
    v11 = __SPAIR64__(v10, DPIMetrics) % 8;
    result = __SPAIR64__(v10, DPIMetrics) / 8;
    LODWORD(v5) = v11;
    *(_DWORD *)(a1 + 108) = result;
    if ( result > (int)v6 )
      *(_DWORD *)(a1 + 108) = v6;
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x600000) != 0 )
  {
    v12 = GetDPIMetrics(v6, v5);
    v13 = *(_DWORD *)(a1 + 120);
    result = (int)(v4 * *(_DWORD *)(v12 + 12) + 8) / 16;
    *(_DWORD *)(a1 + 112) = result;
    if ( result > v13 )
      *(_DWORD *)(a1 + 112) = v13;
  }
  v14 = *(_DWORD *)(a1 + 108);
  if ( v14 != v7 || *(_DWORD *)(a1 + 112) != v8 )
  {
    v15 = 0;
    v16 = *(_DWORD *)(a1 + 112);
    if ( ((*(_DWORD *)(a1 + 8) >> 19) & 8) == 0 )
      v15 = *(_DWORD *)(a1 + 120) - v16;
    v17 = 0;
    v18 = (*(_DWORD *)(a1 + 8) >> 19) & 2;
    if ( !v18 )
      v17 = *(_DWORD *)(a1 + 116) - v14;
    NtGdiBitBltInternal(
      *(HDC *)(a1 + 96),
      v18 != 0 ? *(_DWORD *)(a1 + 116) - v14 : 0,
      ((*(_DWORD *)(a1 + 8) >> 19) & 8) != 0 ? *(_DWORD *)(a1 + 120) - v16 : 0,
      v14,
      v16,
      *(HDC *)(a1 + 136),
      v17,
      v15,
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
