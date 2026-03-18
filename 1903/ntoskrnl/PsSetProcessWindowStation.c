/*
 * XREFs of PsSetProcessWindowStation @ 0x1406ED2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsSetProcessWindowStation(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 992) = a2;
}
