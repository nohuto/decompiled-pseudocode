/*
 * XREFs of memcpy_s_0 @ 0x1800850A8
 * Callers:
 *     ?BoolToQword@QwordHelpers@@YA_K_N@Z @ 0x1803B3220 (-BoolToQword@QwordHelpers@@YA_K_N@Z.c)
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
