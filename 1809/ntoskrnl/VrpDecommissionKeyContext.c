/*
 * XREFs of VrpDecommissionKeyContext @ 0x1408083F8
 * Callers:
 *     VrpRegistryCallback @ 0x140807FF0 (VrpRegistryCallback.c)
 *     VrpFreeKeyContext @ 0x140808490 (VrpFreeKeyContext.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
