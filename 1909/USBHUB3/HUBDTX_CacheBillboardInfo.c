/*
 * XREFs of HUBDTX_CacheBillboardInfo @ 0x1C00292CC
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C002726C (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0041300 (memmove.c)
 */

void __fastcall HUBDTX_CacheBillboardInfo(__int64 a1, unsigned __int8 *a2)
{
  _QWORD *PoolWithTag; // rbx
  POOL_TYPE v5; // ecx
  PVOID v6; // rax

  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x10uLL, 0x68334855u);
  if ( PoolWithTag )
  {
    v5 = ExDefaultNonPagedPoolType;
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    *((_BYTE *)PoolWithTag + 8) = -1;
    v6 = ExAllocatePoolWithTag(v5, *a2, 0x68334855u);
    *PoolWithTag = v6;
    if ( v6 )
    {
      memmove(v6, a2, *a2);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x5Bu,
          (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids);
      ExFreePoolWithTag(PoolWithTag, 0x68334855u);
      PoolWithTag = 0LL;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x5Au,
      (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids);
  }
  *(_QWORD *)(a1 + 2640) = PoolWithTag;
}
