/*
 * XREFs of DecPaintCount @ 0x1C00EF7B0
 * Callers:
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C003B200 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C005124C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     InternalInvalidate3 @ 0x1C0067108 (InternalInvalidate3.c)
 *     ClrFTrueVis @ 0x1C00EF728 (ClrFTrueVis.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DecPaintCount(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v1 + 592))-- == 1 )
  {
    *(_WORD *)(*(_QWORD *)(v1 + 440) + 6LL) &= ~0x20u;
    result = *(_QWORD *)(v1 + 440);
    *(_WORD *)(result + 4) &= ~0x20u;
  }
  return result;
}
