/*
 * XREFs of MiForceAttachProcess @ 0x1402BB2F0
 * Callers:
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 * Callees:
 *     KeForceAttachProcess @ 0x14008E884 (KeForceAttachProcess.c)
 */

__int64 __fastcall MiForceAttachProcess(ULONG_PTR a1, __int64 a2)
{
  return KeForceAttachProcess(a1, a2);
}
