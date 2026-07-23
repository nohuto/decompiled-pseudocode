/*
 * XREFs of FsRtlValidateReparsePointBuffer @ 0x14011CC20
 * Callers:
 *     IopValidateJunctionTarget @ 0x14081C8BC (IopValidateJunctionTarget.c)
 * Callees:
 *     RtlUShortAdd @ 0x14011CE8C (RtlUShortAdd.c)
 */

NTSTATUS __stdcall FsRtlValidateReparsePointBuffer(ULONG BufferLength, PREPARSE_DATA_BUFFER ReparseBuffer)
{
  signed int ReparseTag; // edx
  unsigned int ReparseDataLength; // r11d
  unsigned int v5; // esi
  unsigned int v6; // eax
  NTSTATUS result; // eax
  USHORT v8; // cx
  __int64 v9; // r9
  int v10; // r10d
  int v11; // r11d
  USHORT SubstituteNameOffset; // di
  __int64 v13; // r9
  USHORT v14; // bx
  char v15; // r9
  __int16 v16; // r11
  unsigned int v17; // r10d
  USHORT pusResult; // [rsp+40h] [rbp+8h] BYREF
  USHORT v19; // [rsp+50h] [rbp+18h] BYREF

  if ( BufferLength - 8 > 0x3FF8 )
    return -1073741192;
  ReparseTag = ReparseBuffer->ReparseTag;
  if ( (ReparseTag & 0xFFF0000) != 0
    || (unsigned int)ReparseTag <= 2
    || (ReparseTag & 0xC0000000) == 0x40000000
    || (ReparseTag & 0x30000000) == 0x30000000
    || ReparseTag == -1610612711 )
  {
    return -1073741194;
  }
  ReparseDataLength = ReparseBuffer->ReparseDataLength;
  v5 = ReparseDataLength + 8;
  v6 = ReparseDataLength + 24;
  if ( ReparseDataLength + 8 == BufferLength )
    goto LABEL_10;
  if ( v6 != BufferLength )
    return -1073741192;
  if ( v5 == BufferLength )
  {
LABEL_10:
    if ( ReparseTag >= 0 )
      return -1073741192;
  }
  if ( v6 == BufferLength
    && (ReparseTag >= 0
     && !ReparseBuffer->AppExecLinkReparseBuffer.StringCount
     && !ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameOffset
     && !ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 8)
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 9)
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 10)
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 11)
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 12)
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 13)
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 14)
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 15)
     || ReparseTag == -1610612733
     || ReparseTag == -1610612724) )
  {
    return -1073741192;
  }
  if ( ReparseTag == -1610612733 )
  {
    if ( ReparseDataLength >= 8 )
    {
      result = RtlUShortAdd(
                 ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength,
                 ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength,
                 &pusResult);
      if ( !result )
      {
        result = RtlUShortAdd(v8, 2u, &pusResult);
        if ( !result )
        {
          if ( *(_WORD *)(v9 + 8) || *(_WORD *)(v9 + 12) != pusResult || v11 != v10 )
            return -1073741192;
          return 0;
        }
      }
      return result;
    }
    return -1073741192;
  }
  if ( ReparseTag != -1610612724 )
    return 0;
  if ( (unsigned __int16)ReparseDataLength < 0xCu )
    return -1073741192;
  SubstituteNameOffset = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameOffset;
  result = RtlUShortAdd(SubstituteNameOffset, ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength, &v19);
  if ( !result )
  {
    v14 = *(_WORD *)(v13 + 14);
    result = RtlUShortAdd(*(_WORD *)(v13 + 12), v14, &pusResult);
    if ( !result )
    {
      v17 = v19 + 20;
      if ( v17 >= 0x14
        && (v5 < v17
         || v5 < (unsigned int)pusResult + 20
         || !v16
         || !v14
         || (v16 & 1) != 0
         || (v14 & 1) != 0
         || (SubstituteNameOffset & 1) != 0
         || (v15 & 1) != 0) )
      {
        return -1073741192;
      }
      return 0;
    }
  }
  return result;
}
