/*
 * XREFs of AslFileAllocAndGetAttributes @ 0x1409289EC
 * Callers:
 *     SdbpCheckAllAttributes @ 0x140925258 (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x140926108 (AslFileMappingEnsure.c)
 *     AslpFileGetChecksumAttributes @ 0x14092906C (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x1409293F8 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x140929890 (AslpFileGetFileKindDetailAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x140929914 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x140929AAC (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x140929EF4 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileGetVersionAttributes @ 0x14092A018 (AslpFileGetVersionAttributes.c)
 *     AslpFileLargeEnsureLargeFileMapping @ 0x14092B4D8 (AslpFileLargeEnsureLargeFileMapping.c)
 */

__int64 __fastcall AslFileAllocAndGetAttributes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int PeExportNameExeWrapper; // ebx
  int v6; // edx
  int *i; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // rcx
  int v12; // eax
  int v13; // edi
  __int64 j; // r13
  int VersionAttributes; // eax
  __int64 v17; // rax
  __int64 v18; // rax

  if ( a3 )
  {
    if ( *(_DWORD *)(a2 + 64) == 1 )
    {
      v6 = 0;
      for ( i = (int *)(a1 + 24); ; i += 8 )
      {
        v8 = *i;
        if ( !v6 || v6 == 17 )
          break;
        if ( v6 == 28 )
        {
          *((_QWORD *)i - 1) = 1LL;
LABEL_11:
          *(i - 6) = 2;
          v9 = v8 | 1;
          *((_QWORD *)i - 2) = 4LL;
          goto LABEL_12;
        }
        v9 = v8 | 2;
LABEL_12:
        *i = v9;
        if ( ++v6 >= 33 )
          return 0;
      }
      *((_QWORD *)i - 1) = 0LL;
      goto LABEL_11;
    }
    if ( *(_DWORD *)(a2 + 80) )
    {
      v10 = 0;
      v11 = (_DWORD *)(a1 + 24);
      do
      {
        if ( v10 != 1 && (v10 <= 16 || v10 > 19 && v10 != 22 && (v10 <= 27 || v10 > 31)) )
          *v11 |= 2u;
        ++v10;
        v11 += 8;
      }
      while ( v10 < 33 );
    }
    v12 = AslFileMappingEnsure(a2);
    PeExportNameExeWrapper = v12;
    if ( v12 == -1073741801 )
    {
      if ( *(_DWORD *)(a2 + 80) )
        goto LABEL_27;
      PeExportNameExeWrapper = AslpFileLargeEnsureLargeFileMapping(a1, a2);
      if ( PeExportNameExeWrapper < 0 )
        goto LABEL_27;
    }
    else if ( v12 < 0 )
    {
LABEL_27:
      AslLogCallPrintf(1LL);
      return (unsigned int)PeExportNameExeWrapper;
    }
    v13 = 0;
    for ( j = 0LL; ; j += 32LL )
    {
      if ( ((a3 >> v13) & 1) != 0 && (*(_DWORD *)(a1 + j + 24) & 3) == 0 )
      {
        if ( v13 > 23 )
        {
          switch ( v13 )
          {
            case 24:
              goto LABEL_41;
            case 25:
LABEL_74:
              PeExportNameExeWrapper = AslpFileGetPeExportNameExeWrapper(a1, a2);
              if ( PeExportNameExeWrapper < 0 )
                goto LABEL_27;
              goto LABEL_44;
            case 26:
LABEL_72:
              PeExportNameExeWrapper = AslpFileGetChecksumAttributes(a1, a2);
              if ( PeExportNameExeWrapper < 0 )
                goto LABEL_27;
              goto LABEL_44;
            case 27:
              PeExportNameExeWrapper = AslpFileGetClrVersionAttribute(a1, a2);
              if ( PeExportNameExeWrapper < 0 )
                goto LABEL_27;
              goto LABEL_44;
            case 28:
              PeExportNameExeWrapper = AslpFileGetFileKindDetailAttribute(a1, a2);
              if ( PeExportNameExeWrapper < 0 )
                goto LABEL_27;
              goto LABEL_44;
          }
          if ( v13 <= 31 )
            goto LABEL_57;
        }
        else
        {
          if ( v13 == 23 )
            goto LABEL_74;
          if ( v13 > 17 )
          {
            if ( v13 > 19 && v13 <= 21 )
            {
              PeExportNameExeWrapper = AslpFileGetHeaderAttributesNE(a1, a2);
              if ( PeExportNameExeWrapper < 0 )
                goto LABEL_27;
              goto LABEL_44;
            }
LABEL_57:
            PeExportNameExeWrapper = AslpFileGetHeaderAttributesPE(a1, a2);
            if ( PeExportNameExeWrapper < 0 )
              goto LABEL_27;
            goto LABEL_44;
          }
          if ( v13 == 17 )
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
            goto LABEL_44;
          }
          if ( v13 )
          {
            if ( v13 == 1 )
              goto LABEL_57;
            if ( v13 == 2 )
              goto LABEL_72;
            if ( v13 <= 2 )
              return (unsigned int)-1073741595;
LABEL_41:
            VersionAttributes = AslpFileGetVersionAttributes(a1, a2);
            if ( VersionAttributes <= -1073741688 || (unsigned int)(VersionAttributes + 1073741684) <= 0x3FFFFF73 )
              AslLogCallPrintf(1LL);
            goto LABEL_44;
          }
        }
        v18 = *(_QWORD *)(a2 + 24);
        *(_DWORD *)(a1 + 1048) |= 1u;
        *(_DWORD *)(a1 + 24) |= 1u;
        *(_QWORD *)(a1 + 16) = (unsigned int)v18;
        *(_DWORD *)(a1 + 1024) = 3;
        *(_QWORD *)(a1 + 1032) = 8LL;
        *(_QWORD *)(a1 + 1040) = v18;
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = 4LL;
      }
LABEL_44:
      if ( ++v13 >= 33 )
        return 0;
    }
  }
  return 0;
}
