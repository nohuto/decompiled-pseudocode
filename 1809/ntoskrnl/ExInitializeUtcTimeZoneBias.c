/*
 * XREFs of ExInitializeUtcTimeZoneBias @ 0x140765168
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlTimeToTimeFields @ 0x14015DB20 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExpWriteTimeZoneBias @ 0x140584B28 (ExpWriteTimeZoneBias.c)
 *     RtlQueryDynamicTimeZoneInformation @ 0x14069ACA0 (RtlQueryDynamicTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x140735E50 (RtlCutoverTimeToSystemTime.c)
 */

__int64 __fastcall ExInitializeUtcTimeZoneBias(PLARGE_INTEGER CurrentTime)
{
  __int64 result; // rax
  _DWORD *v3; // rbx
  int v4; // r14d
  int v5; // edi
  BOOLEAN v6; // r9
  BOOLEAN v7; // r9
  LARGE_INTEGER v8; // r10
  LARGE_INTEGER v9; // r8
  int v10; // edx
  int v11; // eax
  LARGE_INTEGER v12; // r9
  int v13; // ecx
  LONGLONG QuadPart; // r10
  LARGE_INTEGER v15; // [rsp+28h] [rbp-E0h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+30h] [rbp-D8h] BYREF
  LARGE_INTEGER v17; // [rsp+38h] [rbp-D0h]
  int v18; // [rsp+40h] [rbp-C8h]
  int v19; // [rsp+44h] [rbp-C4h]
  LARGE_INTEGER v20; // [rsp+48h] [rbp-C0h]
  int v21; // [rsp+50h] [rbp-B8h]
  int v22; // [rsp+54h] [rbp-B4h]
  _TIME_FIELDS TimeFields; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v24[17]; // [rsp+68h] [rbp-A0h] BYREF
  _TIME_FIELDS CutoverTimeFields; // [rsp+ACh] [rbp-5Ch] BYREF
  int v26; // [rsp+BCh] [rbp-4Ch]
  _TIME_FIELDS v27; // [rsp+100h] [rbp-8h] BYREF
  int v28; // [rsp+110h] [rbp+8h]

  if ( !ExpRealTimeIsUniversal )
    return 3221225659LL;
  v3 = (_DWORD *)*((_QWORD *)PsGetCurrentServerSiloGlobals() + 132);
  result = RtlQueryDynamicTimeZoneInformation(v24);
  if ( (int)result >= 0 )
  {
    v4 = v24[0] + v28;
    v5 = v24[0] + v26;
    RtlTimeToTimeFields(CurrentTime, &TimeFields);
    if ( CutoverTimeFields.Month
      && v27.Month
      && RtlCutoverTimeToSystemTime(&CutoverTimeFields, &SystemTime, CurrentTime, v6)
      && RtlCutoverTimeToSystemTime(&v27, &v15, CurrentTime, v7) )
    {
      v8.QuadPart = v15.QuadPart + 600000000LL * v5;
      v15 = v8;
      v9.QuadPart = SystemTime.QuadPart + 600000000LL * v4;
      SystemTime = v9;
      if ( v8.QuadPart >= v9.QuadPart )
      {
        v17 = v9;
        v10 = 1;
        v19 = 1;
        v11 = v5;
        v21 = v4;
        v12 = v9;
        v20 = v8;
        v5 = v4;
        v9 = v8;
        v13 = 2;
      }
      else
      {
        v21 = v5;
        v10 = 2;
        v19 = 2;
        v11 = v4;
        v17 = v8;
        v12 = v8;
        v20 = v9;
        v13 = 1;
      }
      QuadPart = CurrentTime->QuadPart;
      v22 = v13;
      v18 = v11;
      if ( QuadPart < v12.QuadPart || QuadPart >= v9.QuadPart )
      {
        v3[108] = v13;
        v11 = v5;
        v3[109] = v5;
      }
      else
      {
        v3[108] = v10;
        v3[109] = v11;
      }
      *((_QWORD *)v3 + 55) = 600000000LL * v11;
      MEMORY[0xFFFFF7800000025C] = 0;
      ExpWriteTimeZoneBias(v3 + 110);
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
