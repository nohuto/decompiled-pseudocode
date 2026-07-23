/*
 * XREFs of ArbInitializeRangeList @ 0x140906770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     RtlInvertRangeListEx @ 0x1407397A0 (RtlInvertRangeListEx.c)
 *     RtlAddRange @ 0x1407398E0 (RtlAddRange.c)
 *     RtlFreeRangeList @ 0x14073A010 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbInitializeRangeList(__int64 a1, int a2, unsigned __int8 *a3, struct _RTL_RANGE_LIST *a4)
{
  unsigned __int8 *v5; // rdi
  unsigned __int64 v7; // rsi
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  ULONGLONG Start; // [rsp+40h] [rbp-30h] BYREF
  struct _RTL_RANGE_LIST RangeList; // [rsp+48h] [rbp-28h] BYREF
  __int64 v14; // [rsp+B0h] [rbp+40h] BYREF

  RangeList.ListHead.Blink = (struct _LIST_ENTRY *)&RangeList;
  *(_QWORD *)&RangeList.Flags = 0LL;
  RangeList.ListHead.Flink = (struct _LIST_ENTRY *)&RangeList;
  v5 = a3;
  RangeList.Stamp = 0;
  v7 = (unsigned __int64)&a3[20 * a2];
  if ( (unsigned __int64)a3 >= v7 )
  {
LABEL_10:
    v10 = RtlInvertRangeListEx(a4, (__int64)&RangeList, 0, 0LL, 0LL);
    if ( v10 >= 0 )
      v10 = 0;
  }
  else
  {
    while ( 1 )
    {
      v8 = *v5;
      v9 = *(_DWORD *)(a1 + 32);
      if ( v8 == v9 || (_BYTE)v8 == 7 && v9 == 3 )
      {
        v10 = (*(__int64 (__fastcall **)(unsigned __int8 *, ULONGLONG *, __int64 *))(a1 + 136))(v5, &Start, &v14);
        if ( v10 < 0 )
          break;
        if ( v14 )
          v10 = RtlAddRange(&RangeList, Start, Start + v14 - 1, 0, 3u, 0LL, 0LL);
        if ( v10 < 0 )
          break;
      }
      v5 += 20;
      if ( (unsigned __int64)v5 >= v7 )
        goto LABEL_10;
    }
  }
  RtlFreeRangeList(&RangeList);
  return (unsigned int)v10;
}
