/*
 * XREFs of ExpStringCapture @ 0x1408CDF2C
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x1408CC820 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ExpStringCapture(_QWORD *a1, __int16 *a2)
{
  unsigned __int16 v4; // ax
  size_t v5; // rsi
  PVOID PoolWithQuotaTag; // rdi
  size_t v8; // rax

  v4 = *a2;
  if ( (*a2 & 1) != 0 || !v4 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = v4;
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v4 + 2LL, 0x50535845u);
    if ( PoolWithQuotaTag )
    {
      v8 = *((_QWORD *)a2 + 1);
      if ( (v8 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v8 + v5 > 0x7FFFFFFF0000LL || v8 + v5 < v8 )
        MEMORY[0x7FFFFFFF0000] = 0;
      memmove(PoolWithQuotaTag, *((const void **)a2 + 1), v5);
      *((_WORD *)PoolWithQuotaTag + (v5 >> 1)) = 0;
      *a1 = PoolWithQuotaTag;
      return 0;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
}
