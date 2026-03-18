/*
 * XREFs of CalcVertLineSubpix @ 0x1C02C3F10
 * Callers:
 *     <none>
 * Callees:
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 */

__int64 __fastcall CalcVertLineSubpix(int a1, _DWORD *a2, _DWORD *a3)
{
  return *a3 + (unsigned int)CompDiv(a2[1] - *a2, (a3[1] - *a3) * (__int64)((a1 << 6) - *a2 + 32));
}
