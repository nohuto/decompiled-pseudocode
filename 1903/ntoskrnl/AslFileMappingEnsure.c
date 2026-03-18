/*
 * XREFs of AslFileMappingEnsure @ 0x1409266A8
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x140926848 (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x140926A0C (AslFileMappingGetImageTypeEx.c)
 *     AslFileAllocAndGetAttributes @ 0x140928F8C (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x140929998 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x140929EB4 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x14092A04C (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x14092A494 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileGetVersionBlock @ 0x14092A66C (AslpFileGetVersionBlock.c)
 * Callees:
 *     RtlFileMapMapView @ 0x140345920 (RtlFileMapMapView.c)
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x140776364 (AslpFileMappingGetFileKind.c)
 */

__int64 __fastcall AslFileMappingEnsure(__int64 a1)
{
  int FileKind; // edi
  int *v4; // rsi

  if ( *(_DWORD *)(a1 + 80) )
  {
    if ( *(_DWORD *)(a1 + 64) != 1 )
      return *(_QWORD *)(a1 + 32) == 0LL ? 0xC000046D : 0;
    return 3221225758LL;
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    return 0;
  }
  else
  {
    v4 = (int *)(a1 + 64);
    if ( *(_DWORD *)(a1 + 64) == 1 )
      return 3221225758LL;
    FileKind = RtlFileMapMapView(a1 + 8, 0);
    if ( FileKind >= 0 )
    {
      if ( *(_BYTE *)(a1 + 59) )
      {
        *v4 = 6;
      }
      else
      {
        FileKind = AslpFileMappingGetFileKind((_QWORD *)(a1 + 8), v4);
        if ( FileKind < 0 )
        {
          AslLogCallPrintf(1LL);
          *v4 = 3;
        }
      }
    }
  }
  return (unsigned int)FileKind;
}
