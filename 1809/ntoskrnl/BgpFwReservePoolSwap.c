/*
 * XREFs of BgpFwReservePoolSwap @ 0x14094E340
 * Callers:
 *     ResFwFreeContext @ 0x14094E218 (ResFwFreeContext.c)
 *     BgpFwLibraryInitialize @ 0x14094F95C (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwInitializeReservePool @ 0x140950508 (BgpFwInitializeReservePool.c)
 */

__int64 __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_14043C618 = qword_14043C588;
      dword_14043C638 = dword_14043C584;
      result = (unsigned int)dword_14043C580;
      HintIndex = dword_14043C580;
      BitMapHeader = (struct _RTL_BITMAP)xmmword_14043C590;
    }
  }
  else
  {
    dword_14043C580 = HintIndex;
    qword_14043C588 = qword_14043C618;
    dword_14043C584 = dword_14043C638;
    xmmword_14043C590 = (__int128)BitMapHeader;
    return BgpFwInitializeReservePool(a2, a3, a4);
  }
  return result;
}
