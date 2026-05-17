/*
 * XREFs of RtlpHpSegWalk @ 0x18005B85C
 * Callers:
 *     RtlpHpHeapWalk @ 0x18005B76C (RtlpHpHeapWalk.c)
 * Callees:
 *     RtlpHpLfhSubsegmentWalk @ 0x180002358 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpHpSegReportSegment @ 0x18005B53C (RtlpHpSegReportSegment.c)
 *     RtlpHpVsSubsegmentWalk @ 0x18005BAF0 (RtlpHpVsSubsegmentWalk.c)
 *     RtlpHpSegReportBusyBlock @ 0x18005BC30 (RtlpHpSegReportBusyBlock.c)
 *     RtlpHpSegReportPageRange @ 0x18010DF84 (RtlpHpSegReportPageRange.c)
 */

__int64 __fastcall RtlpHpSegWalk(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // r8
  __int64 *v7; // r15
  char v8; // cl
  __int64 *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  unsigned __int8 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 *v18; // rax
  __int16 v20; // ax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  _QWORD v24[2]; // [rsp+30h] [rbp-10h] BYREF
  int v25; // [rsp+78h] [rbp+38h] BYREF
  int v26; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  v4 = a2;
  v5 = a1;
  if ( !*(_QWORD *)a2 )
  {
    v18 = (__int64 *)(a1 + 72);
    if ( (__int64 *)*v18 != v18 )
    {
      v22 = *v18;
LABEL_27:
      RtlpHpSegReportSegment(a1, a2, v22);
      return v3;
    }
    return (unsigned int)-2147483622;
  }
  if ( (*(_BYTE *)(a2 + 18) & 2) != 0 )
  {
    v7 = *(__int64 **)a2;
    if ( a3 )
    {
      v9 = &v7[4 * *(unsigned __int8 *)(a1 + 10)];
      goto LABEL_10;
    }
    if ( *v7 != a1 + 72 )
    {
LABEL_36:
      v22 = *v7;
      a2 = v4;
      goto LABEL_27;
    }
    return (unsigned int)-2147483622;
  }
  if ( !a3 )
    return (unsigned int)-2147483622;
  v6 = *(_QWORD *)a1;
  v7 = (__int64 *)(*(_QWORD *)a2 & *(_QWORD *)a1);
  v8 = *(_BYTE *)(a1 + 8);
  v9 = &v7[4 * ((unsigned __int64)((unsigned int)*(_QWORD *)a2 - (unsigned int)v7) >> v8)];
  if ( (*(_QWORD *)a2 & 0xFFFLL) != 0 )
  {
    if ( (v9[3] & 2) != 0 )
      goto LABEL_6;
    goto LABEL_24;
  }
  if ( (v9[3] & 2) != 0 )
  {
LABEL_9:
    while ( 1 )
    {
      v9 += 4 * *((unsigned __int8 *)v9 + 31);
LABEL_10:
      v13 = (unsigned __int64)v9 & *(_QWORD *)v5;
      v14 = (__int64)((__int64)v9 - v13) >> 5;
      if ( (unsigned int)v14 >= 0x100 )
        break;
      if ( (v9[3] & 0x11) != 1 || (v15 = v9[3] & 0xC, v15 == 4) )
      {
        v21 = v14 << *(_BYTE *)(v5 + 8);
        *(_WORD *)(v4 + 18) = 4096;
        *(_QWORD *)v4 = v13 + v21;
        *(_QWORD *)(v4 + 8) = (unsigned __int64)*((unsigned __int8 *)v9 + 31) << *(_BYTE *)(v5 + 8);
        *(_WORD *)(v4 + 16) = 0;
        return v3;
      }
      v16 = v13 + (v14 << *(_BYTE *)(v5 + 8));
      if ( v15 < 8u )
      {
        *(_QWORD *)v4 = v16;
        RtlpHpSegReportPageRange(v5, v4);
        return v3;
      }
      if ( v15 == 8 )
      {
        v23 = RtlpHpLfhSubsegmentWalk(*(_QWORD *)(v5 + 24), v16, v16, v24, &v25, (__int64)&v26);
        *(_QWORD *)v4 = v23;
        if ( v23 )
        {
          RtlpHpSegReportBusyBlock(v5, v4, v24[0], v25, v26);
          v20 = 0x8000;
          goto LABEL_22;
        }
      }
      else
      {
        v17 = RtlpHpVsSubsegmentWalk(*(_QWORD *)(v5 + 32), v16, v16, (unsigned int)v24, (__int64)&v25, (__int64)&v26);
        *(_QWORD *)v4 = v17;
        if ( v17 )
        {
          RtlpHpSegReportBusyBlock(v5, v4, v24[0], v25, v26);
          return v3;
        }
      }
    }
    if ( *v7 == v5 + 72 )
      return (unsigned int)-2147483622;
    a1 = v5;
    goto LABEL_36;
  }
LABEL_24:
  v9 -= 4 * *((unsigned __int8 *)v9 + 31);
LABEL_6:
  v10 = ((unsigned __int64)v9 & v6) + ((__int64)((__int64)v9 - ((unsigned __int64)v9 & v6)) >> 5 << v8);
  v11 = *(_QWORD *)v4;
  if ( (v9[3] & 0xC) == 8 )
    v12 = RtlpHpLfhSubsegmentWalk(*(_QWORD *)(v5 + 24), v10, v11, v24, &v25, (__int64)&v26);
  else
    v12 = RtlpHpVsSubsegmentWalk(*(_QWORD *)(v5 + 32), v10, v11, (unsigned int)v24, (__int64)&v25, (__int64)&v26);
  *(_QWORD *)v4 = v12;
  if ( !v12 )
    goto LABEL_9;
  RtlpHpSegReportBusyBlock(v5, v4, v24[0], v25, v26);
  v20 = 0x8000;
  if ( (v9[3] & 0xC) != 8 )
    v20 = 0;
LABEL_22:
  *(_WORD *)(v4 + 18) |= v20;
  return v3;
}
