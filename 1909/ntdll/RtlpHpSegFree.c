/*
 * XREFs of RtlpHpSegFree @ 0x180044D74
 * Callers:
 *     RtlpHpSegLfhVsFree @ 0x180044D60 (RtlpHpSegLfhVsFree.c)
 * Callees:
 *     RtlpHpSegPageRangeShrink @ 0x180036AE0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsContextFree @ 0x180038C70 (RtlpHpVsContextFree.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1800413B0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpSegDescriptorValidate @ 0x180044E1C (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x180048814 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpLogHeapFreeEvent @ 0x180103550 (RtlpLogHeapFreeEvent.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpSegFree(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned int v10; // ebp
  _DWORD *SharedData; // rcx
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v6 = RtlpHpSegDescriptorValidate(a1, a2);
  v7 = 0;
  v8 = v6;
  if ( v6 )
  {
    v9 = (v6 & *(_QWORD *)a1) + ((v6 - (v6 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
    if ( a2 > v9 )
    {
      if ( (*(_BYTE *)(v6 + 24) & 0xC) == 8 )
      {
        v10 = RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(a1 + 24), v9, a2, a3);
      }
      else
      {
        v10 = RtlpHpVsContextFree(*(PRTL_SRWLOCK *)(a1 + 32), v9, a2, a3, (unsigned int *)&v17);
        if ( v10 )
        {
          v14 = *(_QWORD *)(a1 + 24);
          if ( (unsigned int)v17 <= (unsigned int)*(unsigned __int16 *)(v14 + 60) - 16 )
            RtlpHpLfhBucketUpdateStats(v14, (unsigned int)v17, 0LL);
        }
      }
      if ( RtlGetCurrentServiceSessionId() )
        v15 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v15 = 2147353472LL;
      if ( *(_BYTE *)v15 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v10 )
      {
        LOBYTE(v7) = (*(_BYTE *)(v8 + 24) & 0xC) != 8;
        v16 = (unsigned int)(v7 + 2);
LABEL_24:
        RtlpLogHeapFreeEvent(*(_QWORD *)(a1 + 56), a2, v16);
      }
    }
    else
    {
      RtlpHpSegPageRangeShrink(a1, v6, 0, a3);
      v10 = 1;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v12 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v12 = 2147353472LL;
      if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        v16 = 3LL;
        goto LABEL_24;
      }
    }
  }
  else
  {
    RtlpLogHeapFailure(9, *(_QWORD *)(a1 + 56), a2, 0, 0LL, 0LL);
    return 0;
  }
  return v10;
}
