/*
 * XREFs of MulGetAdditionalFunctionTable @ 0x1C028A2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MulGetAdditionalFunctionTable(_QWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  *a1 = &drvfnMulti;
  result = 0LL;
  *a2 = 28;
  return result;
}
