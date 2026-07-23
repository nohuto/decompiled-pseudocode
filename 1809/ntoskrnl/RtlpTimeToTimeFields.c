/*
 * XREFs of RtlpTimeToTimeFields @ 0x14015DB34
 * Callers:
 *     RtlTimeToTimeFields @ 0x14015DB20 (RtlTimeToTimeFields.c)
 *     WheaInitializeRecordHeader @ 0x140320940 (WheaInitializeRecordHeader.c)
 *     GetBootSystemTime @ 0x1409D2C24 (GetBootSystemTime.c)
 * Callees:
 *     RtlpTimeToTimeFieldsNoLeapSeconds @ 0x14015DC00 (RtlpTimeToTimeFieldsNoLeapSeconds.c)
 */

__int16 __fastcall RtlpTimeToTimeFields(__int64 *a1, _OWORD *a2, __int64 a3)
{
  char *v3; // r8
  unsigned int v5; // r11d
  __int64 v6; // rax
  int v7; // r9d
  int v8; // ebx
  unsigned int v9; // r10d
  __int64 v10; // rax
  __int16 result; // ax
  __int64 *v12; // r8
  __int64 v13; // rdx
  signed __int32 v14[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = a3;
  v3 = (char *)ExLeapSecondData;
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
    return ((__int64 (*)(void))RtlpTimeToTimeFieldsNoLeapSeconds)();
  v5 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v14, 0);
  v6 = *a1;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( v5 )
  {
    v12 = (__int64 *)(v3 + 8);
    do
    {
      v13 = *v12;
      if ( *v12 < 0 )
      {
        if ( v6 < (v13 & 0x7FFFFFFFFFFFFFFFLL) )
          break;
        --v7;
      }
      else if ( v6 < v13 + 20000000 )
      {
        if ( v6 < v13 + 10000000 )
        {
          if ( v6 < v13 )
            break;
          v8 |= 4u;
        }
        else
        {
          v8 |= 2u;
        }
      }
      else
      {
        ++v7;
      }
      ++v9;
      ++v12;
    }
    while ( v9 < v5 );
  }
  v10 = v6 - 10000000LL * v7;
  v16 = v10;
  if ( (v8 & 2) != 0 )
    v16 = v10 - 10000000;
  result = RtlpTimeToTimeFieldsNoLeapSeconds(&v16, &v15);
  if ( (v8 & 1) != 0 )
  {
    if ( (v8 & 2) != 0 )
      ++WORD5(v15);
  }
  else
  {
    if ( (v8 & 4) != 0 )
    {
      result = SWORD6(v15) / 2;
      SWORD6(v15) /= 2;
    }
    else
    {
      result = WORD6(v15);
    }
    if ( (v8 & 2) != 0 )
    {
      result = result / 2 + 500;
      WORD6(v15) = result;
    }
  }
  *a2 = v15;
  return result;
}
