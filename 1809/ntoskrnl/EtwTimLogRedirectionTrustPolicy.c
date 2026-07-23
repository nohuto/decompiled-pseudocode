/*
 * XREFs of EtwTimLogRedirectionTrustPolicy @ 0x140583AF0
 * Callers:
 *     IoCheckRedirectionTrustLevel @ 0x1401B4210 (IoCheckRedirectionTrustLevel.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x1400073A0 (RtlStringCbCopyW.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     RtlWalkFrameChain @ 0x1400CCC50 (RtlWalkFrameChain.c)
 *     EtwpTiFillProcessIdentity @ 0x1401320BC (EtwpTiFillProcessIdentity.c)
 *     ExAllocatePool @ 0x14013A850 (ExAllocatePool.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x1401B8750 (ZwQueryVirtualMemory.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpQueryProcessCommandLine @ 0x14066DA18 (EtwpQueryProcessCommandLine.c)
 */

void __fastcall EtwTimLogRedirectionTrustPolicy(int a1, __int64 a2, int a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v5; // r15
  signed __int64 v6; // r13
  UNICODE_STRING *v7; // rbx
  signed __int32 v8; // r14d
  char v9; // r12
  unsigned int v10; // esi
  ULONG v11; // eax
  unsigned __int16 v12; // di
  unsigned __int16 i; // cx
  unsigned int v14; // edx
  PVOID Pool; // rax
  void *v16; // r15
  bool v17; // cf
  _DWORD *v18; // rcx
  char v19; // al
  __int64 v20; // r15
  UNICODE_STRING *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // r12
  PVOID *v24; // rsi
  wchar_t *p_Length; // r14
  unsigned __int16 v26; // cx
  const EVENT_DESCRIPTOR *v27; // rax
  unsigned __int16 *v28; // r14
  unsigned __int16 Length; // si
  const wchar_t *v30; // rax
  __int16 v31; // si
  int v32; // eax
  __int16 *v33; // r10
  __int64 v34; // rcx
  int v35; // r9d
  unsigned int v36; // edx
  unsigned __int16 v37; // r8
  __int64 v38; // rax
  unsigned int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int16 v43; // r13
  __int64 v44; // rax
  ULONG v45; // r10d
  PVOID *v46; // r14
  UNICODE_STRING *v47; // r11
  unsigned __int16 v48; // si
  wchar_t *v49; // r15
  ULONGLONG v50; // rcx
  __int64 v51; // r8
  ULONG v52; // r9d
  unsigned int MaximumLength; // eax
  ULONG v54; // edx
  __int64 v55; // rax
  ULONG v56; // r10d
  __int64 v57; // rax
  unsigned __int16 v58; // r9
  UNICODE_STRING *p_DestinationString; // rsi
  UNICODE_STRING *v60; // r11
  UNICODE_STRING *v61; // r10
  UNICODE_STRING *v62; // r8
  UNICODE_STRING *v63; // rdx
  UNICODE_STRING *v64; // rcx
  char v65; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v66; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int8 v67; // [rsp+32h] [rbp-CEh] BYREF
  _WORD v68[2]; // [rsp+34h] [rbp-CCh] BYREF
  _WORD v69[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v70; // [rsp+3Ch] [rbp-C4h] BYREF
  int v71; // [rsp+40h] [rbp-C0h]
  __int64 v72; // [rsp+48h] [rbp-B8h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING v74; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v75; // [rsp+70h] [rbp-90h]
  int v76; // [rsp+74h] [rbp-8Ch] BYREF
  int v77; // [rsp+78h] [rbp-88h] BYREF
  int v78; // [rsp+7Ch] [rbp-84h] BYREF
  int v79; // [rsp+80h] [rbp-80h] BYREF
  int v80; // [rsp+84h] [rbp-7Ch] BYREF
  PCEVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h]
  __int64 v82; // [rsp+90h] [rbp-70h] BYREF
  PVOID v83; // [rsp+98h] [rbp-68h] BYREF
  PVOID v84; // [rsp+A0h] [rbp-60h] BYREF
  PVOID v85; // [rsp+A8h] [rbp-58h] BYREF
  PVOID v86; // [rsp+B0h] [rbp-50h] BYREF
  PVOID v87; // [rsp+B8h] [rbp-48h] BYREF
  PVOID v88; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v89; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v90; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v91; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING v92; // [rsp+E8h] [rbp-18h] BYREF
  char MemoryInformation[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v94; // [rsp+100h] [rbp+0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v96; // [rsp+150h] [rbp+50h]
  __int64 v97; // [rsp+158h] [rbp+58h]
  int *v98; // [rsp+160h] [rbp+60h]
  __int64 v99; // [rsp+168h] [rbp+68h]
  int *v100; // [rsp+170h] [rbp+70h]
  __int64 v101; // [rsp+178h] [rbp+78h]
  unsigned __int8 *v102; // [rsp+180h] [rbp+80h]
  __int64 v103; // [rsp+188h] [rbp+88h]
  _DWORD *v104; // [rsp+190h] [rbp+90h]
  __int64 v105; // [rsp+198h] [rbp+98h]
  wchar_t *v106; // [rsp+1A0h] [rbp+A0h]
  _DWORD v107[2]; // [rsp+1A8h] [rbp+A8h] BYREF
  PVOID *v108; // [rsp+1B0h] [rbp+B0h]
  __int64 v109; // [rsp+1B8h] [rbp+B8h]
  _DWORD *v110; // [rsp+1C0h] [rbp+C0h]
  __int64 v111; // [rsp+1C8h] [rbp+C8h]
  wchar_t *v112; // [rsp+1D0h] [rbp+D0h]
  _DWORD v113[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  PVOID *v114; // [rsp+1E0h] [rbp+E0h]
  __int64 v115; // [rsp+1E8h] [rbp+E8h]
  _DWORD *v116; // [rsp+1F0h] [rbp+F0h]
  __int64 v117; // [rsp+1F8h] [rbp+F8h]
  wchar_t *v118; // [rsp+200h] [rbp+100h]
  _DWORD v119[2]; // [rsp+208h] [rbp+108h] BYREF
  PVOID *v120; // [rsp+210h] [rbp+110h]
  __int64 v121; // [rsp+218h] [rbp+118h]
  _DWORD *v122; // [rsp+220h] [rbp+120h]
  __int64 v123; // [rsp+228h] [rbp+128h]
  wchar_t *v124; // [rsp+230h] [rbp+130h]
  _DWORD v125[2]; // [rsp+238h] [rbp+138h] BYREF
  PVOID *v126; // [rsp+240h] [rbp+140h]
  __int64 v127; // [rsp+248h] [rbp+148h]
  _DWORD *v128; // [rsp+250h] [rbp+150h]
  __int64 v129; // [rsp+258h] [rbp+158h]
  wchar_t *v130; // [rsp+260h] [rbp+160h]
  _DWORD v131[2]; // [rsp+268h] [rbp+168h] BYREF
  PVOID *v132; // [rsp+270h] [rbp+170h]
  __int64 v133; // [rsp+278h] [rbp+178h]
  _DWORD *v134; // [rsp+280h] [rbp+180h]
  __int64 v135; // [rsp+288h] [rbp+188h]
  wchar_t *v136; // [rsp+290h] [rbp+190h]
  _DWORD v137[2]; // [rsp+298h] [rbp+198h] BYREF
  PVOID *v138; // [rsp+2A0h] [rbp+1A0h]
  __int64 v139; // [rsp+2A8h] [rbp+1A8h]
  EVENT_DATA_DESCRIPTOR v140; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 *v141; // [rsp+2D0h] [rbp+1D0h]
  __int64 v142; // [rsp+2D8h] [rbp+1D8h]
  int *v143; // [rsp+2E0h] [rbp+1E0h]
  __int64 v144; // [rsp+2E8h] [rbp+1E8h]
  int *v145; // [rsp+2F0h] [rbp+1F0h]
  __int64 v146; // [rsp+2F8h] [rbp+1F8h]
  unsigned __int8 *v147; // [rsp+300h] [rbp+200h]
  __int64 v148; // [rsp+308h] [rbp+208h]
  _DWORD *v149; // [rsp+310h] [rbp+210h]
  __int64 v150; // [rsp+318h] [rbp+218h]
  wchar_t *v151; // [rsp+320h] [rbp+220h]
  _DWORD v152[2]; // [rsp+328h] [rbp+228h] BYREF
  PVOID Callers[16]; // [rsp+330h] [rbp+230h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+3B0h] [rbp+2B0h] BYREF
  const wchar_t *v155; // [rsp+3C0h] [rbp+2C0h]
  __int64 v156; // [rsp+3C8h] [rbp+2C8h]
  __int16 *v157; // [rsp+3D0h] [rbp+2D0h]
  __int64 v158; // [rsp+3D8h] [rbp+2D8h]
  wchar_t *Buffer; // [rsp+3E0h] [rbp+2E0h]
  __int64 v160; // [rsp+3E8h] [rbp+2E8h]
  __int64 v161[84]; // [rsp+3F0h] [rbp+2F0h] BYREF
  int v162; // [rsp+6F0h] [rbp+5F0h] BYREF

  v162 = a3;
  v5 = a2;
  v72 = a2;
  v71 = a1;
  v90 = a4;
  memset(Callers, 0, sizeof(Callers));
  v6 = *(_QWORD *)(v5 + 2128);
  v7 = 0LL;
  v76 = a5;
  v8 = 0;
  v65 = 0;
  *(_QWORD *)&v74.Length = 0LL;
  v9 = 1;
  v74.Buffer = 0LL;
  v10 = 0;
  v11 = RtlWalkFrameChain(Callers, 0x10u, 1u);
  v12 = v11;
  v75 = v11;
  for ( i = 1; ; ++i )
  {
    v14 = 7;
    if ( (unsigned __int16)v11 <= 7u )
      v14 = (unsigned __int16)v11;
    if ( i >= v14 )
      break;
    v8 += LODWORD(Callers[i]);
  }
  if ( !v8 )
    v8 = 1;
  while ( v6 )
  {
LABEL_14:
    v17 = v10 < 0xA;
    if ( v10 < 0xA )
    {
      v18 = (_DWORD *)(v6 + 4LL * v10);
      while ( *v18 )
      {
        if ( *v18 == v8 )
        {
          v9 = 0;
          break;
        }
        ++v10;
        ++v18;
        if ( v10 >= 0xA )
          break;
      }
      v17 = v10 < 0xA;
    }
    v19 = v17 ? v9 : 0;
    v9 = v19;
    if ( !v19 || !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v5 + 2128) + 4LL * v10), v8, 0) )
      goto LABEL_24;
  }
  Pool = ExAllocatePool(PagedPool, 0x28uLL);
  v16 = Pool;
  if ( Pool )
  {
    memset(Pool, 0, 0x28uLL);
    v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v72 + 2128), (signed __int64)v16, 0LL);
    if ( v6 )
      ExFreePoolWithTag(v16, 0);
    else
      v6 = (signed __int64)v16;
    v5 = v72;
    goto LABEL_14;
  }
  v19 = 0;
