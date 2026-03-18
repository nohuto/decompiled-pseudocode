/*
 * XREFs of ?bFoundExactMatch@MAPPER@@QEAAHPEAPEAU_FONTHASH@@H@Z @ 0x1C0027A80
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0027840 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 * Callees:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C0028020 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C007F9F8 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     cCapString @ 0x1C007FB68 (cCapString.c)
 *     ?flFontType@PFEOBJ@@QEAAKXZ @ 0x1C008674C (-flFontType@PFEOBJ@@QEAAKXZ.c)
 *     GetAppCompatFlags2 @ 0x1C00AC380 (GetAppCompatFlags2.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall MAPPER::bFoundExactMatch(MAPPER *this, struct _FONTHASH **a2, int a3)
{
  _DWORD *v3; // rax
  int v4; // r13d
  _QWORD *v6; // r10
  WCHAR *v7; // r15
  struct _HASHBUCKET *j; // r14
  char *v9; // r9
  char *v10; // rdi
  WCHAR *v11; // rbx
  __int64 v12; // rax
  char v13; // r11
  char *v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rax
  char *v17; // rbx
  unsigned __int16 *v18; // rax
  int v19; // ecx
  int v20; // edx
  struct _HASHBUCKET *v21; // r9
  WCHAR *v22; // rdx
  unsigned int v23; // ecx
  WCHAR v24; // ax
  WCHAR *v25; // rcx
  WCHAR v26; // dx
  struct _HASHBUCKET *v27; // rbx
  struct _HASHBUCKET *v28; // rax
  char *v29; // r15
  int v30; // edi
  struct _HASHBUCKET **v31; // rsi
  _QWORD *v32; // rdx
  int v33; // r12d
  struct _HASHBUCKET *v34; // r14
  MAPPER *v35; // r10
  unsigned int v36; // r11d
  _DWORD *v37; // r8
  int v38; // ecx
  _DWORD *v39; // rax
  int v41; // ecx
  unsigned int v42; // edx
  int v43; // ecx
  unsigned int v44; // eax
  int v45; // edx
  unsigned int v46; // eax
  _QWORD *v47; // rbx
  int v48; // eax
  int v49; // r8d
  __int64 v50; // r9
  _QWORD *v51; // rcx
  __int64 v52; // rax
  int v53; // eax
  int v54; // eax
  const unsigned __int16 *v55; // rbx
  const unsigned __int16 *v56; // rbx
  __int64 v57; // rdx
  __int16 AppCompatFlags2; // ax
  char *v59; // rdi
  unsigned __int16 *v60; // rax
  int v61; // edx
  int v62; // ecx
  char v63; // [rsp+30h] [rbp-99h]
  unsigned __int8 v64[3]; // [rsp+31h] [rbp-98h] BYREF
  char v65; // [rsp+34h] [rbp-95h] BYREF
  char v66; // [rsp+35h] [rbp-94h]
  char v67; // [rsp+36h] [rbp-93h]
  char *i; // [rsp+38h] [rbp-91h] BYREF
  _QWORD *v69; // [rsp+40h] [rbp-89h]
  int v70; // [rsp+48h] [rbp-81h]
  int v71; // [rsp+4Ch] [rbp-7Dh]
  int v72; // [rsp+50h] [rbp-79h]
  MAPPER *v73; // [rsp+58h] [rbp-71h]
  int v74; // [rsp+60h] [rbp-69h]
  _QWORD v75[2]; // [rsp+68h] [rbp-61h] BYREF
  UNICODE_STRING SourceString; // [rsp+78h] [rbp-51h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-41h] BYREF
  struct _HASHBUCKET *v78; // [rsp+98h] [rbp-31h] BYREF
  struct _HASHBUCKET *v79; // [rsp+A0h] [rbp-29h]
  struct _HASHBUCKET *v80; // [rsp+A8h] [rbp-21h]
  _WORD v81[32]; // [rsp+B0h] [rbp-19h] BYREF

  v3 = (_DWORD *)*((_QWORD *)this + 29);
  v4 = 0;
  v74 = a3;
  v73 = this;
  v64[0] = 1;
  *v3 &= ~1u;
  v6 = *a2;
  v70 = 0;
  v75[0] = a2;
  v69 = v6;
  v75[1] = v6;
  if ( !v6 )
    return 0LL;
  v7 = (WCHAR *)*((_QWORD *)this + 2);
  j = 0LL;
  v9 = 0LL;
  v10 = (char *)gpfsTable;
  v11 = v7;
  v71 = *((_DWORD *)v6 + 1);
  v12 = *((_QWORD *)this + 1);
  v80 = 0LL;
  v79 = 0LL;
  v78 = 0LL;
  v13 = *(_BYTE *)(v12 + 23);
  v63 = v13;
  v14 = (char *)gpfsTable + 196 * gcfsTable;
  v66 = v13;
  v67 = v13;
  v65 = v13;
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
    DestinationString.Buffer = v81;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
    v6 = v69;
    v9 = 0LL;
    v13 = v63;
  }
  v16 = (int)v15;
  v17 = 0LL;
  v81[v16] = 0;
  if ( v10 >= v14 )
    goto LABEL_14;
  while ( 1 )
  {
    v18 = v81;
    do
    {
      v19 = *(unsigned __int16 *)((char *)v18 + v10 + 64 - (char *)v81);
      v20 = *v18 - v19;
      if ( v20 )
        break;
      ++v18;
    }
    while ( v19 );
    if ( v20 )
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
          v9 = v10;
        i = v9;
      }
      goto LABEL_12;
    }
    AppCompatFlags2 = GetAppCompatFlags2(1024LL);
    v9 = i;
    if ( (AppCompatFlags2 & 0x400) != 0 )
      break;
    v13 = v63;
LABEL_12:
    v10 += 196;
    if ( v10 >= v14 )
      goto LABEL_13;
  }
  v17 = v10;
LABEL_13:
  v6 = v69;
  if ( v9 )
  {
LABEL_74:
    v56 = (const unsigned __int16 *)(v9 + 130);
    if ( (v9[195] & 1) != 0 )
    {
      v78 = FHOBJ::pbktSearch((FHOBJ *)v75, v7, 0LL, 0LL, 0);
      j = v78;
      v27 = FHOBJ::pbktSearch((FHOBJ *)v75, v56, 0LL, 0LL, 0);
      v79 = v27;
    }
    else
    {
      v27 = FHOBJ::pbktSearch((FHOBJ *)v75, v56, 0LL, 0LL, 0);
      v79 = v27;
      v66 = i[194];
    }
    goto LABEL_30;
  }
LABEL_14:
  i = v17;
  v9 = v17;
  if ( v17 )
    goto LABEL_74;
  v21 = 0LL;
  if ( v7 )
  {
    v22 = v7;
    v23 = 0;
    if ( *v7 )
    {
      LOBYTE(v24) = *v7;
      do
      {
        ++v22;
        v23 = (unsigned __int8)v24 + 257 * v23;
        v24 = *v22;
      }
      while ( *v22 );
    }
    for ( j = (struct _HASHBUCKET *)v6[v23 % *((_DWORD *)v6 + 2) + 5]; j; j = *(struct _HASHBUCKET **)j )
    {
      v25 = v7;
      if ( *v7 == *((_WORD *)j + 30) )
      {
        v26 = *v7;
        while ( v26 )
        {
          v26 = v25[1];
          if ( v26 != *(WCHAR *)((char *)++v25 + j - (struct _HASHBUCKET *)v7 + 60) )
            goto LABEL_24;
        }
        if ( (*((_DWORD *)j + 8) & 2) == 0 )
          goto LABEL_27;
        v21 = j;
      }
LABEL_24:
      ;
    }
    j = v21;
  }
LABEL_27:
  v78 = j;
  if ( !v74 )
    goto LABEL_29;
  if ( j )
    goto LABEL_29;
  v55 = (const unsigned __int16 *)gpfmffTable;
  if ( !gpfmffTable )
    goto LABEL_29;
  v59 = (char *)gpfmffTable + 128 * (unsigned __int64)gcfmffTable;
  cCapString(v81, v7, 32LL, v21);
  if ( v55 >= (const unsigned __int16 *)v59 )
    goto LABEL_29;
  while ( 1 )
  {
    v60 = v81;
    do
    {
      v61 = *(unsigned __int16 *)((char *)v60 + (char *)v55 - (char *)v81);
      v62 = *v60 - v61;
      if ( v62 )
        break;
      ++v60;
    }
    while ( v61 );
    if ( !v62 )
      break;
    v55 += 64;
    if ( v55 >= (const unsigned __int16 *)v59 )
      goto LABEL_29;
  }
  if ( v55 )
  {
    v27 = FHOBJ::pbktSearch((FHOBJ *)v75, v55 + 32, 0LL, 0LL, 0);
    v79 = v27;
    v70 = 1;
  }
  else
  {
LABEL_29:
    v27 = 0LL;
  }
LABEL_30:
  if ( *((_WORD *)this + 12) && v71 == 1 )
  {
    v28 = FHOBJ::pbktSearch((FHOBJ *)v75, (const unsigned __int16 *)this + 12, 0LL, 0LL, 0);
    v80 = v28;
  }
  else
  {
    v28 = 0LL;
  }
  if ( !j && !v27 && !v28 )
    return 0LL;
  v29 = &v65;
  v30 = 0;
  v31 = &v78;
  v32 = 0LL;
  **((_DWORD **)this + 29) |= 1u;
  *((_DWORD *)this + 63) |= 0x40000000u;
  v33 = v72;
  while ( 1 )
  {
    v34 = *v31;
    v35 = v73;
    if ( *v31 )
    {
      v41 = *((_DWORD *)v73 + 63);
      v42 = v41 & 0xFFBFFFFF;
      v43 = v41 | 0x400000;
      *((_BYTE *)v73 + 284) = *v29;
      if ( (*((_DWORD *)v34 + 8) & 2) != 0 )
        v42 = v43;
      v44 = v42;
      v45 = v42 & 0x7FFFFFFF;
      v46 = v44 | 0x80000000;
      if ( v30 == 2 )
        v45 = v46;
      *((_DWORD *)v35 + 63) = v45;
      v32 = 0LL;
      v47 = (_QWORD *)*((_QWORD *)v34 + 1);
      v69 = 0LL;
      if ( v47 )
        break;
    }
LABEL_35:
    ++v30;
    ++v29;
    ++v31;
    if ( v30 >= 3 )
    {
      v36 = 0;
      goto LABEL_37;
    }
  }
  while ( 2 )
  {
    i = (char *)v47[1];
    v48 = MAPPER::bNearMatch(v35, (struct PFEOBJ *)&i, v64, 0);
    v35 = v73;
    if ( !v48 )
    {
LABEL_53:
      v47 = (_QWORD *)*v47;
      if ( !v47 )
      {
        v32 = v69;
        goto LABEL_35;
      }
      continue;
    }
    break;
  }
  v33 = v30;
  v49 = *((_DWORD *)v73 + 63);
  v50 = v47[1];
  **((_DWORD **)v73 + 27) = *((_DWORD *)v73 + 47);
  v51 = (_QWORD *)*((_QWORD *)v35 + 28);
  v52 = *((_QWORD *)v35 + 24);
  v69 = v47;
  *v51 = v52;
  **((_DWORD **)v35 + 29) = **((_DWORD **)v35 + 29) & 0xFFFFFF | (v64[0] << 24);
  *((_QWORD *)v35 + 25) = v50;
  if ( (v49 & 0x80u) != 0 )
  {
    *((_DWORD *)v35 + 63) |= 0x1000000u;
  }
  else
  {
    v53 = *(_DWORD *)(v50 + 80);
    *((_DWORD *)v35 + 63) &= ~0x1000000u;
    *((_DWORD *)v35 + 52) = v53;
  }
  v54 = *((_DWORD *)v35 + 46);
  if ( v54 )
  {
LABEL_58:
    *((_DWORD *)v35 + 45) = v54;
    goto LABEL_53;
  }
  if ( *((_DWORD *)v34 + 7) && (PFEOBJ::flFontType((PFEOBJ *)&i) & 1) == 0 )
  {
    *((_DWORD *)v35 + 46) = 1;
    v54 = 1;
    goto LABEL_58;
  }
  v36 = 1;
  v32 = v47;
LABEL_37:
  if ( v32 )
  {
    if ( v33 == 1 )
    {
      if ( v70 )
        goto LABEL_40;
    }
    else if ( v71 )
    {
LABEL_40:
      v37 = (_DWORD *)*((_QWORD *)v35 + 29);
      v38 = HIBYTE(*v37);
      if ( HIBYTE(*v37) != 0xFF
        || (v57 = v32[1], *(_DWORD *)(*(_QWORD *)(v57 + 32) + 40LL))
        || (*(_DWORD *)(v57 + 12) & 1) != 0 )
      {
        if ( v38 == 255 )
        {
          v4 = 1;
        }
        else
        {
          v39 = &charsets;
          do
          {
            if ( *v39 == v38 )
            {
              v4 = codepages[v4];
              goto LABEL_45;
            }
            ++v4;
            ++v39;
          }
          while ( (__int64)v39 < (__int64)&FLOAT_16_0 );
          v4 = gbDBCSCodePage != 0 ? 0x4E4 : 0;
        }
      }
      else if ( gbDBCSCodePage )
      {
        v4 = 1252;
      }
LABEL_45:
      *v37 |= v4 << 8;
      goto LABEL_46;
    }
    **((_DWORD **)v35 + 29) |= 2u;
    goto LABEL_40;
  }
LABEL_46:
  *((_DWORD *)v35 + 63) &= ~0x400000u;
  return v36;
}
