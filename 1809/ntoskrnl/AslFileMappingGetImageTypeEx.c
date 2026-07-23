/*
 * XREFs of AslFileMappingGetImageTypeEx @ 0x1408EAEDC
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x1408EAD18 (AslFileMappingGetFileKindDetail.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x140721A20 (AslFileMappingEnsure.c)
 *     AslpFileGetImageNtHeader @ 0x1408EE3EC (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x1408EED7C (AslpImageRvaToVa.c)
 */

__int64 __fastcall AslFileMappingGetImageTypeEx(_WORD *a1, _WORD *a2, int *a3, _DWORD *a4, __int64 a5)
{
  unsigned int v7; // r14d
  __int16 v8; // r8
  __int16 v9; // r15
  int v10; // ecx
  int v11; // eax
  int ImageNtHeader; // ebx
  __int64 v13; // rax
  __int16 v15; // [rsp+30h] [rbp-68h]
  _QWORD v16[10]; // [rsp+48h] [rbp-50h] BYREF
  _WORD *v18; // [rsp+A8h] [rbp+10h]

  v18 = a2;
  v16[0] = 0LL;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( *(_DWORD *)(a5 + 64) == 1 )
  {
    ImageNtHeader = -1073741701;
    goto LABEL_22;
  }
  ImageNtHeader = AslFileMappingEnsure(a5);
  if ( ImageNtHeader < 0 )
    goto LABEL_4;
  if ( *(_DWORD *)(a5 + 64) != 6 )
  {
    ImageNtHeader = -1073741701;
    goto LABEL_5;
  }
  ImageNtHeader = AslpFileGetImageNtHeader(v16, a5);
  if ( ImageNtHeader < 0 )
  {
LABEL_4:
    AslLogCallPrintf(1LL);
LABEL_5:
    v11 = 0;
    v10 = 0;
    a2 = v18;
    v8 = 0;
    goto LABEL_22;
  }
  v8 = *(_WORD *)(v16[0] + 4LL);
  v15 = v8;
  v9 = *(_WORD *)(v16[0] + 24LL);
  if ( *(_DWORD *)(a5 + 80) || !a3 && !a4 )
    goto LABEL_10;
  if ( v9 == 267 )
  {
    v7 = *(_DWORD *)(v16[0] + 232LL);
  }
  else if ( v9 == 523 )
  {
    v7 = *(_DWORD *)(v16[0] + 248LL);
  }
  if ( v7 )
  {
    v13 = AslpImageRvaToVa(v16[0], a5 + 8, v7);
    if ( v13 )
    {
      v10 = 1;
      v11 = *(_DWORD *)(v13 + 16);
      ImageNtHeader = 0;
    }
    else
    {
      AslLogCallPrintf(2LL);
      ImageNtHeader = 0;
      v11 = 0;
      v10 = 0;
    }
    a2 = v18;
    v8 = v15;
  }
  else
  {
LABEL_10:
    ImageNtHeader = 0;
    v11 = 0;
    v10 = 0;
    a2 = v18;
  }
LABEL_22:
  if ( a1 )
    *a1 = v8;
  if ( a2 )
    *a2 = v9;
  if ( a3 )
    *a3 = v10;
  if ( a4 )
    *a4 = v11;
  return (unsigned int)ImageNtHeader;
}
