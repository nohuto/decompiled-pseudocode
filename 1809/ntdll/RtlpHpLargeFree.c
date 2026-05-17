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
 *     RtlpLogHeapFailure @ 0x18009F7AC (RtlpLogHeapFailure.c)
 *     RtlpHeapLogRangeRelease @ 0x180103E70 (RtlpHeapLogRangeRelease.c)
 */

unsigned __int64 __fastcall RtlpHpLargeFree(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  volatile signed __int64 *v4; // rsi
  unsigned __int64 v5; // r10
  int v7; // edi
  unsigned __int64 Metadata; // rax
  int v9; // r10d
  __int64 v10; // r14
  unsigned __int64 v11; // rax
  char v12; // cl
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  __int64 v16; // rcx
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF
  __int128 v19; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v20; // [rsp+88h] [rbp+38h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp+48h] BYREF

  v20 = a2;
  v4 = (volatile signed __int64 *)(a1 + 64);
  v5 = a2;
  v7 = (unsigned __int8)a3 & 1;
  if ( ((unsigned __int8)a3 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(a1 + 64, a2, a3, a4);
    v5 = v20;
  }
  Metadata = RtlpHpLargeAllocGetMetadata(a1, v5);
  v10 = Metadata;
  if ( Metadata )
  {
    RtlRbRemoveNode(a1 + 72, Metadata);
    if ( !v7 )
      RtlReleaseSRWLockExclusive(v4);
    v11 = *(_QWORD *)(v10 + 32);
    v12 = (unsigned __int8)v11 >> 2;
    v18 = *(_OWORD *)a1;
    v13 = (((v11 >> 12) + ((v11 >> 1) & 1)) << 12) - 1;
    v21 = (1LL << v12) - (((1LL << v12) - 1) & ((1LL << v12) + v13)) + v13;
    RtlpHpFreeVA(&v20, &v21, 0x8000, &v18);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 96), -(*(_QWORD *)(v10 + 32) >> 12));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), -(__int64)(v21 >> 12));
    v19 = *(_OWORD *)a1;
    RtlpHpMetadataFree(v10, &v19);
    v14 = v21;
    v15 = v21;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v14 = v21;
      v16 = (__int64)NtCurrentPeb()->SharedData + 558;
    }
    else
    {
      v16 = 2147353480LL;
    }
    if ( *(_BYTE *)v16 )
      RtlpHeapLogRangeRelease(a1, v20, v14);
  }
  else
  {
    if ( !v7 )
    {
      RtlReleaseSRWLockExclusive(v4);
      v9 = v20;
    }
    RtlpLogHeapFailure(8, a1, v9, 0, 0LL, 0LL);
    return 0LL;
  }
  return v15;
}
