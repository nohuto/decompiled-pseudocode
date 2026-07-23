/*
 * XREFs of BgpFwReservePoolSwap @ 0x14098E340
 * Callers:
 *     ResFwFreeContext @ 0x14098E218 (ResFwFreeContext.c)
 *     BgpFwLibraryInitialize @ 0x14098F9A8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwInitializeReservePool @ 0x140990558 (BgpFwInitializeReservePool.c)
 */

__int64 __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_140468130 = qword_1404680A8;
      dword_140468150 = dword_1404680A4;
      result = (unsigned int)dword_1404680A0;
      dword_140468138 = dword_1404680A0;
      stru_140468140 = (_RTL_BITMAP)xmmword_1404680B0;
    }
  }
  else
  {
    dword_1404680A0 = dword_140468138;
    qword_1404680A8 = qword_140468130;
    dword_1404680A4 = dword_140468150;
    xmmword_1404680B0 = (__int128)stru_140468140;
    return BgpFwInitializeReservePool(a2, a3, a4);
  }
  return result;
}
