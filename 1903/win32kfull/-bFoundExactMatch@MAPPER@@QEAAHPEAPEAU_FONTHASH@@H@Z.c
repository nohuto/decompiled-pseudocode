/*
 * XREFs of ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C00A71C0
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C00A6F94 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     cCapString @ 0x1C004C288 (cCapString.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C004CE94 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C00746D4 (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     GetAppCompatFlags2 @ 0x1C0092010 (GetAppCompatFlags2.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C00A7780 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall MAPPER::bFoundExactMatch(MAPPER *this, struct _FONTHASH **a2, int a3)
{
  _DWORD *v3; // rax
  unsigned int v4; // r13d
  _QWORD *v6; // r10
  WCHAR *v7; // r15
  struct _HASHBUCKET *j; // r14
  __int64 v9; // r9
  char *v10; // rdi
  WCHAR *v11; // rbx
  __int64 v12; // rax
  char v13; // r11
  char *v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rax
  char *v17; // rbx
  WCHAR *v18; // rax
  __int64 v19; // r8
  int v20; // ecx
  __int64 v21; // rdx
  struct _HASHBUCKET *v22; // r9
  WCHAR *v23; // rdx
  unsigned int v24; // ecx
  WCHAR v25; // ax
  WCHAR *v26; // rcx
  WCHAR v27; // dx
  struct _HASHBUCKET *v28; // rbx
  struct _HASHBUCKET *v29; // rax
  char *v30; // r15
  int v31; // edi
  struct _HASHBUCKET **v32; // rsi
  _QWORD *v33; // rdx
  int v34; // r12d
  struct _HASHBUCKET *v35; // r14
  MAPPER *v36; // r10
  unsigned int v37; // r11d
  _DWORD *v38; // r8
  int v39; // ecx
  _DWORD *v40; // rax
  int v42; // ecx
  unsigned int v43; // edx
  int v44; // ecx
  unsigned int v45; // eax
  int v46; // edx
  unsigned int v47; // eax
  _QWORD *v48; // rbx
  int v49; // eax
  int v50; // r8d
  __int64 v51; // r9
  _QWORD *v52; // rcx
  __int64 v53; // rax
  int v54; // eax
  int v55; // eax
  const unsigned __int16 *v56; // rbx
  const unsigned __int16 *v57; // rbx
  __int64 v58; // rdx
  __int16 AppCompatFlags2; // ax
  char *v60; // rdi
  WCHAR *v61; // rax
  int v62; // edx
  int v63; // ecx
  char v64; // [rsp+30h] [rbp-99h]
  unsigned __int8 v65[3]; // [rsp+31h] [rbp-98h] BYREF
  char v66; // [rsp+34h] [rbp-95h] BYREF
  char v67; // [rsp+35h] [rbp-94h]
  char v68; // [rsp+36h] [rbp-93h]
  __int64 i; // [rsp+38h] [rbp-91h] BYREF
  _QWORD *v70; // [rsp+40h] [rbp-89h]
  int v71; // [rsp+48h] [rbp-81h]
  int v72; // [rsp+4Ch] [rbp-7Dh]
  int v73; // [rsp+50h] [rbp-79h]
  MAPPER *v74; // [rsp+58h] [rbp-71h]
  int v75; // [rsp+60h] [rbp-69h]
  _QWORD v76[2]; // [rsp+68h] [rbp-61h] BYREF
  UNICODE_STRING SourceString; // [rsp+78h] [rbp-51h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-41h] BYREF
  struct _HASHBUCKET *v79; // [rsp+98h] [rbp-31h] BYREF
  struct _HASHBUCKET *v80; // [rsp+A0h] [rbp-29h]
  struct _HASHBUCKET *v81; // [rsp+A8h] [rbp-21h]
  WCHAR v82[32]; // [rsp+B0h] [rbp-19h] BYREF

  v3 = (_DWORD *)*((_QWORD *)this + 29);
  v4 = 0;
  v75 = a3;
  v74 = this;
  v65[0] = 1;
  *v3 &= ~1u;
  v6 = *a2;
  v71 = 0;
  v76[0] = a2;
  v70 = v6;
  v76[1] = v6;
  if ( !v6 )
    return 0LL;
  v7 = (WCHAR *)*((_QWORD *)this + 2);
  j = 0LL;
  v9 = 0LL;
  v10 = (char *)gpfsTable;
  v11 = v7;
  v72 = *((_DWORD *)v6 + 1);
  v12 = *((_QWORD *)this + 1);
  v81 = 0LL;
  v80 = 0LL;
  v79 = 0LL;
  v13 = *(_BYTE *)(v12 + 23);
  v64 = v13;
  *(_QWORD *)&SourceString.Length = 0LL;
  v14 = (char *)gpfsTable + 196 * gcfsTable;
  SourceString.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v67 = v13;
  v68 = v13;
  v66 = v13;
  for ( i = 0LL; v11 < v7 + 31; ++v11 )
  {
    if ( !*v11 )
      break;
  }
  v15 = v11 - v7;
  if ( (_DWORD)v15 )
  {
    SourceString.Buffer = v7;
    SourceString.MaximumLength = 64;
    DestinationString.MaximumLength = 64;
    SourceString.Length = 2 * v15;
    DestinationString.Buffer = v82;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
    v6 = v70;
    v9 = 0LL;
    v13 = v64;
  }
  v16 = (int)v15;
  v17 = 0LL;
  v82[v16] = 0;
  if ( v10 >= v14 )
    goto LABEL_14;
  while ( 1 )
  {
    v18 = v82;
    v19 = v10 + 64 - (char *)v82;
    do
    {
      v20 = *(WCHAR *)((char *)v18 + v19);
      v21 = (unsigned int)*v18 - v20;
      if ( (_DWORD)v21 )
        break;
      ++v18;
    }
    while ( v20 );
    if ( (_DWORD)v21 )
      goto LABEL_12;
    if ( v10 != gpfsTable )
    {
      if ( (v10[129] & 1) != 0 )
      {
        v17 = v10;
      }
      else
      {
        if ( v13 == v10[128] )
          v9 = (__int64)v10;
        i = v9;
      }
      goto LABEL_12;
    }
    AppCompatFlags2 = GetAppCompatFlags2(1024LL, v21, v19, v9);
    v9 = i;
    if ( (AppCompatFlags2 & 0x400) != 0 )
      break;
    v13 = v64;
LABEL_12:
    v10 += 196;
    if ( v10 >= v14 )
      goto LABEL_13;
  }
  v17 = v10;
LABEL_13:
  v6 = v70;
  if ( v9 )
  {
LABEL_74:
    v57 = (const unsigned __int16 *)(v9 + 130);
    if ( (*(_BYTE *)(v9 + 195) & 1) != 0 )
    {
      v79 = FHOBJ::pbktSearch((FHOBJ *)v76, v7, 0LL, 0LL, 0);
      j = v79;
      v28 = FHOBJ::pbktSearch((FHOBJ *)v76, v57, 0LL, 0LL, 0);
      v80 = v28;
    }
    else
    {
      v28 = FHOBJ::pbktSearch((FHOBJ *)v76, v57, 0LL, 0LL, 0);
      v80 = v28;
      v67 = *(_BYTE *)(i + 194);
    }
    goto LABEL_30;
  }
LABEL_14:
  i = (__int64)v17;
  v9 = (__int64)v17;
  if ( v17 )
    goto LABEL_74;
  v22 = 0LL;
  if ( v7 )
  {
    v23 = v7;
    v24 = 0;
    if ( *v7 )
    {
      LOBYTE(v25) = *v7;
      do
      {
        ++v23;
        v24 = (unsigned __int8)v25 + 257 * v24;
        v25 = *v23;
      }
      while ( *v23 );
    }
    for ( j = (struct _HASHBUCKET *)v6[v24 % *((_DWORD *)v6 + 2) + 5]; j; j = *(struct _HASHBUCKET **)j )
    {
      v26 = v7;
      if ( *v7 == *((_WORD *)j + 30) )
      {
        v27 = *v7;
        while ( v27 )
        {
          v27 = v26[1];
          if ( v27 != *(WCHAR *)((char *)++v26 + j - (struct _HASHBUCKET *)v7 + 60) )
            goto LABEL_24;
        }
        if ( (*((_DWORD *)j + 8) & 2) == 0 )
          goto LABEL_27;
        v22 = j;
      }
LABEL_24:
      ;
    }
    j = v22;
  }
LABEL_27:
  v79 = j;
  if ( !v75 )
    goto LABEL_29;
  if ( j )
    goto LABEL_29;
  v56 = (const unsigned __int16 *)gpfmffTable;
  if ( !gpfmffTable )
    goto LABEL_29;
  v60 = (char *)gpfmffTable + 128 * (unsigned __int64)gcfmffTable;
  cCapString(v82, v7, 32);
  if ( v56 >= (const unsigned __int16 *)v60 )
    goto LABEL_29;
  while ( 1 )
  {
    v61 = v82;
    do
    {
      v62 = *(WCHAR *)((char *)v61 + (char *)v56 - (char *)v82);
      v63 = *v61 - v62;
      if ( v63 )
        break;
      ++v61;
    }
    while ( v62 );
    if ( !v63 )
      break;
    v56 += 64;
    if ( v56 >= (const unsigned __int16 *)v60 )
      goto LABEL_29;
  }
  if ( v56 )
  {
    v28 = FHOBJ::pbktSearch((FHOBJ *)v76, v56 + 32, 0LL, 0LL, 0);
    v80 = v28;
    v71 = 1;
  }
  else
  {
LABEL_29:
    v28 = 0LL;
  }
LABEL_30:
  if ( *((_WORD *)this + 12) && v72 == 1 )
  {
    v29 = FHOBJ::pbktSearch((FHOBJ *)v76, (const unsigned __int16 *)this + 12, 0LL, 0LL, 0);
    v81 = v29;
  }
  else
  {
    v29 = 0LL;
  }
  if ( !j && !v28 && !v29 )
    return 0LL;
  v30 = &v66;
  v31 = 0;
  v32 = &v79;
  v33 = 0LL;
  **((_DWORD **)this + 29) |= 1u;
  *((_DWORD *)this + 63) |= 0x40000000u;
  v34 = v73;
  while ( 1 )
  {
    v35 = *v32;
    v36 = v74;
    if ( *v32 )
    {
      v42 = *((_DWORD *)v74 + 63);
      v43 = v42 & 0xFFBFFFFF;
      v44 = v42 | 0x400000;
      *((_BYTE *)v74 + 284) = *v30;
      if ( (*((_DWORD *)v35 + 8) & 2) != 0 )
        v43 = v44;
      v45 = v43;
      v46 = v43 & 0x7FFFFFFF;
      v47 = v45 | 0x80000000;
      if ( v31 == 2 )
        v46 = v47;
      *((_DWORD *)v36 + 63) = v46;
      v33 = 0LL;
      v48 = (_QWORD *)*((_QWORD *)v35 + 1);
      v70 = 0LL;
      if ( v48 )
        break;
    }
LABEL_35:
    ++v31;
    ++v30;
    ++v32;
    if ( v31 >= 3 )
    {
      v37 = 0;
      goto LABEL_37;
    }
  }
  while ( 2 )
  {
    i = v48[1];
    v49 = MAPPER::bNearMatch(v36, (struct PFEOBJ *)&i, v65, 0);
    v36 = v74;
    if ( !v49 )
    {
LABEL_53:
      v48 = (_QWORD *)*v48;
      if ( !v48 )
      {
        v33 = v70;
        goto LABEL_35;
      }
      continue;
    }
    break;
  }
  v34 = v31;
  v50 = *((_DWORD *)v74 + 63);
  v51 = v48[1];
  **((_DWORD **)v74 + 27) = *((_DWORD *)v74 + 47);
  v52 = (_QWORD *)*((_QWORD *)v36 + 28);
  v53 = *((_QWORD *)v36 + 24);
  v70 = v48;
  *v52 = v53;
  **((_DWORD **)v36 + 29) = **((_DWORD **)v36 + 29) & 0xFFFFFF | (v65[0] << 24);
  *((_QWORD *)v36 + 25) = v51;
  if ( (v50 & 0x80u) != 0 )
  {
    *((_DWORD *)v36 + 63) |= 0x1000000u;
  }
  else
  {
    v54 = *(_DWORD *)(v51 + 80);
    *((_DWORD *)v36 + 63) &= ~0x1000000u;
    *((_DWORD *)v36 + 52) = v54;
  }
  v55 = *((_DWORD *)v36 + 46);
  if ( v55 )
  {
LABEL_58:
    *((_DWORD *)v36 + 45) = v55;
    goto LABEL_53;
  }
  if ( *((_DWORD *)v35 + 7) && (PFEOBJ::flFontType((PFEOBJ *)&i) & 1) == 0 )
  {
    *((_DWORD *)v36 + 46) = 1;
    v55 = 1;
    goto LABEL_58;
  }
  v37 = 1;
  v33 = v48;
LABEL_37:
  if ( v33 )
  {
    if ( v34 == 1 )
    {
      if ( v71 )
        goto LABEL_40;
    }
    else if ( v72 )
    {
LABEL_40:
      v38 = (_DWORD *)*((_QWORD *)v36 + 29);
      v39 = HIBYTE(*v38);
      if ( HIBYTE(*v38) != 0xFF
        || (v58 = v33[1], *(_DWORD *)(*(_QWORD *)(v58 + 32) + 40LL))
        || (*(_DWORD *)(v58 + 12) & 1) != 0 )
      {
        if ( v39 == 255 )
        {
          v4 = 1;
        }
        else
        {
          v40 = &charsets;
          do
          {
            if ( *v40 == v39 )
            {
              v4 = codepages[v4];
              goto LABEL_45;
            }
            ++v4;
            ++v40;
          }
          while ( v4 < 0x11 );
          v4 = gbDBCSCodePage != 0 ? 0x4E4 : 0;
        }
      }
      else if ( gbDBCSCodePage )
      {
        v4 = 1252;
      }
LABEL_45:
      *v38 |= v4 << 8;
      goto LABEL_46;
    }
    **((_DWORD **)v36 + 29) |= 2u;
    goto LABEL_40;
  }
LABEL_46:
  *((_DWORD *)v36 + 63) &= ~0x400000u;
  return v37;
}
