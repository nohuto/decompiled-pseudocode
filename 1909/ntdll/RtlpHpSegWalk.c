/*
 * XREFs of RtlpHpSegWalk @ 0x18005112C
 * Callers:
 *     RtlpHpHeapWalk @ 0x18005103C (RtlpHpHeapWalk.c)
 * Callees:
 *     RtlpHpLfhSubsegmentWalk @ 0x1800019C8 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpHpSegReportBusyBlock @ 0x1800513A4 (RtlpHpSegReportBusyBlock.c)
 *     RtlpHpSegReportSegment @ 0x18005159C (RtlpHpSegReportSegment.c)
 *     RtlpHpVsSubsegmentWalk @ 0x180051708 (RtlpHpVsSubsegmentWalk.c)
 *     RtlpHpSegReportPageRange @ 0x18010BB48 (RtlpHpSegReportPageRange.c)
 */

__int64 __fastcall RtlpHpSegWalk(__int64 *a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  __int64 *v5; // r14
  __int64 v6; // r8
  __int64 **v7; // r15
  char v8; // cl
  signed __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int16 v13; // ax
  __int64 **v14; // rax
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 *v19; // r8
  unsigned __int8 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD v24[2]; // [rsp+30h] [rbp-10h] BYREF
  int v25; // [rsp+78h] [rbp+38h] BYREF
  int v26; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  v4 = a2;
  v5 = a1;
  if ( !*(_QWORD *)a2 )
  {
    v14 = (__int64 **)(a1 + 9);
    if ( *v14 != (__int64 *)v14 )
    {
      v19 = *v14;
LABEL_21:
      RtlpHpSegReportSegment(a1, a2, v19);
      return v3;
    }
    return (unsigned int)-2147483622;
  }
  if ( (*(_BYTE *)(a2 + 18) & 2) != 0 )
  {
    v7 = *(__int64 ***)a2;
    if ( a3 )
    {
      v9 = (signed __int64)&v7[4 * *((unsigned __int8 *)a1 + 10)];
      goto LABEL_17;
    }
    if ( *v7 != a1 + 9 )
    {
LABEL_38:
      v19 = *v7;
      a2 = v4;
      goto LABEL_21;
    }
    return (unsigned int)-2147483622;
  }
  if ( !a3 )
    return (unsigned int)-2147483622;
  v6 = *a1;
  v7 = (__int64 **)(*(_QWORD *)a2 & *a1);
  v8 = *((_BYTE *)a1 + 8);
  v9 = (signed __int64)&v7[4 * ((unsigned __int64)((unsigned int)*(_QWORD *)a2 - (unsigned int)v7) >> v8)];
  if ( (*(_QWORD *)a2 & 0xFFFLL) != 0 )
  {
    if ( (*(_BYTE *)(v9 + 24) & 2) != 0 )
      goto LABEL_6;
    goto LABEL_32;
  }
  if ( (*(_BYTE *)(v9 + 24) & 2) != 0 )
  {
LABEL_16:
    while ( 1 )
    {
      v9 += 32LL * *(unsigned __int8 *)(v9 + 31);
LABEL_17:
      v16 = v9 & *v5;
      v17 = (__int64)(v9 - v16) >> 5;
      if ( (unsigned int)v17 >= 0x100 )
        break;
      if ( (*(_BYTE *)(v9 + 24) & 0x11) != 1 || (v20 = *(_BYTE *)(v9 + 24) & 0xC, v20 == 4) )
      {
        v18 = v17 << *((_BYTE *)v5 + 8);
        *(_WORD *)(v4 + 18) = 4096;
        *(_QWORD *)v4 = v16 + v18;
        *(_QWORD *)(v4 + 8) = (unsigned __int64)*(unsigned __int8 *)(v9 + 31) << *((_BYTE *)v5 + 8);
        *(_WORD *)(v4 + 16) = 0;
        return v3;
      }
      v21 = v16 + (v17 << *((_BYTE *)v5 + 8));
      if ( v20 < 8u )
      {
        *(_QWORD *)v4 = v21;
        RtlpHpSegReportPageRange(v5, v4);
        return v3;
      }
      if ( v20 == 8 )
      {
        v23 = RtlpHpLfhSubsegmentWalk(v5[3], v21, v21, v24, &v25, (__int64)&v26);
        *(_QWORD *)v4 = v23;
        if ( v23 )
        {
          RtlpHpSegReportBusyBlock((_DWORD)v5, v4, v24[0], v25, v26);
          v13 = 0x8000;
          goto LABEL_11;
        }
      }
      else
      {
        v22 = RtlpHpVsSubsegmentWalk(v5[4], v21, v21, (unsigned int)v24, (__int64)&v25, (__int64)&v26);
        *(_QWORD *)v4 = v22;
        if ( v22 )
        {
          RtlpHpSegReportBusyBlock((_DWORD)v5, v4, v24[0], v25, v26);
          return v3;
        }
      }
    }
    if ( *v7 == v5 + 9 )
      return (unsigned int)-2147483622;
    a1 = v5;
    goto LABEL_38;
  }
LABEL_32:
  v9 += -32LL * *(unsigned __int8 *)(v9 + 31);
LABEL_6:
  v10 = (v9 & v6) + ((v9 - (v9 & v6)) >> 5 << v8);
  v11 = *(_QWORD *)v4;
  if ( (*(_BYTE *)(v9 + 24) & 0xC) == 8 )
    v12 = RtlpHpLfhSubsegmentWalk(v5[3], v10, v11, v24, &v25, (__int64)&v26);
  else
    v12 = RtlpHpVsSubsegmentWalk(v5[4], v10, v11, (unsigned int)v24, (__int64)&v25, (__int64)&v26);
  *(_QWORD *)v4 = v12;
  if ( !v12 )
    goto LABEL_16;
  RtlpHpSegReportBusyBlock((_DWORD)v5, v4, v24[0], v25, v26);
  v13 = 0x8000;
  if ( (*(_BYTE *)(v9 + 24) & 0xC) != 8 )
    v13 = 0;
LABEL_11:
  *(_WORD *)(v4 + 18) |= v13;
  return v3;
}
