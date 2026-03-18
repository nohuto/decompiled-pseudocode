/*
 * XREFs of AslpFileGetExeWrapper @ 0x1408ECABC
 * Callers:
 *     AslpFileGetPeExportNameExeWrapper @ 0x1408ED388 (AslpFileGetPeExportNameExeWrapper.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140680C80 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x1408ED14C (AslpFileGetImageNtHeader.c)
 *     AslpFileHasActiveMarkWrapper @ 0x1408ED4AC (AslpFileHasActiveMarkWrapper.c)
 *     AslpFileHasSecuromWrapper @ 0x1408ED5E8 (AslpFileHasSecuromWrapper.c)
 *     AslpHasStarForceWrapper @ 0x1408EDA58 (AslpHasStarForceWrapper.c)
 */

__int64 __fastcall AslpFileGetExeWrapper(_DWORD *a1, __int64 a2)
{
  int ImageNtHeader; // ebx
  __int64 v6; // rdi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0;
  v7 = 0LL;
  if ( *(_QWORD *)(a2 + 24) >= 0x100000000uLL )
    return 0LL;
  ImageNtHeader = AslpFileGetImageNtHeader(&v7, a2);
  if ( ImageNtHeader < 0 )
    goto LABEL_4;
  v6 = v7;
  if ( (unsigned int)AslpFileHasSecuromWrapper(v7) )
  {
    *a1 = 1;
    return 0;
  }
  ImageNtHeader = AslpFileHasActiveMarkWrapper(&v7, v6, a2);
  if ( ImageNtHeader >= 0 )
  {
    if ( (_DWORD)v7 )
    {
      *a1 = 2;
    }
    else if ( *(_DWORD *)v6 == 17744 && *(_BYTE *)(v6 + 26) == 83 && *(_BYTE *)(v6 + 27) == 82 )
    {
      *a1 = 3;
    }
    else if ( (unsigned int)AslpHasStarForceWrapper(v6) )
    {
      *a1 = 4;
    }
    return 0;
  }
  if ( ImageNtHeader == -1073741275 )
  {
    AslLogCallPrintf(2LL);
    return (unsigned int)ImageNtHeader;
  }
LABEL_4:
  AslLogCallPrintf(1LL);
  return (unsigned int)ImageNtHeader;
}
