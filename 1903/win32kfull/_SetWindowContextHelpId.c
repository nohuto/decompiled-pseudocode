/*
 * XREFs of _SetWindowContextHelpId @ 0x1C0142250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetWindowContextHelpId(__int64 a1, int a2)
{
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 280LL) = a2;
  return 1LL;
}
