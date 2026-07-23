/*
 * XREFs of SepCreateTokenEx @ 0x140086D2C
 * Callers:
 *     NtCreateTokenEx @ 0x14061B850 (NtCreateTokenEx.c)
 *     SepCreateToken @ 0x140758ACC (SepCreateToken.c)
 * Callees:
 *     RtlEqualSid @ 0x1400053E0 (RtlEqualSid.c)
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x14000A31C (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     RtlSidHashInitialize @ 0x14000AAB0 (RtlSidHashInitialize.c)
 *     RtlWalkFrameChain @ 0x140017230 (RtlWalkFrameChain.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExInitializeResourceLite @ 0x1400476D0 (ExInitializeResourceLite.c)
 *     DbgPrint @ 0x1401264E0 (DbgPrint.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeCreateAccessState @ 0x1405D3900 (SeCreateAccessState.c)
 *     SepSetTokenTrust @ 0x1405D54D0 (SepSetTokenTrust.c)
 *     SepAppendAdminAceToTokenAcl @ 0x1405D779C (SepAppendAdminAceToTokenAcl.c)
 *     ObInsertObject @ 0x1405D9570 (ObInsertObject.c)
 *     SeDeleteAccessState @ 0x140619B20 (SeDeleteAccessState.c)
 *     RtlIdentifierAuthoritySid @ 0x14061ACE4 (RtlIdentifierAuthoritySid.c)
 *     RtlLengthRequiredSid @ 0x14061ACF0 (RtlLengthRequiredSid.c)
 *     RtlCopySidAndAttributesArray @ 0x14061AFF0 (RtlCopySidAndAttributesArray.c)
 *     SepSetTokenClaims @ 0x14061B608 (SepSetTokenClaims.c)
 *     SepReferenceLogonSession @ 0x14061B720 (SepReferenceLogonSession.c)
 *     RtlCopySid @ 0x140644850 (RtlCopySid.c)
 *     ObCreateObject @ 0x14068E010 (ObCreateObject.c)
 *     SepSetTokenUserAndGroups @ 0x1408E0B48 (SepSetTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x1408E1060 (SepAddTokenLogonSession.c)
 */

