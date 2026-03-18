/*
 * XREFs of AslpFileGetFileKindDetailAttribute @ 0x140929890
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1409289EC (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x1409293F8 (AslpFileGetClrVersionAttribute.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     AslFileMappingGetFileKindDetail @ 0x1409262A8 (AslFileMappingGetFileKindDetail.c)
 */

__int64 __fastcall AslpFileGetFileKindDetailAttribute(__int64 a1, __int64 a2)
{
  int FileKindDetail; // edi
  __int64 v4; // rax
  int v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0;
  FileKindDetail = AslFileMappingGetFileKindDetail(&v6, a2);
  if ( FileKindDetail >= 0 )
  {
    v4 = v6;
    *(_DWORD *)(a1 + 920) |= 1u;
    *(_QWORD *)(a1 + 912) = v4;
    FileKindDetail = 0;
    *(_DWORD *)(a1 + 896) = 2;
    *(_QWORD *)(a1 + 904) = 4LL;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)FileKindDetail;
}
