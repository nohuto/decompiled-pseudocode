/*
 * XREFs of CmpQueryKeyName @ 0x140656C80
 * Callers:
 *     <none>
 * Callees:
 *     CmpDoQueryKeyName @ 0x140092BC0 (CmpDoQueryKeyName.c)
 *     CmpFatalFilter @ 0x14082B290 (CmpFatalFilter.c)
 */

__int64 __fastcall CmpQueryKeyName(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, _DWORD *a5)
{
  return CmpDoQueryKeyName(a1, a2, a3, a4, a5);
}
