/*
 * XREFs of MiForceAttachProcess @ 0x1402BB050
 * Callers:
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 * Callees:
 *     KeForceAttachProcess @ 0x1400CBE6C (KeForceAttachProcess.c)
 */

__int64 __fastcall MiForceAttachProcess(ULONG_PTR a1, __int64 a2)
{
  return KeForceAttachProcess(a1, a2);
}
