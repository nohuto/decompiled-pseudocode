/*
 * XREFs of memcpy_s_0 @ 0x180087D34
 * Callers:
 *     ?BoolToQword@QwordHelpers@@YA_K_N@Z @ 0x180415A48 (-BoolToQword@QwordHelpers@@YA_K_N@Z.c)
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
