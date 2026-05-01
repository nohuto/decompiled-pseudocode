/*
 * XREFs of memcpy_s_0 @ 0x18008A874
 * Callers:
 *     ?BoolToQword@QwordHelpers@@YA_K_N@Z @ 0x1804350E8 (-BoolToQword@QwordHelpers@@YA_K_N@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
errno_t __cdecl memcpy_s_0(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  return memcpy_s(Destination, DestinationSize, Source, SourceSize);
}
