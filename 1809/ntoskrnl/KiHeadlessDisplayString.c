/*
 * XREFs of KiHeadlessDisplayString @ 0x14029292C
 * Callers:
 *     KiBugCheckDebugBreak @ 0x140292260 (KiBugCheckDebugBreak.c)
 *     KiBugCheckProgress @ 0x140292320 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x140292474 (KiDisplayBlueScreen.c)
 * Callees:
 *     HeadlessDispatch @ 0x1401860F0 (HeadlessDispatch.c)
 */

__int64 __fastcall KiHeadlessDisplayString(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a2 )
      return HeadlessDispatch(23LL, a1, a2, 0LL, 0LL);
  }
  return result;
}
