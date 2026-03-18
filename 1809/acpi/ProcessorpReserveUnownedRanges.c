/*
 * XREFs of ProcessorpReserveUnownedRanges @ 0x1C0094FE8
 * Callers:
 *     ProcessorAddInstance @ 0x1C0094CF0 (ProcessorAddInstance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorpReserveUnownedRanges(PRTL_RANGE_LIST RangeList)
{
  __int64 v2; // r8
  __int64 v3; // rdi
  __int64 v4; // rbp
  ULONGLONG v5; // rdx
  NTSTATUS v6; // ebx
  __int64 v7; // r8
  struct _RTL_RANGE_LIST RangeLista; // [rsp+40h] [rbp-28h] BYREF

  RtlInitializeRangeList(&RangeLista);
  v3 = 0LL;
  v4 = *(_QWORD *)(RootDeviceExtension + 624);
  if ( *(_DWORD *)(v4 + 16) )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(v4 + 20 * v3 + 20) == 2 )
      {
        v5 = *(unsigned int *)(v4 + 20 * v3 + 28);
        v6 = RtlAddRange(&RangeLista, v5, (unsigned int)v5, 0, 0, 0LL, 0LL);
        if ( v6 < 0 )
          break;
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *(_DWORD *)(v4 + 16) )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    LOBYTE(v2) = 8;
    v6 = RtlInvertRangeListEx(RangeList, &RangeLista, v2, 0LL, 0LL);
    if ( v6 >= 0 )
    {
      LOBYTE(v7) = 8;
      v6 = RtlInvertRangeListEx(&RangeList[1], &RangeLista, v7, 0LL, 0LL);
    }
  }
  RtlFreeRangeList(&RangeLista);
  if ( v6 < 0 )
  {
    RtlFreeRangeList(RangeList + 1);
    RtlFreeRangeList(RangeList);
  }
  return (unsigned int)v6;
}
