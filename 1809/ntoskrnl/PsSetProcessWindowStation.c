/*
 * XREFs of PsSetProcessWindowStation @ 0x1406CE620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsSetProcessWindowStation(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 984) = a2;
}
