/*
 * XREFs of SepCreateTokenEx @ 0x14001366C
 * Callers:
 *     NtCreateTokenEx @ 0x1405BD550 (NtCreateTokenEx.c)
 *     SepCreateToken @ 0x140728AF0 (SepCreateToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     RtlSidHashInitialize @ 0x1400CC4C0 (RtlSidHashInitialize.c)
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     RtlWalkFrameChain @ 0x1400CCC50 (RtlWalkFrameChain.c)
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x1400CCF54 (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     DbgPrint @ 0x1401263A0 (DbgPrint.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepFinalizeTokenAcls @ 0x140583ABC (SepFinalizeTokenAcls.c)
 *     RtlIdentifierAuthoritySid @ 0x1405BE5AC (RtlIdentifierAuthoritySid.c)
 *     RtlLengthRequiredSid @ 0x1405BE5C0 (RtlLengthRequiredSid.c)
 *     SepSetTokenClaims @ 0x1405BE5DC (SepSetTokenClaims.c)
 *     SepReferenceLogonSession @ 0x1405BE6F4 (SepReferenceLogonSession.c)
 *     ObCreateObject @ 0x1405BE820 (ObCreateObject.c)
 *     SeDeleteAccessState @ 0x1405BE870 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x140613230 (SeCreateAccessState.c)
 *     ObInsertObject @ 0x14061C280 (ObInsertObject.c)
 *     RtlCopySidAndAttributesArray @ 0x14062DDC0 (RtlCopySidAndAttributesArray.c)
 *     RtlCopySid @ 0x14064A350 (RtlCopySid.c)
 *     SepSetTokenTrust @ 0x1406A5908 (SepSetTokenTrust.c)
 *     SepSetTokenUserAndGroups @ 0x1408A348C (SepSetTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x1408A39A0 (SepAddTokenLogonSession.c)
 */

