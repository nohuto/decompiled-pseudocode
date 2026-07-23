/*
 * XREFs of EtwpGetTimeStampAndQpcDelta @ 0x140313F8C
 * Callers:
 *     EtwpSwitchBuffer @ 0x140014FB8 (EtwpSwitchBuffer.c)
 *     EtwpReserveTraceBuffer @ 0x1400C7540 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     RtlGetMultiTimePrecise @ 0x140138798 (RtlGetMultiTimePrecise.c)
 */

__int64 __fastcall EtwpGetTimeStampAndQpcDelta(__int64 a1, LARGE_INTEGER *a2, _QWORD *a3)
{
  int v4; // edx
  __int64 result; // rax
  bool v8; // zf
  LARGE_INTEGER v9; // rax
  LARGE_INTEGER v10[5]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp+8h] BYREF

  v4 = 7;
  if ( *(_DWORD *)(a1 + 216) != 2 )
    v4 = 3;
  result = RtlGetMultiTimePrecise(v10, v4, &v11);
  if ( (_DWORD)result )
    goto LABEL_10;
  if ( (v11 & 2) == 0 || (v11 & 1) == 0 )
  {
    result = 3221225473LL;
LABEL_10:
    *(_DWORD *)(a1 + 832) &= ~0x8000000u;
    return result;
  }
  v8 = *(_DWORD *)(a1 + 216) == 2;
  *a3 = v10[1].QuadPart - v10[0].QuadPart;
  v9 = v10[2];
  if ( !v8 )
    v9 = v10[0];
  *a2 = v9;
  return 0LL;
}
