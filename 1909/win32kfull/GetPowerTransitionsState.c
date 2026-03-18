/*
 * XREFs of GetPowerTransitionsState @ 0x1C0119720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPowerTransitionsState(__int64 a1)
{
  __int64 result; // rax

  *(_OWORD *)a1 = *(_OWORD *)gPowerTransitionsState;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)&gPowerTransitionsState[4];
  *(_OWORD *)(a1 + 32) = *(_OWORD *)&gPowerTransitionsState[8];
  *(_QWORD *)(a1 + 48) = *(_QWORD *)&gPowerTransitionsState[12];
  result = (unsigned int)gPowerTransitionsState[14];
  *(_DWORD *)(a1 + 56) = result;
  return result;
}
