/*
 * XREFs of RtlpTimeFieldsToTime @ 0x1401271B0
 * Callers:
 *     GetBootSystemTime @ 0x1409D2C24 (GetBootSystemTime.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x140127228 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 */

char __fastcall RtlpTimeFieldsToTime(__int64 a1, __int64 *a2, __int64 a3)
{
  char *v3; // rbx
  unsigned int v5; // esi
  __int64 v6; // rax
  unsigned int v7; // r8d
  __int64 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = (char *)ExLeapSecondData;
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
    return RtlpTimeFieldsToTimeNoLeapSeconds(a1);
  v5 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v12, 0);
  if ( !(unsigned __int8)RtlpTimeFieldsToTimeNoLeapSeconds(a1) )
    return 0;
  v6 = a3;
  v7 = 0;
  if ( !v5 )
    goto LABEL_5;
  v9 = (__int64 *)(v3 + 8);
  while ( 1 )
  {
    v10 = *v9;
    if ( *v9 >= 0 )
    {
      if ( v6 < v10 + 10000000 )
      {
        if ( v6 < v10 )
          goto LABEL_5;
        v6 = 2 * v6 - v10;
      }
      else
      {
        v6 += 10000000LL;
      }
      goto LABEL_16;
    }
    v11 = v10 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v6 < v11 + 10000000 )
      break;
    v6 -= 10000000LL;
LABEL_16:
    ++v7;
    ++v9;
    if ( v7 >= v5 )
      goto LABEL_5;
  }
  if ( v6 < v11 )
  {
LABEL_5:
    *a2 = v6;
    return 1;
  }
  return 0;
}
