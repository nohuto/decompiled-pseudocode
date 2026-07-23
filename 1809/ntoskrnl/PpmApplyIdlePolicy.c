/*
 * XREFs of PpmApplyIdlePolicy @ 0x14018BAFC
 * Callers:
 *     PpmResetIdlePolicy @ 0x14018B9E0 (PpmResetIdlePolicy.c)
 * Callees:
 *     PpmConvertTime @ 0x1400A7C54 (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmApplyIdlePolicy(__int64 *a1)
{
  __int64 *v1; // r9
  __int64 v2; // rbx
  unsigned __int64 v3; // r8
  char v4; // dl
  char v5; // al
  unsigned __int64 result; // rax

  v1 = PpmCurrentProfile;
  v2 = *a1;
  v3 = 341LL * dword_14041918C;
  *((_BYTE *)a1 + 60) = PpmCurrentProfile[v3 + 23];
  v4 = v1[v3 + 24];
  *((_BYTE *)a1 + 59) = v4;
  v5 = BYTE1(v1[v3 + 24]);
  *((_BYTE *)a1 + 57) = v4;
  *((_BYTE *)a1 + 58) = v5;
  *((_BYTE *)a1 + 56) = v5;
  result = PpmConvertTime(HIDWORD(v1[v3 + 23]), 0xF4240uLL, PopQpcFrequency);
  *(_DWORD *)(v2 + 532) = result;
  return result;
}
