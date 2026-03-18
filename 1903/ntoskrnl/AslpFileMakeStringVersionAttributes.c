/*
 * XREFs of AslpFileMakeStringVersionAttributes @ 0x14092AE88
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x14092A5B8 (AslpFileGetVersionAttributes.c)
 * Callees:
 *     AslpFileVerBlockGetValueOffset @ 0x140345D8C (AslpFileVerBlockGetValueOffset.c)
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     AslStringXmlSanitize @ 0x140926148 (AslStringXmlSanitize.c)
 *     AslpFileQueryVersionString @ 0x14092B470 (AslpFileQueryVersionString.c)
 *     AslpFileVerQueryBlock @ 0x14092B6A0 (AslpFileVerQueryBlock.c)
 */

__int64 __fastcall AslpFileMakeStringVersionAttributes(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  int v3; // r12d
  _DWORD *v5; // rax
  __int64 v6; // rcx
  int v7; // edi
  int v8; // eax
  int v9; // edi
  __int64 v10; // rsi
  unsigned __int16 *v11; // rsi
  unsigned int v12; // edi
  unsigned __int64 v13; // r15
  __int64 v14; // r13
  int VersionString; // eax
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  const wchar_t *pszSrc; // [rsp+28h] [rbp-18h]
  int v22[2]; // [rsp+30h] [rbp-10h] BYREF
  int v23[2]; // [rsp+38h] [rbp-8h] BYREF
  __int64 v24; // [rsp+88h] [rbp+48h] BYREF
  __int64 v25; // [rsp+90h] [rbp+50h] BYREF
  __int64 v26; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0LL;
  v3 = a2;
  *(_QWORD *)v22 = 0LL;
  *(_QWORD *)v23 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  if ( a2 )
  {
    v8 = AslpFileVerQueryBlock(a2, L"\\VarFileInfo\\Translation", &v25, &v24);
    v7 = v8;
    if ( v8 == -1073741275 )
      goto LABEL_8;
    if ( v8 < 0 )
    {
LABEL_25:
      AslLogCallPrintf(1LL);
      return (unsigned int)v7;
    }
    v9 = v24;
    v10 = v25;
    if ( AslpFileVerBlockGetValueOffset(&v26, v25, v24) < 0 )
    {
LABEL_8:
      v11 = 0LL;
      v12 = 0;
    }
    else
    {
      v11 = (unsigned __int16 *)(v26 + v10);
      v12 = v9 - v26;
    }
    v13 = (unsigned __int64)v12 >> 2;
    do
    {
      v14 = *(int *)((char *)&unk_140376350 + v2);
      pszSrc = *(const wchar_t **)((char *)&unk_140376350 + v2 + 8);
      LODWORD(v24) = *(_DWORD *)((char *)&unk_140376350 + v2);
      VersionString = AslpFileQueryVersionString((int)v22, (int)v23, v3, (int)v11, v13, pszSrc);
      v7 = VersionString;
      if ( VersionString < 0 )
      {
        if ( VersionString != -1073741275 )
          goto LABEL_25;
        *(_DWORD *)(32 * v14 + a1 + 24) |= 2u;
      }
      else
      {
        v16 = *(_QWORD *)v22;
        v7 = AslStringXmlSanitize(*(_WORD **)v22);
        if ( v7 < 0 )
          goto LABEL_25;
        v17 = 32LL * (int)v24;
        v18 = -1LL;
        *(_DWORD *)(v17 + a1) = 4;
        do
          ++v18;
        while ( *(_WORD *)(v16 + 2 * v18) );
        *(_DWORD *)(v17 + a1 + 24) |= 1u;
        *(_QWORD *)(v17 + a1 + 8) = v18;
        *(_QWORD *)(v17 + a1 + 16) = v16;
      }
      v2 += 16LL;
    }
    while ( v2 < 0x80 );
    if ( v11 && v13 == 1 )
    {
      *(_DWORD *)(a1 + 768) = 2;
      *(_QWORD *)(a1 + 776) = 4LL;
      v19 = *v11;
      *(_DWORD *)(a1 + 792) |= 1u;
      *(_QWORD *)(a1 + 784) = v19;
    }
    else
    {
      *(_DWORD *)(a1 + 792) |= 2u;
    }
    return 0;
  }
  else
  {
    v5 = (_DWORD *)(a1 + 184);
    v6 = 8LL;
    do
    {
      *v5 |= 2u;
      v5 += 8;
      --v6;
    }
    while ( v6 );
    *(_DWORD *)(a1 + 792) |= 2u;
    return 0;
  }
}
