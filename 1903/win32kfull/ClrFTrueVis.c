/*
 * XREFs of ClrFTrueVis @ 0x1C0114A74
 * Callers:
 *     SetVisible @ 0x1C002CDA0 (SetVisible.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     ClrFTrueVis @ 0x1C0114A74 (ClrFTrueVis.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     ClrFTrueVis @ 0x1C0114A74 (ClrFTrueVis.c)
 *     DecPaintCount @ 0x1C0114AFC (DecPaintCount.c)
 */

char __fastcall ClrFTrueVis(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  __int64 i; // rbx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(v1 + 136);
  if ( v3 || (LOBYTE(v1) = *(_BYTE *)(v1 + 17), (v1 & 0x10) != 0) )
  {
    DeleteMaybeSpecialRgn(v3);
    SetOrClrWF(0, a1, 0x110u, 1);
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 136LL) = 0LL;
    LOBYTE(v1) = DecPaintCount(a1);
  }
  for ( i = *(_QWORD *)(a1 + 112); i; i = *(_QWORD *)(i + 88) )
  {
    v1 = *(_QWORD *)(i + 40);
    if ( (*(_BYTE *)(v1 + 31) & 0x10) != 0 )
      LOBYTE(v1) = ClrFTrueVis(i);
  }
  return v1;
}
