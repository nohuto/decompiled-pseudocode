/*
 * XREFs of RtlFreeOemString @ 0x180089B00
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  char *Buffer; // rcx

  Buffer = OemString->Buffer;
  if ( Buffer )
    RtlDeleteBoundaryDescriptor((__int64)Buffer);
}
