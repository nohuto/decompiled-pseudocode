/*
 * XREFs of memcpy_s @ 0x180097970
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

errno_t __cdecl memcpy_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t v8; // ebx

  if ( !SourceSize )
    return 0;
  if ( !Destination )
    goto LABEL_11;
  if ( Source && DestinationSize >= SourceSize )
  {
    memmove(Destination, Source, SourceSize);
    return 0;
  }
  memset(Destination, 0, DestinationSize);
  if ( Source )
  {
    if ( DestinationSize >= SourceSize )
      return 22;
    v8 = 34;
  }
  else
  {
LABEL_11:
    v8 = 22;
  }
  sub_18008C6D8();
  return v8;
}
