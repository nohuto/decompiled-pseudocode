/*
 * XREFs of PsSetProcessDxgProcess @ 0x1406CC7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsSetProcessDxgProcess(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 1968) = a2;
}
