/*
 * XREFs of MNEraseBackground @ 0x1C02086EC
 * Callers:
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     xxxMNInvertItem @ 0x1C0208B28 (xxxMNInvertItem.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C0013D3C (MNGetpItemFromIndex.c)
 *     GetDPIMetrics @ 0x1C0065818 (GetDPIMetrics.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 *     GreSetBrushOrg @ 0x1C009FA48 (GreSetBrushOrg.c)
 *     GreGetBrushOrg @ 0x1C0133BE8 (GreGetBrushOrg.c)
 */

__int64 __fastcall MNEraseBackground(HDC a1, __int64 a2, unsigned int a3, int a4, int a5, int a6)
{
  int v10; // r14d
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // r10
  int v15; // r8d
  int v16; // ebx
  __int64 v17; // rbx
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  v10 = 1;
  GreGetBrushOrg(a1, &v19);
  v11 = 3;
  if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
  {
    v13 = *(_QWORD *)MNGetpItemFromIndex(a2, *(_DWORD *)(a2 + 116));
    if ( (v14 & 8) == 0 )
    {
      v16 = *(_DWORD *)(v13 + 68);
      v11 = -3;
      LODWORD(v19) = -3;
      v15 = -3 - *(_DWORD *)(GetDPIMetrics(v13, v12) + 28) - v16;
      HIDWORD(v19) = v15;
LABEL_8:
      GreSetBrushOrg(a1, v11, v15, &v19);
      goto LABEL_10;
    }
    v11 = 0;
    v15 = -*(_DWORD *)(v13 + 68);
    HIDWORD(v19) = v15;
LABEL_7:
    LODWORD(v19) = v11;
    goto LABEL_8;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 40LL) & 8) != 0 )
  {
    v15 = 3;
    HIDWORD(v19) = 3;
    goto LABEL_7;
  }
  v10 = 0;
LABEL_10:
  v17 = GreSelectBrush(a1, *(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL));
  NtGdiPatBlt(a1, a3, a4, a5, a6, 15728673);
  if ( v10 )
    GreSetBrushOrg(a1, v19, SHIDWORD(v19), 0LL);
  return GreSelectBrush(a1, v17);
}