__int64 __fastcall SepCreateTokenEx(
        HANDLE *a1,
        __int64 a2,
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
  int v24; // r12d
  PSID v25; // r14
  ULONG v26; // r13d
  __int64 result; // rax
  PSID Sid; // rsi
  ULONG v29; // ebx
  ULONG v30; // r14d
  __int64 v31; // rdi
  __int64 v32; // rax
  PSID_AND_ATTRIBUTES v33; // rbx
  BOOLEAN v34; // al
  _QWORD *v35; // r10
  bool v36; // di
  BOOLEAN v37; // al
  int v38; // r11d
  bool v39; // r14
  ULONG Attributes; // eax
  int v41; // r15d
  ULONG *p_Attributes; // rsi
  ULONG v43; // edx
  _BYTE *v44; // rbx
  PSID_IDENTIFIER_AUTHORITY v45; // rax
  char v46; // dl
  __int64 v47; // r8
  int v48; // ecx
  unsigned __int64 v49; // r11
  _QWORD *v50; // rsi
  _QWORD *v51; // rdi
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
  char **v70; // rax
  _QWORD *v71; // rax
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
  BOOLEAN v89; // al
  unsigned int v90; // ecx
  PVOID v91; // rdi
  void *v92; // rcx
  __int64 v93; // rdx
  _KPROCESS *Process; // rcx
  ULONG v95; // eax
  int v96; // edx
  ULONG RemainingSidAreaSize; // [rsp+30h] [rbp-D0h]
  char v98; // [rsp+50h] [rbp-B0h]
  char v99; // [rsp+51h] [rbp-AFh] BYREF
  char v100; // [rsp+52h] [rbp-AEh]
  char v101; // [rsp+53h] [rbp-ADh]
  int v102; // [rsp+54h] [rbp-ACh]
  ULONG SidAreaSize; // [rsp+58h] [rbp-A8h] BYREF
  int v104; // [rsp+5Ch] [rbp-A4h]
  int v105; // [rsp+60h] [rbp-A0h]
  __int64 v106; // [rsp+68h] [rbp-98h]
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  PSID SidArea; // [rsp+78h] [rbp-88h] BYREF
  char **v109; // [rsp+80h] [rbp-80h]
  unsigned int v110; // [rsp+88h] [rbp-78h]
  PSID_AND_ATTRIBUTES Src; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+98h] [rbp-68h]
  PSID Sid1; // [rsp+A0h] [rbp-60h]
  _QWORD *v114; // [rsp+A8h] [rbp-58h]
  int v115; // [rsp+B0h] [rbp-50h]
  int v116; // [rsp+B4h] [rbp-4Ch]
  unsigned int v117; // [rsp+B8h] [rbp-48h]
  PSID_AND_ATTRIBUTES v118; // [rsp+C0h] [rbp-40h]
  PHANDLE Handle; // [rsp+C8h] [rbp-38h]
  _QWORD *v120; // [rsp+D0h] [rbp-30h]
  _QWORD *v121; // [rsp+D8h] [rbp-28h]
  __int64 v122; // [rsp+E0h] [rbp-20h]
  void *v123; // [rsp+E8h] [rbp-18h]
  __int64 v124; // [rsp+F0h] [rbp-10h]
  __int64 v125; // [rsp+F8h] [rbp-8h]
  __int64 v126; // [rsp+100h] [rbp+0h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+110h] [rbp+10h] BYREF
  char v128[224]; // [rsp+1B0h] [rbp+B0h] BYREF

  v24 = 0;
  v25 = a15;
  v26 = Count;
  v105 = -1;
  v122 = a7;
  v109 = a14;
  Sid1 = a16;
  v123 = a17;
  v126 = a19;
  v125 = a20;
  v117 = a3;
  Handle = a1;
  v124 = a22;
  v106 = a4;
  v101 = a2;
  Src = a9;
  v118 = a11;
  SidArea = a15;
  v102 = 0;
  v98 = 0;
  v100 = 0;
  v99 = 0;
  P = 0LL;
  result = SeCaptureObjectAttributeSecurityDescriptorPresent(a4, a2, &v99);
  if ( (int)result >= 0 )
  {
    Sid = a9->Sid;
    v29 = 0;
    if ( Count )
    {
      do
      {
        v30 = v29;
        while ( v30 < v26 )
        {
          v31 = v30;
          if ( !RtlEqualSid(Sid, a11[v31].Sid) || (a11[v31].Attributes & 0x20) != 0 )
            ++v30;
          else
            a11[v31] = a11[--v26];
        }
        v32 = v29++;
        Sid = a11[v32].Sid;
      }
      while ( v29 < v26 );
      v33 = Src;
      v25 = SidArea;
      Sid = Src->Sid;
    }
    else
    {
      v33 = Src;
    }
    v34 = RtlEqualSid(Sid1, Sid);
    v35 = 0LL;
    v36 = v34 != 0;
    if ( v25 )
    {
      v37 = RtlEqualSid(v25, Sid);
      v35 = 0LL;
      LOBYTE(v38) = 1;
      v39 = v37 != 0;
    }
    else
    {
      LOBYTE(v38) = 1;
      v39 = 1;
    }
    Attributes = v33->Attributes;
    if ( (Attributes & 0x10) != 0 )
    {
      if ( (Attributes & 6) != 0 )
        return 3221225485LL;
      v24 = 2048;
      v102 = 2048;
    }
    v104 = 0;
    if ( v26 )
    {
      v41 = 1;
      p_Attributes = &v118->Attributes;
      v104 = 0;
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
          v24 |= 0x800u;
          v102 = v24;
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
            v88 = (int)v35;
          }
          if ( (v46 & 0x40) != 0 )
            break;
        }
LABEL_20:
        if ( !v36 )
        {
          v89 = RtlEqualSid(Sid1, v44);
          v35 = 0LL;
          v38 = 1;
          v36 = v89 != 0;
        }
        if ( !v39 )
        {
          v86 = RtlEqualSid(SidArea, v44);
          v35 = 0LL;
          if ( v86 )
          {
            if ( (*p_Attributes & 8) == 0 )
              return 3221225562LL;
            v38 = 1;
            v104 = v41;
            v39 = 1;
          }
          else
          {
            v38 = 1;
          }
        }
        v41 += v38;
        p_Attributes += 4;
        if ( v41 - 1 >= v26 )
          goto LABEL_24;
      }
      if ( v105 != -1 )
        return 3221225485LL;
      v105 = v41;
      if ( v87 && *(_DWORD *)&v44[4 * (v88 - 1) + 8] >= 0x3000u )
      {
        v98 = v38;
        v24 |= 0x2000u;
LABEL_82:
        v102 = v24;
        goto LABEL_20;
      }
      v98 = (char)v35;
      if ( v87 )
      {
        v90 = *(_DWORD *)&v44[4 * (v88 - 1) + 8];
        if ( v90 >= 0x2000 )
          goto LABEL_90;
      }
      else
      {
        v90 = (unsigned int)v35;
      }
      v100 = v38;
LABEL_90:
      if ( v90 >= 0x2000 )
        v24 |= 0x2000u;
      goto LABEL_82;
    }
