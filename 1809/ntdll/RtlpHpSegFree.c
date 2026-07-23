/*
 * XREFs of RtlpHpSegFree @ 0x180014AE0
 * Callers:
 *     RtlpHpSegReAlloc @ 0x180014CBC (RtlpHpSegReAlloc.c)
 *     RtlpHpSegLfhVsFree @ 0x180079570 (RtlpHpSegLfhVsFree.c)
 * Callees:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180019B90 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpSegPageRangeShrink @ 0x18001D914 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpVsContextFree @ 0x18001E0C0 (RtlpHpVsContextFree.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x1800647F4 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     RtlpLogHeapFreeEvent @ 0x180105E78 (RtlpLogHeapFreeEvent.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010D74C (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpSegFree(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  int v3; // ebx
  unsigned __int64 v7; // rdx
  __int64 DescriptorValidateSafe; // rdi
  char v9; // al
  unsigned __int64 v10; // rdx
  unsigned int v11; // r14d
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  _DWORD *SharedData; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  if ( (RtlpHpAppCompatFlags & 1) != 0 )
  {
    DescriptorValidateSafe = RtlpHpSegGetDescriptorValidateSafe(a1, a2);
  }
  else
  {
    v7 = a2 & *(_QWORD *)a1;
    if ( (a1 ^ v7 ^ RtlpHpHeapGlobals ^ *(_QWORD *)((a2 & *(_QWORD *)a1) + 0x10)) == 0xA2E64EADA2E64EADuLL )
      DescriptorValidateSafe = v7 + 32 * ((unsigned __int64)(unsigned int)(a2 - v7) >> *(_BYTE *)(a1 + 8));
    else
      DescriptorValidateSafe = 0LL;
  }
  if ( DescriptorValidateSafe && (v9 = *(_BYTE *)(DescriptorValidateSafe + 24), (v9 & 1) != 0) )
  {
    if ( (v9 & 2) != 0 )
    {
      if ( (v9 & 0xCu) < 8 && (((1 << *(_BYTE *)(a1 + 8)) - 1) & a2) != 0 )
        goto LABEL_31;
    }
    else
    {
      DescriptorValidateSafe += -32LL * *(unsigned __int8 *)(DescriptorValidateSafe + 31);
      if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 3) != 3 || (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xCu) < 8 )
        goto LABEL_31;
    }
  }
  else
  {
    DescriptorValidateSafe = 0LL;
  }
  if ( !DescriptorValidateSafe )
  {
LABEL_31:
    RtlpLogHeapFailure(9, *(_QWORD *)(a1 + 56), a2, 0, 0LL, 0LL);
    return 0;
  }
  v10 = (DescriptorValidateSafe & *(_QWORD *)a1)
      + ((DescriptorValidateSafe - (DescriptorValidateSafe & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
  if ( a2 <= v10 )
  {
    RtlpHpSegPageRangeShrink(a1, DescriptorValidateSafe, 0LL, a3);
    v11 = 1;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v16 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v16 = 2147353472LL;
    if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v18 = 3LL;
      goto LABEL_41;
    }
  }
  else
  {
    if ( (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) == 8 )
    {
      v11 = RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(a1 + 24), v10, a2, a3);
    }
    else
    {
      v11 = RtlpHpVsContextFree(*(PRTL_SRWLOCK *)(a1 + 32), (__int64)&v19);
      if ( v11 )
      {
        v17 = *(_QWORD *)(a1 + 24);
        if ( (unsigned int)v19 <= (unsigned int)*(unsigned __int16 *)(v17 + 60) - 16 )
          RtlpHpLfhBucketUpdateStats(v17, (unsigned int)v19, 0LL);
      }
    }
    v12 = NtCurrentPeb()->SharedData;
    if ( v12 && *v12 )
      v13 = (__int64)NtCurrentPeb()->SharedData + 550;
    else
      v13 = 2147353472LL;
    if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v11 )
    {
      LOBYTE(v3) = (*(_BYTE *)(DescriptorValidateSafe + 24) & 0xC) != 8;
      v18 = (unsigned int)(v3 + 2);
LABEL_41:
      RtlpLogHeapFreeEvent(*(_QWORD *)(a1 + 56), a2, v18);
    }
  }
  return v11;
}
