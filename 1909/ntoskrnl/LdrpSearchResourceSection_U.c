/*
 * XREFs of LdrpSearchResourceSection_U @ 0x140675740
 * Callers:
 *     LdrpGetRcConfig @ 0x1400DF888 (LdrpGetRcConfig.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1400DF9C4 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlFindMessage @ 0x140675350 (RtlFindMessage.c)
 *     LdrFindResource_U @ 0x14077FA30 (LdrFindResource_U.c)
 *     LdrFindResourceDirectory_U @ 0x1408CEA40 (LdrFindResourceDirectory_U.c)
 *     LdrFindResourceEx_U @ 0x1408CEA60 (LdrFindResourceEx_U.c)
 *     RtlLoadString @ 0x1408CF720 (RtlLoadString.c)
 * Callees:
 *     LdrIsResItemExist @ 0x1400DF610 (LdrIsResItemExist.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1400DF9C4 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlImageDirectoryEntryToData @ 0x1400E8950 (RtlImageDirectoryEntryToData.c)
 *     LdrpGetParentLangId @ 0x14016AA7C (LdrpGetParentLangId.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401A0820 (_wcsicmp.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x1401C0434 (LdrpCompareResourceNamesWithValidation.c)
 */

int __fastcall LdrpSearchResourceSection_U(char *a1, __int64 *a2, unsigned int a3, ULONG a4, unsigned int **a5)
{
  ULONG v5; // r14d
  int v6; // r15d
  __int64 *v7; // r13
  int result; // eax
  int v9; // eax
  unsigned __int16 v10; // r12
  char *v11; // rax
  char *v12; // rbx
  unsigned int *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  char v17; // di
  char v18; // r8
  unsigned int v19; // ecx
  __int64 v20; // rax
  int v21; // r9d
  int v22; // eax
  char *v23; // r8
  bool v24; // cl
  int v25; // eax
  int v26; // ebx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  __int16 v33; // ax
  __int16 v34; // cx
  unsigned __int16 v35; // di
  unsigned int *v36; // rsi
  __int64 v37; // rcx
  unsigned int *v38; // rax
  unsigned __int16 v39; // r14
  char v40; // di
  unsigned int *v41; // r15
  int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rdi
  bool v45; // zf
  __int16 v46[2]; // [rsp+30h] [rbp-118h] BYREF
  char v47; // [rsp+34h] [rbp-114h]
  bool v48; // [rsp+35h] [rbp-113h]
  char v49; // [rsp+36h] [rbp-112h]
  int v50; // [rsp+38h] [rbp-110h]
  char v51; // [rsp+3Ch] [rbp-10Ch]
  unsigned int v52; // [rsp+40h] [rbp-108h]
  unsigned int v53; // [rsp+44h] [rbp-104h]
  ULONG Size; // [rsp+48h] [rbp-100h] BYREF
  int v55; // [rsp+4Ch] [rbp-FCh]
  ULONG v56; // [rsp+50h] [rbp-F8h]
  unsigned int **v57; // [rsp+58h] [rbp-F0h]
  void *v58; // [rsp+60h] [rbp-E8h]
  __int64 v59; // [rsp+68h] [rbp-E0h] BYREF
  unsigned int *v60; // [rsp+70h] [rbp-D8h]
  bool v61; // [rsp+78h] [rbp-D0h]
  char v62; // [rsp+79h] [rbp-CFh]
  char v63; // [rsp+7Ah] [rbp-CEh] BYREF
  char v64; // [rsp+7Bh] [rbp-CDh] BYREF
  __int16 v65; // [rsp+7Ch] [rbp-CCh]
  int v66; // [rsp+80h] [rbp-C8h]
  char *v67; // [rsp+88h] [rbp-C0h]
  char *v68; // [rsp+90h] [rbp-B8h]
  char *v69; // [rsp+98h] [rbp-B0h]
  unsigned int *v70; // [rsp+A0h] [rbp-A8h]
  unsigned int v71; // [rsp+A8h] [rbp-A0h]
  unsigned int *v72; // [rsp+B0h] [rbp-98h]
  unsigned int *v73; // [rsp+B8h] [rbp-90h]
  unsigned int *v74; // [rsp+C0h] [rbp-88h]
  int v75; // [rsp+C8h] [rbp-80h]
  char *v76; // [rsp+D0h] [rbp-78h]
  __int64 *v77; // [rsp+D8h] [rbp-70h]
  __int64 *v78; // [rsp+E0h] [rbp-68h]
  _QWORD v79[2]; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v80; // [rsp+F8h] [rbp-50h]
  __int64 v81; // [rsp+100h] [rbp-48h]

  v5 = a4;
  v56 = a4;
  v6 = a3;
  v71 = a3;
  v7 = a2;
  v58 = a1;
  v57 = a5;
  v77 = a2;
  v48 = 0;
  v51 = 1;
  v49 = 1;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 )
    return -1073741583;
  if ( (a4 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return -1073741583;
  }
  else if ( a3 != 4 )
  {
    goto LABEL_10;
  }
  if ( (a4 & 0x41) == 0 )
    return -1073741583;
LABEL_10:
  v9 = a3;
  if ( a3 == 4 )
    v9 = 3;
  v53 = v9;
  v55 = v9;
  LOWORD(v52) = 0;
  v10 = 0;
  v46[0] = 0;
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)a5 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return -1073741811;
  }
  v11 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 2u, &Size);
  v69 = v11;
  if ( !v11 )
    return -1073741687;
  v12 = v11;
  v67 = v11;
  v59 = 61166LL;
  v66 = 0;
  v13 = 0LL;
  v60 = 0LL;
  v70 = 0LL;
  v68 = 0LL;
  v76 = 0LL;
  if ( (~(_BYTE)v5 & 0x10) == 0 || v53 - 1 > 2 || PnPBootDriversInitialized != 1 )
    goto LABEL_32;
  if ( v53 == 3 )
    v14 = *((unsigned __int16 *)v7 + 8);
  else
    v14 = 0LL;
  v52 = v14;
  v65 = v14;
  v15 = *v7;
  if ( ((*v7 - 16) & 0xFFFFFFFFFFFFFFF7uLL) == 0 )
    goto LABEL_27;
  if ( (v15 & 0xFFFFFFFFFFFF0000uLL) != 0 && !wcsicmp((const wchar_t *)v15, L"MUI") )
  {
    v14 = v52;
LABEL_27:
    if ( (~(_BYTE)v5 & 8) != 0 && (v14 & 0xF3FF) == 0 && (_WORD)v14 != 3072 )
    {
      v5 |= 0x10u;
      v56 = v5;
      goto LABEL_33;
    }
  }
  v5 |= LdrIsResItemExist(v58, v7);
  v56 = v5;
