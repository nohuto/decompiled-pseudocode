/*
 * XREFs of DebugHelp @ 0x1C0063A50
 * Callers:
 *     <none>
 * Callees:
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 */

__int64 __fastcall DebugHelp(__int64 a1, const char *a2, int a3)
{
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( a2 )
  {
    strncpy_s((char *)&v4, 8uLL, a2, 8uLL);
    PrintDebugMessage(0, (const void *)(unsigned int)v4, (const void *)HIDWORD(v4), 0LL, 0LL);
  }
  else if ( !a3 )
  {
    PrintDebugMessage(0, (const void *)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0LL);
  }
  return 0LL;
}
