/*
 * XREFs of KeFlushCurrentTbImmediately @ 0x14017CD10
 * Callers:
 *     PopHandleNextState @ 0x140598DD0 (PopHandleNextState.c)
 *     KiSetPageAttributesTable @ 0x14059DC10 (KiSetPageAttributesTable.c)
 *     KeLoadMTRR @ 0x14059DD00 (KeLoadMTRR.c)
 * Callees:
 *     <none>
 */

unsigned __int64 KeFlushCurrentTbImmediately()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 result; // rax

  v0 = __readcr4();
  if ( (v0 & 0x20080) != 0 )
  {
    result = v0 ^ 0x80;
    __writecr4(v0 ^ 0x80);
    __writecr4(v0);
  }
  else
  {
    result = __readcr3();
    __writecr3(result);
  }
  return result;
}
