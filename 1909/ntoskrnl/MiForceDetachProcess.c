/*
 * XREFs of MiForceDetachProcess @ 0x1402BB068
 * Callers:
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 * Callees:
 *     KeForceDetachProcess @ 0x1400CBE04 (KeForceDetachProcess.c)
 */

__int64 __fastcall MiForceDetachProcess(_BYTE *a1)
{
  return KeForceDetachProcess(a1, 0);
}
