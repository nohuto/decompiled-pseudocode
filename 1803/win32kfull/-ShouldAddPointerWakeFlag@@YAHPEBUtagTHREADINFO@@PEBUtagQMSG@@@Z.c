/*
 * XREFs of ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C001E480
 * Callers:
 *     WakeSomeone @ 0x1C001C69C (WakeSomeone.c)
 * Callees:
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0019A54 (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     IsMouseInPointerActive @ 0x1C00EBF68 (IsMouseInPointerActive.c)
 */

__int64 __fastcall ShouldAddPointerWakeFlag(const struct tagTHREADINFO *a1, const struct tagQMSG *a2)
{
  __int64 v2; // r8

  if ( a2 && (unsigned int)IsGenuineMouseInput((const struct tagQMSG *)((char *)a2 + 120)) )
    return IsMouseInPointerActive(v2);
  else
    return 0LL;
}
