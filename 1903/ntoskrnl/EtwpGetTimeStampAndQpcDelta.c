/*
 * XREFs of EtwpGetTimeStampAndQpcDelta @ 0x140332160
 * Callers:
 *     EtwpSwitchBuffer @ 0x140003560 (EtwpSwitchBuffer.c)
 *     EtwpReserveTraceBuffer @ 0x1400C31E0 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     RtlGetMultiTimePrecise @ 0x1400F9210 (RtlGetMultiTimePrecise.c)
 */

__int64 __fastcall EtwpGetTimeStampAndQpcDelta(__int64 a1, LARGE_INTEGER *a2, _QWORD *a3)
{
  bool v4; // zf
  int v7; // edx
  __int64 result; // rax
  LARGE_INTEGER v9; // rax
  LARGE_INTEGER v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  LARGE_INTEGER v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a1 + 216) == 2;
  v10.QuadPart = 0LL;
  v11 = 0LL;
  v7 = 7;
  v12.QuadPart = 0LL;
  if ( !v4 )
    v7 = 3;
  result = RtlGetMultiTimePrecise(&v10, v7, &v13);
  if ( (_DWORD)result )
    goto LABEL_10;
  if ( (v13 & 2) == 0 || (v13 & 1) == 0 )
  {
    result = 3221225473LL;
LABEL_10:
    *(_DWORD *)(a1 + 832) &= ~0x8000000u;
    return result;
  }
  v4 = *(_DWORD *)(a1 + 216) == 2;
  *a3 = v11 - v10.QuadPart;
  v9 = v12;
  if ( !v4 )
    v9 = v10;
  *a2 = v9;
  return 0LL;
}
