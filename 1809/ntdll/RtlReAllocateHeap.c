/*
 * XREFs of RtlReAllocateHeap @ 0x18000C320
 * Callers:
 *     RtlpAllocateUserBlockFromHeap @ 0x1800145A4 (RtlpAllocateUserBlockFromHeap.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18002B5A0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180055B60 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlAllocateHandle @ 0x1800737C0 (RtlAllocateHandle.c)
 *     LdrAddLoadAsDataTable @ 0x1800783D0 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180078F30 (LdrRemoveLoadAsDataTable.c)
 *     RtlpMUIEnumerateFolder @ 0x18008A184 (RtlpMUIEnumerateFolder.c)
 *     NtdllpReallocateStringRoutine @ 0x1800D7028 (NtdllpReallocateStringRoutine.c)
 *     _SafeReallocBlob @ 0x180103828 (_SafeReallocBlob.c)
 *     RtlDebugReAllocateHeap @ 0x1801081A8 (RtlDebugReAllocateHeap.c)
 * Callees:
 *     RtlpHpTagReAllocateHeap @ 0x18000A49C (RtlpHpTagReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x18000C1D4 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlpReAllocateHeapInternal @ 0x18000C3B0 (RtlpReAllocateHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x18009F7AC (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlReAllocateHeap(__int64 a1, int a2, int a3, __int64 a4)
{
  if ( !a1 )
    RtlpLogHeapFailure(19, 0, a3, 0, 0LL, 0LL);
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return RtlpHpReAllocWithExceptionProtection(a1, a2, a3, a4);
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagReAllocateHeap(a1, a3, a4, a2);
  return RtlpReAllocateHeapInternal(a1, a2, a3, a4, 0LL, 0LL);
}
