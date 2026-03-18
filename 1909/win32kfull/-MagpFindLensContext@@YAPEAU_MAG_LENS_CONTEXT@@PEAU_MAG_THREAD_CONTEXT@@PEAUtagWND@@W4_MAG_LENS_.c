/*
 * XREFs of ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01CFBD4
 * Callers:
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 *     MagGetLensContextInformation @ 0x1C01CFF90 (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01D06EC (MagSetLensContextInformation.c)
 *     MagSlicerControl @ 0x1C01D1490 (MagSlicerControl.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MagpFindLensContext(__int64 a1, __int64 a2, int a3)
{
  __int64 *i; // r9

  for ( i = *(__int64 **)(a1 + 40); ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)(a1 + 40) )
      return 0LL;
    if ( a2 == i[3] && (a3 == 2 || (a3 == 1) == ((*((_DWORD *)i + 4) >> 7) & 1)) )
      break;
  }
  return i;
}
