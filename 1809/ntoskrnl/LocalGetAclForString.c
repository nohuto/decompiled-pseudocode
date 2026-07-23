/*
 * XREFs of LocalGetAclForString @ 0x1406B0F2C
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406B0A6C (LocalConvertStringSDToSD_Rev1.c)
 * Callees:
 *     RtlGetAce @ 0x140016260 (RtlGetAce.c)
 *     RtlLengthSid @ 0x1400162C0 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x140195BB0 (_wcsnicmp.c)
 *     wcstoul @ 0x140197E00 (wcstoul.c)
 *     wcsncpy_s @ 0x14019BFB0 (wcsncpy_s.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlAddAce @ 0x1405CBE40 (RtlAddAce.c)
 *     RtlNtStatusToDosError @ 0x140624F00 (RtlNtStatusToDosError.c)
 *     RtlpAddKnownAce @ 0x1406325C0 (RtlpAddKnownAce.c)
 *     RtlCopySid @ 0x14064A350 (RtlCopySid.c)
 *     LookupAccessMaskInTable @ 0x1406B14B4 (LookupAccessMaskInTable.c)
 *     LocalGetSidForString @ 0x1406B154C (LocalGetSidForString.c)
 *     LookupAceTypeInTable @ 0x1406B177C (LookupAceTypeInTable.c)
 *     SddlpAlloc @ 0x1406B1814 (SddlpAlloc.c)
 *     LocalGetSDDLDeliminator @ 0x1406B1860 (LocalGetSDDLDeliminator.c)
 *     LocalGetAceCount @ 0x1406B18CC (LocalGetAceCount.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1408938A0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x140893900 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x140893C00 (RtlAddAuditAccessObjectAce.c)
 *     LookupAceFlagsInTable @ 0x1408A75F8 (LookupAceFlagsInTable.c)
 *     SddlAddAccessFilterAce @ 0x1408A76B8 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1408A78D4 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1408A7A34 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1408A7B90 (SddlAddScopedPolicyIDAce.c)
 *     SddlpUuidFromString @ 0x1408A7F50 (SddlpUuidFromString.c)
 *     LocalGetConditionForString @ 0x1408A9E2C (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1408AA564 (LocalGetRelativeAttributeForString.c)
 */

