/*
 * XREFs of MiIsPfnTradable @ 0x1402BFA38
 * Callers:
 *     MiMarkNonPagedHiberPhasePte @ 0x14057C260 (MiMarkNonPagedHiberPhasePte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsPfnTradable(_BYTE *a1)
{
  return *a1 & 1;
}
