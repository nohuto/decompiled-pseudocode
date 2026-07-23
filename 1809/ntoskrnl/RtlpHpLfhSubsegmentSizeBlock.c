/*
 * XREFs of RtlpHpLfhSubsegmentSizeBlock @ 0x1400BECB0
 * Callers:
 *     RtlpHpSegSizeInternal @ 0x1400BEB90 (RtlpHpSegSizeInternal.c)
 * Callees:
 *     RtlpHpLfhSubsegmentSizeBlockInternal @ 0x1400BF890 (RtlpHpLfhSubsegmentSizeBlockInternal.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentSizeBlock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // r11d
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // r9
  char v11; // cl
  unsigned __int64 v13; // r10
  int v14; // r8d

  v7 = qword_14040F0E8 ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v8 = a3 - HIWORD(v7) - a2;
  v9 = *(_QWORD *)(a1
                 + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v7 + 15) >> 4]
                 + 128);
  v10 = *(unsigned int *)(v9 + 72);
  v11 = *(_BYTE *)(v9 + 76);
  if ( (_DWORD)v10 )
  {
    v13 = ((unsigned __int64)v8 * v10) >> v11;
    v14 = v8 - v13 * (unsigned __int16)v7;
  }
  else
  {
    LODWORD(v13) = v8 >> v11;
    v14 = ((1 << v11) - 1) & v8;
  }
  if ( v14
    || ((*(_QWORD *)(a2 + 8 * ((unsigned __int64)(unsigned int)(2 * v13) >> 6) + 48) >> ((2 * v13) & 0x3F)) & 1) == 0 )
  {
    return -1LL;
  }
  else
  {
    return (unsigned int)RtlpHpLfhSubsegmentSizeBlockInternal(a2, a3, (unsigned int)v13, a4);
  }
}
