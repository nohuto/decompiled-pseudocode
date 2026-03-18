/*
 * XREFs of VrpDecommissionKeyContext @ 0x140841318
 * Callers:
 *     VrpRegistryCallback @ 0x140840F00 (VrpRegistryCallback.c)
 *     VrpFreeKeyContext @ 0x1408413B0 (VrpFreeKeyContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall VrpDecommissionKeyContext(UNICODE_STRING *a1)
{
  wchar_t *Buffer; // rcx

  Buffer = a1[1].Buffer;
  if ( Buffer )
  {
    ExFreePoolWithTag(Buffer, 0x67655256u);
    RtlInitUnicodeString(a1 + 1, 0LL);
  }
}
