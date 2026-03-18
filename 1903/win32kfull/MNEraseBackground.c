/*
 * XREFs of MNEraseBackground @ 0x1C024A558
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 *     xxxMNInvertItem @ 0x1C024A9E4 (xxxMNInvertItem.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C0021DE0 (MNGetpItemFromIndex.c)
 *     NtGdiPatBlt @ 0x1C00711E0 (NtGdiPatBlt.c)
 *     GreSetBrushOrg @ 0x1C008D924 (GreSetBrushOrg.c)
 *     GetDPIMetrics @ 0x1C00912E8 (GetDPIMetrics.c)
 *     GreGetBrushOrg @ 0x1C0136A74 (GreGetBrushOrg.c)
 */

__int64 __fastcall MNEraseBackground(HDC a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  int v10; // r14d
  int v11; // edi
  __int64 v12; // rcx
  int v13; // r10d
  int v14; // r8d
  int v15; // ebx
  __int64 v16; // rbx
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v18 = 0LL;
  v10 = 1;
  GreGetBrushOrg(a1, &v18);
  v11 = 3;
  if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
  {
    v12 = *(_QWORD *)MNGetpItemFromIndex(a2, *(_DWORD *)(a2 + 116));
    if ( !v13 )
    {
      v15 = *(_DWORD *)(v12 + 68);
      v11 = -3;
      LODWORD(v18) = -3;
      v14 = -3 - *(_DWORD *)(GetDPIMetrics() + 28) - v15;
      HIDWORD(v18) = v14;
LABEL_8:
      GreSetBrushOrg(a1, v11, v14, &v18);
      goto LABEL_10;
    }
    v11 = 0;
    v14 = -*(_DWORD *)(v12 + 68);
    HIDWORD(v18) = v14;
LABEL_7:
    LODWORD(v18) = v11;
    goto LABEL_8;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 40) + 40LL) & 8) != 0 )
  {
    v14 = 3;
    HIDWORD(v18) = 3;
    goto LABEL_7;
  }
  v10 = 0;
LABEL_10:
  v16 = GreSelectBrush(a1, *(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL));
  NtGdiPatBlt(a1, a3, a4, a5, a6, 15728673);
  if ( v10 )
    GreSetBrushOrg(a1, v18, SHIDWORD(v18), 0LL);
  return GreSelectBrush(a1, v16);
}
