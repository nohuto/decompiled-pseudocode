/*
 * XREFs of DebugQuit @ 0x1C0065EF0
 * Callers:
 *     <none>
 * Callees:
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 */

__int64 __fastcall DebugQuit(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    PrintDebugMessage(225, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-2;
  }
  else if ( (gDebugger & 2) != 0 )
  {
    return (unsigned int)-1;
  }
  else
  {
    ConPrintf("\nShell to Kernel Debugger.\nType 'g' to go back to the AML debugger.\n\n");
    _InterlockedOr(&gDebugger, 4u);
    __debugbreak();
    _InterlockedAnd(&gDebugger, 0xFFFFFFFB);
  }
  return v2;
}
