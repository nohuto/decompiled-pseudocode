/*
 * XREFs of AlpcInitializeMessageAttribute @ 0x1400ED640
 * Callers:
 *     PopUmpoProcessMessages @ 0x1400ED558 (PopUmpoProcessMessages.c)
 *     DbgkpSendErrorMessage @ 0x14084A7A8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x1400ED6A0 (AlpcGetHeaderSize.c)
 */

NTSTATUS __cdecl AlpcInitializeMessageAttribute(
        ULONG AttributeFlags,
        PALPC_MESSAGE_ATTRIBUTES Buffer,
        SIZE_T BufferSize,
        PSIZE_T RequiredBufferSize)
{
  ULONG HeaderSize; // eax

  HeaderSize = AlpcGetHeaderSize(AttributeFlags);
  *RequiredBufferSize = HeaderSize;
  if ( HeaderSize > BufferSize )
    return -1073741789;
  if ( Buffer )
  {
    Buffer->ValidAttributes = 0;
    Buffer->AllocatedAttributes = AttributeFlags;
  }
  return 0;
}
