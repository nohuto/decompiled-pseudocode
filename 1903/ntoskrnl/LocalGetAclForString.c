/*
 * XREFs of LocalGetAclForString @ 0x1406F85C8
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406F8374 (LocalConvertStringSDToSD_Rev1.c)
 * Callees:
 *     RtlGetAce @ 0x140004010 (RtlGetAce.c)
 *     RtlLengthSid @ 0x140004070 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1401A0240 (_wcsnicmp.c)
 *     wcstoul @ 0x1401A2510 (wcstoul.c)
 *     wcsncpy_s @ 0x1401A66E0 (wcsncpy_s.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     LookupAceFlagsInTable @ 0x1405B2F68 (LookupAceFlagsInTable.c)
 *     RtlAddAce @ 0x1405C8700 (RtlAddAce.c)
 *     RtlpAddKnownAce @ 0x1405DC9F0 (RtlpAddKnownAce.c)
 *     RtlCopySid @ 0x140644850 (RtlCopySid.c)
 *     RtlNtStatusToDosError @ 0x1406BCDF0 (RtlNtStatusToDosError.c)
 *     LookupAccessMaskInTable @ 0x1406DD874 (LookupAccessMaskInTable.c)
 *     LookupAceTypeInTable @ 0x1406EA660 (LookupAceTypeInTable.c)
 *     SddlpAlloc @ 0x1406EC2DC (SddlpAlloc.c)
 *     LocalGetSidForString @ 0x1406F8B48 (LocalGetSidForString.c)
 *     LocalGetSDDLDeliminator @ 0x1406F8C3C (LocalGetSDDLDeliminator.c)
 *     LocalGetAceCount @ 0x1406F8CA8 (LocalGetAceCount.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1408D08C0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1408D0920 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1408D0C10 (RtlAddAuditAccessObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1408E399C (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x1408E3BB0 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x1408E3D10 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1408E3E6C (SddlAddScopedPolicyIDAce.c)
 *     SddlpUuidFromString @ 0x1408E4068 (SddlpUuidFromString.c)
 *     LocalGetConditionForString @ 0x1408E5E94 (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1408E65CC (LocalGetRelativeAttributeForString.c)
 */

