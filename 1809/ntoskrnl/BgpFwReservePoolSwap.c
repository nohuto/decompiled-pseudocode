/*
 * XREFs of BgpFwReservePoolSwap @ 0x14094F340
 * Callers:
 *     ResFwFreeContext @ 0x14094F218 (ResFwFreeContext.c)
 *     BgpFwLibraryInitialize @ 0x14095095C (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwInitializeReservePool @ 0x140951508 (BgpFwInitializeReservePool.c)
 */

__int64 __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_14043D6D8 = qword_14043D648;
      dword_14043D6F8 = dword_14043D644;
      result = (unsigned int)dword_14043D640;
      dword_14043D6E0 = dword_14043D640;
      stru_14043D6E8 = (_RTL_BITMAP)xmmword_14043D650;
    }
  }
  else
  {
    dword_14043D640 = dword_14043D6E0;
    qword_14043D648 = qword_14043D6D8;
    dword_14043D644 = dword_14043D6F8;
    xmmword_14043D650 = (__int128)stru_14043D6E8;
    return BgpFwInitializeReservePool(a2, a3, a4);
  }
  return result;
}