__int64 __fastcall LocalGetAclForString(
        wchar_t *Str,
        char a2,
        const void **a3,
        wchar_t **a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8)
{
  wchar_t *v10; // rbx
  unsigned int AceCount; // r14d
  char *v12; // rsi
  __int64 result; // rax
  wchar_t *v15; // rax
  __int64 v16; // rax
  wchar_t *v17; // rdx
  unsigned int v18; // r15d
  unsigned int v19; // edi
  _BYTE *v20; // rax
  __int16 v21; // cx
  _BYTE *v22; // rax
  _WORD *v23; // rax
  unsigned int v24; // r15d
  wchar_t v25; // ax
  wchar_t v26; // cx
  wchar_t *v27; // rdi
  __int64 v28; // rax
  unsigned __int8 v29; // r12
  __int64 v30; // rax
  wchar_t *v31; // rbx
  wchar_t *v32; // rbx
  wchar_t **v33; // rdi
  wchar_t v34; // ax
  int v35; // edi
  __int64 v36; // rax
  ACCESS_MASK v37; // ecx
  __int64 v38; // rax
  unsigned int SidForString; // eax
  _WORD *v40; // rcx
  _WORD *i; // rbx
  int v42; // edx
  unsigned int v43; // edx
  unsigned int v44; // ebx
  unsigned int v45; // edi
  ULONG v46; // r12d
  ULONG v47; // ecx
  bool v48; // cf
  unsigned int v49; // r15d
  int v50; // r8d
  int v51; // eax
  int v52; // esi
  PSID v53; // r12
  unsigned int v54; // edx
  _WORD *v55; // rax
  _BYTE *v56; // rax
  unsigned int v57; // eax
  __int64 v58; // rax
  unsigned int ConditionForString; // eax
  int v60; // edi
  bool v61; // zf
  int v62; // eax
  unsigned int v63; // ecx
  unsigned int v64; // eax
  unsigned __int64 v65; // rcx
  unsigned int v66; // edi
  _WORD *v67; // rax
  void *v68; // rcx
  _WORD *v69; // rsi
  int v70; // edx
  _WORD *v71; // r15
  char v72; // al
  unsigned int v73; // eax
  size_t v74; // rbx
  int v75; // edi
  ULONG v76; // eax
  ULONG v77; // eax
  unsigned int v78; // ebx
  unsigned int v79; // ebx
  unsigned int v80; // ebx
  unsigned int v81; // ebx
  unsigned int v82; // ebx
  int v83; // eax
  int v84; // ecx
  char *v85; // rdi
  ULONG v86; // eax
  size_t v87; // rbx
  ULONG v88; // eax
  PVOID v89; // rdx
  __int64 v90; // rax
  ULONG v91; // eax
  ULONG v92; // eax
  int ObjectTypeGuid; // [rsp+20h] [rbp-E0h]
  int InheritedObjectTypeGuid; // [rsp+28h] [rbp-D8h]
  UCHAR InheritedObjectTypeGuida; // [rsp+28h] [rbp-D8h]
  int pSid; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v97; // [rsp+50h] [rbp-B0h]
  char v98; // [rsp+51h] [rbp-AFh] BYREF
  int v99; // [rsp+54h] [rbp-ACh]
  ACCESS_MASK AccessMask; // [rsp+58h] [rbp-A8h]
  PSID Sid; // [rsp+60h] [rbp-A0h] BYREF
  char v102; // [rsp+68h] [rbp-98h]
  size_t v103; // [rsp+6Ch] [rbp-94h]
  PVOID P; // [rsp+78h] [rbp-88h]
  unsigned int v105; // [rsp+80h] [rbp-80h] BYREF
  PVOID v106; // [rsp+88h] [rbp-78h]
  unsigned int Size; // [rsp+90h] [rbp-70h]
  int Size_4; // [rsp+94h] [rbp-6Ch]
  int v109; // [rsp+98h] [rbp-68h]
  _WORD *v110; // [rsp+A0h] [rbp-60h] BYREF
  GUID *v111; // [rsp+A8h] [rbp-58h]
  GUID *p_Guid; // [rsp+B0h] [rbp-50h]
  unsigned int v113; // [rsp+B8h] [rbp-48h] BYREF
  void *v114; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t *v115; // [rsp+C8h] [rbp-38h] BYREF
  void *v116; // [rsp+D0h] [rbp-30h] BYREF
  int v117[2]; // [rsp+D8h] [rbp-28h]
  wchar_t **v118; // [rsp+E0h] [rbp-20h]
  wchar_t *EndPtr; // [rsp+E8h] [rbp-18h] BYREF
  PVOID Ace; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v121; // [rsp+F8h] [rbp-8h]
  int v122; // [rsp+100h] [rbp+0h]
  unsigned __int16 v123; // [rsp+104h] [rbp+4h]
  GUID Guid; // [rsp+108h] [rbp+8h] BYREF
  GUID v125; // [rsp+118h] [rbp+18h] BYREF
  wchar_t Dst[40]; // [rsp+130h] [rbp+30h] BYREF

  *(_QWORD *)v117 = a5;
  v10 = Str;
  v121 = a6;
  v118 = a4;
  AceCount = 0;
  v105 = 0;
  v12 = 0LL;
  v98 = 0;
  Sid = 0LL;
  P = 0LL;
  v116 = 0LL;
  v103 = 0LL;
  v106 = 0LL;
  v114 = 0LL;
  Ace = 0LL;
  v122 = 0;
  v123 = 256;
  if ( !Str || !a3 || !a4 )
    return 87LL;
  if ( !wcsnicmp(Str, L"NO_ACCESS_CONTROL", 0x11uLL) )
  {
    *a3 = 0LL;
    *a4 = v10 + 17;
    return AceCount;
  }
  v109 = 2 - (a2 != 0);
  result = LocalGetSDDLDeliminator(v10);
  if ( (_DWORD)result )
    return result;
  v15 = *a4;
  if ( *a4 == v10 )
    return 87LL;
  if ( v15 )
  {
    v17 = v15 - 1;
  }
  else
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v10[v16] );
    v17 = &v10[v16];
  }
  *a4 = v17;
  AceCount = LocalGetAceCount(v10, v17, &v105);
  if ( AceCount )
    return AceCount;
  v18 = v105;
  if ( !v105 )
  {
    v56 = (_BYTE *)SddlpAlloc(8uLL);
    *a3 = v56;
    if ( v56 )
    {
      *v56 = 2;
      *((_BYTE *)*a3 + 1) = 0;
      *((_WORD *)*a3 + 1) = 8;
      *((_WORD *)*a3 + 2) = 0;
      *((_WORD *)*a3 + 3) = 0;
    }
    else
    {
      return 8;
    }
    return AceCount;
  }
  v19 = 84 * v105 + 8;
  if ( v19 > 0xFFFF )
    v19 = 0xFFFF;
  Size = v19;
  v20 = (_BYTE *)SddlpAlloc(v19);
  *a3 = v20;
  if ( !v20 )
    return 8;
  *v20 = 2;
  v21 = 8;
  v22 = *a3;
  v99 = 8;
  v22[1] = 0;
  *((_WORD *)*a3 + 1) = v19;
  v23 = *a3;
  Size_4 = 0;
  v23[2] = 0;
  *((_WORD *)*a3 + 3) = 0;
  if ( !v18 )
    goto LABEL_81;
  while ( 2 )
  {
    v97 = 0;
    v24 = 0;
    AccessMask = 0;
    p_Guid = 0LL;
    v111 = 0LL;
    while ( 1 )
    {
      v25 = *v10;
      if ( *v10 != 32 )
        break;
      ++v10;
    }
    v26 = *v10;
    if ( v25 == 40 )
      v26 = v10[1];
    v27 = v10 + 1;
    if ( v25 != 40 )
      v27 = v10;
    if ( v26 == 32 )
    {
      do
        ++v27;
      while ( *v27 == 32 );
    }
    v28 = LookupAceTypeInTable(v27);
    if ( !v28 )
    {
      AceCount = 1804;
      goto LABEL_80;
    }
    v29 = *(_BYTE *)(v28 + 12);
    v30 = *(unsigned int *)(v28 + 8);
    v102 = v29;
    v31 = &v27[v30];
    if ( *v31 != 59 && *v31 != 32 )
    {
LABEL_104:
      AceCount = 1336;
      goto LABEL_80;
    }
    v32 = v31 + 1;
    if ( (unsigned __int8)(v29 - 5) <= 3u || v29 == 11 )
      *(_BYTE *)*a3 = 4;
    while ( *v32 == 32 )
      ++v32;
    v33 = v118;
    while ( 1 )
    {
      if ( v32 == *v33 )
        goto LABEL_33;
      if ( *v32 == 59 )
        break;
      for ( ; *v32 == 32; ++v32 )
        ;
      v58 = LookupAceFlagsInTable(v32);
      if ( !v58 )
      {
        AceCount = 1004;
        goto LABEL_80;
      }
      v97 |= *(_BYTE *)(v58 + 12);
      v32 += *(unsigned int *)(v58 + 8);
    }
    do
    {
      ++v32;
LABEL_33:
      v34 = *v32;
    }
    while ( *v32 == 32 );
    v35 = 0;
    while ( v34 != 59 )
    {
      if ( v34 == 32 )
      {
        do
          ++v32;
        while ( *v32 == 32 );
      }
      v36 = LookupAccessMaskInTable(v32);
      if ( v36 )
      {
        v37 = *(_DWORD *)(v36 + 12) | AccessMask;
        v38 = *(unsigned int *)(v36 + 8);
        AccessMask = v37;
        v32 += v38;
      }
      else
      {
        v57 = wcstoul(v32, &EndPtr, 0);
        AccessMask |= v57;
        if ( EndPtr == v32 )
          goto LABEL_142;
        v32 = EndPtr;
      }
      v34 = *v32;
    }
LABEL_40:
    ++v32;
    while ( 1 )
    {
      if ( *v32 == 59 )
        goto LABEL_42;
      if ( *v32 == 32 )
        goto LABEL_40;
      if ( (unsigned __int8)(v29 - 5) > 3u && v29 != 11 )
        goto LABEL_104;
      wcsncpy_s(Dst, 0x25uLL, v32, 0x24uLL);
      Dst[36] = 0;
      if ( !v35 )
      {
        if ( !(unsigned int)SddlpUuidFromString(Dst, &Guid) )
          goto LABEL_123;
        p_Guid = &Guid;
        goto LABEL_121;
      }
      if ( !(unsigned int)SddlpUuidFromString(Dst, &v125) )
        break;
      v111 = &v125;
LABEL_121:
      v32 += 36;
      if ( *v32 != 59 && *v32 != 32 )
      {
LABEL_123:
        AceCount = 1705;
        goto LABEL_80;
      }
LABEL_42:
      ++v32;
      if ( (unsigned int)++v35 >= 2 )
        goto LABEL_43;
    }
    AceCount = 1705;
LABEL_43:
    if ( AceCount )
      goto LABEL_80;
    while ( *v32 == 32 )
      ++v32;
    SidForString = LocalGetSidForString(
                     (_DWORD)v32,
                     (unsigned int)&Sid,
                     (unsigned int)&v110,
                     (unsigned int)&v98,
                     *(__int64 *)v117,
                     InheritedObjectTypeGuid,
                     pSid,
                     a8);
    v12 = (char *)Sid;
    AceCount = SidForString;
    if ( SidForString )
      goto LABEL_80;
    v40 = v110;
    if ( !v110 || !Sid )
      goto LABEL_142;
    for ( i = v110; *i == 32; ++i )
      ;
    if ( v29 > 0x15u || (v42 = 2371072, !_bittest(&v42, v29)) )
    {
      v43 = HIDWORD(v103);
      goto LABEL_52;
    }
    if ( *i != 59 )
      goto LABEL_142;
    do
      ++i;
    while ( *i == 32 );
    if ( *i != 40 )
    {
      v60 = v103;
      v40 = i;
      v110 = i;
LABEL_140:
      v43 = HIDWORD(v103);
      if ( !v60 )
      {
LABEL_141:
        if ( !v43 )
          goto LABEL_142;
      }
      if ( AceCount )
        goto LABEL_80;
LABEL_52:
      if ( *v40 == 32 )
      {
        do
          ++v40;
        while ( *v40 == 32 );
        v110 = v40;
      }
      if ( *v40 == 41 )
      {
        v44 = v29;
        v115 = v40 + 1;
        if ( v29 > 0x11u )
        {
          if ( v29 != 18 )
          {
            if ( v29 == 19 || v29 == 20 )
              goto LABEL_57;
            v61 = v29 == 21;
            goto LABEL_168;
          }
          v24 = v43 + 12;
          if ( v43 + 12 < v43 )
          {
            v24 = -1;
LABEL_172:
            AceCount = 534;
LABEL_173:
            v45 = v24;
            if ( AceCount )
              goto LABEL_80;
LABEL_58:
            v46 = -1;
            v47 = v24 + RtlLengthSid(v12) - 4;
            if ( v47 >= v24 )
              v46 = v47;
            v48 = v47 < v45;
            v21 = v99;
            if ( v48 )
            {
              AceCount = 534;
              goto LABEL_81;
            }
            v49 = v46 + v99;
            if ( v46 + v99 < v46 )
            {
              AceCount = 534;
              goto LABEL_81;
            }
            if ( v49 > Size )
            {
              v65 = v46 * (unsigned __int64)(v105 - Size_4);
              if ( v65 > 0xFFFFFFFF || (unsigned int)v65 + Size < (unsigned int)v65 )
              {
                AceCount = 534;
                goto LABEL_80;
              }
              v66 = v65 + Size;
              v67 = (_WORD *)SddlpAlloc((unsigned int)v65 + Size);
              v68 = (void *)*a3;
              v69 = v67;
              if ( !v67 )
              {
                if ( v68 )
                  ExFreePoolWithTag(v68, 0);
                v61 = v98 == 1;
                *a3 = 0LL;
                if ( v61 )
                {
                  if ( Sid )
                    ExFreePoolWithTag(Sid, 0);
                  v12 = 0LL;
                  v98 = 0;
                }
                else
                {
                  v12 = (char *)Sid;
                }
                AceCount = 8;
                goto LABEL_80;
              }
              memmove(v67, *a3, Size);
              v69[1] = v66;
              if ( *a3 )
                ExFreePoolWithTag((PVOID)*a3, 0);
              *a3 = v69;
              v12 = (char *)Sid;
              Size = v66;
            }
            v99 = v49;
            if ( v44 <= 0xB )
            {
              switch ( v44 )
              {
                case 0xBu:
                  if ( v46 < 0xFFFF )
                  {
                    v52 = RtlAddAccessAllowedObjectAce((PACL)*a3, 4u, v97, AccessMask, p_Guid, v111, v12);
                    if ( v52 < 0 )
                      goto LABEL_247;
                    v52 = RtlGetAce((PACL)*a3, *((unsigned __int16 *)*a3 + 2) - 1, &Ace);
                    if ( v52 < 0 )
                      goto LABEL_247;
                    v71 = Ace;
                    v72 = 9;
                    if ( *(_BYTE *)Ace == 5 )
                      v72 = 11;
                    *(_BYTE *)Ace = v72;
                    v73 = v103;
                    v71[1] = v46;
                    if ( v73 )
                    {
                      v53 = Sid;
                      v74 = v73;
                      if ( *(_BYTE *)v71 == 11 )
                      {
                        v75 = *((_DWORD *)v71 + 2);
                        v76 = RtlLengthSid(Sid);
                        memmove((char *)&v71[8 * (v75 & 1) + 6 + 4 * (v75 & 2)] + v76, P, (unsigned int)v74);
                      }
                      else
                      {
                        v77 = RtlLengthSid(Sid);
                        memmove((char *)v71 + v77 + 8, P, v74);
                      }
LABEL_70:
                      if ( v52 >= 0 )
                      {
                        if ( v98 == 1 )
                          ExFreePoolWithTag(v53, 0);
                        v12 = 0LL;
                        Sid = 0LL;
                        if ( P )
                        {
                          ExFreePoolWithTag(P, 0);
                          P = 0LL;
                          v116 = 0LL;
                        }
                        LODWORD(v103) = 0;
                        if ( v106 )
                        {
                          ExFreePoolWithTag(v106, 0);
                          v106 = 0LL;
                          v114 = 0LL;
                        }
                        v54 = Size_4 + 1;
                        HIDWORD(v103) = 0;
                        ++Size_4;
                        v10 = v115 + 1;
                        if ( *v115 != 40 )
                          v10 = v115;
                        if ( v54 >= v105 )
                          goto LABEL_80;
                        continue;
                      }
LABEL_247:
                      v92 = RtlNtStatusToDosError(v52);
                      v12 = (char *)Sid;
                      AceCount = v92;
                      goto LABEL_80;
                    }
LABEL_69:
                    v53 = Sid;
                    goto LABEL_70;
                  }
                  goto LABEL_246;
                case 0u:
                  v50 = v97;
                  InheritedObjectTypeGuida = 0;
LABEL_67:
                  v51 = RtlpAddKnownAce(
                          (PACL)*a3,
                          2u,
                          v50,
                          AccessMask,
                          (unsigned __int8 *)v12,
                          InheritedObjectTypeGuida);
LABEL_68:
                  v52 = v51;
                  goto LABEL_69;
                case 1u:
                  v51 = RtlpAddKnownAce((PACL)*a3, 2u, v97, AccessMask, (unsigned __int8 *)v12, 1u);
                  goto LABEL_68;
                case 2u:
                  InheritedObjectTypeGuida = 2;
                  v70 = v97 & 0x3F | 0x40;
                  if ( (v97 & 0x40) == 0 )
                    v70 = v97 & 0x3F;
                  v50 = v70 | 0x80;
                  if ( (v97 & 0x80u) == 0 )
                    v50 = v70;
                  goto LABEL_67;
                case 5u:
                  v51 = RtlAddAccessAllowedObjectAce((PACL)*a3, 4u, v97, AccessMask, p_Guid, v111, v12);
                  goto LABEL_68;
                case 6u:
                  v51 = RtlAddAccessDeniedObjectAce((PACL)*a3, 4u, v97, AccessMask, p_Guid, v111, v12);
                  goto LABEL_68;
                case 7u:
                  v51 = RtlAddAuditAccessObjectAce(
                          (PACL)*a3,
                          4u,
                          v97,
                          AccessMask,
                          p_Guid,
                          v111,
                          v12,
                          v97 & 0x40,
                          v97 & 0x80);
                  goto LABEL_68;
              }
              if ( v44 > 8 )
                goto LABEL_231;
LABEL_248:
              v52 = -1073741811;
              goto LABEL_247;
            }
            v78 = v44 - 13;
            if ( !v78 )
            {
LABEL_231:
              if ( v46 < 0xFFFF )
              {
                v90 = SddlpAlloc(v46);
                v85 = (char *)v90;
                if ( v90 )
                {
                  *(_BYTE *)v90 = v102;
                  *(_DWORD *)(v90 + 4) = AccessMask;
                  *(_BYTE *)(v90 + 1) = v97;
                  *(_WORD *)(v90 + 2) = v46;
                  v91 = RtlLengthSid(v12);
                  RtlCopySid(v91, v85 + 8, v12);
                  if ( !(_DWORD)v103 )
                    goto LABEL_230;
                  v87 = (unsigned int)v103;
                  v88 = RtlLengthSid(v12);
                  v89 = P;
                  goto LABEL_229;
                }
                goto LABEL_235;
              }
              goto LABEL_246;
            }
            v79 = v78 - 4;
            if ( v79 )
            {
              v80 = v79 - 1;
              if ( !v80 )
              {
                if ( v46 < 0xFFFF && (v97 & 0xE0) == 0 && !AccessMask )
                {
                  v84 = *(_DWORD *)(v12 + 2) - v122;
                  if ( !v84 )
                    v84 = *((unsigned __int16 *)v12 + 3) - v123;
                  if ( !v84 && v12[1] == 1 && !*((_DWORD *)v12 + 2) )
                  {
                    v85 = (char *)SddlpAlloc(v46);
                    if ( v85 )
                    {
                      *v85 = v102;
                      v85[1] = v97;
                      *((_WORD *)v85 + 1) = v46;
                      *((_DWORD *)v85 + 1) = 0;
                      v86 = RtlLengthSid(v12);
                      RtlCopySid(v86, v85 + 8, v12);
                      if ( !HIDWORD(v103) )
                      {
LABEL_230:
                        v52 = RtlAddAce((PACL)*a3, 2u, 0xFFFFFFFF, v85, v46);
                        ExFreePoolWithTag(v85, 0);
                        goto LABEL_69;
                      }
                      v87 = HIDWORD(v103);
                      v88 = RtlLengthSid(v12);
                      v89 = v106;
LABEL_229:
                      memmove(&v85[v88 + 8], v89, v87);
                      goto LABEL_230;
                    }
LABEL_235:
                    v52 = -1073741801;
                    goto LABEL_69;
                  }
                }
LABEL_246:
                v52 = -1073741705;
                goto LABEL_247;
              }
              v81 = v80 - 1;
              if ( v81 )
              {
                v82 = v81 - 1;
                if ( v82 )
                {
                  if ( v82 != 1 )
                    goto LABEL_248;
                  if ( (unsigned int)v103 >= 0xFFFF )
                    goto LABEL_246;
                  v83 = SddlAddAccessFilterAce((PACL)*a3, ObjectTypeGuid, AccessMask, P, v103);
                }
                else
                {
                  v83 = SddlAddProcessTrustLabelAce((PACL)*a3, ObjectTypeGuid, AccessMask);
                }
              }
              else
              {
                v83 = SddlAddScopedPolicyIDAce((PACL)*a3, v12);
              }
            }
            else
            {
              v83 = SddlAddMandatoryAce((PACL)*a3, ObjectTypeGuid, AccessMask);
            }
            v52 = v83;
            goto LABEL_69;
          }
        }
        else
        {
          if ( v29 == 17 || v29 <= 3u )
          {
LABEL_57:
            v24 = 12;
            v45 = 12;
            goto LABEL_58;
          }
          if ( v29 <= 4u )
            goto LABEL_169;
          if ( v29 > 8u )
          {
            if ( v29 <= 0xAu )
            {
LABEL_159:
              if ( (unsigned int)v103 > 0xFFFFFFFC )
              {
LABEL_160:
                AceCount = 534;
                goto LABEL_84;
              }
              v63 = (v103 + 3) & 0xFFFFFFFC;
              v64 = v63 + 12;
              goto LABEL_157;
            }
            if ( v29 == 11 )
            {
              v62 = p_Guid != 0LL ? 48 : 32;
              if ( !v111 )
                v62 = p_Guid != 0LL ? 32 : 16;
              if ( (unsigned int)v103 > 0xFFFFFFFC )
                goto LABEL_160;
              v63 = (v103 + 3) & 0xFFFFFFFC;
              v64 = v63 + v62;
LABEL_157:
              v24 = -1;
              if ( v64 >= v63 )
              {
                v24 = v64;
                goto LABEL_173;
              }
              goto LABEL_172;
            }
            v61 = v29 == 13;
LABEL_168:
            if ( !v61 )
            {
LABEL_169:
              AceCount = 1336;
              goto LABEL_173;
            }
            goto LABEL_159;
          }
          v24 = p_Guid != 0LL ? 48 : 32;
          if ( !v111 )
            v24 = p_Guid != 0LL ? 32 : 16;
        }
        v45 = v24;
        goto LABEL_58;
      }
LABEL_142:
      AceCount = 1336;
      goto LABEL_80;
    }
    break;
  }
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
    v116 = 0LL;
  }
  LODWORD(v103) = 0;
  LODWORD(v115) = 0;
  if ( v106 )
  {
    ExFreePoolWithTag(v106, 0);
    v106 = 0LL;
    v114 = 0LL;
  }
  HIDWORD(v103) = 0;
  v113 = 0;
  if ( v29 != 18 )
  {
    ConditionForString = LocalGetConditionForString(
                           (_DWORD)i,
                           (unsigned int)&v110,
                           (unsigned int)&v116,
                           (unsigned int)&v115,
                           *(__int64 *)v117,
                           v121,
                           0LL,
                           a8);
    v60 = (int)v115;
    AceCount = ConditionForString;
    v40 = v110;
    P = v116;
    LODWORD(v103) = (_DWORD)v115;
    goto LABEL_140;
  }
  AceCount = LocalGetRelativeAttributeForString(
               (_DWORD)i,
               (unsigned int)&v110,
               (unsigned int)&v114,
               (unsigned int)&v113,
               *(__int64 *)v117,
               InheritedObjectTypeGuid,
               pSid,
               a8);
  v106 = v114;
  if ( !AceCount )
  {
    v43 = v113;
    v40 = v110;
    HIDWORD(v103) = v113;
    goto LABEL_141;
  }
LABEL_80:
  v21 = v99;
LABEL_81:
  v55 = *a3;
  if ( AceCount )
  {
    if ( v55 )
      ExFreePoolWithTag((PVOID)*a3, 0);
    *a3 = 0LL;
  }
  else
  {
    v55[1] = v21;
  }
  if ( v98 && v12 )
    ExFreePoolWithTag(v12, 0);
LABEL_84:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v106 )
    ExFreePoolWithTag(v106, 0);
  return AceCount;
}
