/*
 * XREFs of AslpFileMakeStringVersionAttributes @ 0x140720780
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x140720710 (AslpFileGetVersionAttributes.c)
 * Callees:
 *     AslpFileStringTokenize @ 0x140178F18 (AslpFileStringTokenize.c)
 *     AslpFileVerBlockGetValueOffset @ 0x14017900C (AslpFileVerBlockGetValueOffset.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     AslStringDuplicate @ 0x14067D684 (AslStringDuplicate.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     AslStringXmlSanitize @ 0x140720B9C (AslStringXmlSanitize.c)
 *     AslpFileQueryVersionString @ 0x140720CA4 (AslpFileQueryVersionString.c)
 *     AslFree @ 0x1408EA974 (AslFree.c)
 */

__int64 __fastcall AslpFileMakeStringVersionAttributes(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // r13
  __int64 v4; // r12
  __int64 result; // rax
  unsigned __int16 *i; // rbx
  unsigned __int64 v7; // r15
  int VersionString; // edi
  signed __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int16 v11; // ax
  wchar_t *v12; // rcx
  char *v13; // r14
  unsigned __int16 *v14; // rdi
  __int16 v15; // r13
  const wchar_t *v16; // rbp
  unsigned int v17; // edx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int16 *v21; // r14
  unsigned int v22; // ebx
  unsigned __int64 v23; // r15
  unsigned __int64 j; // rbx
  __int64 v25; // rbp
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  _WORD *v30; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-50h] BYREF
  int v32[2]; // [rsp+40h] [rbp-48h] BYREF
  int v33[2]; // [rsp+48h] [rbp-40h] BYREF
  int v34; // [rsp+98h] [rbp+10h]
  __int64 v35; // [rsp+A0h] [rbp+18h] BYREF
  wchar_t *v36; // [rsp+A8h] [rbp+20h] BYREF

  v34 = (int)a2;
  v2 = a2;
  *(_QWORD *)v32 = 0LL;
  *(_QWORD *)v33 = 0LL;
  v4 = 0LL;
  v31 = 0LL;
  if ( !a2 )
  {
    *(_DWORD *)(a1 + 184) |= 2u;
    result = 0LL;
    *(_DWORD *)(a1 + 216) |= 2u;
    *(_DWORD *)(a1 + 248) |= 2u;
    *(_DWORD *)(a1 + 280) |= 2u;
    *(_DWORD *)(a1 + 312) |= 2u;
    *(_DWORD *)(a1 + 344) |= 2u;
    *(_DWORD *)(a1 + 376) |= 2u;
    *(_DWORD *)(a1 + 408) |= 2u;
    *(_DWORD *)(a1 + 792) |= 2u;
    return result;
  }
  i = a2;
  v7 = 0LL;
  v36 = 0LL;
  v30 = 0LL;
  v35 = 0LL;
  if ( a2[2] )
    goto LABEL_4;
  VersionString = AslStringDuplicate(&v36, L"\\VarFileInfo\\Translation");
  if ( VersionString >= 0 )
  {
    v11 = *v2;
    if ( *v2 > 0x7FFFu || v11 < 8u )
    {
LABEL_4:
      VersionString = -1073741811;
      AslLogCallPrintf(1LL);
      goto LABEL_23;
    }
    v12 = v36;
    v13 = (char *)v2 + v11;
    v14 = (unsigned __int16 *)v13;
    v15 = *((_WORD *)v13 - 1);
    *((_WORD *)v13 - 1) = 0;
    v16 = AslpFileStringTokenize(v12, v10, &v30);
    if ( v16 )
    {
LABEL_10:
      v17 = (_DWORD)v13 - (_DWORD)i;
      if ( (unsigned int)((_DWORD)v13 - (_DWORD)i) >= 8 )
      {
        v9 = *i;
        if ( (unsigned int)v9 <= v17 && AslpFileVerBlockGetValueOffset(&v35, (__int64)i, v17) >= 0 )
        {
          v18 = *i;
          v19 = v35 + ((i[1] + 3LL) & 0xFFFFFFFFFFFFFFFCuLL);
          v35 = v19;
          if ( v19 <= v18 )
          {
            v14 = (unsigned __int16 *)((char *)i + v18);
            for ( i = (unsigned __int16 *)((char *)i + v19);
                  i < v14;
                  i = (unsigned __int16 *)((char *)i + ((*i + 3LL) & 0xFFFFFFFFFFFFFFFCuLL)) )
            {
              if ( *i <= 8u )
                break;
              v9 = (char *)v14 - (char *)i;
              if ( *i > (unsigned __int64)((char *)v14 - (char *)i) )
                break;
              if ( !wcsicmp(v16, i + 3) )
              {
                v16 = AslpFileStringTokenize(0LL, v20, &v30);
                if ( v16 )
                  goto LABEL_10;
                goto LABEL_21;
              }
            }
          }
        }
      }
      VersionString = -1073741275;
    }
    else
    {
LABEL_21:
      v4 = (__int64)i;
      v7 = (char *)v14 - (char *)i;
      VersionString = 0;
    }
    *((_WORD *)v13 - 1) = v15;
    LODWORD(v2) = v34;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
LABEL_23:
  AslFree(v9, v36);
  if ( VersionString == -1073741275 )
  {
    v21 = 0LL;
    v22 = 0;
  }
  else
  {
    if ( VersionString < 0 )
    {
LABEL_43:
      AslLogCallPrintf(1LL);
      return (unsigned int)VersionString;
    }
    v21 = 0LL;
    v22 = 0;
    if ( AslpFileVerBlockGetValueOffset(&v31, v4, v7) >= 0 && v7 > v31 )
    {
      v21 = (unsigned __int16 *)(v31 + v4);
      v22 = v7 - v31;
    }
  }
  v23 = (unsigned __int64)v22 >> 2;
  for ( j = 0LL; j < 0x80; j += 16LL )
  {
    v25 = *(int *)((char *)&unk_140356AB0 + j);
    VersionString = AslpFileQueryVersionString(
                      (int)v32,
                      (int)v33,
                      (int)v2,
                      (int)v21,
                      v23,
                      *(NTSTRSAFE_PCWSTR *)((char *)&unk_140356AB0 + j + 8));
    if ( VersionString < 0 )
    {
      if ( VersionString != -1073741275 )
        goto LABEL_43;
      *(_DWORD *)(32 * v25 + a1 + 24) |= 2u;
    }
    else
    {
      VersionString = AslStringXmlSanitize(*(_QWORD *)v32);
      if ( VersionString < 0 )
        goto LABEL_43;
      v27 = -1LL;
      v28 = a1 + 32 * v25;
      *(_DWORD *)v28 = 4;
      do
        ++v27;
      while ( *(_WORD *)(v26 + 2 * v27) );
      *(_DWORD *)(v28 + 24) |= 1u;
      *(_QWORD *)(v28 + 8) = v27;
      *(_QWORD *)(v28 + 16) = v26;
    }
  }
  if ( v21 && v23 == 1 )
  {
    *(_DWORD *)(a1 + 768) = 2;
    *(_QWORD *)(a1 + 776) = 4LL;
    v29 = *v21;
    *(_DWORD *)(a1 + 792) |= 1u;
    *(_QWORD *)(a1 + 784) = v29;
    return 0LL;
  }
  else
  {
    *(_DWORD *)(a1 + 792) |= 2u;
    return 0LL;
  }
}
