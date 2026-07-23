/*
 * XREFs of LdrpSearchResourceSection_U @ 0x1406C5CD0
 * Callers:
 *     LdrpGetRcConfig @ 0x14011D584 (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x14011D6C0 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlFindMessage @ 0x1406C58E0 (RtlFindMessage.c)
 *     LdrFindResource_U @ 0x14077D110 (LdrFindResource_U.c)
 *     LdrFindResourceDirectory_U @ 0x1408CF140 (LdrFindResourceDirectory_U.c)
 *     LdrFindResourceEx_U @ 0x1408CF160 (LdrFindResourceEx_U.c)
 *     RtlLoadString @ 0x1408CFE20 (RtlLoadString.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1400AFB30 (RtlImageDirectoryEntryToData.c)
 *     LdrIsResItemExist @ 0x14011D30C (LdrIsResItemExist.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x14011D6C0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpGetParentLangId @ 0x14016A38C (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 *     LdrpCompareResourceNames_U @ 0x1406C67F0 (LdrpCompareResourceNames_U.c)
 */

int __fastcall LdrpSearchResourceSection_U(char *a1, __int64 *a2, unsigned int a3, ULONG a4, unsigned int **a5)
{
  ULONG v5; // r14d
  int v6; // r15d
  __int64 *v7; // r13
  int v8; // eax
  unsigned __int16 v9; // r12
  unsigned int *v10; // rax
  unsigned int *v11; // rbx
  unsigned int *v12; // rsi
  __int64 v13; // r9
  __int64 v14; // rcx
  char v15; // di
  char v16; // dl
  unsigned int v17; // ecx
  __int64 v18; // rax
  int v19; // r8d
  int v20; // eax
  unsigned int *v21; // rdx
  unsigned __int16 v22; // di
  unsigned int *v23; // rsi
  unsigned __int16 v24; // cx
  unsigned int *v25; // rax
  unsigned __int16 v26; // r14
  char *v27; // rdi
  __int64 v28; // rax
  char v29; // di
  unsigned int *v30; // r15
  int v31; // eax
  bool v32; // cl
  int v33; // ebx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int result; // eax
  int v38; // eax
  __int16 v39; // cx
  bool v40; // zf
  int v41; // eax
  int v42; // eax
  int v43; // eax
  __int16 v44; // ax
  __int16 v45[2]; // [rsp+30h] [rbp-118h] BYREF
  char v46; // [rsp+34h] [rbp-114h]
  bool v47; // [rsp+35h] [rbp-113h]
  char v48; // [rsp+36h] [rbp-112h]
  int v49; // [rsp+38h] [rbp-110h]
  char v50; // [rsp+3Ch] [rbp-10Ch]
  unsigned int v51; // [rsp+40h] [rbp-108h]
  unsigned int v52; // [rsp+44h] [rbp-104h]
  ULONG Size; // [rsp+48h] [rbp-100h] BYREF
  int v54; // [rsp+4Ch] [rbp-FCh]
  ULONG v55; // [rsp+50h] [rbp-F8h]
  unsigned int **v56; // [rsp+58h] [rbp-F0h]
  void *v57; // [rsp+60h] [rbp-E8h]
  __int64 v58; // [rsp+68h] [rbp-E0h] BYREF
  unsigned int *v59; // [rsp+70h] [rbp-D8h]
  bool v60; // [rsp+78h] [rbp-D0h]
  char v61; // [rsp+79h] [rbp-CFh]
  __int16 v62; // [rsp+7Ch] [rbp-CCh]
  int v63; // [rsp+80h] [rbp-C8h]
  unsigned int *v64; // [rsp+88h] [rbp-C0h]
  unsigned int *v65; // [rsp+90h] [rbp-B8h]
  char *v66; // [rsp+98h] [rbp-B0h]
  unsigned int *v67; // [rsp+A0h] [rbp-A8h]
  unsigned int v68; // [rsp+A8h] [rbp-A0h]
  unsigned int *v69; // [rsp+B0h] [rbp-98h]
  unsigned int *v70; // [rsp+B8h] [rbp-90h]
  unsigned int *v71; // [rsp+C0h] [rbp-88h]
  int v72; // [rsp+C8h] [rbp-80h]
  unsigned int *v73; // [rsp+D0h] [rbp-78h]
  __int64 *v74; // [rsp+D8h] [rbp-70h]
  __int64 *v75; // [rsp+E0h] [rbp-68h]
  _QWORD v76[2]; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v77; // [rsp+F8h] [rbp-50h]
  __int64 v78; // [rsp+100h] [rbp-48h]

  v5 = a4;
  v55 = a4;
  v6 = a3;
  v68 = a3;
  v7 = a2;
  v57 = a1;
  v56 = a5;
  v74 = a2;
  v47 = 0;
  v50 = 1;
  v48 = 1;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 )
    return -1073741583;
  if ( (a4 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return -1073741583;
    goto LABEL_5;
  }
  if ( a3 == 4 )
  {
LABEL_5:
    if ( (a4 & 0x41) != 0 )
      goto LABEL_6;
    return -1073741583;
  }
LABEL_6:
  v8 = a3;
  if ( a3 == 4 )
    v8 = 3;
  v52 = v8;
  v54 = v8;
  LOWORD(v51) = 0;
  v9 = 0;
  v45[0] = 0;
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)a5 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return -1073741811;
  }
  v10 = (unsigned int *)RtlImageDirectoryEntryToData(a1, 1u, 2u, &Size);
  v66 = (char *)v10;
  if ( !v10 )
    return -1073741687;
  v11 = v10;
  v64 = v10;
  v58 = 61166LL;
  v63 = 0;
  v12 = 0LL;
  v59 = 0LL;
  v67 = 0LL;
  v65 = 0LL;
  v73 = 0LL;
  if ( (~(_BYTE)v5 & 0x10) == 0 || PnPBootDriversInitialized != 1 || v52 - 1 > 2 )
    goto LABEL_20;
  if ( v52 == 3 )
    v13 = *((unsigned __int16 *)v7 + 8);
  else
    v13 = 0LL;
  v51 = v13;
  v62 = v13;
  v14 = *v7;
  if ( ((*v7 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
  {
    if ( (v14 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp((const wchar_t *)v14, L"MUI") )
      goto LABEL_19;
    v13 = v51;
  }
  if ( (~(_BYTE)v5 & 8) == 0 || (v13 & 0xF3FF) != 0 || (_WORD)v13 == 3072 )
  {
LABEL_19:
    v5 |= LdrIsResItemExist(v57, v7);
    v55 = v5;
LABEL_20:
    v13 = v51;
    goto LABEL_21;
  }
  v5 |= 0x10u;
  v55 = v5;
LABEL_21:
  if ( PnPBootDriversInitialized == 1 && (~v5 & 0x20000) != 0 && (~v5 & 0x80000) != 0 && (~(_BYTE)v5 & 0x10) != 0 )
  {
    v15 = 1;
    v46 = 1;
  }
  else
  {
    v15 = 0;
    v46 = 0;
  }
  if ( !PnPBootDriversInitialized || (v5 & 0x2000000) != 0 || (v5 & 0x40000) != 0 )
  {
    v16 = 0;
    v48 = 0;
  }
  else
  {
    v16 = v48;
  }
  if ( !v15 && !v16 )
    goto LABEL_51;
  v76[0] = *v7;
  v17 = v52;
  if ( v52 < 2 )
    v18 = 0LL;
  else
    v18 = v7[1];
  v76[1] = v18;
  if ( v6 == 4 )
    v78 = v7[3];
LABEL_33:
  v19 = v54;
  if ( !v11 || (v20 = v54, v19 = v54 - 1, v54 = v19, v72 = v19, !v20) )
  {
    v21 = v65;
LABEL_80:
    if ( v12 )
    {
      v38 = v5 & 2;
      if ( (v5 & 2) == 0 )
      {
        *v56 = v12;
LABEL_91:
        result = 0;
LABEL_92:
        v49 = result;
        return result;
      }
    }
    else
    {
      v38 = v5 & 2;
    }
    if ( !v11 || !v38 )
      goto LABEL_83;
    *v56 = v11;
    goto LABEL_91;
  }
  if ( v19 )
    goto LABEL_36;
  if ( v16 )
  {
    result = LdrpLoadResourceFromAlternativeModule(v57, (__int64)v76, v6, v5 | 0x1000000, v56);
    v49 = result;
    if ( result >= 0 )
      return result;
    v19 = v54;
  }
  if ( v19 )
  {
LABEL_36:
    v21 = v65;
  }
  else
  {
    v21 = v65;
    if ( v52 == 3 )
      v21 = v11;
    v65 = v21;
    v73 = v21;
  }
  if ( !v21 )
    goto LABEL_38;
  v13 = *((unsigned __int16 *)v74 + 8);
  v51 = v13;
  v62 = v13;
  v32 = (v13 & 0x3FF) == 0;
  v47 = v32;
  v60 = v32;
  while ( 2 )
  {
    v33 = v63;
    while ( 1 )
    {
      v34 = v33++;
      v63 = v33;
      if ( v34 )
      {
        v35 = v34 - 1;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( v36 )
          {
            v41 = v36 - 1;
            if ( !v41 )
            {
              if ( PsInstallUILanguageId != PsMachineUILanguageId )
              {
                if ( v15 )
                {
                  v77 = (unsigned __int16)PsInstallUILanguageId;
                  result = LdrpLoadResourceFromAlternativeModule(v57, (__int64)v76, v6, v5, v56);
                  v49 = result;
                  if ( result >= 0 )
                    return result;
                }
                v44 = PsInstallUILanguageId;
                goto LABEL_162;
              }
LABEL_159:
              v9 = v58;
              v45[0] = v58;
              goto LABEL_71;
            }
            v42 = v41 - 1;
            if ( v42 )
            {
              v43 = v42 - 1;
              if ( v43 )
              {
                if ( v43 != 1 )
                  goto LABEL_167;
                v5 |= 0x20u;
                v55 = v5;
              }
              else
              {
                v9 = 1033;
                v45[0] = 1033;
                if ( PsDefaultSystemLocaleId == 1033 || PsInstallUILanguageId == 1033 || PsMachineUILanguageId == 1033 )
                  goto LABEL_159;
                if ( v15 )
                {
                  v77 = 1033LL;
                  result = LdrpLoadResourceFromAlternativeModule(v57, (__int64)v76, v6, v5, v56);
                  v49 = result;
                  if ( result >= 0 )
                    return result;
                }
              }
            }
            else
            {
              v9 = PsDefaultSystemLocaleId;
              v45[0] = PsDefaultSystemLocaleId;
              if ( (_WORD)PsDefaultSystemLocaleId == PsInstallUILanguageId
                || (_WORD)PsDefaultSystemLocaleId == PsMachineUILanguageId )
              {
                goto LABEL_159;
              }
              if ( v15 )
              {
                v77 = (unsigned __int16)PsDefaultSystemLocaleId;
                result = LdrpLoadResourceFromAlternativeModule(v57, (__int64)v76, v6, v5, v56);
                v49 = result;
                if ( result >= 0 )
                  return result;
              }
            }
          }
          else
          {
            if ( !v32 )
              goto LABEL_167;
            if ( v15 && PsMachineUILanguageId )
            {
              v77 = (unsigned __int16)PsMachineUILanguageId;
              result = LdrpLoadResourceFromAlternativeModule(v57, (__int64)v76, v6, v5, v56);
              v49 = result;
              if ( result >= 0 )
                return result;
              v44 = PsMachineUILanguageId;
LABEL_162:
              v9 = v44;
              v45[0] = v44;
              goto LABEL_71;
            }
            v39 = v58;
            if ( PsMachineUILanguageId )
              v39 = PsMachineUILanguageId;
            v9 = v39;
            v45[0] = v39;
          }
        }
        else
        {
          if ( v9 )
          {
            if ( (int)LdrpGetParentLangId(v9, v45) >= 0 )
            {
              v9 = v45[0];
            }
            else
            {
              v9 = 0;
              v45[0] = 0;
            }
          }
          if ( v15 )
          {
            if ( !v9 )
              goto LABEL_71;
            v77 = v9;
            result = LdrpLoadResourceFromAlternativeModule(v57, (__int64)v76, v6, v5, v56);
            v49 = result;
            if ( result >= 0 )
              return result;
          }
          if ( v9 )
            v63 = --v33;
        }
      }
      else
      {
        if ( v15 && (_WORD)v13 )
        {
          v77 = (unsigned __int16)v13;
          result = LdrpLoadResourceFromAlternativeModule(v57, (__int64)v76, v6, v5, v56);
          v49 = result;
          if ( result >= 0 )
            return result;
          v13 = v51;
        }
        v9 = v13;
        v45[0] = v13;
      }
LABEL_71:
      if ( (~(_BYTE)v5 & 0x20) == 0 || v9 != v58 )
        break;
      v13 = v51;
      v32 = v47;
    }
    v58 = v9;
    v7 = &v58;
    v75 = &v58;
    v21 = v65;
    v11 = v65;
    v64 = v65;
    v19 = v54;
LABEL_38:
    v22 = *((_WORD *)v11 + 6);
    LOWORD(Size) = v22;
    v23 = v11 + 4;
    v70 = v11 + 4;
    v24 = v22;
    if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v23 += 2 * v22;
      v70 = v23;
      v22 = *((_WORD *)v11 + 7);
      LOWORD(Size) = v22;
      v24 = v22;
    }
    if ( v24 )
    {
      if ( v21 && (v5 & 0x20) != 0 )
      {
        v11 = 0LL;
        v64 = 0LL;
        v58 = *v23;
        v12 = (unsigned int *)&v66[v23[1]];
        v67 = v12;
        v15 = v46;
        v13 = v51;
        v17 = v52;
        goto LABEL_80;
      }
      v11 = 0LL;
      v64 = 0LL;
      v25 = &v23[2 * v24 - 2];
      v71 = v25;
      while ( 1 )
      {
        if ( v23 > v25 )
          goto LABEL_49;
        v26 = v24 >> 1;
        if ( !(v24 >> 1) )
        {
          if ( !v24 )
            goto LABEL_49;
          v27 = v66;
          if ( (unsigned int)LdrpCompareResourceNames_U(*v7, v66, v23, v13) )
            goto LABEL_49;
          v28 = v23[1];
          if ( (int)v28 < 0 )
            goto LABEL_48;
          v12 = (unsigned int *)&v27[v28];
          goto LABEL_112;
        }
        v69 = v23;
        v29 = v22 & 1;
        if ( v29 )
          v30 = &v23[2 * v26];
        else
          v30 = &v23[2 * v26 - 2];
        v69 = v30;
        v31 = LdrpCompareResourceNames_U(*v7, v66, v30, v13);
        if ( !v31 )
        {
          v28 = v30[1];
          if ( (int)v28 < 0 )
          {
            v27 = v66;
LABEL_48:
            v11 = (unsigned int *)&v27[v28 & 0xFFFFFFFF7FFFFFFFuLL];
            v64 = v11;
LABEL_49:
            v12 = v59;
            goto LABEL_50;
          }
          v11 = 0LL;
          v64 = 0LL;
          v12 = (unsigned int *)&v66[v28];
LABEL_112:
          v59 = v12;
          v67 = v12;
LABEL_50:
          v75 = ++v7;
          v5 = v55;
          v6 = v68;
          v15 = v46;
          v13 = v51;
          v16 = v48;
LABEL_51:
          v17 = v52;
          goto LABEL_33;
        }
        if ( v31 >= 0 )
        {
          v23 = v30 + 2;
          v70 = v30 + 2;
          LOBYTE(v22) = v26;
          LOWORD(Size) = v26;
          v25 = v71;
        }
        else
        {
          v25 = v30 - 2;
          v71 = v30 - 2;
          v40 = v29 == 0;
          LOBYTE(v22) = v26;
          if ( v40 )
          {
            LOBYTE(v22) = v26 - 1;
            LOWORD(Size) = v26 - 1;
            v24 = v26 - 1;
            continue;
          }
          LOWORD(Size) = v26;
        }
        v24 = v26;
      }
    }
    v64 = 0LL;
    v50 = 0;
    v61 = 0;
    v15 = v46;
    v13 = v51;
    v17 = v52;
LABEL_83:
    if ( v17 - v19 == 1 )
    {
      result = -1073741686;
      goto LABEL_92;
    }
    if ( v17 - v19 == 2 )
    {
      result = -1073741685;
      goto LABEL_168;
    }
    if ( v17 - v19 != 3 )
    {
      result = -1073741811;
      goto LABEL_92;
    }
    result = -1073741308;
    v49 = -1073741308;
    if ( v21 )
    {
      v59 = 0LL;
      v67 = 0LL;
      if ( v50 )
      {
        v32 = v47;
        continue;
      }
LABEL_167:
      result = -1073741308;
LABEL_168:
      v49 = result;
    }
    return result;
  }
}