__int64 __fastcall LocalGetAclForString(
        wchar_t *Str,
        char a2,
        PVOID *a3,
        wchar_t **a4,
        __int64 a5,
        __int64 a6,
        int a7,
        char a8)
{
  wchar_t *v8; // rbx
  unsigned int AceCount; // esi
  char *v12; // r14
  unsigned int v13; // r12d
  __int64 result; // rax
  wchar_t *v16; // rax
  __int64 v17; // rax
  wchar_t *v18; // rdx
  unsigned int v19; // r15d
  unsigned int v20; // edi
  _BYTE *v21; // rax
  __int16 v22; // cx
  wchar_t v23; // ax
  wchar_t v24; // cx
  wchar_t *v25; // rdi
  wchar_t **v26; // rax
  unsigned __int8 v27; // r15
  __int64 v28; // rax
  wchar_t *v29; // rbx
  wchar_t *v30; // rbx
  wchar_t **v31; // rdi
  wchar_t v32; // ax
  int v33; // r8d
  wchar_t **v34; // rax
  ACCESS_MASK v35; // ecx
  __int64 v36; // rax
  int v37; // edi
  unsigned int SidForString; // eax
  _WORD *v39; // rcx
  _WORD *i; // rbx
  int v41; // edx
  unsigned int v42; // edi
  ULONG v43; // eax
  ULONG v44; // r12d
  int v45; // r8d
  int v46; // eax
  int v47; // r14d
  PVOID v48; // rbx
  PSID v49; // r12
  unsigned int v50; // edx
  _WORD *v51; // rax
  _BYTE *v52; // rax
  unsigned int v53; // eax
  wchar_t **v54; // rax
  int v55; // edi
  bool v56; // zf
  unsigned int v57; // eax
  int v58; // edx
  unsigned __int64 v59; // rcx
  unsigned int v60; // edi
  _WORD *v61; // rax
  PVOID v62; // rcx
  _WORD *v63; // r14
  int v64; // edx
  _WORD *v65; // r15
  char v66; // al
  unsigned int v67; // eax
  size_t v68; // rbx
  int v69; // edi
  char *v70; // rcx
  size_t v71; // r8
  int v72; // ecx
  char *v73; // rdi
  ULONG v74; // eax
  unsigned int v75; // ebx
  ULONG v76; // eax
  char *v77; // rax
  char *v78; // rdi
  ULONG v79; // eax
  unsigned int v80; // ebx
  ULONG v81; // eax
  size_t v82; // r8
  ULONG v83; // eax
  int ObjectTypeGuid; // [rsp+20h] [rbp-E0h]
  int InheritedObjectTypeGuid; // [rsp+28h] [rbp-D8h]
  UCHAR InheritedObjectTypeGuida; // [rsp+28h] [rbp-D8h]
  int pSid; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v88; // [rsp+50h] [rbp-B0h]
  int v89; // [rsp+54h] [rbp-ACh]
  char v90; // [rsp+58h] [rbp-A8h] BYREF
  ACCESS_MASK AccessMask; // [rsp+5Ch] [rbp-A4h]
  PSID Sid; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 v93; // [rsp+68h] [rbp-98h]
  PVOID P; // [rsp+70h] [rbp-90h]
  size_t v95; // [rsp+78h] [rbp-88h]
  unsigned int v96; // [rsp+80h] [rbp-80h] BYREF
  PVOID Src; // [rsp+88h] [rbp-78h]
  int v98; // [rsp+90h] [rbp-70h]
  unsigned int Size; // [rsp+94h] [rbp-6Ch]
  int Size_4; // [rsp+98h] [rbp-68h]
  _WORD *v101; // [rsp+A0h] [rbp-60h] BYREF
  GUID *v102; // [rsp+A8h] [rbp-58h]
  GUID *p_Guid; // [rsp+B0h] [rbp-50h]
  int v104; // [rsp+B8h] [rbp-48h] BYREF
  void *v105; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t *v106; // [rsp+C8h] [rbp-38h] BYREF
  void *v107; // [rsp+D0h] [rbp-30h] BYREF
  int v108[2]; // [rsp+D8h] [rbp-28h]
  wchar_t **v109; // [rsp+E0h] [rbp-20h]
  wchar_t *EndPtr; // [rsp+E8h] [rbp-18h] BYREF
  PVOID Ace; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v112; // [rsp+F8h] [rbp-8h]
  int v113; // [rsp+100h] [rbp+0h]
  unsigned __int16 v114; // [rsp+104h] [rbp+4h]
  GUID Guid; // [rsp+108h] [rbp+8h] BYREF
  GUID v116; // [rsp+118h] [rbp+18h] BYREF
  wchar_t Dst[40]; // [rsp+130h] [rbp+30h] BYREF

  v8 = Str;
  *(_QWORD *)v108 = a5;
  v112 = a6;
  v109 = a4;
  AceCount = 0;
  v96 = 0;
  v12 = 0LL;
  v90 = 0;
  v13 = 0;
  Sid = 0LL;
  P = 0LL;
  v107 = 0LL;
  v95 = 0LL;
  Src = 0LL;
  v105 = 0LL;
  Ace = 0LL;
  v113 = 0;
  v114 = 256;
  if ( !Str || !a3 || !a4 )
    return 87LL;
  if ( !wcsnicmp(Str, L"NO_ACCESS_CONTROL", 0x11uLL) )
  {
    *a3 = 0LL;
    *a4 = v8 + 17;
    return AceCount;
  }
  v98 = 2 - (a2 != 0);
  result = LocalGetSDDLDeliminator(v8);
  if ( (_DWORD)result )
    return result;
  v16 = *a4;
  if ( *a4 == v8 )
    return 87LL;
  if ( v16 )
  {
    v18 = v16 - 1;
  }
  else
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v8[v17] );
    v18 = &v8[v17];
  }
  *a4 = v18;
  AceCount = LocalGetAceCount(v8, v18, &v96);
  if ( AceCount )
    return AceCount;
  v19 = v96;
  if ( !v96 )
  {
    v52 = SddlpAlloc(8uLL);
    *a3 = v52;
    if ( v52 )
    {
      *v52 = 2;
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
  v20 = 84 * v96 + 8;
  if ( v20 > 0xFFFF )
    v20 = 0xFFFF;
  Size = v20;
  v21 = SddlpAlloc(v20);
  *a3 = v21;
  if ( !v21 )
    return 8;
  *v21 = 2;
  v22 = 8;
  v89 = 8;
  *((_BYTE *)*a3 + 1) = 0;
  *((_WORD *)*a3 + 1) = v20;
  *((_WORD *)*a3 + 2) = 0;
  *((_WORD *)*a3 + 3) = 0;
  Size_4 = 0;
  if ( !v19 )
  {
LABEL_81:
    v51 = *a3;
    if ( AceCount )
    {
      if ( v51 )
        ExFreePoolWithTag(*a3, 0);
      *a3 = 0LL;
    }
    else
    {
      v51[1] = v22;
    }
    if ( v90 && v12 )
      ExFreePoolWithTag(v12, 0);
    goto LABEL_84;
  }
  while ( 2 )
  {
    v88 = 0;
    AccessMask = 0;
    p_Guid = 0LL;
    *(_QWORD *)&Guid.Data1 = 0LL;
    v102 = 0LL;
    *(_QWORD *)Guid.Data4 = 0LL;
    *(_QWORD *)&v116.Data1 = 0LL;
    *(_QWORD *)v116.Data4 = 0LL;
    while ( 1 )
    {
      v23 = *v8;
      if ( *v8 != 32 )
        break;
      ++v8;
    }
    v24 = *v8;
    if ( v23 == 40 )
      v24 = v8[1];
    v25 = v8 + 1;
    if ( v23 != 40 )
      v25 = v8;
    if ( v24 == 32 )
    {
      do
        ++v25;
      while ( *v25 == 32 );
    }
    v26 = LookupAceTypeInTable(v25, 0, v98);
    if ( !v26 )
    {
      AceCount = 1804;
      goto LABEL_80;
    }
    v27 = *((_BYTE *)v26 + 12);
    v28 = *((unsigned int *)v26 + 2);
    v93 = v27;
    v29 = &v25[v28];
    if ( *v29 != 59 && *v29 != 32 )
      goto LABEL_104;
    v30 = v29 + 1;
    if ( (unsigned __int8)(v27 - 5) <= 3u || v27 == 11 )
      *(_BYTE *)*a3 = 4;
    while ( *v30 == 32 )
      ++v30;
    v31 = v109;
    while ( 1 )
    {
      if ( v30 == *v31 )
        goto LABEL_33;
      if ( *v30 == 59 )
        break;
      for ( ; *v30 == 32; ++v30 )
        ;
      v54 = LookupAceFlagsInTable(v30, 0, v98, v27);
      if ( !v54 )
      {
        AceCount = 1004;
        goto LABEL_80;
      }
      v88 |= *((_BYTE *)v54 + 12);
      v30 += *((unsigned int *)v54 + 2);
    }
    do
    {
      ++v30;
LABEL_33:
      v32 = *v30;
    }
    while ( *v30 == 32 );
    if ( v32 != 59 )
    {
      do
      {
        if ( v32 == 32 )
        {
          do
            ++v30;
          while ( *v30 == 32 );
        }
        v33 = v98;
        if ( v27 == 17 )
          v33 = 4;
        v34 = LookupAccessMaskInTable(v30, 0, v33);
        if ( v34 )
        {
          v35 = *((_DWORD *)v34 + 3) | AccessMask;
          v36 = *((unsigned int *)v34 + 2);
          AccessMask = v35;
          v30 += v36;
        }
        else
        {
          v53 = wcstoul(v30, &EndPtr, 0);
          AccessMask |= v53;
          if ( EndPtr == v30 )
            goto LABEL_104;
          v30 = EndPtr;
        }
        v32 = *v30;
      }
      while ( *v30 != 59 );
    }
    v37 = 0;
LABEL_42:
    ++v30;
    while ( 1 )
    {
      if ( *v30 == 59 )
        goto LABEL_44;
      if ( *v30 == 32 )
        goto LABEL_42;
      if ( (unsigned __int8)(v27 - 5) > 3u && v27 != 11 )
        goto LABEL_104;
      wcsncpy_s(Dst, 0x25uLL, v30, 0x24uLL);
      Dst[36] = 0;
      if ( !v37 )
      {
        if ( !(unsigned int)SddlpUuidFromString(Dst, &Guid) )
          goto LABEL_123;
        p_Guid = &Guid;
        goto LABEL_121;
      }
      if ( !(unsigned int)SddlpUuidFromString(Dst, &v116) )
        break;
      v102 = &v116;
LABEL_121:
      v30 += 36;
      if ( *v30 != 59 && *v30 != 32 )
      {
LABEL_123:
        AceCount = 1705;
        goto LABEL_80;
      }
LABEL_44:
      ++v30;
      if ( (unsigned int)++v37 >= 2 )
        goto LABEL_45;
    }
    AceCount = 1705;
LABEL_45:
    if ( AceCount )
      goto LABEL_80;
    while ( *v30 == 32 )
      ++v30;
    SidForString = LocalGetSidForString(
                     (_DWORD)v30,
                     (unsigned int)&Sid,
                     (unsigned int)&v101,
                     (unsigned int)&v90,
                     *(__int64 *)v108,
                     InheritedObjectTypeGuid,
                     pSid,
                     a8);
    v12 = (char *)Sid;
    AceCount = SidForString;
    if ( SidForString )
      goto LABEL_80;
    v39 = v101;
    if ( !v101 || !Sid )
      goto LABEL_104;
    for ( i = v101; *i == 32; ++i )
      ;
    if ( v27 <= 0x15u )
    {
      v41 = 2371072;
      if ( _bittest(&v41, v27) )
      {
        if ( *i == 59 )
        {
          do
            ++i;
          while ( *i == 32 );
          if ( *i == 40 )
          {
            if ( P )
            {
              ExFreePoolWithTag(P, 0);
              P = 0LL;
              v107 = 0LL;
            }
            v13 = 0;
            LODWORD(v95) = 0;
            LODWORD(v106) = 0;
            if ( Src )
            {
              ExFreePoolWithTag(Src, 0);
              Src = 0LL;
              v105 = 0LL;
            }
            v55 = 0;
            HIDWORD(v95) = 0;
            v104 = 0;
            if ( v27 == 18 )
            {
              AceCount = LocalGetRelativeAttributeForString(
                           (_DWORD)i,
                           (unsigned int)&v101,
                           (unsigned int)&v105,
                           (unsigned int)&v104,
                           *(__int64 *)v108,
                           InheritedObjectTypeGuid,
                           pSid,
                           a8);
              Src = v105;
              if ( !AceCount )
              {
                v55 = v104;
                v39 = v101;
                HIDWORD(v95) = v104;
                goto LABEL_141;
              }
              goto LABEL_80;
            }
            AceCount = LocalGetConditionForString(
                         (_DWORD)i,
                         (unsigned int)&v101,
                         (unsigned int)&v107,
                         (unsigned int)&v106,
                         *(__int64 *)v108,
                         v112,
                         0LL,
                         a8);
            v13 = (unsigned int)v106;
            P = v107;
            v39 = v101;
            LODWORD(v95) = (_DWORD)v106;
          }
          else
          {
            v55 = HIDWORD(v95);
            v39 = i;
            v101 = i;
          }
          if ( v13 )
          {
LABEL_142:
            if ( !AceCount )
              goto LABEL_53;
LABEL_80:
            v22 = v89;
            goto LABEL_81;
          }
LABEL_141:
          if ( v55 )
            goto LABEL_142;
        }
LABEL_104:
        AceCount = 1336;
        goto LABEL_80;
      }
    }
LABEL_53:
    if ( *v39 == 32 )
    {
      do
        ++v39;
      while ( *v39 == 32 );
      v101 = v39;
    }
    if ( *v39 != 41 )
      goto LABEL_104;
    v106 = v39 + 1;
    if ( v27 > 0x11u )
    {
      if ( v27 == 18 )
      {
        v57 = HIDWORD(v95);
        goto LABEL_165;
      }
      if ( v27 != 19 && v27 != 20 )
      {
        v56 = v27 == 21;
LABEL_151:
        if ( !v56 )
          goto LABEL_104;
        goto LABEL_152;
      }
LABEL_58:
      v42 = 12;
LABEL_59:
      v43 = RtlLengthSid(v12);
      v22 = v89;
      v44 = v42 + v43 - 4;
      if ( v44 < v42 || v44 + v89 < v44 )
      {
        AceCount = 534;
        goto LABEL_81;
      }
      if ( v44 + v89 <= Size )
        goto LABEL_62;
      v59 = v44 * (unsigned __int64)(v96 - Size_4);
      if ( v59 > 0xFFFFFFFF )
        goto LABEL_167;
      v60 = v59 + Size;
      if ( (unsigned int)v59 + Size < (unsigned int)v59 )
        goto LABEL_167;
      v61 = SddlpAlloc(v60);
      v62 = *a3;
      v63 = v61;
      if ( v61 )
      {
        memmove(v61, *a3, Size);
        v63[1] = v60;
        if ( *a3 )
          ExFreePoolWithTag(*a3, 0);
        *a3 = v63;
        v12 = (char *)Sid;
        Size = v60;
LABEL_62:
        v89 += v44;
        if ( v27 <= 0xBu )
        {
          switch ( v27 )
          {
            case 0xBu:
              if ( v44 >= 0xFFFF )
                goto LABEL_240;
              v47 = RtlAddAccessAllowedObjectAce((PACL)*a3, 4u, v88, AccessMask, p_Guid, v102, v12);
              if ( v47 < 0 )
                goto LABEL_241;
              v47 = RtlGetAce((PACL)*a3, *((unsigned __int16 *)*a3 + 2) - 1, &Ace);
              if ( v47 < 0 )
                goto LABEL_241;
              v65 = Ace;
              v66 = 9;
              if ( *(_BYTE *)Ace == 5 )
                v66 = 11;
              *(_BYTE *)Ace = v66;
              v67 = v95;
              v65[1] = v44;
              if ( v67 )
              {
                v68 = v67;
                v49 = Sid;
                if ( *(_BYTE *)v65 == 11 )
                {
                  v69 = *((_DWORD *)v65 + 2);
                  v70 = (char *)&v65[8 * (v69 & 1) + 6 + 4 * (v69 & 2)] + RtlLengthSid(Sid);
                }
                else
                {
                  v70 = (char *)v65 + RtlLengthSid(Sid) + 8;
                }
                v71 = v68;
                v48 = P;
                memmove(v70, P, v71);
LABEL_70:
                if ( v47 < 0 )
                  goto LABEL_241;
                if ( v90 == 1 )
                  ExFreePoolWithTag(v49, 0);
                Sid = 0LL;
                v12 = 0LL;
                if ( v48 )
                {
                  ExFreePoolWithTag(v48, 0);
                  P = 0LL;
                  v107 = 0LL;
                }
                LODWORD(v95) = 0;
                v13 = 0;
                if ( Src )
                {
                  ExFreePoolWithTag(Src, 0);
                  Src = 0LL;
                  v105 = 0LL;
                }
                v50 = Size_4 + 1;
                HIDWORD(v95) = 0;
                ++Size_4;
                v8 = v106 + 1;
                if ( *v106 != 40 )
                  v8 = v106;
                if ( v50 >= v96 )
                  goto LABEL_80;
                continue;
              }
              goto LABEL_68;
            case 0u:
              v45 = v88;
              InheritedObjectTypeGuida = 0;
LABEL_66:
              v46 = RtlpAddKnownAce((PACL)*a3, 2u, v45, AccessMask, (unsigned __int8 *)v12, InheritedObjectTypeGuida);
LABEL_67:
              v47 = v46;
LABEL_68:
              v48 = P;
LABEL_69:
              v49 = Sid;
              goto LABEL_70;
            case 1u:
              v46 = RtlpAddKnownAce((PACL)*a3, 2u, v88, AccessMask, (unsigned __int8 *)v12, 1u);
              goto LABEL_67;
            case 2u:
              InheritedObjectTypeGuida = 2;
              v64 = v88 & 0x3F | 0x40;
              if ( (v88 & 0x40) == 0 )
                v64 = v88 & 0x3F;
              v45 = v64 | 0x80;
              if ( (v88 & 0x80u) == 0 )
                v45 = v64;
              goto LABEL_66;
            case 5u:
              v46 = RtlAddAccessAllowedObjectAce((PACL)*a3, 4u, v88, AccessMask, p_Guid, v102, v12);
              goto LABEL_67;
            case 6u:
              v46 = RtlAddAccessDeniedObjectAce((PACL)*a3, 4u, v88, AccessMask, p_Guid, v102, v12);
              goto LABEL_67;
            case 7u:
              v46 = RtlAddAuditAccessObjectAce(
                      (PACL)*a3,
                      4u,
                      v88,
                      AccessMask,
                      p_Guid,
                      v102,
                      v12,
                      v88 & 0x40,
                      v88 & 0x80);
              goto LABEL_67;
          }
          if ( v27 <= 8u )
            goto LABEL_180;
LABEL_223:
          if ( v44 >= 0xFFFF )
            goto LABEL_240;
          v77 = (char *)SddlpAlloc(v44);
          v78 = v77;
          if ( v77 )
          {
            *v77 = v93;
            *((_DWORD *)v77 + 1) = AccessMask;
            v77[1] = v88;
            *((_WORD *)v77 + 1) = v44;
            v79 = RtlLengthSid(v12);
            RtlCopySid(v79, v78 + 8, v12);
            if ( (_DWORD)v95 )
            {
              v80 = v95;
              v81 = RtlLengthSid(v12);
              v82 = v80;
              v48 = P;
              memmove(&v78[v81 + 8], P, v82);
            }
            else
            {
              v48 = P;
            }
            v47 = RtlAddAce((PACL)*a3, 2u, 0xFFFFFFFF, v78, v44);
            ExFreePoolWithTag(v78, 0);
            goto LABEL_69;
          }
LABEL_229:
          v47 = -1073741801;
          goto LABEL_68;
        }
        switch ( v27 )
        {
          case 0xDu:
            goto LABEL_223;
          case 0x11u:
            v46 = SddlAddMandatoryAce((PACL)*a3, ObjectTypeGuid, AccessMask);
            goto LABEL_67;
          case 0x12u:
            if ( v44 < 0xFFFF && (v88 & 0xE0) == 0 && !AccessMask )
            {
              v72 = *(_DWORD *)(v12 + 2) - v113;
              if ( !v72 )
                v72 = *((unsigned __int16 *)v12 + 3) - v114;
              if ( !v72 && v12[1] == 1 && !*((_DWORD *)v12 + 2) )
              {
                v73 = (char *)SddlpAlloc(v44);
                if ( v73 )
                {
                  *v73 = v93;
                  v73[1] = v88;
                  *((_WORD *)v73 + 1) = v44;
                  *((_DWORD *)v73 + 1) = 0;
                  v74 = RtlLengthSid(v12);
                  RtlCopySid(v74, v73 + 8, v12);
                  if ( HIDWORD(v95) )
                  {
                    v75 = HIDWORD(v95);
                    v76 = RtlLengthSid(v12);
                    memmove(&v73[v76 + 8], Src, v75);
                  }
                  v47 = RtlAddAce((PACL)*a3, 2u, 0xFFFFFFFF, v73, v44);
                  ExFreePoolWithTag(v73, 0);
                  goto LABEL_68;
                }
                goto LABEL_229;
              }
            }
LABEL_240:
            v47 = -1073741705;
            break;
          case 0x13u:
            v46 = SddlAddScopedPolicyIDAce((PACL)*a3, v12);
            goto LABEL_67;
          case 0x14u:
            v46 = SddlAddProcessTrustLabelAce((PACL)*a3, ObjectTypeGuid, AccessMask);
            goto LABEL_67;
          case 0x15u:
            if ( (unsigned int)v95 >= 0xFFFF )
              goto LABEL_240;
            v48 = P;
            v47 = SddlAddAccessFilterAce((PACL)*a3, ObjectTypeGuid, AccessMask, P, v95);
            goto LABEL_69;
          default:
LABEL_180:
            v47 = -1073741811;
            break;
        }
LABEL_241:
        v83 = RtlNtStatusToDosError(v47);
        v12 = (char *)Sid;
        AceCount = v83;
        goto LABEL_80;
      }
      if ( v62 )
        ExFreePoolWithTag(v62, 0);
      v56 = v90 == 1;
      *a3 = 0LL;
      if ( v56 )
      {
        if ( Sid )
          ExFreePoolWithTag(Sid, 0);
        v12 = 0LL;
        v90 = 0;
      }
      else
      {
        v12 = (char *)Sid;
      }
      AceCount = 8;
      goto LABEL_80;
    }
    break;
  }
  if ( v27 == 17 || v27 <= 3u )
    goto LABEL_58;
  if ( v27 <= 4u )
    goto LABEL_104;
  if ( v27 <= 8u )
  {
    v42 = p_Guid != 0LL ? 32 : 16;
    if ( v102 )
      v42 = p_Guid != 0LL ? 48 : 32;
    goto LABEL_59;
  }
  if ( v27 <= 0xAu )
  {
LABEL_152:
    if ( v13 > 0xFFFFFFFC )
      goto LABEL_231;
    v57 = (v13 + 3) & 0xFFFFFFFC;
LABEL_165:
    v42 = v57 + 12;
LABEL_166:
    if ( v42 < v57 )
    {
LABEL_167:
      AceCount = 534;
      goto LABEL_80;
    }
    goto LABEL_59;
  }
  if ( v27 != 11 )
  {
    v56 = v27 == 13;
    goto LABEL_151;
  }
  v58 = p_Guid != 0LL ? 48 : 32;
  if ( !v102 )
    v58 = p_Guid != 0LL ? 32 : 16;
  if ( v13 <= 0xFFFFFFFC )
  {
    v57 = (v13 + 3) & 0xFFFFFFFC;
    v42 = v57 + v58;
    goto LABEL_166;
  }
LABEL_231:
  AceCount = 534;
LABEL_84:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return AceCount;
}
