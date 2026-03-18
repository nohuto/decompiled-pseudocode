/*
 * XREFs of HeadlessDispatch @ 0x14018F4B0
 * Callers:
 *     BgkDisplayStringEx @ 0x1402925D4 (BgkDisplayStringEx.c)
 *     BvgaDisplayString @ 0x140292A60 (BvgaDisplayString.c)
 *     BvgaSetTextColor @ 0x140292CF0 (BvgaSetTextColor.c)
 *     BvgaSolidColorFill @ 0x140292D50 (BvgaSolidColorFill.c)
 *     KiBugCheckDebugBreak @ 0x1402A8DA0 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x1402A9008 (KiDisplayBlueScreen.c)
 *     KiHeadlessDisplayString @ 0x1402A94E8 (KiHeadlessDisplayString.c)
 *     EtwpInitializeActivityIdSeed @ 0x14076B308 (EtwpInitializeActivityIdSeed.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HdlspDispatch @ 0x14098BE60 (HdlspDispatch.c)
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
