/*
 * XREFs of HeadlessDispatch @ 0x140186250
 * Callers:
 *     BgkDisplayStringEx @ 0x14027DD34 (BgkDisplayStringEx.c)
 *     BvgaDisplayString @ 0x14027E1C0 (BvgaDisplayString.c)
 *     BvgaSetTextColor @ 0x14027E450 (BvgaSetTextColor.c)
 *     BvgaSolidColorFill @ 0x14027E4B0 (BvgaSolidColorFill.c)
 *     KiBugCheckDebugBreak @ 0x140292550 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x140292764 (KiDisplayBlueScreen.c)
 *     KiHeadlessDisplayString @ 0x140292C1C (KiHeadlessDisplayString.c)
 *     EtwpInitializeActivityIdSeed @ 0x1407445A0 (EtwpInitializeActivityIdSeed.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     HdlspDispatch @ 0x14094CE50 (HdlspDispatch.c)
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
