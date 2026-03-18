/*
 * XREFs of ?PlatformAllocate@NSInstrumentation@@YAPEAXW4_POOL_TYPE@@_KI@Z @ 0x1C00EF7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall NSInstrumentation::PlatformAllocate(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
}
