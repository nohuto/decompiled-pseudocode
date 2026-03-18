/*
 * XREFs of NtGdiSelectFont @ 0x1C008CDD0
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 */

__int64 __fastcall NtGdiSelectFont(__int64 a1, __int64 a2)
{
  return GreSelectFont(a1, a2);
}
