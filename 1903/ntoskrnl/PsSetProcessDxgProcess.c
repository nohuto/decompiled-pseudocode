/*
 * XREFs of PsSetProcessDxgProcess @ 0x1406EB1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsSetProcessDxgProcess(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 2016) = a2;
}
