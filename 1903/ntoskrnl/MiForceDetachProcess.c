/*
 * XREFs of MiForceDetachProcess @ 0x1402BB308
 * Callers:
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 * Callees:
 *     KeForceDetachProcess @ 0x14008E81C (KeForceDetachProcess.c)
 */

__int64 __fastcall MiForceDetachProcess(_BYTE *a1)
{
  return KeForceDetachProcess(a1, 0);
}
