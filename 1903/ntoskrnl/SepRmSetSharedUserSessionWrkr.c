/*
 * XREFs of SepRmSetSharedUserSessionWrkr @ 0x1408E1560
 * Callers:
 *     SepRmCommandServerThread @ 0x1407639D0 (SepRmCommandServerThread.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 */

_QWORD *__fastcall SepRmSetSharedUserSessionWrkr(__int64 a1, __int64 a2)
{
  int v2; // ebx
  _QWORD *result; // rax

  v2 = *(_DWORD *)(a1 + 44);
  result = PsGetCurrentServerSiloGlobals();
  *(_DWORD *)(result[138] + 24LL) = v2;
  *(_DWORD *)(a2 + 40) = 0;
  return result;
}
