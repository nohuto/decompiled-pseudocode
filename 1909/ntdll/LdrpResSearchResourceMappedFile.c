/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x180056B60
 * Callers:
 *     LdrResSearchResource @ 0x180056800 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x180058EF0 (LdrResGetRCConfig.c)
 * Callees:
 *     LdrpResReportResourceAccessInternal @ 0x18000A590 (LdrpResReportResourceAccessInternal.c)
 *     RtlLcidToLocaleName @ 0x180016AF0 (RtlLcidToLocaleName.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrIsResItemExist @ 0x180018610 (LdrIsResItemExist.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     LdrpIsReparsePoint @ 0x180054A60 (LdrpIsReparsePoint.c)
 *     LdrpResGetResourceDirectory @ 0x180057270 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x180057680 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetMappingSize @ 0x1800587E0 (LdrpResGetMappingSize.c)
 *     LdrResFallbackLangList @ 0x1800589F0 (LdrResFallbackLangList.c)
 *     LdrResGetRCConfig @ 0x180058EF0 (LdrResGetRCConfig.c)
 *     LdrpFindMessageInAlternateModule @ 0x180067F64 (LdrpFindMessageInAlternateModule.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     _wcsicmp @ 0x18008E870 (_wcsicmp.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0910 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResSearchResourceMappedFile(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        _QWORD *a6,
        __int64 *a7,
        void *a8,
        unsigned int *a9)
{
  unsigned int v10; // r15d
  __int64 v11; // rcx
  __int64 v12; // r12
  int v13; // ebx
  int v14; // esi
  int v15; // r14d
  bool v16; // dl
  bool v17; // r12
  int v18; // ebx
  int v19; // esi
  bool v20; // cl
  bool v21; // r12
  int MappingSize; // esi
  unsigned int i; // ebx
  unsigned __int16 *v24; // r11
  int v25; // r10d
  __int64 *v26; // rax
  __int64 v27; // rdx
  int v28; // r9d
  int v29; // r8d
  int v30; // ecx
  __int64 v31; // r14
  __int64 result; // rax
  char v33; // al
  bool v34; // zf
  int v35; // eax
  unsigned int *v36; // rcx
  __int16 v37; // cx
  int RCConfig; // eax
  __int64 v39; // r8
  unsigned __int16 v40; // cx
  int v41; // eax
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  unsigned int v46; // r13d
  unsigned __int16 v47; // [rsp+70h] [rbp-3D8h] BYREF
  int v48; // [rsp+74h] [rbp-3D4h]
  char v49; // [rsp+78h] [rbp-3D0h]
  char v50; // [rsp+79h] [rbp-3CFh]
  char v51; // [rsp+7Ah] [rbp-3CEh]
  bool v52; // [rsp+7Bh] [rbp-3CDh]
  bool v53; // [rsp+7Ch] [rbp-3CCh]
  __int64 v54; // [rsp+80h] [rbp-3C8h]
  __int64 v55; // [rsp+88h] [rbp-3C0h] BYREF
  __int64 v56; // [rsp+90h] [rbp-3B8h] BYREF
  __int64 v57; // [rsp+98h] [rbp-3B0h]
  __int64 *v58; // [rsp+A0h] [rbp-3A8h]
  int v59; // [rsp+A8h] [rbp-3A0h]
  _QWORD *v60; // [rsp+B0h] [rbp-398h]
  unsigned int *v61; // [rsp+B8h] [rbp-390h]
  __int64 v62; // [rsp+C0h] [rbp-388h] BYREF
  __int64 v63; // [rsp+C8h] [rbp-380h] BYREF
  __int64 v64; // [rsp+D0h] [rbp-378h] BYREF
  __int64 v65; // [rsp+D8h] [rbp-370h] BYREF
  __int64 *v66; // [rsp+E0h] [rbp-368h]
  __int64 v67; // [rsp+E8h] [rbp-360h] BYREF
  void *v68; // [rsp+F0h] [rbp-358h]
  __int64 v69; // [rsp+F8h] [rbp-350h] BYREF
  __int64 v70; // [rsp+100h] [rbp-348h] BYREF
  int v71; // [rsp+108h] [rbp-340h] BYREF
  const wchar_t *v72; // [rsp+110h] [rbp-338h]
  _WORD v73[4]; // [rsp+118h] [rbp-330h] BYREF
  _WORD *v74; // [rsp+120h] [rbp-328h]
  int v75; // [rsp+128h] [rbp-320h] BYREF
  const wchar_t *v76; // [rsp+130h] [rbp-318h]
  _WORD v77[2]; // [rsp+140h] [rbp-308h] BYREF
  _WORD v78[262]; // [rsp+144h] [rbp-304h]
  _WORD Src[88]; // [rsp+350h] [rbp-F8h] BYREF

  v58 = (__int64 *)a4;
  v10 = a3;
  v57 = a2;
  v54 = a1;
  v60 = a6;
  v66 = a7;
  v68 = a8;
  v61 = a9;
  v56 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v49 = 0;
  v59 = a3 & 0x40;
  v50 = 0;
  v51 = 0;
  v71 = 4980810;
  v72 = L"LdrpResSearchResourceMappedFile Enter";
  v75 = 4849736;
  v76 = L"LdrpResSearchResourceMappedFile Exit";
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v11 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v11 = 2147353477LL;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    v12 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v43 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v43 = 2147353476LL;
    LdrpTraceLoadMUIDll(&v71, *(unsigned __int8 *)v43);
  }
  else
  {
    v12 = 2147353476LL;
  }
  v47 = 0;
  v13 = v10 & 0x80;
  v14 = a5;
  if ( a5 == 3 )
  {
    v47 = *(_WORD *)(a4 + 16);
    if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) == 0
      || (v34 = wcsicmp(*(const wchar_t **)a4, L"MUI") == 0, v33 = 1, !v34) )
    {
      v33 = 0;
    }
    v49 = v33;
  }
  v15 = v10 & 0x80;
  if ( (v10 & 0x10) == 0 )
  {
    v15 = v10 & 0x80;
    if ( a5 >= 1 && a5 <= 3 )
    {
      if ( a5 == 3 )
        v37 = *((_WORD *)v58 + 8);
      else
        v37 = 0;
      if ( (v10 & 0x1000000) == 0
        && (((*v58 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v49
         || (~(_BYTE)v10 & 8) == 0
         || (v37 & 0xF3FF) != 0
         || v37 == 3072) )
      {
        RCConfig = LdrResGetRCConfig(v54, v57, 0, v10, 1);
        MappingSize = RCConfig;
        v48 = RCConfig;
        if ( RCConfig >= 0 )
        {
          v15 = v13 | LdrIsResItemExist(v54, (const wchar_t **)v58, v39, v10);
        }
        else
        {
          if ( RCConfig != -1073741686 )
          {
LABEL_39:
            v31 = 2147353477LL;
            goto LABEL_40;
          }
          v15 = v13 | 0x80000;
        }
        v14 = a5;
      }
      else
      {
        v10 |= 0x10u;
        v15 = v13;
      }
    }
  }
  if ( (v15 & 0x60000) == 0x60000 )
  {
    MappingSize = -1073741686;
    v48 = -1073741686;
    goto LABEL_39;
  }
  v16 = (~v15 & 0x20000) != 0 && (~v15 & 0x80000) != 0 && (~(_BYTE)v10 & 0x10) != 0;
  v17 = v16;
  v77[0] = 1;
  v78[0] = 0;
  if ( !v16 && v14 != 3 || (v10 & 0x10) != 0 && (v10 & 0x20) != 0 )
  {
    v18 = v54;
    v19 = v57;
  }
  else
  {
    v35 = v15 | 4;
    if ( (v10 & 4) == 0 )
      v35 = v15;
    v15 = v35;
    v19 = v57;
    v18 = v54;
    result = LdrResFallbackLangList(v54, v57, v47, v35, (__int64)v77);
    if ( (int)result < 0 && (v10 & 0x1000) != 0 )
      return result;
  }
  if ( (v10 & 0x10) != 0 || (~v15 & 0x40000) != 0 || (v15 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(v18, v19, v10, (unsigned int)&v64, (__int64)&v62);
    if ( (int)result < 0 )
      return result;
  }
  while ( 2 )
  {
    v20 = 0;
    if ( (v15 & 0x20000) == 0 )
      v20 = v17;
    v21 = v20;
    v53 = v20;
    v52 = v20;
    MappingSize = 0;
    v48 = 0;
    v55 = 0LL;
    v47 = 0;
    for ( i = 0; ; ++i )
    {
      if ( i >= v77[0] )
        goto LABEL_34;
      if ( !v21 )
        break;
      v56 = 0LL;
      v55 = 0LL;
      v40 = v78[4 * i];
      if ( !v40 )
      {
        if ( *(_DWORD *)&v78[4 * i + 2] == 2 )
          continue;
LABEL_83:
        MappingSize = -1073741811;
LABEL_84:
        v48 = MappingSize;
        continue;
      }
      if ( *(_DWORD *)&v78[4 * i + 2] == 10 )
        goto LABEL_83;
      v47 = v78[4 * i];
      v41 = LdrLoadAlternateResourceModuleEx(v54, v40, &v56, &v55, v15 | 0x1000u);
      MappingSize = v41;
      v48 = v41;
      if ( v41 < 0 )
      {
        if ( v41 == -1073741772 || v41 == -1073741766 )
        {
          MappingSize = -1073020927;
          goto LABEL_84;
        }
      }
      else
      {
        v50 = 1;
        if ( !v55 )
        {
          LOBYTE(v42) = 1;
          MappingSize = LdrpResGetMappingSize(v56, &v55, 512LL, v42);
          v48 = MappingSize;
        }
        if ( (v10 & 0x1000) != 0 && MappingSize < 0 )
          goto LABEL_34;
        MappingSize = LdrpResGetResourceDirectory(v56, v55, v10, (unsigned int)&v65, (__int64)&v63);
        v48 = MappingSize;
        if ( MappingSize >= 0 )
          break;
      }
LABEL_78:
      ;
    }
    v67 = 0LL;
    v24 = &v47;
    if ( v21 )
      v24 = 0LL;
    v25 = v10 | 0x20;
    if ( !v21 )
      v25 = v10;
    v26 = &v67;
    if ( v66 )
      v26 = v66;
    v27 = v62;
    if ( v21 )
      v27 = v63;
    v28 = v64;
    if ( v21 )
      v28 = v65;
    v29 = v57;
    if ( v21 )
      v29 = v55;
    v30 = v54;
    if ( v21 )
      v30 = v56;
    MappingSize = LdrpResSearchResourceInsideDirectory(
                    v30,
                    0,
                    v29,
                    v28,
                    v27,
                    0LL,
                    (__int64)v58,
                    a5,
                    (__int64)v77,
                    (__int64)v60,
                    (__int64)v26,
                    v25,
                    (__int64)v24);
    v48 = MappingSize;
    if ( v59 && (~v15 & 0x40000) != 0 )
    {
      if ( MappingSize < 0 )
        goto LABEL_33;
      if ( v60 && v21 )
      {
        if ( v66 )
          v44 = *v66;
        else
          LODWORD(v44) = v67;
        MappingSize = LdrpFindMessageInAlternateModule(v56, *v60, v44, *((_DWORD *)v58 + 6), 1);
        v48 = MappingSize;
        if ( MappingSize < 0 )
        {
          *v60 = 0LL;
          if ( MappingSize == -1073741701 )
            goto LABEL_38;
        }
      }
    }
    if ( MappingSize < 0 )
    {
LABEL_33:
      if ( !v21 )
        goto LABEL_34;
      if ( (int)LdrResGetRCConfig(v54, v57, (unsigned int)&v70, 4096, 1) >= 0
        && (int)LdrResGetRCConfig(v56, v55, (unsigned int)&v69, 4096, 0) >= 0 )
      {
        v45 = *(_QWORD *)(v70 + 28) - *(_QWORD *)(v69 + 28);
        if ( !v45 )
          v45 = *(_QWORD *)(v70 + 36) - *(_QWORD *)(v69 + 36);
        if ( !v45 )
          goto LABEL_34;
      }
      goto LABEL_78;
    }
    v36 = v61;
    if ( !v61 )
    {
LABEL_34:
      if ( v21 && (v10 & 0x200000) == 0 )
        LdrpResReportResourceAccessInternal(v56, v55, v58, a5);
      if ( MappingSize >= 0 )
        goto LABEL_38;
      v17 = v53;
      if ( !v53 )
      {
LABEL_37:
        if ( v17 )
          continue;
        goto LABEL_38;
      }
      if ( v51 || v50 || (int)LdrpIsReparsePoint(v54) < 0 )
      {
        if ( (v15 & 0x40000) != 0 )
        {
          v17 = 0;
          goto LABEL_37;
        }
        v15 |= 0x20000u;
      }
      else
      {
        v15 |= 0x400000u;
        v51 = 1;
      }
      v17 = v52;
      goto LABEL_37;
    }
    break;
  }
  if ( v47 )
  {
    v74 = Src;
    v73[1] = 172;
    MappingSize = RtlLcidToLocaleName(v47, (__int64)v73, 2, 0);
    v48 = MappingSize;
    if ( MappingSize >= 0 )
    {
      v46 = v73[0] >> 1;
      v36 = v61;
      goto LABEL_130;
    }
LABEL_38:
    v12 = 2147353476LL;
    goto LABEL_39;
  }
  Src[0] = 0;
  v46 = 0;
LABEL_130:
  if ( v46 < *v36 && v68 )
  {
    memmove(v68, Src, 2LL * v46);
    *v61 = v46 + 1;
    *((_WORD *)v68 + v46) = 0;
    goto LABEL_34;
  }
  *v36 = v46 + 1;
  MappingSize = -1073741789;
  v48 = -1073741789;
  v12 = 2147353476LL;
  v31 = 2147353477LL;
LABEL_40:
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v31 = (__int64)NtCurrentPeb()->SharedData + 555;
    MappingSize = v48;
  }
  if ( (*(_BYTE *)v31 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
      MappingSize = v48;
    }
    LdrpTraceLoadMUIDll(&v75, *(unsigned __int8 *)v12);
  }
  return (unsigned int)MappingSize;
}
