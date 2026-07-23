/*
 * XREFs of AslpFileLargeEnsureLargeFileMapping @ 0x1408EEDF4
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1407218F4 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x1407205E0 (AslpFileMappingGetFileKind.c)
 *     AslpFileLargeGetChecksumAttributes @ 0x1408EF034 (AslpFileLargeGetChecksumAttributes.c)
 *     AslpFileLargeMapCreate @ 0x1408EF30C (AslpFileLargeMapCreate.c)
 *     AslpFileLargeMapDelete @ 0x1408EF57C (AslpFileLargeMapDelete.c)
 */

__int64 __fastcall AslpFileLargeEnsureLargeFileMapping(__int64 a1, __int64 a2)
{
  _DWORD *v5; // rdx
  int i; // ecx
  int FileKind; // ebx
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_QWORD *)(a2 + 24) < 0x100000uLL )
    return 3221225712LL;
  v11 = 0LL;
  v5 = (_DWORD *)(a1 + 24);
  for ( i = 0; i < 33; ++i )
  {
    if ( i < 0 || i > 19 && i != 22 && i != 24 && (unsigned int)(i - 26) > 5 )
      *v5 |= 2u;
    v5 += 8;
  }
  FileKind = AslpFileLargeMapCreate(&v11, a2 + 8);
  if ( FileKind >= 0 )
  {
    v8 = v11;
    if ( (int)AslpFileLargeGetChecksumAttributes(a1, v11) < 0 )
      AslLogCallPrintf(1LL);
    if ( v8 )
    {
      *(_QWORD *)(a2 + 16) = v8[1];
      *(_BYTE *)(a2 + 57) = 1;
      v9 = v8[5];
      v8[1] = 0LL;
      *(_QWORD *)(a2 + 48) = v9;
      v10 = v8[2];
      v8[5] = 0LL;
      *(_QWORD *)(a2 + 32) = v10;
      *(_QWORD *)(a2 + 40) = v8[3];
      *(_WORD *)(a2 + 58) = 1;
      *(_DWORD *)(a2 + 84) = 1;
      v8[2] = 0LL;
      v8[3] = 0LL;
      AslpFileLargeMapDelete(&v11);
      FileKind = AslpFileMappingGetFileKind((_QWORD *)(a2 + 8), (int *)(a2 + 64));
    }
    else
    {
      FileKind = -1073741584;
    }
  }
  AslpFileLargeMapDelete(&v11);
  return (unsigned int)FileKind;
}