LABEL_24:
  if ( !v19 )
    return;
  RtlInitUnicodeString(&DestinationString, L"Unknown");
  if ( !v12 )
  {
    v23 = 0LL;
LABEL_53:
    if ( v12 )
      memset(Callers, 0, 8LL * v12);
    goto LABEL_46;
  }
  v20 = v12;
  v21 = (UNICODE_STRING *)ExAllocatePool(PagedPool, 80LL * v12);
  v7 = v21;
  if ( v21 )
    memset(v21, 0, 80LL * v12);
  v22 = ExAllocatePool(PagedPool, 0x21AuLL);
  v23 = v22;
  if ( v22 )
    memset(v22, 0, 0x21AuLL);
  if ( !v7 || !v23 )
    goto LABEL_53;
  v24 = Callers;
  p_Length = &v7[1].Length;
  do
  {
    if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v24, MemoryMappedFilenameInformation, v23, 0x218uLL, 0LL) < 0
      || *(_WORD *)v23 <= 1u )
    {
      goto LABEL_43;
    }
    v26 = (*(_WORD *)v23 >> 1) - 1;
    if ( *(_WORD *)v23 >> 1 != 1 )
    {
      while ( *(_WORD *)(v23[1] + 2LL * v26) != 92 )
      {
        if ( !--v26 )
          goto LABEL_41;
      }
      ++v26;
    }
