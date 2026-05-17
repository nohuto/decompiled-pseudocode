/*
 * XREFs of LdrpPayloadRestrictionMitigationsEnabled @ 0x1800D6B78
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800D30E0 (LdrpInitializeExecutionOptions.c)
 *     AVrfInitializeVerifier @ 0x1800DACE8 (AVrfInitializeVerifier.c)
 * Callees:
 *     <none>
 */

char LdrpPayloadRestrictionMitigationsEnabled()
{
  char v0; // dl
  char v1; // r8
  char v2; // al

  v0 = 0;
  if ( ((*((_QWORD *)&xmmword_180178390 + 1) >> 20) & 3) == 1
    || (BYTE10(xmmword_180178390) & 3) == 1
    || (BYTE11(xmmword_180178390) & 3) == 1
    || ((*((_QWORD *)&xmmword_180178390 + 1) >> 28) & 3) == 1
    || (BYTE12(xmmword_180178390) & 3) == 1
    || (v1 = 0, (BYTE13(xmmword_180178390) & 3) == 1) )
  {
    v1 = 1;
  }
  if ( (((unsigned __int64)qword_1801783C8 >> 20) & 3) == 1
    || (BYTE2(qword_1801783C8) & 3) == 1
    || (BYTE3(qword_1801783C8) & 3) == 1
    || (((unsigned __int64)qword_1801783C8 >> 28) & 3) == 1
    || (BYTE4(qword_1801783C8) & 3) == 1
    || (v2 = 0, (BYTE5(qword_1801783C8) & 3) == 1) )
  {
    v2 = 1;
  }
  if ( v1 || v2 )
    return 1;
  return v0;
}
