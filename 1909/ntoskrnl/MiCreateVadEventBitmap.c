/*
 * XREFs of MiCreateVadEventBitmap @ 0x14067F6E4
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x14067F064 (MiAllocateNewSubAllocatedRegion.c)
 *     MiCreateWriteWatchView @ 0x14067F684 (MiCreateWriteWatchView.c)
 * Callees:
 *     MiInsertVadEvent @ 0x140072A6C (MiInsertVadEvent.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1400734A0 (PsChargeProcessNonPagedPoolQuota.c)
 *     RtlClearAllBitsEx @ 0x1400E85B0 (RtlClearAllBitsEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateVadEventBitmap(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  SIZE_T v8; // rdi
  char *PoolWithTag; // rbx
  int v10; // edi

  v8 = 8 * ((a3 >> 6) + ((a3 & 0x3F) != 0) + 9LL);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x77776D4Du);
  if ( !PoolWithTag )
    return 3221225626LL;
  v10 = PsChargeProcessNonPagedPoolQuota(a1, v8);
  if ( v10 < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return (unsigned int)v10;
  }
  else
  {
    *((_DWORD *)PoolWithTag + 16) = a4;
    *((_QWORD *)PoolWithTag + 1) = a3;
    *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 72;
    RtlClearAllBitsEx((PRTL_BITMAP_EX)(PoolWithTag + 8));
    MiInsertVadEvent(a2, (__int64 *)PoolWithTag, 1);
    return 0LL;
  }
}
