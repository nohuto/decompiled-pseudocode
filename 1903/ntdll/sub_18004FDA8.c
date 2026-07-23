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

int __fastcall sub_18004FDA8(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // rbp
  struct _PEB *v8; // rax
  __int64 v9; // rcx
  int v10; // ebx
  unsigned __int64 i; // rcx

  v6 = (unsigned int)-*(_DWORD *)a1;
  if ( a4 )
    sub_18004FF08(
      &qword_180166A60,
      2 * ((unsigned __int64)(a2 - qword_180166A58) >> 20),
      2 * ((unsigned __int64)(unsigned int)v6 >> 20));
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 && a3 == 0x7FFFFFFF )
  {
    v10 = 2;
    for ( i = 32LL * *(unsigned __int8 *)(a1 + 10) + a2; i < a2 + 0x2000; i += 32LL * *(unsigned __int8 *)(i + 31) )
      v10 += (unsigned __int16)~*(_WORD *)(i + 28);
  }
  sub_1800501E4(a1);
  LODWORD(v8) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v8 )
  {
    v8 = NtCurrentPeb();
    v9 = (__int64)&v8->SharedData->UserModeGlobalLogger[4];
  }
  else
  {
    v9 = 2147353480LL;
  }
  if ( *(_BYTE *)v9 )
    LODWORD(v8) = sub_180101554(a1, a2, v6);
  return (int)v8;
}
