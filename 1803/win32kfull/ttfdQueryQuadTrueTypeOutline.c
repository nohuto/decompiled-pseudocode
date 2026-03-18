/*
 * XREFs of ttfdQueryQuadTrueTypeOutline @ 0x1C021DF80
 * Callers:
 *     ttfdQueryTrueTypeOutline @ 0x1C021E074 (ttfdQueryTrueTypeOutline.c)
 * Callees:
 *     lQueryTTOutline @ 0x1C021DB14 (lQueryTTOutline.c)
 *     lQueryTrueTypeOutlineVertical @ 0x1C021DD38 (lQueryTrueTypeOutlineVertical.c)
 *     bGrabXform @ 0x1C02226AC (bGrabXform.c)
 *     ttfdOpenFontContext @ 0x1C02231EC (ttfdOpenFontContext.c)
 */

__int64 __fastcall ttfdQueryQuadTrueTypeOutline(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        _WORD *a6)
{
  int v6; // esi
  char v7; // bp
  __int64 v12; // rbx

  v6 = (a3 >> 2) & 1;
  v7 = a3 & 0xFB;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) & 1) != 0 )
    return 0xFFFFFFFFLL;
  v12 = *(_QWORD *)(a1 + 56);
  if ( v12 )
  {
    *(_DWORD *)(v12 + 40) = *(_DWORD *)(a1 + 12) | *(_DWORD *)(v12 + 40) & 0x80000000;
  }
  else
  {
    v12 = ttfdOpenFontContext();
    *(_QWORD *)(a1 + 56) = v12;
  }
  if ( !v12 )
    return 0xFFFFFFFFLL;
  *(_QWORD *)v12 = a1;
  if ( !(unsigned int)bGrabXform(v12, 0, 0, 0, 0, 0) )
    return 0xFFFFFFFFLL;
  if ( *(_DWORD *)(v12 + 308) )
    return lQueryTrueTypeOutlineVertical(v12, 1, a2, v7, v6, a4, a5, a6);
  return lQueryTTOutline(v12, 1, a2, v7, v6, a4, a5, a6);
}
