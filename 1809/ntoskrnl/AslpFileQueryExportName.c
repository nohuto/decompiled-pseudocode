/*
 * XREFs of AslpFileQueryExportName @ 0x1408EEB34
 * Callers:
 *     AslpFileGetExportName @ 0x1408EDEF8 (AslpFileGetExportName.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1400F2CC0 (RtlImageDirectoryEntryToData.c)
 *     RtlStringCchCopyA @ 0x14012A8C4 (RtlStringCchCopyA.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x1408EE3EC (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x1408EED7C (AslpImageRvaToVa.c)
 */

__int64 __fastcall AslpFileQueryExportName(NTSTRSAFE_PSTR pszDest, __int64 a2)
{
  int ImageNtHeader; // ebx
  unsigned int *v5; // rax
  unsigned __int64 v6; // rdx
  const char *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  size_t v10; // rdx
  ULONG Size; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  Size = 0;
  v13 = 0LL;
  *pszDest = 0;
  ImageNtHeader = AslpFileGetImageNtHeader(&v13, a2);
  if ( ImageNtHeader < 0 )
    goto LABEL_2;
  v5 = (unsigned int *)RtlImageDirectoryEntryToData(*(PVOID *)(a2 + 32), *(_BYTE *)(a2 + 59), 0, &Size);
  if ( !v5 || Size < 0x28 )
  {
    ImageNtHeader = -1073741275;
    if ( !v5 )
      return (unsigned int)ImageNtHeader;
LABEL_17:
    AslLogCallPrintf(2LL);
    return (unsigned int)ImageNtHeader;
  }
  v6 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int64)v5 < v6 || (unsigned __int64)(v5 + 10) > *(_QWORD *)(a2 + 24) + v6 )
  {
    ImageNtHeader = -1073741701;
    goto LABEL_17;
  }
  v7 = (const char *)AslpImageRvaToVa(v13, a2 + 8, v5[3]);
  if ( !v7 || (v8 = *(_QWORD *)(a2 + 32), v9 = *(_QWORD *)(a2 + 24), (unsigned __int64)v7 >= v9 + v8) || !*v7 )
  {
    ImageNtHeader = -1073741701;
    goto LABEL_17;
  }
  v10 = (unsigned int)(v8 + v9 - (_DWORD)v7);
  if ( (unsigned int)v10 > 0x100 )
    v10 = 256LL;
  ImageNtHeader = RtlStringCchCopyA(pszDest, v10, v7);
  if ( ImageNtHeader >= 0 )
    return 0;
LABEL_2:
  AslLogCallPrintf(1LL);
  return (unsigned int)ImageNtHeader;
}
