/*
 * XREFs of EtwEventWriteNoRegistration @ 0x1800835F0
 * Callers:
 *     sub_18002D8FC @ 0x18002D8FC (sub_18002D8FC.c)
 *     sub_18007D1A8 @ 0x18007D1A8 (sub_18007D1A8.c)
 *     sub_1800891A4 @ 0x1800891A4 (sub_1800891A4.c)
 *     sub_1800CF490 @ 0x1800CF490 (sub_1800CF490.c)
 *     sub_1800DC538 @ 0x1800DC538 (sub_1800DC538.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

__int64 __fastcall EtwEventWriteNoRegistration(__int64 a1, __int128 *a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int128 v5; // xmm0
  struct _GUID ActivityId; // xmm0
  NTSTATUS v7; // eax
  _BYTE v9[4]; // [rsp+20h] [rbp-88h] BYREF
  int v10; // [rsp+24h] [rbp-84h]
  __int128 v11; // [rsp+48h] [rbp-60h]
  struct _GUID v12; // [rsp+60h] [rbp-48h]
  char v13; // [rsp+70h] [rbp-38h]
  __int16 v14; // [rsp+72h] [rbp-36h]
  int v15; // [rsp+74h] [rbp-34h]
  __int64 v16; // [rsp+78h] [rbp-30h]
  int v17; // [rsp+90h] [rbp-18h]

  v4 = 0;
  if ( a2 && a1 )
  {
    v5 = *a2;
    v10 = 0;
    v11 = v5;
    v15 = a3;
    v16 = a4;
    ActivityId = NtCurrentTeb()->ActivityId;
    v13 = 0;
    v14 = 0;
    v12 = ActivityId;
    v17 = 0;
    v7 = ZwTraceEvent(a1, 1792LL, 120LL, v9);
    if ( v7 )
      return RtlNtStatusToDosError(v7);
  }
  else
  {
    return 87;
  }
  return v4;
}
