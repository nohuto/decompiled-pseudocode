/*
 * XREFs of NdisQueryNetBufferPhysicalCount @ 0x1C0091F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall NdisQueryNetBufferPhysicalCount(PNET_BUFFER NetBuffer)
{
  unsigned int DataLength; // r9d
  ULONG v2; // r10d
  _MDL *MdlChain; // rax
  unsigned int i; // r8d
  ULONG ByteCount; // edx
  unsigned int v6; // edx
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx

  DataLength = NetBuffer->DataLength;
  v2 = 0;
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
  while ( MdlChain && DataLength )
  {
    v6 = MdlChain->ByteCount;
    if ( i )
    {
      v7 = i + DataLength;
      if ( v6 <= (unsigned int)v7 )
        v7 = v6;
      DataLength += i - v7;
      i = 0;
    }
    else
    {
      v7 = DataLength;
      if ( v6 <= DataLength )
        v7 = v6;
      DataLength -= v7;
    }
    if ( v6 )
      v8 = ((unsigned __int64)((LODWORD(MdlChain->StartVa) + MdlChain->ByteOffset) & 0xFFF) + v7 + 4095) >> 12;
    else
      LODWORD(v8) = 1;
    MdlChain = MdlChain->Next;
    v2 += v8;
  }
  return v2;
}