LABEL_24:
    if ( !v36 )
      return 3221225563LL;
    if ( !v39 )
      return 3221225562LL;
    v49 = (unsigned __int64)v35;
    v120 = v35;
    v50 = v35;
    v121 = v35;
    v51 = v35;
    v114 = v35;
    if ( a13 )
    {
      v52 = (int *)(v109 + 1);
      do
      {
        v53 = *v52;
        if ( (*v52 & 0x7FFFFFF8) != 0 )
          return 3221225485LL;
        v54 = (unsigned int)*(v52 - 2);
        *v52 &= 3u;
        if ( (unsigned int)v54 > 0x24 )
          return 3221225568LL;
        if ( _bittest64((const __int64 *)&v49, v54) )
          return 3221225894LL;
        v49 |= 1LL << v54;
        v120 = (_QWORD *)v49;
        if ( (v53 & 2) != 0 )
        {
          _bittestandset64((__int64 *)&v50, (unsigned int)v54);
          v121 = v50;
        }
        if ( (v53 & 1) != 0 )
        {
          _bittestandset64((__int64 *)&v51, (unsigned int)v54);
          v114 = v51;
        }
        LODWORD(v35) = (_DWORD)v35 + 1;
        v52 += 3;
      }
      while ( (unsigned int)v35 < a13 );
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
    if ( SeTokenLeakTracking )
    {
      P = ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x74416553u);
      v58 = P;
      if ( !P )
      {
        v92 = v56;
        goto LABEL_120;
      }
    }
    else
    {
      v58 = 0LL;
    }
    v109 = (char **)(ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement));
    v59 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
    if ( v59 )
    {
      v60 = 16 * v26;
      v116 = 16 * v26;
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
      if ( v123 )
        v63 += (*((unsigned __int16 *)v123 + 1) + 3) & 0xFFFFFFFC;
      v64 = v62 + 1168;
      v65 = 4096;
      if ( v63 >= 0x1000 )
        v65 = v63;
      v115 = v65;
      RemainingSidAreaSize = v64 + v65;
      LOBYTE(v64) = v101;
      inserted = ObCreateObject(
                   v64,
                   (_DWORD)SeTokenObjectType,
                   v106,
                   1,
                   0,
                   v62 + 1168,
                   RemainingSidAreaSize,
                   0,
                   (__int64)&Object);
      if ( inserted < 0 )
      {
        ExFreePoolWithTag(v56, 0);
        if ( SeTokenLeakTracking )
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
      v69 = (_QWORD *)v122;
      *((_QWORD *)v68 + 28) = 0LL;
      v106 = 0LL;
      *((_QWORD *)v68 + 3) = *v69;
      v70 = v109;
      v68[204] = 0;
      *((_QWORD *)v68 + 7) = v70;
      *((_QWORD *)v68 + 5) = *a8;
      *((_DWORD *)v68 + 48) = a5;
      *((_DWORD *)v68 + 49) = a6;
      LODWORD(v70) = v102;
      *(_OWORD *)v68 = *a18;
      *((_DWORD *)v68 + 50) = (_DWORD)v70;
      LODWORD(v70) = v115;
      *((_DWORD *)v68 + 30) = 0;
      *((_QWORD *)v68 + 145) = 0LL;
      *((_DWORD *)v68 + 34) = (_DWORD)v70;
      LODWORD(v70) = v104;
      *((_DWORD *)v68 + 35) = 0;
      *((_DWORD *)v68 + 36) = (_DWORD)v70;
      *((_QWORD *)v68 + 23) = 0LL;
      *((_QWORD *)v68 + 140) = 0LL;
      *((_QWORD *)v68 + 141) = 0LL;
      *((_DWORD *)v68 + 33) = v62;
      v109 = (char **)(v68 + 184);
      *((_DWORD *)v68 + 52) = v105;
      v71 = v120;
      *((_DWORD *)v68 + 53) = 0;
      *((_QWORD *)v68 + 8) = v71;
      *((_QWORD *)v68 + 9) = v121;
      *((_QWORD *)v68 + 10) = v114;
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
      if ( !v98 )
      {
        *((_QWORD *)v68 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
        *((_QWORD *)v68 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
      }
      if ( v100 == 1 )
      {
        *((_QWORD *)v68 + 9) &= 0x202800000uLL;
        *((_QWORD *)v68 + 10) &= 0x202800000uLL;
      }
      memset(v68 + 88, 0, 0x20uLL);
      v74 = v122;
      *((_QWORD *)v68 + 97) = v56;
      *((_QWORD *)v68 + 137) = 0LL;
      *((_QWORD *)v68 + 22) = 0LL;
      v114 = v68 + 176;
      v75 = SepReferenceLogonSession(v74, v68 + 216);
      if ( v75 < 0 )
      {
        *((_DWORD *)v68 + 50) |= 0x20u;
        *((_QWORD *)v68 + 27) = 0LL;
        ObfDereferenceObjectWithTag(v68, 0x746C6644u);
        return (unsigned int)v75;
      }
      if ( SeTokenLeakTracking )
      {
        **(_QWORD **)v73 = KeGetCurrentThread()[1].CycleTime;
        *(_QWORD *)(*(_QWORD *)v73 + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        *(_DWORD *)(*(_QWORD *)v73 + 32LL) = 12;
        *(_DWORD *)(*(_QWORD *)v73 + 280LL) = 0;
        *(_DWORD *)(*(_QWORD *)v73 + 284LL) = 0;
        v93 = *(_QWORD *)v73;
        Process = KeGetCurrentThread()->ApcState.Process;
        *(_QWORD *)(v93 + 16) = Process[1].ActiveProcessors.Bitmap[12];
        *(_DWORD *)(v93 + 24) = Process[1].ActiveProcessors.Bitmap[13];
        *(_WORD *)(v93 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[13]);
        *(_BYTE *)(v93 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[13]);
        v95 = RtlWalkFrameChain((PVOID *)(*(_QWORD *)v73 + 40LL), 0x1Eu, 0);
        if ( KeGetCurrentIrql() < 2u )
          RtlWalkFrameChain((PVOID *)(*(_QWORD *)v73 + 40LL + 8LL * v95), 30 - v95, 1u);
        v68 = (char *)Object;
        SepAddTokenLogonSession(Object);
      }
      v76 = Src;
      if ( SepTokenSidSharingEnabled )
      {
        inserted = SepSetTokenUserAndGroups((_DWORD)v68, (_DWORD)Src, v26, (_DWORD)v118, v110);
        if ( inserted < 0 )
          goto LABEL_69;
      }
      else
      {
        v77 = v62 - v116;
        *((_QWORD *)v68 + 19) = v68 + 1168;
        v78 = v26 + 1;
        *((_DWORD *)v68 + 31) = v78;
        SidArea = &v68[16 * v78 + 1168];
        SidAreaSize = v77 - 16;
        RtlCopySidAndAttributesArray(1u, v76, v77 - 16, (PSID_AND_ATTRIBUTES)v68 + 73, SidArea, &SidArea, &SidAreaSize);
        RtlCopySidAndAttributesArray(
          v26,
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
      *v114 = v79;
      if ( v79 )
      {
        v80 = (unsigned __int8 *)Sid1;
        *((_QWORD *)v68 + 21) = v79;
        v81 = RtlLengthRequiredSid(v80[1]);
        RtlCopySid(v81, v79, v80);
        v82 = (unsigned __int16 *)v123;
        v83 = &v79[(v81 + 3) & 0xFFFFFFFC];
        if ( v123 )
        {
          v84 = v123;
          *v109 = v83;
          memmove(v83, v84, v82[1]);
        }
        inserted = SepSetTokenClaims((_DWORD)v68, v126, v125, a21, v124);
        if ( inserted >= 0 )
        {
          if ( !a24 || (inserted = SepSetTokenTrust(v68, SeProcTrustWinTcbSid), inserted >= 0) )
          {
            if ( SeTokenLeakTracking && SepTokenLeakMethodWatch == 12 )
            {
              if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
              {
                *(_DWORD *)(*(_QWORD *)v73 + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
                v96 = *(_DWORD *)(*(_QWORD *)v73 + 280LL);
                if ( v96 >= SepTokenLeakBreakCount )
                {
                  DbgPrint("\nToken number 0x%x = 0x%p\n", v96, Object);
                  __debugbreak();
                }
              }
              v68 = (char *)Object;
            }
            if ( a24 )
            {
              v91 = Object;
              if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] )
                inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, 0LL);
              if ( inserted < 0 )
              {
                *Handle = 0LL;
              }
              else
              {
                if ( !v99 )
                  SepFinalizeTokenAcls(v91);
                *Handle = v91;
              }
              return (unsigned int)inserted;
            }
            inserted = SeCreateAccessState(&PassedAccessState, v128, v117, (char *)SeTokenObjectType + 76);
            v85 = v68;
            if ( inserted < 0 )
              goto LABEL_70;
            inserted = ObInsertObject(v68, &PassedAccessState, 0, 1u, 0LL, Handle);
            SeDeleteAccessState(&PassedAccessState);
            if ( inserted < 0 )
              return (unsigned int)inserted;
            if ( !v99 )
              SepFinalizeTokenAcls(v68);
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
      ObfDereferenceObjectWithTag(v85, 0x746C6644u);
      return (unsigned int)inserted;
    }
    ExFreePoolWithTag(v56, 0);
    if ( !SeTokenLeakTracking )
      return 3221225626LL;
    v92 = v58;
LABEL_120:
    ExFreePoolWithTag(v92, 0);
    return 3221225626LL;
  }
  return result;
}
