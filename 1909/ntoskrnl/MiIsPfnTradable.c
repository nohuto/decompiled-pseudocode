/*
 * XREFs of MiIsPfnTradable @ 0x1402D9198
 * Callers:
 *     MiMarkNonPagedHiberPhasePte @ 0x1405AC230 (MiMarkNonPagedHiberPhasePte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnTradable(_BYTE *a1)
{
  return *a1 & 1;
}