LABEL_32:
  v14 = v52;
LABEL_33:
  if ( PnPBootDriversInitialized == 1 && (v16 = ~v5, (~v5 & 0x80000) != 0) && (v16 & 0x20000) != 0 && (v16 & 0x10) != 0 )
  {
    v17 = 1;
    v47 = 1;
  }
  else
  {
    v17 = 0;
    v47 = 0;
  }
  if ( PnPBootDriversInitialized && (v5 & 0x2040000) == 0 )
  {
    v18 = v49;
  }
  else
  {
    v18 = 0;
    v49 = 0;
  }
  if ( !v17 && !v18 )
    goto LABEL_50;
  v79[0] = *v7;
  v19 = v53;
  if ( v53 < 2 )
    v20 = 0LL;
  else
    v20 = v7[1];
  v79[1] = v20;
  if ( v6 == 4 )
    v81 = v7[3];
LABEL_51:
  v21 = v55;
  if ( !v12 || (v22 = v55, v21 = v55 - 1, v55 = v21, v75 = v21, !v22) )
  {
    v23 = v68;
    goto LABEL_65;
  }
  if ( v21 )
    goto LABEL_61;
  if ( v18 )
  {
    result = LdrpLoadResourceFromAlternativeModule(v58, (__int64)v79, v6, v5 | 0x1000000, v57);
    v50 = result;
    if ( result >= 0 )
      return result;
    v21 = v55;
  }
  if ( v21 )
  {
LABEL_61:
    v23 = v68;
  }
  else
  {
    v23 = v68;
    if ( v53 == 3 )
      v23 = v12;
    v68 = v23;
    v76 = v23;
  }
  if ( !v23 )
    goto LABEL_136;
  v14 = *((unsigned __int16 *)v77 + 8);
  v52 = v14;
  v65 = v14;
  v24 = (v14 & 0x3FF) == 0;
  v48 = v24;
  v61 = v24;
  while ( 2 )
  {
    v26 = v66;
    while ( 1 )
    {
      v27 = v26++;
      v66 = v26;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            v30 = v29 - 1;
            if ( !v30 )
            {
              if ( PsInstallUILanguageId != PsMachineUILanguageId )
              {
                if ( v17 )
                {
                  v80 = (unsigned __int16)PsInstallUILanguageId;
                  result = LdrpLoadResourceFromAlternativeModule(v58, (__int64)v79, v6, v5, v57);
                  v50 = result;
                  if ( result >= 0 )
                    return result;
                }
                v33 = PsInstallUILanguageId;
                goto LABEL_109;
              }
LABEL_105:
              v10 = v59;
              v46[0] = v59;
              goto LABEL_132;
            }
            v31 = v30 - 1;
            if ( v31 )
            {
              v32 = v31 - 1;
              if ( v32 )
              {
                if ( v32 != 1 )
                  goto LABEL_167;
                v5 |= 0x20u;
                v56 = v5;
              }
              else
              {
                v10 = 1033;
                v46[0] = 1033;
                if ( PsDefaultSystemLocaleId == 1033 || PsInstallUILanguageId == 1033 || PsMachineUILanguageId == 1033 )
                  goto LABEL_105;
                if ( v17 )
                {
                  v80 = 1033LL;
                  result = LdrpLoadResourceFromAlternativeModule(v58, (__int64)v79, v6, v5, v57);
                  v50 = result;
                  if ( result >= 0 )
                    return result;
                }
              }
            }
            else
            {
              v10 = PsDefaultSystemLocaleId;
              v46[0] = PsDefaultSystemLocaleId;
              if ( (_WORD)PsDefaultSystemLocaleId == PsInstallUILanguageId
                || (_WORD)PsDefaultSystemLocaleId == PsMachineUILanguageId )
              {
                goto LABEL_105;
              }
              if ( v17 )
              {
                v80 = (unsigned __int16)PsDefaultSystemLocaleId;
                result = LdrpLoadResourceFromAlternativeModule(v58, (__int64)v79, v6, v5, v57);
                v50 = result;
                if ( result >= 0 )
                  return result;
              }
            }
          }
          else
          {
            if ( !v24 )
              goto LABEL_167;
            if ( v17 && PsMachineUILanguageId )
            {
              v80 = (unsigned __int16)PsMachineUILanguageId;
              result = LdrpLoadResourceFromAlternativeModule(v58, (__int64)v79, v6, v5, v57);
              v50 = result;
              if ( result >= 0 )
                return result;
              v33 = PsMachineUILanguageId;
LABEL_109:
              v10 = v33;
              v46[0] = v33;
              goto LABEL_132;
            }
            v34 = v59;
            if ( PsMachineUILanguageId )
              v34 = PsMachineUILanguageId;
            v10 = v34;
            v46[0] = v34;
          }
        }
        else
        {
          if ( v10 )
          {
            if ( (int)LdrpGetParentLangId(v10, v46) >= 0 )
            {
              v10 = v46[0];
            }
            else
            {
              v10 = 0;
              v46[0] = 0;
            }
          }
          if ( v17 )
          {
            if ( !v10 )
              goto LABEL_132;
            v80 = v10;
            result = LdrpLoadResourceFromAlternativeModule(v58, (__int64)v79, v6, v5, v57);
            v50 = result;
            if ( result >= 0 )
              return result;
          }
          if ( v10 )
            v66 = --v26;
        }
      }
      else
      {
        if ( v17 && (_WORD)v14 )
        {
          v80 = (unsigned __int16)v14;
          result = LdrpLoadResourceFromAlternativeModule(v58, (__int64)v79, v6, v5, v57);
          v50 = result;
          if ( result >= 0 )
            return result;
          v14 = v52;
        }
        v10 = v14;
        v46[0] = v14;
      }
