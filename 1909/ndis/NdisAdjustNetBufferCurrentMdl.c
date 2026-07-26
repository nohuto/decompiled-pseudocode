/*
 * XREFs of NdisAdjustNetBufferCurrentMdl @ 0x1C000FB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisAdjustNetBufferCurrentMdl(PNET_BUFFER NetBuffer)
{
  _MDL *MdlChain; // rax
  unsigned int i; // edx
  ULONG ByteCount; // r8d

  MdlChain = NetBuffer->MdlChain;
  for ( i = NetBuffer->DataOffset; MdlChain; i -= ByteCount )
  {
    ByteCount = MdlChain->ByteCount;
    if ( i < ByteCount )
      break;
    MdlChain = MdlChain->Next;
  }
  NetBuffer->Link.Region = (unsigned __int64)MdlChain;
  NetBuffer->CurrentMdlOffset = i;
}
