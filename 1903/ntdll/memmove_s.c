/*
 * XREFs of memmove_s @ 0x180097A10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

errno_t __cdecl memmove_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t v5; // ebx

  if ( !SourceSize )
    return 0;
  if ( Destination && Source )
  {
    if ( DestinationSize >= SourceSize )
    {
      memmove(Destination, Source, SourceSize);
      return 0;
    }
    v5 = 34;
  }
  else
  {
    v5 = 22;
  }
  sub_18008C6D8();
  return v5;
}