LABEL_41:
    RtlStringCbCopyW(p_Length, 0x40uLL, (NTSTRSAFE_PCWSTR)(v23[1] + 2LL * v26));
    RtlInitUnicodeString((PUNICODE_STRING)p_Length - 1, p_Length);
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           *v24,
           MemoryBasicInformation,
           MemoryInformation,
           0x30uLL,
           0LL) < 0 )
LABEL_43:
      *v24 = 0LL;
    else
      *v24 = (char *)*v24 - v94;
    p_Length += 40;
    ++v24;
    --v20;
  }
  while ( v20 );
  v12 = v75;
LABEL_46:
  v27 = (const EVENT_DESCRIPTOR *)&MITIGATION_AUDIT_REDIRECTION_TRUST_POLICY;
  if ( v71 != 1 )
    v27 = (const EVENT_DESCRIPTOR *)&MITIGATION_ENFORCE_REDIRECTION_TRUST_POLICY;
  v28 = (unsigned __int16 *)&EmptyUnicodeString;
  EventDescriptor = v27;
  if ( *(_QWORD *)(v72 + 1128) )
    v28 = *(unsigned __int16 **)(v72 + 1128);
  EtwpQueryProcessCommandLine(v72, &v74);
  Length = v74.Length;
  if ( v74.Length )
  {
    v65 = 1;
  }
  else
  {
    RtlInitUnicodeString(&v74, L"Unknown");
    Length = v74.Length;
  }
  if ( !v90 )
    RtlInitUnicodeString(&v92, L"Unknown");
  if ( v28 && *v28 )
  {
    v68[0] = *v28 >> 1;
    UserData.Ptr = (ULONGLONG)v68;
    *(_QWORD *)&UserData.Size = 2LL;
    v30 = (const wchar_t *)*((_QWORD *)v28 + 1);
    v156 = *v28;
    v155 = v30;
  }
  else
  {
    v68[0] = 6;
    UserData.Ptr = (ULONGLONG)v68;
    *(_QWORD *)&UserData.Size = 2LL;
    v155 = L"(null)";
    v156 = 12LL;
  }
  v158 = 2LL;
  v157 = &v70;
  if ( Length )
  {
    Buffer = v74.Buffer;
    v160 = Length;
    v31 = Length >> 1;
  }
  else
  {
    Buffer = L"(null)";
    v31 = 6;
    v160 = 12LL;
  }
  v70 = v31;
  v32 = EtwpTiFillProcessIdentity(v161, v72, &v91);
  v34 = 2LL * (unsigned int)(v32 + 4);
  v35 = v32 + 4;
  v36 = v32 + 5;
  *(&UserData.Ptr + v34) = (ULONGLONG)&v162;
  *((_QWORD *)&UserData.Size + v34) = 4LL;
  if ( v33 && (v37 = *v33) != 0 )
  {
    v69[0] = v37 >> 1;
    v38 = 2LL * v36;
    v39 = v36 + 1;
    *(&UserData.Ptr + v38) = (ULONGLONG)v69;
    *((_QWORD *)&UserData.Size + v38) = 2LL;
    v40 = 2LL * v39;
    *(&UserData.Ptr + v40) = *((_QWORD *)v33 + 1);
    *(&UserData.Size + 2 * v40) = v37;
    *(&UserData.Reserved + 2 * v40) = 0;
  }
  else
  {
    v69[0] = 6;
    v41 = v36;
    v39 = v35 + 2;
    v41 *= 2LL;
    *(&UserData.Ptr + v41) = (ULONGLONG)v69;
    *((_QWORD *)&UserData.Size + v41) = 2LL;
    v42 = 2LL * (unsigned int)(v35 + 2);
    *(&UserData.Ptr + v42) = (ULONGLONG)L"(null)";
    *((_QWORD *)&UserData.Size + v42) = 12LL;
  }
  v43 = DestinationString.Length;
  v44 = 16LL * (v39 + 1);
  v45 = v39 + 2;
  v46 = Callers;
  v47 = v7;
  *(_QWORD *)((char *)&UserData.Size + v44) = 4LL;
  v48 = 0;
  v49 = DestinationString.Buffer;
  *(ULONGLONG *)((char *)&UserData.Ptr + v44) = (ULONGLONG)&v76;
  while ( 2 )
  {
    if ( v48 < v12 && v7 )
    {
      if ( v47 )
      {
        v50 = (ULONGLONG)v47->Buffer;
        if ( v50 )
        {
          if ( v47->Length )
          {
            v51 = 2LL * v45;
            v52 = v47->Length;
            MaximumLength = v47->MaximumLength;
            *(&UserData.Ptr + 2 * v45) = v50;
            goto LABEL_79;
          }
        }
      }
LABEL_82:
      v55 = 2LL * v45;
      *((_QWORD *)&UserData.Size + v55) = 14LL;
      *(&UserData.Ptr + v55) = (ULONGLONG)L"(null)";
    }
    else
    {
      if ( !v49 || !v43 )
        goto LABEL_82;
      MaximumLength = DestinationString.MaximumLength;
      v51 = 2LL * v45;
      v52 = v43;
      *(&UserData.Ptr + 2 * v45) = (ULONGLONG)v49;
LABEL_79:
      v54 = v52 + 2;
      if ( MaximumLength <= v52 + 1 )
        v54 = v52;
      *(&UserData.Size + 2 * v51) = v54;
      *(&UserData.Reserved + 2 * v51) = 0;
    }
    ++v48;
    v56 = v45 + 1;
    v47 += 5;
    v57 = 2LL * v56;
    v45 = v56 + 1;
    *(&UserData.Ptr + v57) = (ULONGLONG)v46++;
    *((_QWORD *)&UserData.Size + v57) = 8LL;
    if ( v48 < 0x10u )
      continue;
    break;
  }
  EtwWrite(EtwSecurityMitigationsRegHandle, EventDescriptor, 0LL, v45, &UserData);
  if ( v7 )
  {
    if ( stru_140401308.LevelPlus1 > 5 && TlgKeywordOn(&stru_140401308, 0x400000000000uLL) )
    {
      v77 = v162;
      v78 = v71;
      v66 = a5;
      v82 = 0x2000000LL;
      if ( v12 <= 1u || (p_DestinationString = v7 + 5, !v7[5].Buffer) )
        p_DestinationString = &DestinationString;
      v83 = Callers[1];
      if ( v12 <= 2u || (v60 = v7 + 10, !v7[10].Buffer) )
        v60 = &DestinationString;
      v84 = Callers[2];
      if ( v12 <= 3u || (v61 = v7 + 15, !v7[15].Buffer) )
        v61 = &DestinationString;
      v85 = Callers[3];
      if ( v12 <= 4u || (v62 = v7 + 20, !v7[20].Buffer) )
        v62 = &DestinationString;
      v86 = Callers[4];
      if ( v12 <= v58 || (v63 = v7 + 25, !v7[25].Buffer) )
        v63 = &DestinationString;
      v87 = Callers[5];
      if ( v12 <= 6u || (v64 = v7 + 30, !v7[30].Buffer) )
        v64 = &DestinationString;
      v88 = Callers[6];
      v96 = &v82;
      v98 = &v77;
      v100 = &v78;
      v102 = &v66;
      v104 = v107;
      v106 = p_DestinationString->Buffer;
      v107[0] = p_DestinationString->Length;
      v108 = &v83;
      v110 = v113;
      v112 = v60->Buffer;
      v113[0] = v60->Length;
      v114 = &v84;
      v116 = v119;
      v118 = v61->Buffer;
      v119[0] = v61->Length;
      v120 = &v85;
      v122 = v125;
      v124 = v62->Buffer;
      v125[0] = v62->Length;
      v126 = &v86;
      v128 = v131;
      v130 = v63->Buffer;
      v131[0] = v63->Length;
      v132 = &v87;
      v134 = v137;
      v136 = v64->Buffer;
      v137[0] = v64->Length;
      v138 = &v88;
      v97 = 8LL;
      v99 = 4LL;
      v101 = 4LL;
      v103 = 1LL;
      v105 = 2LL;
      v107[1] = 0;
      v109 = 8LL;
      v111 = 2LL;
      v113[1] = 0;
      v115 = 8LL;
      v117 = 2LL;
      v119[1] = 0;
      v121 = 8LL;
      v123 = 2LL;
      v125[1] = 0;
      v127 = 8LL;
      v129 = 2LL;
      v131[1] = 0;
      v133 = 8LL;
      v135 = 2LL;
      v137[1] = 0;
      v139 = 8LL;
      TlgWrite(&stru_140401308, &unk_140374AEB, 0LL, 0LL, 0x18u, &pData);
    }
  }
  else if ( stru_140401308.LevelPlus1 > 5 && TlgKeywordOn(&stru_140401308, 0x400000000000uLL) )
  {
    v79 = v162;
    v80 = v71;
    v67 = a5;
    v141 = &v89;
    v143 = &v79;
    v145 = &v80;
    v147 = &v67;
    v149 = v152;
    v152[0] = v43;
    v89 = 0x2000000LL;
    v142 = 8LL;
    v144 = 4LL;
    v146 = 4LL;
    v148 = 1LL;
    v150 = 2LL;
    v151 = v49;
    v152[1] = 0;
    TlgWrite(&stru_140401308, &unk_140374A8E, 0LL, 0LL, 8u, &v140);
  }
  if ( v65 )
    ExFreePoolWithTag(v74.Buffer, 0);
  if ( v23 )
    ExFreePoolWithTag(v23, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
