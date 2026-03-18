/*
 * XREFs of AslFileMappingEnsure @ 0x140926108
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x1409262A8 (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x14092646C (AslFileMappingGetImageTypeEx.c)
 *     AslFileAllocAndGetAttributes @ 0x1409289EC (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x1409293F8 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x140929914 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x140929AAC (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x140929EF4 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileGetVersionBlock @ 0x14092A0CC (AslpFileGetVersionBlock.c)
 * Callees:
 *     RtlFileMapMapView @ 0x140345380 (RtlFileMapMapView.c)
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x140779944 (AslpFileMappingGetFileKind.c)
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
