/*
 * XREFs of RtlFreeOemString @ 0x14073D140
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  ULONG v1; // edx
  char *Buffer; // rcx

  Buffer = OemString->Buffer;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, v1);
}
