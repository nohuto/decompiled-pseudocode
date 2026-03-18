/*
 * XREFs of ?ShouldAddPointerWakeFlag@@YAHPEBUtagTHREADINFO@@PEBUtagQMSG@@@Z @ 0x1C002A774
 * Callers:
 *     WakeSomeone @ 0x1C002A434 (WakeSomeone.c)
 * Callees:
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C002BD4C (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     IsMouseInPointerActive @ 0x1C00E5854 (IsMouseInPointerActive.c)
 */

__int64 __fastcall ShouldAddPointerWakeFlag(const struct tagTHREADINFO *a1, const struct tagQMSG *a2)
{
  __int64 v3; // r8

  if ( a2 && (unsigned int)IsGenuineMouseInput((const struct tagQMSG *)((char *)a2 + 120)) )
    return IsMouseInPointerActive(v3);
  else
    return 0LL;
}
