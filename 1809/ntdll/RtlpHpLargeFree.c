/*
 * XREFs of RtlpHpLargeFree @ 0x1800663DC
 * Callers:
 *     RtlpHpSegReAlloc @ 0x180014CBC (RtlpHpSegReAlloc.c)
 *     RtlpHpFreeHeap @ 0x180018FF0 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180019360 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlRbRemoveNode @ 0x18001ECC0 (RtlRbRemoveNode.c)
 *     RtlpHpFreeVA @ 0x1800611FC (RtlpHpFreeVA.c)
 *     RtlpHpMetadataFree @ 0x180064E90 (RtlpHpMetadataFree.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18006651C (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpLogHeapFailure @ 0x18009F7CC (RtlpLogHeapFailure.c)
 *     RtlpHeapLogRangeRelease @ 0x180103E70 (RtlpHeapLogRangeRelease.c)
 */

ULONG_PTR __fastcall RtlpHpLargeFree(__int64 a1, void *a2, char a3)
{
  _RTL_SRWLOCK *v3; // rsi
  PVOID v4; // r10
  int v6; // edi
  _RTL_BALANCED_NODE *Metadata; // rax
  int v8; // r10d
  __int64 v9; // r14
  unsigned __int64 v10; // rax
  char v11; // cl
  __int64 v12; // rax
  ULONG_PTR v13; // rdi
  ULONG_PTR v14; // rsi
  __int64 v15; // rcx
  __int128 v17; // [rsp+30h] [rbp-20h] BYREF
  __int128 v18; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+38h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+48h] BYREF

  BaseAddress = a2;
  v3 = (_RTL_SRWLOCK *)(a1 + 64);
  v4 = a2;
  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    v4 = BaseAddress;
  }
  Metadata = (_RTL_BALANCED_NODE *)RtlpHpLargeAllocGetMetadata(a1, v4);
  v9 = (__int64)Metadata;
  if ( Metadata )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 72), Metadata);
    if ( !v6 )
      RtlReleaseSRWLockExclusive(v3);
    v10 = *(_QWORD *)(v9 + 32);
    v11 = (unsigned __int8)v10 >> 2;
    v17 = *(_OWORD *)a1;
    v12 = (((v10 >> 12) + ((v10 >> 1) & 1)) << 12) - 1;
    RegionSize = (1LL << v11) - (((1LL << v11) - 1) & ((1LL << v11) + v12)) + v12;
    RtlpHpFreeVA(&BaseAddress, &RegionSize, 0x8000, &v17);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), -(*(_QWORD *)(v9 + 32) >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)(RegionSize >> 12));
    v18 = *(_OWORD *)a1;
    RtlpHpMetadataFree(v9, &v18);
    v13 = RegionSize;
    v14 = RegionSize;
    if ( RtlGetCurrentServiceSessionId() )
    {
      v13 = RegionSize;
      v15 = (__int64)NtCurrentPeb()->SharedData + 558;
    }
    else
    {
      v15 = 2147353480LL;
    }
    if ( *(_BYTE *)v15 )
      RtlpHeapLogRangeRelease(a1, BaseAddress, v13);
  }
  else
  {
    if ( !v6 )
    {
      RtlReleaseSRWLockExclusive(v3);
      v8 = (int)BaseAddress;
    }
    RtlpLogHeapFailure(8, a1, v8, 0, 0LL, 0LL);
    return 0LL;
  }
  return v14;
}
