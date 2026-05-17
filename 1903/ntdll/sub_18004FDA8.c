/*
 * XREFs of sub_18004FDA8 @ 0x18004FDA8
 * Callers:
 *     sub_180036AE0 @ 0x180036AE0 (sub_180036AE0.c)
 *     sub_18004E4EC @ 0x18004E4EC (sub_18004E4EC.c)
 *     sub_18004F1D0 @ 0x18004F1D0 (sub_18004F1D0.c)
 *     sub_18004FD48 @ 0x18004FD48 (sub_18004FD48.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_18004FF08 @ 0x18004FF08 (sub_18004FF08.c)
 *     sub_1800501E4 @ 0x1800501E4 (sub_1800501E4.c)
 *     sub_180101554 @ 0x180101554 (sub_180101554.c)
 */

unsigned int *__fastcall sub_18004FDA8(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v6; // rbp
  unsigned int *result; // rax
  __int64 v9; // rcx
  unsigned __int64 i; // rcx

  v6 = (unsigned int)-*(_DWORD *)a1;
  if ( a4 )
    sub_18004FF08(
      &unk_180166A60,
      2 * ((unsigned __int64)(a2 - qword_180166A58) >> 20),
      2 * ((unsigned __int64)(unsigned int)v6 >> 20));
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 && a3 == 0x7FFFFFFF )
  {
    a3 = 2;
    for ( i = 32LL * *(unsigned __int8 *)(a1 + 10) + a2; i < a2 + 0x2000; i += 32LL * *(unsigned __int8 *)(i + 31) )
      a3 += (unsigned __int16)~*(_WORD *)(i + 28);
  }
  sub_1800501E4(a1, a2, a3);
  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v9 = *((_QWORD *)result + 18) + 558LL;
  }
  else
  {
    v9 = 2147353480LL;
  }
  if ( *(_BYTE *)v9 )
    return (unsigned int *)sub_180101554(a1, a2, v6);
  return result;
}
