/*
 * XREFs of RtlReAllocateHeap @ 0x1800431F0
 * Callers:
 *     RtlpAllocateUserBlockFromHeap @ 0x1800184BC (RtlpAllocateUserBlockFromHeap.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180059490 (LdrpSetAlternateResourceModuleHandle.c)
 *     RtlAllocateHandle @ 0x18005B9F0 (RtlAllocateHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006F7B0 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrAddLoadAsDataTable @ 0x180072620 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800739E0 (LdrRemoveLoadAsDataTable.c)
 *     NtdllpReallocateStringRoutine @ 0x1800D4EB4 (NtdllpReallocateStringRoutine.c)
 *     RtlpMUIEnumerateFolder @ 0x1800ED14C (RtlpMUIEnumerateFolder.c)
 *     _SafeReallocBlob @ 0x180101004 (_SafeReallocBlob.c)
 *     RtlDebugReAllocateHeap @ 0x1801056D8 (RtlDebugReAllocateHeap.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x180043280 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x180045138 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlpHpTagReAllocateHeap @ 0x180046EEC (RtlpHpTagReAllocateHeap.c)
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlReAllocateHeap(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( !a1 )
    RtlpLogHeapFailure(19, 0, a3, 0, 0LL, 0LL);
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    return RtlpHpReAllocWithExceptionProtection(a1, a2, a3, a4);
  if ( (RtlpHpHeapFeatures & 2) != 0 )
    return RtlpHpTagReAllocateHeap(a1, a3, a4, a2);
  return RtlpReAllocateHeapInternal(a1, a2, a3, a4, 0LL, 0LL);
}
