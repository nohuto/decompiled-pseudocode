/*
 * XREFs of KiHeadlessDisplayString @ 0x140292C1C
 * Callers:
 *     KiBugCheckDebugBreak @ 0x140292550 (KiBugCheckDebugBreak.c)
 *     KiBugCheckProgress @ 0x140292610 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x140292764 (KiDisplayBlueScreen.c)
 * Callees:
 *     HeadlessDispatch @ 0x140186250 (HeadlessDispatch.c)
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
