/*
 * XREFs of VrpDecommissionKeyContext @ 0x140841CB8
 * Callers:
 *     VrpRegistryCallback @ 0x1408418A0 (VrpRegistryCallback.c)
 *     VrpFreeKeyContext @ 0x140841D50 (VrpFreeKeyContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
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
