/*
 * XREFs of HeadlessDispatch @ 0x140186110
 * Callers:
 *     BgkDisplayStringEx @ 0x14027DB44 (BgkDisplayStringEx.c)
 *     BvgaDisplayString @ 0x14027DFD0 (BvgaDisplayString.c)
 *     BvgaSetTextColor @ 0x14027E260 (BvgaSetTextColor.c)
 *     BvgaSolidColorFill @ 0x14027E2C0 (BvgaSolidColorFill.c)
 *     KiBugCheckDebugBreak @ 0x140292360 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x140292574 (KiDisplayBlueScreen.c)
 *     KiHeadlessDisplayString @ 0x140292A2C (KiHeadlessDisplayString.c)
 *     EtwpInitializeActivityIdSeed @ 0x1407433B0 (EtwpInitializeActivityIdSeed.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 *     HdlspDispatch @ 0x14094BE50 (HdlspDispatch.c)
 */

__int64 __fastcall HeadlessDispatch(__int64 a1, __int64 a2, __int64 a3, void *a4, size_t *a5)
{
  int v6; // eax

  if ( !HeadlessGlobals || !HeadlessGlobals[1] )
  {
    if ( (_DWORD)a1 == 21 || (_DWORD)a1 == 1 )
      return 3221225473LL;
    if ( (unsigned int)a1 <= 0x10 )
    {
      v6 = 79876;
      if ( _bittest(&v6, a1) )
      {
        if ( !a4 || !a5 )
          return 3221225485LL;
        memset(a4, 0, *a5);
      }
    }
    return 0LL;
  }
  return HdlspDispatch(a1);
}