LABEL_132:
      if ( (~(_BYTE)v5 & 0x20) == 0 || v10 != v59 )
        break;
      v14 = v52;
      v24 = v48;
    }
    v59 = v10;
    v7 = &v59;
    v78 = &v59;
    v23 = v68;
    v12 = v68;
    v67 = v68;
    v21 = v55;
LABEL_136:
    v35 = *((_WORD *)v12 + 6);
    LOWORD(Size) = v35;
    v36 = (unsigned int *)(v12 + 16);
    v73 = (unsigned int *)(v12 + 16);
    v37 = v35;
    if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v36 += 2 * v35;
      v73 = v36;
      v35 = *((_WORD *)v12 + 7);
      LOWORD(Size) = v35;
      v37 = v35;
    }
    if ( !(_WORD)v37 )
    {
      v67 = 0LL;
      v51 = 0;
      v62 = 0;
      v17 = v47;
      v14 = v52;
      v19 = v53;
      goto LABEL_73;
    }
    if ( !v23 || (v5 & 0x20) == 0 )
    {
      v12 = 0LL;
      v67 = 0LL;
      v38 = &v36[2 * (unsigned __int16)v37 - 2];
      v74 = v38;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v36 > v38 )
            goto LABEL_153;
          v39 = (unsigned __int16)v37 >> 1;
          if ( !((unsigned __int16)v37 >> 1) )
          {
            if ( (_WORD)v37 )
            {
              v44 = (__int64)v69;
              if ( !(unsigned int)LdrpCompareResourceNamesWithValidation(
                                    v37,
                                    v14,
                                    (const wchar_t *)*v7,
                                    (__int64)v69,
                                    v36,
                                    &v64) )
              {
                v43 = v36[1];
                if ( (int)v43 >= 0 )
                {
                  v13 = (unsigned int *)(v44 + v43);
                  goto LABEL_156;
                }
LABEL_152:
                v12 = (char *)(v44 + (v43 & 0xFFFFFFFF7FFFFFFFuLL));
                v67 = v12;
              }
            }
LABEL_153:
            v13 = v60;
            goto LABEL_154;
          }
          v72 = v36;
          v40 = v35 & 1;
          if ( v40 )
            v41 = &v36[2 * v39];
          else
            v41 = &v36[2 * v39 - 2];
          v72 = v41;
          v42 = LdrpCompareResourceNamesWithValidation(v37, v14, (const wchar_t *)*v7, (__int64)v69, v41, &v63);
          if ( !v42 )
          {
            v43 = v41[1];
            if ( (int)v43 < 0 )
            {
              v44 = (__int64)v69;
              goto LABEL_152;
            }
            v12 = 0LL;
            v67 = 0LL;
            v13 = (unsigned int *)&v69[v43];
LABEL_156:
            v60 = v13;
            v70 = v13;
LABEL_154:
            v78 = ++v7;
            v5 = v56;
            v6 = v71;
            v17 = v47;
            v14 = v52;
            v18 = v49;
LABEL_50:
            v19 = v53;
            goto LABEL_51;
          }
          if ( v42 < 0 )
            break;
          v36 = v41 + 2;
          v73 = v41 + 2;
          LOBYTE(v35) = v39;
          LOWORD(Size) = v39;
          v38 = v74;
