/*
 * XREFs of CmpQueryKeyName @ 0x1405D2AC0
 * Callers:
 *     <none>
 * Callees:
 *     CmpDoQueryKeyName @ 0x140016840 (CmpDoQueryKeyName.c)
 *     CmpFatalFilter @ 0x1407F21B0 (CmpFatalFilter.c)
 */

__int64 __fastcall CmpQueryKeyName(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  return CmpDoQueryKeyName(a1, a2, a3, a4, a5);
}
