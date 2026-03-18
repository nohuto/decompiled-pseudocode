/*
 * XREFs of VfGetVerifierInformationEx @ 0x14098A390
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall VfGetVerifierInformationEx(_DWORD *a1)
{
  memset(a1, 0, 0x28uLL);
  *a1 = VfVerifyMode;
  a1[1] = dword_140446658;
  a1[6] = 1000 * VfWdCancelTimeoutTicks;
  a1[7] = XdvEnabled;
  return 0LL;
}
