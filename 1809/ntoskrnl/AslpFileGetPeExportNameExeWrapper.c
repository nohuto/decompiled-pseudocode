/*
 * XREFs of AslpFileGetPeExportNameExeWrapper @ 0x1408EE628
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1407218F4 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     AslStringXmlSanitize @ 0x140720B9C (AslStringXmlSanitize.c)
 *     AslFileMappingEnsure @ 0x140721A20 (AslFileMappingEnsure.c)
 *     AslpFileGetExeWrapper @ 0x1408EDD5C (AslpFileGetExeWrapper.c)
 *     AslpFileGetExportName @ 0x1408EDEF8 (AslpFileGetExportName.c)
 */

__int64 __fastcall AslpFileGetPeExportNameExeWrapper(__int64 a1, __int64 a2)
{
  int v4; // edi
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // [rsp+60h] [rbp+18h] BYREF
  wchar_t *v10; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0;
  v10 = 0LL;
  v4 = AslFileMappingEnsure(a2);
  if ( v4 < 0 )
    goto LABEL_2;
  if ( *(_DWORD *)(a2 + 64) != 6 )
  {
    *(_DWORD *)(a1 + 824) |= 2u;
LABEL_5:
    *(_DWORD *)(a1 + 760) |= 2u;
    return 0;
  }
  if ( (int)AslpFileGetExeWrapper(&v9, a2) < 0 )
  {
    v6 = 2;
  }
  else
  {
    *(_QWORD *)(a1 + 816) = v9;
    v6 = 1;
    *(_DWORD *)(a1 + 800) = 2;
    *(_QWORD *)(a1 + 808) = 4LL;
  }
  *(_DWORD *)(a1 + 824) |= v6;
  if ( (int)AslpFileGetExportName(&v10) < 0 )
    goto LABEL_5;
  v4 = AslStringXmlSanitize(v10);
  if ( v4 >= 0 )
  {
    *(_DWORD *)(a1 + 736) = 4;
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(v7 + 2 * v8) );
    *(_DWORD *)(a1 + 760) |= 5u;
    *(_QWORD *)(a1 + 744) = v8;
    *(_QWORD *)(a1 + 752) = v7;
    return 0;
  }
LABEL_2:
  AslLogCallPrintf(1LL);
  return (unsigned int)v4;
}
