/*
 * XREFs of RtlpHpSegLfhVsDecommit @ 0x14000BDB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x14000C594 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpScheduleCompaction @ 0x14031F0A4 (RtlpHpScheduleCompaction.c)
 */

__int64 __fastcall RtlpHpSegLfhVsDecommit(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r10
  __int64 v6; // r9
  char v7; // r8
  unsigned __int64 v8; // rbx
  char v9; // al
  char v10; // cl
  unsigned int v11; // r11d
  __int64 result; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rbp

  v3 = *(_QWORD *)a1;
  v6 = a2 & *(_QWORD *)a1;
  v7 = *(_BYTE *)(a1 + 8);
  if ( (a1 ^ v6 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v6 + 0x10)) == 0xA2E64EADA2E64EADuLL )
  {
    v8 = v6 + 32 * ((unsigned __int64)(unsigned int)(a2 - v6) >> v7);
    if ( v8 )
    {
      v9 = *(_BYTE *)(v8 + 24);
      if ( (v9 & 1) != 0 )
      {
        if ( (v9 & 2) != 0 )
        {
          if ( (v9 & 0xCu) >= 8 || (((1 << v7) - 1) & a2) == 0 )
            goto LABEL_7;
        }
        else
        {
          v8 -= 32LL * *(unsigned __int8 *)(v8 + 31);
          v10 = *(_BYTE *)(v8 + 24);
          if ( (v10 & 3) == 3 && (v10 & 0xCu) >= 8 )
            goto LABEL_7;
        }
      }
    }
  }
  v8 = 0LL;
LABEL_7:
  v11 = a3 >> 12;
  result = (__int64)(v8 - (v8 & v3)) >> 5 << v7;
  if ( (*(_BYTE *)(a1 + 13) & 8) != 0 )
    return RtlpHpSegPageRangeCommit(a1, 0, 0LL);
  v13 = *(__int16 *)(a1 + 22);
  v14 = *(_QWORD *)(v13 + a1 + 8) >> *(_BYTE *)(a1 + 11);
  if ( v14 <= 8 )
    v14 = 8LL;
  v15 = *(_QWORD *)(v13 + a1 + 8) >> *(_BYTE *)(a1 + 12);
  if ( v15 <= 8 )
    v15 = 8LL;
  v16 = v11 + *(_QWORD *)(v13 + a1 + 16) + *(_QWORD *)(v13 + a1 + 24);
  if ( v16 > v14 )
  {
    result = RtlpHpScheduleCompaction(*(_QWORD *)(a1 + 56), v14, v13, v6);
    if ( (int)result < 0 )
      return RtlpHpSegPageRangeCommit(a1, 0, 0LL);
  }
  if ( v16 > v15 )
    return RtlpHpSegPageRangeCommit(a1, 0, 0LL);
  return result;
}