__int64 __fastcall SepCreateTokenEx(
        HANDLE *a1,
        char a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        _QWORD *a8,
        _SID_AND_ATTRIBUTES *a9,
        ULONG Count,
        _SID_AND_ATTRIBUTES *a11,
        unsigned int a12,
        unsigned int a13,
        char **a14,
        void *a15,
        void *a16,
        void *a17,
        _OWORD *a18,
        __int64 a19,
        __int64 a20,
        int a21,
        __int64 a22,
        _DWORD *a23,
        char a24)
{
  PSID v26; // rdi
  ULONG v27; // r13d
  int v28; // r12d
  __int64 result; // rax
  PSID Sid; // rsi
  ULONG v31; // ebx
  ULONG v32; // r14d
  __int64 v33; // rax
  PSID_AND_ATTRIBUTES v34; // r15
  BOOLEAN v35; // al
  __int64 v36; // r10
  bool v37; // bl
  int v38; // r11d
  bool v39; // r14
  ULONG Attributes; // eax
  int v41; // r15d
  ULONG *p_Attributes; // rsi
  ULONG v43; // edx
  _BYTE *v44; // rdi
  PSID_IDENTIFIER_AUTHORITY v45; // rax
  char v46; // dl
  __int64 v47; // r8
  int v48; // ecx
  __int64 v49; // r11
  __int64 v50; // rsi
  __int64 v51; // rdi
  int *v52; // rcx
  int v53; // r9d
  unsigned __int64 v54; // r8
  _DWORD *PoolWithTag; // rax
  _DWORD *v56; // rsi
  _QWORD *v57; // rax
  PVOID v58; // rbx
  struct _ERESOURCE *v59; // r15
  int v60; // ebx
  unsigned __int8 *v61; // rax
  ULONG v62; // r14d
  ULONG v63; // r12d
  ULONG v64; // ecx
  int v65; // eax
  NTSTATUS inserted; // ebx
  _QWORD *v67; // rbx
  char *v68; // rdi
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  PVOID v72; // rax
  char *v73; // r15
  __int64 v74; // rcx
  int v75; // esi
  _SID_AND_ATTRIBUTES *v76; // rdx
  ULONG v77; // r14d
  __int64 v78; // rcx
  char *v79; // rsi
  unsigned __int8 *v80; // r14
  ULONG v81; // ebx
  unsigned __int16 *v82; // rcx
  char *v83; // rsi
  void *v84; // rdx
  void *v85; // rcx
  BOOLEAN v86; // al
  unsigned __int8 v87; // r8
  int v88; // r9d
  unsigned int v89; // edx
  BOOLEAN v90; // al
  BOOLEAN v91; // al
  PVOID v92; // rdi
  void *v93; // rcx
  __int64 v94; // rdx
  _KPROCESS *Process; // rcx
  ULONG v96; // eax
  int v97; // edx
  ULONG RemainingSidAreaSize; // [rsp+30h] [rbp-D0h]
  char v99; // [rsp+50h] [rbp-B0h]
  char v100; // [rsp+51h] [rbp-AFh] BYREF
  char v101; // [rsp+52h] [rbp-AEh]
  char v102; // [rsp+53h] [rbp-ADh]
  int v103; // [rsp+54h] [rbp-ACh]
  ULONG SidAreaSize; // [rsp+58h] [rbp-A8h] BYREF
  char **v105; // [rsp+60h] [rbp-A0h]
  int v106; // [rsp+68h] [rbp-98h]
  int v107; // [rsp+6Ch] [rbp-94h]
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  PSID SidArea; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v110; // [rsp+80h] [rbp-80h]
  PSID_AND_ATTRIBUTES Src; // [rsp+88h] [rbp-78h]
  PVOID P; // [rsp+90h] [rbp-70h]
  PSID Sid1; // [rsp+98h] [rbp-68h]
  int v114; // [rsp+A0h] [rbp-60h]
  int v115; // [rsp+A4h] [rbp-5Ch]
  unsigned int v116; // [rsp+A8h] [rbp-58h]
  __int64 v117; // [rsp+B0h] [rbp-50h]
  PSID_AND_ATTRIBUTES v118; // [rsp+B8h] [rbp-48h]
  PHANDLE Handle; // [rsp+C0h] [rbp-40h]
  _QWORD *v120; // [rsp+C8h] [rbp-38h]
  __int64 v121; // [rsp+D0h] [rbp-30h]
  __int64 v122; // [rsp+D8h] [rbp-28h]
  __int64 v123; // [rsp+E0h] [rbp-20h]
  __int64 v124; // [rsp+E8h] [rbp-18h]
  void *v125; // [rsp+F0h] [rbp-10h]
  __int64 v126; // [rsp+F8h] [rbp-8h]
  __int64 v127; // [rsp+100h] [rbp+0h]
  __int64 v128; // [rsp+108h] [rbp+8h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v130[224]; // [rsp+1B0h] [rbp+B0h] BYREF

  v26 = a15;
  v27 = Count;
  v107 = -1;
  v124 = a7;
  v105 = a14;
  Sid1 = a16;
  v125 = a17;
  v128 = a19;
  v127 = a20;
  v126 = a22;
  v116 = a3;
  v28 = 0;
  v102 = a2;
  Handle = a1;
  v103 = 0;
  v120 = (_QWORD *)a4;
  Src = a9;
  v118 = a11;
  SidArea = a15;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v130, 0, sizeof(v130));
  v117 = 0LL;
  v99 = 0;
  v101 = 0;
  v100 = 0;
  P = 0LL;
  result = SeCaptureObjectAttributeSecurityDescriptorPresent(a4, a2, &v100);
  if ( (int)result >= 0 )
  {
    Sid = a9->Sid;
    v31 = 0;
    if ( Count )
    {
      do
      {
        v32 = v31;
        while ( v32 < v27 )
        {
          if ( !RtlEqualSid(Sid, a11[v32].Sid) || (a11[v32].Attributes & 0x20) != 0 )
            ++v32;
          else
            a11[v32] = a11[--v27];
        }
        v33 = v31++;
        Sid = a11[v33].Sid;
      }
      while ( v31 < v27 );
      v34 = Src;
      v26 = SidArea;
      Sid = Src->Sid;
    }
    else
    {
      v34 = Src;
    }
    v35 = RtlEqualSid(Sid1, Sid);
    v36 = 0LL;
    v37 = v35 != 0;
    if ( v26 )
    {
      v91 = RtlEqualSid(v26, Sid);
      v36 = 0LL;
      LOBYTE(v38) = 1;
      v39 = v91 != 0;
    }
    else
    {
      LOBYTE(v38) = 1;
      v39 = 1;
    }
    Attributes = v34->Attributes;
    if ( (Attributes & 0x10) != 0 )
    {
      if ( (Attributes & 6) != 0 )
        return 3221225485LL;
      v28 = 2048;
      v103 = 2048;
    }
    v106 = 0;
    if ( v27 )
    {
      v41 = 1;
      p_Attributes = &v118->Attributes;
      v106 = 0;
      while ( 1 )
      {
        v43 = *p_Attributes;
        if ( ((unsigned __int8)*p_Attributes & (unsigned __int8)v38) != 0 )
        {
          v43 |= 6u;
          *p_Attributes = v43;
        }
        if ( (v43 & 0x10) != 0 )
        {
          if ( (v43 & 6) != 0 )
            return 3221225485LL;
          v28 |= 0x800u;
          v103 = v28;
        }
        v44 = (_BYTE *)*((_QWORD *)p_Attributes - 1);
        RtlIdentifierAuthoritySid(v44);
        v45 = RtlIdentifierAuthoritySid(SeUntrustedMandatorySid);
        v48 = *(_DWORD *)v45->Value - *(_DWORD *)v47;
        if ( *(_DWORD *)v45->Value == *(_DWORD *)v47 )
          v48 = *(unsigned __int16 *)&v45->Value[4] - *(unsigned __int16 *)(v47 + 4);
        if ( !v48 )
        {
          v87 = v44[1];
          if ( v87 )
          {
            v88 = v87;
            if ( *(_DWORD *)&v44[4 * v87 + 4] > 0x4000u )
              return 3221226566LL;
          }
          else
          {
            v88 = v36;
          }
          if ( (v46 & 0x40) != 0 )
            break;
        }
LABEL_20:
        if ( !v37 )
        {
          v90 = RtlEqualSid(Sid1, v44);
          v36 = 0LL;
          v38 = 1;
          v37 = v90 != 0;
        }
        if ( !v39 )
        {
          v86 = RtlEqualSid(SidArea, v44);
          v36 = 0LL;
          if ( v86 )
          {
            if ( (*p_Attributes & 8) == 0 )
              return 3221225562LL;
            v38 = 1;
            v106 = v41;
            v39 = 1;
          }
          else
          {
            v38 = 1;
          }
        }
        v41 += v38;
        p_Attributes += 4;
        if ( v41 - 1 >= v27 )
          goto LABEL_24;
      }
      if ( v107 != -1 )
        return 3221225485LL;
      v107 = v41;
      if ( v87 )
      {
        v89 = *(_DWORD *)&v44[4 * (v88 - 1) + 8];
        if ( v89 >= 0x3000 )
        {
          v99 = v38;
          v28 |= 0x2000u;
LABEL_84:
          v103 = v28;
          goto LABEL_20;
        }
        if ( v89 >= 0x2000 )
        {
LABEL_89:
          v99 = v36;
          if ( v89 >= 0x2000 )
            v28 |= 0x2000u;
          goto LABEL_84;
        }
      }
      else
      {
        v89 = v36;
      }
      v101 = v38;
      goto LABEL_89;
    }
LABEL_24:
    if ( !v37 )
      return 3221225563LL;
    if ( !v39 )
      return 3221225562LL;
    v49 = v36;
    v121 = v36;
    v50 = v36;
    v122 = v36;
    v51 = v36;
    v123 = v36;
    if ( a13 )
    {
      v52 = (int *)(v105 + 1);
      do
      {
        v53 = *v52;
        if ( (*v52 & 0x7FFFFFF8) != 0 )
          return 3221225485LL;
        v54 = (unsigned int)*(v52 - 2);
        *v52 &= 3u;
        if ( (unsigned int)v54 > 0x24 )
          return 3221225568LL;
        if ( _bittest64(&v49, v54) )
          return 3221225894LL;
        v49 |= 1LL << v54;
        v121 = v49;
        if ( (v53 & 2) != 0 )
        {
          _bittestandset64(&v50, (unsigned int)v54);
          v122 = v50;
        }
        if ( (v53 & 1) != 0 )
        {
          _bittestandset64(&v51, (unsigned int)v54);
          v123 = v51;
        }
        LODWORD(v36) = v36 + 1;
        v52 += 3;
      }
      while ( (unsigned int)v36 < a13 );
    }
    if ( a23 && (*a23 & 0xFFFFFFFC) != 0 )
      return 3221225485LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
    v56 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    *PoolWithTag = 0;
    v57 = PoolWithTag + 2;
    v57[1] = v57;
    *v57 = v57;
    v56[6] = 0;
    *((_QWORD *)v56 + 5) = v56 + 8;
    *((_QWORD *)v56 + 4) = v56 + 8;
    if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
    {
      P = ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x74416553u);
      v58 = P;
      if ( !P )
      {
        v93 = v56;
        goto LABEL_119;
      }
    }
    else
    {
      v58 = 0LL;
    }
    v117 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    v59 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
    if ( v59 )
    {
      v60 = 16 * v27;
      v115 = 16 * v27;
      if ( SepTokenSidSharingEnabled )
      {
        v62 = (v60 + 23) & 0xFFFFFFF8;
        v110 = a12;
      }
      else
      {
        v61 = (unsigned __int8 *)Src->Sid;
        v110 = (a12 + 7) & 0xFFFFFFF8;
        v62 = v60 + ((RtlLengthRequiredSid(v61[1]) + 3) & 0xFFFFFFFC) + v110 + 16;
      }
      SidAreaSize = v62;
      v63 = (RtlLengthRequiredSid(*((unsigned __int8 *)Sid1 + 1)) + 3) & 0xFFFFFFFC;
      if ( v125 )
        v63 += (*((unsigned __int16 *)v125 + 1) + 3) & 0xFFFFFFFC;
      v64 = v62 + 1168;
      v65 = 4096;
      if ( v63 >= 0x1000 )
        v65 = v63;
      v114 = v65;
      RemainingSidAreaSize = v64 + v65;
      LOBYTE(v64) = v102;
      inserted = ObCreateObject(
                   v64,
                   (_DWORD)SeTokenObjectType,
                   (_DWORD)v120,
                   1,
                   0,
                   v62 + 1168,
                   RemainingSidAreaSize,
                   0,
                   (__int64)&Object);
      if ( inserted < 0 )
      {
        ExFreePoolWithTag(v56, 0);
        if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
          ExFreePoolWithTag(P, 0);
        ExFreePoolWithTag(v59, 0);
        return (unsigned int)inserted;
      }
      v67 = Object;
      *((_QWORD *)Object + 6) = v59;
      ExInitializeResourceLite(v59);
      v68 = (char *)Object;
      v67[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      *((_QWORD *)v68 + 4) = 0LL;
      v69 = (_QWORD *)v124;
      *((_QWORD *)v68 + 28) = 0LL;
      v105 = 0LL;
      *((_QWORD *)v68 + 3) = *v69;
      v70 = v117;
      v68[204] = 0;
      *((_QWORD *)v68 + 7) = v70;
      *((_QWORD *)v68 + 5) = *a8;
      *((_DWORD *)v68 + 48) = a5;
      *((_DWORD *)v68 + 49) = a6;
      LODWORD(v70) = v103;
      *(_OWORD *)v68 = *a18;
      *((_DWORD *)v68 + 50) = v70;
      LODWORD(v70) = v114;
      *((_DWORD *)v68 + 30) = 0;
      *((_QWORD *)v68 + 145) = 0LL;
      *((_DWORD *)v68 + 34) = v70;
      LODWORD(v70) = v106;
      *((_DWORD *)v68 + 35) = 0;
      *((_DWORD *)v68 + 36) = v70;
      *((_QWORD *)v68 + 23) = 0LL;
      *((_QWORD *)v68 + 140) = 0LL;
      *((_QWORD *)v68 + 141) = 0LL;
      *((_DWORD *)v68 + 33) = v62;
      v105 = (char **)(v68 + 184);
      *((_DWORD *)v68 + 52) = v107;
      v71 = v121;
      *((_DWORD *)v68 + 53) = 0;
      *((_QWORD *)v68 + 8) = v71;
      *((_QWORD *)v68 + 9) = v122;
      *((_QWORD *)v68 + 10) = v123;
      *((_DWORD *)v68 + 200) = 0;
      *((_QWORD *)v68 + 99) = 0LL;
      *((_QWORD *)v68 + 98) = 0LL;
      *((_QWORD *)v68 + 135) = 0LL;
      *((_QWORD *)v68 + 136) = 0LL;
      *((_QWORD *)v68 + 144) = 0LL;
      memset(v68 + 808, 0, 0x110uLL);
      v72 = P;
      v73 = v68 + 1144;
      *((_QWORD *)v68 + 138) = 0LL;
      *((_QWORD *)v68 + 139) = 0LL;
      *((_QWORD *)v68 + 142) = 0LL;
      *((_QWORD *)v68 + 143) = v72;
      if ( a23 )
        *((_DWORD *)v68 + 53) = *a23;
      if ( !v99 )
      {
        *((_QWORD *)v68 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
        *((_QWORD *)v68 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
      }
      if ( v101 == 1 )
      {
        *((_QWORD *)v68 + 9) &= 0x202800000uLL;
        *((_QWORD *)v68 + 10) &= 0x202800000uLL;
      }
      v74 = v124;
      *((_QWORD *)v68 + 11) = 0LL;
      *((_QWORD *)v68 + 12) = 0LL;
      *((_QWORD *)v68 + 13) = 0LL;
      *((_DWORD *)v68 + 28) = 0;
      *((_WORD *)v68 + 58) = 0;
      v68[118] = 0;
      *((_QWORD *)v68 + 97) = v56;
      *((_QWORD *)v68 + 137) = 0LL;
      *((_QWORD *)v68 + 22) = 0LL;
      v120 = v68 + 176;
      v75 = SepReferenceLogonSession(v74, v68 + 216);
      if ( v75 < 0 )
      {
        *((_DWORD *)v68 + 50) |= 0x20u;
        *((_QWORD *)v68 + 27) = 0LL;
        ObfDereferenceObject(v68);
        return (unsigned int)v75;
      }
      if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
      {
        **(_QWORD **)v73 = KeGetCurrentThread()[1].CycleTime;
        *(_QWORD *)(*(_QWORD *)v73 + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        *(_DWORD *)(*(_QWORD *)v73 + 32LL) = 12;
        *(_DWORD *)(*(_QWORD *)v73 + 280LL) = 0;
        *(_DWORD *)(*(_QWORD *)v73 + 284LL) = 0;
        v94 = *(_QWORD *)v73;
        Process = KeGetCurrentThread()->ApcState.Process;
        *(_QWORD *)(v94 + 16) = Process[1].ActiveProcessors.Bitmap[11];
        *(_DWORD *)(v94 + 24) = Process[1].ActiveProcessors.Bitmap[12];
        *(_WORD *)(v94 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[12]);
        *(_BYTE *)(v94 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[12]);
        v96 = RtlWalkFrameChain((PVOID *)(*(_QWORD *)v73 + 40LL), 0x1Eu, 0);
        if ( KeGetCurrentIrql() < 2u )
          RtlWalkFrameChain((PVOID *)(*(_QWORD *)v73 + 40LL + 8LL * v96), 30 - v96, 1u);
        v68 = (char *)Object;
        SepAddTokenLogonSession(Object);
      }
      v76 = Src;
      if ( SepTokenSidSharingEnabled )
      {
        inserted = SepSetTokenUserAndGroups((_DWORD)v68, (_DWORD)Src, v27, (_DWORD)v118, v110);
        if ( inserted < 0 )
          goto LABEL_69;
      }
      else
      {
        v77 = v62 - v115;
        *((_QWORD *)v68 + 19) = v68 + 1168;
        v78 = v27 + 1;
        *((_DWORD *)v68 + 31) = v78;
        SidArea = &v68[16 * v78 + 1168];
        SidAreaSize = v77 - 16;
        RtlCopySidAndAttributesArray(1u, v76, v77 - 16, (PSID_AND_ATTRIBUTES)v68 + 73, SidArea, &SidArea, &SidAreaSize);
        RtlCopySidAndAttributesArray(
          v27,
          v118,
          SidAreaSize,
          (PSID_AND_ATTRIBUTES)v68 + 74,
          SidArea,
          &SidArea,
          &SidAreaSize);
      }
      RtlSidHashInitialize(
        *((PSID_AND_ATTRIBUTES *)v68 + 19),
        *((_DWORD *)v68 + 31),
        (PSID_AND_ATTRIBUTES_HASH)(v68 + 232));
      *((_QWORD *)v68 + 20) = 0LL;
      *((_DWORD *)v68 + 32) = 0;
      v79 = (char *)ExAllocatePoolWithTag(PagedPool, v63, 0x64546553u);
      *v120 = v79;
      if ( v79 )
      {
        v80 = (unsigned __int8 *)Sid1;
        *((_QWORD *)v68 + 21) = v79;
        v81 = RtlLengthRequiredSid(v80[1]);
        RtlCopySid(v81, v79, v80);
        v82 = (unsigned __int16 *)v125;
        v83 = &v79[(v81 + 3) & 0xFFFFFFFC];
        if ( v125 )
        {
          v84 = v125;
          *v105 = v83;
          memmove(v83, v84, v82[1]);
        }
        inserted = SepSetTokenClaims((_DWORD)v68, v128, v127, a21, v126);
        if ( inserted >= 0 )
        {
          if ( !a24 || (inserted = SepSetTokenTrust(v68, SeProcTrustWinTcbSid), inserted >= 0) )
          {
            if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) && SepTokenLeakMethodWatch == 12 )
            {
              if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
              {
                *(_DWORD *)(*(_QWORD *)v73 + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
                v97 = *(_DWORD *)(*(_QWORD *)v73 + 280LL);
                if ( v97 >= SepTokenLeakBreakCount )
                {
                  DbgPrint("\nToken number 0x%x = 0x%p\n", v97, Object);
                  __debugbreak();
                }
              }
              v68 = (char *)Object;
            }
            if ( a24 )
            {
              v92 = Object;
              if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] )
                inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, 0LL);
              if ( inserted < 0 )
              {
                *Handle = 0LL;
              }
              else
              {
                if ( !v100 )
                  SepAppendAdminAceToTokenAcl(v92);
                *Handle = v92;
              }
              return (unsigned int)inserted;
            }
            inserted = SeCreateAccessState(&PassedAccessState, v130, v116, (char *)SeTokenObjectType + 76);
            v85 = v68;
            if ( inserted < 0 )
              goto LABEL_70;
            inserted = ObInsertObject(v68, &PassedAccessState, 0, 1u, 0LL, Handle);
            SeDeleteAccessState(&PassedAccessState);
            if ( inserted < 0 )
              return (unsigned int)inserted;
            if ( !v100 )
              SepAppendAdminAceToTokenAcl(v68);
          }
        }
      }
      else
      {
        inserted = -1073741801;
      }
LABEL_69:
      v85 = v68;
LABEL_70:
      ObfDereferenceObject(v85);
      return (unsigned int)inserted;
    }
    ExFreePoolWithTag(v56, 0);
    if ( !*(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
      return 3221225626LL;
    v93 = v58;
LABEL_119:
    ExFreePoolWithTag(v93, 0);
    return 3221225626LL;
  }
  return result;
}
