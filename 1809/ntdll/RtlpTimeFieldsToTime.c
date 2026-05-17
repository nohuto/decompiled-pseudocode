/*
 * XREFs of RtlpTimeFieldsToTime @ 0x180069840
 * Callers:
 *     RtlCutoverTimeToSystemTime @ 0x180069670 (RtlCutoverTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x180069830 (RtlTimeFieldsToTime.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x180069938 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 */

char __fastcall RtlpTimeFieldsToTime(__m128i *a1, _QWORD *a2, __int64 *a3)
{
  _LEAP_SECOND_DATA *LeapSecondData; // rdi
  unsigned int Count; // esi
  unsigned int v6; // ebx
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned int v9; // r8d
  unsigned int v11; // r8d
  _LARGE_INTEGER *Data; // rdi
  __int64 QuadPart; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  _LARGE_INTEGER *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  signed __int32 v20[8]; // [rsp+0h] [rbp-48h] BYREF
  __m128i v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+68h] [rbp+20h] BYREF

  LeapSecondData = NtCurrentPeb()->LeapSecondData;
  if ( !LeapSecondData || !LeapSecondData->Enabled )
    return ((__int64 (*)(void))RtlpTimeFieldsToTimeNoLeapSeconds)();
  Count = LeapSecondData->Count;
  _InterlockedOr(v20, 0);
  v6 = NtCurrentPeb()->LeapSecondFlags & 1;
  if ( a3 )
    v7 = *a3;
  else
    v7 = 0LL;
  if ( v6 )
  {
    v21 = *a1;
    if ( _mm_srli_si128(v21, 8).m128i_i16[1] == 60 )
    {
      LOBYTE(v6) = v6 | 2;
      v21.m128i_i16[5] = 59;
    }
    if ( !(unsigned __int8)RtlpTimeFieldsToTimeNoLeapSeconds(&v21, &v22) )
      return 0;
    v8 = v22;
    v11 = 0;
    if ( !Count )
      goto LABEL_14;
    Data = LeapSecondData->Data;
    while ( 1 )
    {
      QuadPart = Data->QuadPart;
      if ( Data->QuadPart < 0 )
      {
        v15 = (QuadPart & 0x7FFFFFFFFFFFFFFFLL) - v7;
        if ( v8 < v15 + 10000000 )
        {
          if ( v8 >= v15 )
            return 0;
          goto LABEL_14;
        }
        v8 -= 10000000LL;
      }
      else
      {
        v14 = QuadPart - v7;
        if ( v8 < v14 + 10000000 )
        {
          if ( v8 >= v14 )
            LOBYTE(v6) = v6 | 4;
LABEL_14:
          if ( (v6 & 2) == 0 )
            goto LABEL_8;
          if ( (v6 & 4) != 0 )
          {
            v8 += 10000000LL;
            goto LABEL_8;
          }
          return 0;
        }
        v8 += 10000000LL;
      }
      ++v11;
      ++Data;
      if ( v11 >= Count )
        goto LABEL_14;
    }
  }
  if ( !(unsigned __int8)RtlpTimeFieldsToTimeNoLeapSeconds(a1, &v22) )
    return 0;
  v8 = v22;
  v9 = 0;
  if ( !Count )
    goto LABEL_8;
  v16 = LeapSecondData->Data;
  while ( 1 )
  {
    v17 = v16->QuadPart;
    if ( v16->QuadPart >= 0 )
    {
      v18 = v17 - v7;
      if ( v8 < v18 + 10000000 )
      {
        if ( v8 < v18 )
          goto LABEL_8;
        v8 = 2 * v8 - v18;
      }
      else
      {
        v8 += 10000000LL;
      }
      goto LABEL_39;
    }
    v19 = (v17 & 0x7FFFFFFFFFFFFFFFLL) - v7;
    if ( v8 < v19 + 10000000 )
      break;
    v8 -= 10000000LL;
LABEL_39:
    ++v9;
    ++v16;
    if ( v9 >= Count )
      goto LABEL_8;
  }
  if ( v8 < v19 )
  {
LABEL_8:
    *a2 = v8;
    return 1;
  }
  return 0;
}
