/*
 * XREFs of EtwpCoverageSamplerInitialize @ 0x1408C9050
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x1408CA57C (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

_QWORD *__fastcall EtwpCoverageSamplerInitialize(_QWORD *a1)
{
  _QWORD *result; // rax

  memset(a1, 0, 0x4B8uLL);
  *a1 = 0LL;
  memset(a1 + 2, 0, 0x460uLL);
  a1[85] = 0LL;
  *((_DWORD *)a1 + 280) = 1;
  a1[92] = a1 + 91;
  a1[91] = a1 + 91;
  *((_DWORD *)a1 + 174) = 0;
  a1[88] = 0LL;
  *((_DWORD *)a1 + 175) = 0;
  *((_DWORD *)a1 + 178) = 0;
  a1[90] = 0LL;
  *((_DWORD *)a1 + 179) = 0;
  memset(a1 + 94, 0, 0x28uLL);
  a1[95] = 0LL;
  result = a1 + 144;
  a1[94] = a1 + 2;
  a1[2] = a1;
  *((_DWORD *)a1 + 299) = 1;
  a1[145] = a1 + 144;
  a1[144] = a1 + 144;
  return result;
}
