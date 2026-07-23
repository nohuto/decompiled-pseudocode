/*
 * XREFs of AslFileAllocAndGetAttributes @ 0x1407218F4
 * Callers:
 *     SdbpCheckAllAttributes @ 0x1407215E4 (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     AslpFileGetVersionAttributes @ 0x140720710 (AslpFileGetVersionAttributes.c)
 *     AslFileMappingEnsure @ 0x140721A20 (AslFileMappingEnsure.c)
 *     AslpFileGetChecksumAttributes @ 0x1408ED7A0 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x1408EDB2C (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x1408EDFC4 (AslpFileGetFileKindDetailAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x1408EE048 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x1408EE1E0 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x1408EE628 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1408EEDF4 (AslpFileLargeEnsureLargeFileMapping.c)
 */

__int64 __fastcall AslFileAllocAndGetAttributes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v5; // eax
  int PeExportNameExeWrapper; // ebx
  int v7; // edi
  __int64 j; // r13
  int VersionAttributes; // eax
  int v11; // edx
  int *i; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax

  if ( !a3 )
    return 0;
  if ( *(_DWORD *)(a2 + 64) == 1 )
  {
    v11 = 0;
    for ( i = (int *)(a1 + 24); ; i += 8 )
    {
      v13 = *i;
      if ( !v11 || v11 == 17 )
        break;
      if ( v11 == 28 )
      {
        *((_QWORD *)i - 1) = 1LL;
LABEL_31:
        *(i - 6) = 2;
        v14 = v13 | 1;
        *((_QWORD *)i - 2) = 4LL;
        goto LABEL_32;
      }
      v14 = v13 | 2;
LABEL_32:
      *i = v14;
      if ( ++v11 >= 33 )
        return 0;
    }
    *((_QWORD *)i - 1) = 0LL;
    goto LABEL_31;
  }
  if ( *(_DWORD *)(a2 + 80) )
  {
    v15 = 0;
    v16 = (_DWORD *)(a1 + 24);
    do
    {
      if ( v15 != 1 && (v15 <= 16 || v15 > 19 && v15 != 22 && (v15 <= 27 || v15 > 31)) )
        *v16 |= 2u;
      ++v15;
      v16 += 8;
    }
    while ( v15 < 33 );
  }
  v5 = AslFileMappingEnsure(a2);
  PeExportNameExeWrapper = v5;
  if ( v5 == -1073741801 )
  {
    if ( !*(_DWORD *)(a2 + 80) )
    {
      PeExportNameExeWrapper = AslpFileLargeEnsureLargeFileMapping(a1, a2);
      if ( PeExportNameExeWrapper >= 0 )
        goto LABEL_6;
    }
LABEL_46:
    AslLogCallPrintf(1LL);
    return (unsigned int)PeExportNameExeWrapper;
  }
  if ( v5 < 0 )
    goto LABEL_46;
LABEL_6:
  v7 = 0;
  for ( j = 0LL; ; j += 32LL )
  {
    if ( ((a3 >> v7) & 1) == 0 || (*(_DWORD *)(a1 + j + 24) & 3) != 0 )
      goto LABEL_8;
    if ( v7 > 23 )
    {
      switch ( v7 )
      {
        case 24:
          goto LABEL_20;
        case 25:
LABEL_74:
          PeExportNameExeWrapper = AslpFileGetPeExportNameExeWrapper(a1, a2);
          if ( PeExportNameExeWrapper < 0 )
            goto LABEL_46;
          goto LABEL_8;
        case 26:
LABEL_72:
          PeExportNameExeWrapper = AslpFileGetChecksumAttributes(a1, a2);
          if ( PeExportNameExeWrapper < 0 )
            goto LABEL_46;
          goto LABEL_8;
        case 27:
          PeExportNameExeWrapper = AslpFileGetClrVersionAttribute(a1, a2);
          if ( PeExportNameExeWrapper < 0 )
            goto LABEL_46;
          goto LABEL_8;
        case 28:
          PeExportNameExeWrapper = AslpFileGetFileKindDetailAttribute(a1, a2);
          if ( PeExportNameExeWrapper < 0 )
            goto LABEL_46;
          goto LABEL_8;
      }
      if ( v7 <= 31 )
        goto LABEL_57;
      goto LABEL_67;
    }
    if ( v7 == 23 )
      goto LABEL_74;
    if ( v7 > 17 )
    {
      if ( v7 > 19 && v7 <= 21 )
      {
        PeExportNameExeWrapper = AslpFileGetHeaderAttributesNE(a1, a2);
        if ( PeExportNameExeWrapper < 0 )
          goto LABEL_46;
        goto LABEL_8;
      }
LABEL_57:
      PeExportNameExeWrapper = AslpFileGetHeaderAttributesPE(a1, a2);
      if ( PeExportNameExeWrapper < 0 )
        goto LABEL_46;
      goto LABEL_8;
    }
    if ( v7 == 17 )
    {
      switch ( *(_DWORD *)(a2 + 64) )
      {
        case 4:
          v17 = 1LL;
          break;
        case 5:
          v17 = 2LL;
          break;
        case 6:
          v17 = 3LL;
          break;
        default:
          v17 = 0LL;
          break;
      }
      *(_DWORD *)(a1 + 568) |= 1u;
      *(_DWORD *)(a1 + 544) = 2;
      *(_QWORD *)(a1 + 552) = 4LL;
      *(_QWORD *)(a1 + 560) = v17;
      goto LABEL_8;
    }
    if ( v7 )
      break;
LABEL_67:
    v18 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a1 + 1048) |= 1u;
    *(_DWORD *)(a1 + 24) |= 1u;
    *(_QWORD *)(a1 + 1040) = v18;
    *(_QWORD *)(a1 + 16) = (unsigned int)v18;
    *(_DWORD *)(a1 + 1024) = 3;
    *(_QWORD *)(a1 + 1032) = 8LL;
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 4LL;
LABEL_8:
    if ( ++v7 >= 33 )
      return 0;
  }
  if ( v7 == 1 )
    goto LABEL_57;
  if ( v7 == 2 )
    goto LABEL_72;
  if ( v7 > 2 )
  {
LABEL_20:
    VersionAttributes = AslpFileGetVersionAttributes(a1, a2);
    if ( (unsigned int)(VersionAttributes + 1073741684) <= 0x3FFFFF73 || VersionAttributes <= -1073741688 )
      AslLogCallPrintf(1LL);
    goto LABEL_8;
  }
  return (unsigned int)-1073741595;
}
