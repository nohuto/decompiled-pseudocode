/*
 * XREFs of HUBDTX_CacheBillboardInfo @ 0x1C0027054
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptor @ 0x1C0024DFC (HUBDTX_ValidateAndCacheBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C003C640 (memmove.c)
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
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x5Au,
        (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids);
      ExFreePoolWithTag(PoolWithTag, 0x68334855u);
      PoolWithTag = 0LL;
    }
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x59u,
      (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids);
  }
  *(_QWORD *)(a1 + 2640) = PoolWithTag;
}