LABEL_162:
          v37 = v39;
        }
        v38 = v41 - 2;
        v74 = v41 - 2;
        v45 = v40 == 0;
        LOBYTE(v35) = v39;
        if ( !v45 )
        {
          LOWORD(Size) = v39;
          goto LABEL_162;
        }
        LOBYTE(v35) = v39 - 1;
        LOWORD(Size) = v39 - 1;
        v37 = (unsigned __int16)(v39 - 1);
      }
    }
    v12 = 0LL;
    v67 = 0LL;
    v59 = *v36;
    v13 = (unsigned int *)&v69[v36[1]];
    v70 = v13;
    v17 = v47;
    v14 = v52;
    v19 = v53;
LABEL_65:
    if ( v13 )
    {
      v25 = v5 & 2;
      if ( (v5 & 2) == 0 )
      {
        *v57 = v13;
        goto LABEL_68;
      }
    }
    else
    {
      v25 = v5 & 2;
    }
    if ( !v12 || !v25 )
    {
LABEL_73:
      switch ( v19 - v21 )
      {
        case 1u:
          result = -1073741686;
          goto LABEL_80;
        case 2u:
          result = -1073741685;
          break;
        case 3u:
          result = -1073741308;
          v50 = -1073741308;
          if ( !v23 )
            return result;
          v60 = 0LL;
          v70 = 0LL;
          if ( v51 )
          {
            v24 = v48;
            continue;
          }
LABEL_167:
          result = -1073741308;
          break;
        default:
          result = -1073741811;
          goto LABEL_80;
      }
      v50 = result;
      return result;
    }
    break;
  }
  *v57 = (unsigned int *)v12;
LABEL_68:
  result = 0;
LABEL_80:
  v50 = result;
  return result;
}
