/*
 * XREFs of AslpFileMappingGetFileKind @ 0x1407205E0
 * Callers:
 *     AslFileMappingCreate @ 0x14067F63C (AslFileMappingCreate.c)
 *     AslFileMappingCreateFromImageView @ 0x1407204D0 (AslFileMappingCreateFromImageView.c)
 *     AslFileMappingEnsure @ 0x140721A20 (AslFileMappingEnsure.c)
 *     AslFileMappingEnsureMappedAs @ 0x1408EAC48 (AslFileMappingEnsureMappedAs.c)
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1408EEDF4 (AslpFileLargeEnsureLargeFileMapping.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileMappingGetFileKind(_QWORD *a1, int *a2)
{
  unsigned __int64 v3; // rdx
  unsigned int v4; // ebx
  int v5; // edi
  __int64 v6; // r8
  int v7; // eax

  v3 = a1[2];
  v4 = 0;
  if ( !v3 || !a1[4] )
  {
    *a2 = 1;
    return 0LL;
  }
  v5 = 3;
  if ( v3 < 0x40 )
  {
    *a2 = 3;
    return 0LL;
  }
  v6 = a1[3];
  if ( (unsigned __int64)(v6 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v4 = -1073741811;
    AslLogCallPrintf(1LL);
  }
  else if ( *(_WORD *)v6 == 23117 )
  {
    v5 = 4;
    if ( v3 >= (unsigned __int64)*(unsigned int *)(v6 + 60) + 4 )
    {
      v7 = *(_DWORD *)(*(unsigned int *)(v6 + 60) + v6);
      if ( v7 == 17744 )
      {
        v5 = 6;
      }
      else if ( (_WORD)v7 == 17742 )
      {
        v5 = 5;
      }
    }
  }
  *a2 = v5;
  return v4;
}
