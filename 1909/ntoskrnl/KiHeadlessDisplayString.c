/*
 * XREFs of KiHeadlessDisplayString @ 0x1402A9248
 * Callers:
 *     KiBugCheckDebugBreak @ 0x1402A8B00 (KiBugCheckDebugBreak.c)
 *     KiBugCheckProgress @ 0x1402A8BD0 (KiBugCheckProgress.c)
 *     KiDisplayBlueScreen @ 0x1402A8D68 (KiDisplayBlueScreen.c)
 * Callees:
 *     HeadlessDispatch @ 0x1401903B0 (HeadlessDispatch.c)
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
