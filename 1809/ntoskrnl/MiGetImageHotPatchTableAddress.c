/*
 * XREFs of MiGetImageHotPatchTableAddress @ 0x1408551C0
 * Callers:
 *     MiSetProtectionOnSection @ 0x140071E80 (MiSetProtectionOnSection.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetImageHotPatchTableAddress(__int64 a1)
{
  return ((unsigned __int64)*(unsigned int *)(***(_QWORD ***)(a1 + 72) + 8LL) << 12)
       + ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12);
}
