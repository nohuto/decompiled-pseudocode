/*
 * XREFs of validateMemoryPages @ 0x1C006AD40
 * Callers:
 *     verifySingleNb @ 0x1C006AE34 (verifySingleNb.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1C006A7C4 (datapathVerifierReportProblem.c)
 */

char __fastcall validateMemoryPages(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // r8d
  char result; // al
  _BYTE *v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 i; // rcx
  _BYTE *v9; // [rsp+20h] [rbp-18h]

  v4 = *(_DWORD *)(a1 + 40);
  result = a2 + a3;
  if ( a2 + a3 > v4 )
    a3 = v4 - a2;
  v6 = (_BYTE *)(a2 + *(_QWORD *)(a1 + 24));
  v9 = v6;
  v7 = (((unsigned __int16)v6 & 0xFFF) + 4095LL + (unsigned __int64)a3) >> 12;
  for ( i = 0LL; i < v7; ++i )
  {
    result = *v6;
    v6 = v9 + 4096;
    v9 += 4096;
  }
  return result;
}
