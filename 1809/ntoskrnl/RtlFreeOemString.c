/*
 * XREFs of RtlFreeOemString @ 0x140710890
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePool @ 0x14034E780 (ExFreePool.c)
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  char *Buffer; // rcx

  Buffer = OemString->Buffer;
  if ( Buffer )
    ExFreePool(Buffer);
}
