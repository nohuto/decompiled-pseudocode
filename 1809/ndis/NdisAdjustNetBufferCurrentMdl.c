/*
 * XREFs of NdisAdjustNetBufferCurrentMdl @ 0x1C00082C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisAdjustNetBufferCurrentMdl(PNET_BUFFER NetBuffer)
{
  _MDL *MdlChain; // rax
  unsigned int i; // r8d
  ULONG ByteCount; // edx

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
