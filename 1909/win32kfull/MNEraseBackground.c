/*
 * XREFs of MNEraseBackground @ 0x1C0249E18
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     xxxMNInvertItem @ 0x1C024A2A4 (xxxMNInvertItem.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C00BB170 (NtGdiPatBlt.c)
 *     GreGetBrushOrg @ 0x1C011110C (GreGetBrushOrg.c)
 *     MNGetpItemFromIndex @ 0x1C012A5A4 (MNGetpItemFromIndex.c)
 *     GreSetBrushOrg @ 0x1C012BE74 (GreSetBrushOrg.c)
 *     GetDPIMetrics @ 0x1C012C10C (GetDPIMetrics.c)
 */

__int64 __fastcall MNEraseBackground(HDC a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  int v10; // r14d
  int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r10d
  int v16; // r8d
  int v17; // ebx
  __int64 v18; // rbx
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF

  v20 = 0LL;
  v10 = 1;
  GreGetBrushOrg(a1, &v20);
  v11 = 3;
  if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
  {
    v13 = *(_QWORD *)MNGetpItemFromIndex(a2, *(_DWORD *)(a2 + 116));
    if ( !v15 )
    {
      v17 = *(_DWORD *)(v13 + 68);
      v11 = -3;
      LODWORD(v20) = -3;
      v16 = -3 - *(_DWORD *)(GetDPIMetrics(v13, v12, v14) + 28) - v17;
      HIDWORD(v20) = v16;
LABEL_8:
      GreSetBrushOrg(a1, v11, v16, &v20);
      goto LABEL_10;
    }
    v11 = 0;
    v16 = -*(_DWORD *)(v13 + 68);
    HIDWORD(v20) = v16;
LABEL_7:
    LODWORD(v20) = v11;
    goto LABEL_8;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 40LL) & 8) != 0 )
  {
    v16 = 3;
    HIDWORD(v20) = 3;
    goto LABEL_7;
  }
  v10 = 0;
LABEL_10:
  v18 = GreSelectBrush(a1, *(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL));
  NtGdiPatBlt(a1, a3, a4, a5, a6, 15728673);
  if ( v10 )
    GreSetBrushOrg(a1, v20, SHIDWORD(v20), 0LL);
  return GreSelectBrush(a1, v18);
}
