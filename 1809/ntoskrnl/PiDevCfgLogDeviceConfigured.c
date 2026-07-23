/*
 * XREFs of PiDevCfgLogDeviceConfigured @ 0x1406F4C00
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1406E40D4 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406F4C00 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1400922E8 (RtlStringCchPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     PnpGetLogString @ 0x14015D334 (PnpGetLogString.c)
 *     McTemplateK0zzjzzztzdzztdz @ 0x14015D4FC (McTemplateK0zzjzzztzdzztdz.c)
 *     RtlUnicodeStringPrintfEx @ 0x14015D8CC (RtlUnicodeStringPrintfEx.c)
 *     RtlTimeToTimeFields @ 0x14015DB20 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlUnicodeStringExHandleOtherFlags @ 0x140287A04 (RtlUnicodeStringExHandleOtherFlags.c)
 *     RtlStringFromGUIDEx @ 0x14058C238 (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x14065BBD0 (RtlCreateUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406F4C00 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406F74E0 (PiDevCfgQueryObjectProperties.c)
 *     PnpTraceDeviceConfig @ 0x1406F7CE8 (PnpTraceDeviceConfig.c)
 */

void __fastcall PiDevCfgLogDeviceConfigured(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // rbx
  wchar_t *v8; // rdx
  int v9; // edi
  __int64 v10; // rsi
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // ecx
  wchar_t *Buffer; // rcx
  __int64 **v15; // rdi
  __int64 **v16; // rdx
  int v17; // r15d
  int v18; // r12d
  __int64 v19; // rdi
  int *v20; // rax
  __int64 v21; // r9
  __int64 v22; // r8
  int *v23; // rax
  const wchar_t *v24; // rdx
  const wchar_t *v25; // r8
  const wchar_t *v26; // r9
  __int64 v27; // r10
  const wchar_t *v28; // r11
  _QWORD *v29; // r15
  _QWORD *v30; // rax
  wchar_t *v31; // rdi
  wchar_t *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rax
  bool v35; // zf
  __int64 v36; // rsi
  __int64 v37; // rax
  unsigned __int16 Length; // dx
  unsigned int v39; // r9d
  __int64 v40; // r8
  int v41; // r8d
  __int64 *v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // r8d
  wchar_t *StringRoutine; // rax
  UNICODE_STRING v46; // xmm0
  __int64 *v47; // r12
  wchar_t *v48; // r8
  wchar_t *v49; // r9
  size_t v50; // rdx
  size_t v51; // rax
  __int16 v52; // cx
  int v53; // r12d
  __int64 v54; // r10
  const WCHAR *v55; // rcx
  unsigned __int64 v56; // r9
  __int64 v57; // rax
  const wchar_t *v58; // rdi
  __int64 v59; // r9
  __int64 v60; // r8
  int *v61; // rax
  const wchar_t *v62; // rdx
  const wchar_t *v63; // r8
  const wchar_t *v64; // r9
  __int64 v65; // r10
  const wchar_t *v66; // r11
  __int64 v67; // rax
  const wchar_t *v68; // rdi
  __int64 v69; // r9
  __int64 v70; // r8
  int *LogString; // rax
  const wchar_t *v72; // rdx
  const wchar_t *v73; // r8
  const wchar_t *v74; // r9
  __int64 v75; // r10
  const wchar_t *v76; // r11
  __int64 v77; // rax
  const wchar_t *v78; // rdi
  __int64 v79; // r9
  __int64 v80; // r8
  int *v81; // rax
  const wchar_t *v82; // rdx
  const wchar_t *v83; // r8
  const wchar_t *v84; // r9
  __int64 v85; // r10
  const wchar_t *v86; // r11
  int v87; // ecx
  unsigned int v88; // edi
  wchar_t *v89; // rax
  size_t v90; // r8
  _QWORD *v91; // rcx
  int v92; // ebx
  _QWORD *v93; // rsi
  int v94; // eax
  int v95; // r9d
  __int64 v96; // r9
  __int64 v97; // rdx
  int v98; // ecx
  wchar_t *v99; // r8
  unsigned __int16 v100; // cx
  unsigned int v101; // r9d
  __int64 v102; // rdx
  UNICODE_STRING *v103; // rdx
  const wchar_t *v104; // rcx
  NTSTATUS v105; // edi
  wchar_t **ppszDestEnd; // [rsp+28h] [rbp-F0h]
  wchar_t **ppszDestEnda; // [rsp+28h] [rbp-F0h]
  size_t *pcchRemaining; // [rsp+30h] [rbp-E8h]
  size_t *pcchRemaininga; // [rsp+30h] [rbp-E8h]
  ULONG dwFlags[2]; // [rsp+38h] [rbp-E0h]
  int v111; // [rsp+50h] [rbp-C8h]
  int v112; // [rsp+60h] [rbp-B8h]
  int v113; // [rsp+68h] [rbp-B0h]
  unsigned int v114; // [rsp+98h] [rbp-80h]
  char v115; // [rsp+9Ch] [rbp-7Ch]
  char v116; // [rsp+9Ch] [rbp-7Ch]
  char v117; // [rsp+9Ch] [rbp-7Ch]
  const wchar_t *v119; // [rsp+A0h] [rbp-78h]
  __int64 v120; // [rsp+A0h] [rbp-78h]
  __int64 v121; // [rsp+A0h] [rbp-78h]
  __int64 v122; // [rsp+A0h] [rbp-78h]
  _TIME_FIELDS TimeFields; // [rsp+A8h] [rbp-70h] BYREF
  int v124; // [rsp+B8h] [rbp-60h]
  int v125; // [rsp+BCh] [rbp-5Ch]
  __int64 v126; // [rsp+C0h] [rbp-58h]
  UNICODE_STRING UnicodeString; // [rsp+C8h] [rbp-50h] BYREF
  int v128; // [rsp+D8h] [rbp-40h]
  UNICODE_STRING v129; // [rsp+E0h] [rbp-38h] BYREF
  UNICODE_STRING v130; // [rsp+F8h] [rbp-20h] BYREF
  size_t pcchNewDestLength; // [rsp+108h] [rbp-10h] BYREF
  UNICODE_STRING DestinationString; // [rsp+110h] [rbp-8h] BYREF
  UNICODE_STRING v133; // [rsp+128h] [rbp+10h] BYREF
  UNICODE_STRING GuidString; // [rsp+138h] [rbp+20h] BYREF
  wchar_t *v135; // [rsp+148h] [rbp+30h] BYREF
  size_t v136; // [rsp+150h] [rbp+38h] BYREF
  __int64 *v137; // [rsp+158h] [rbp+40h]
  __int64 v138; // [rsp+160h] [rbp+48h]
  UNICODE_STRING v139; // [rsp+170h] [rbp+58h] BYREF
  GUID Guid; // [rsp+180h] [rbp+68h] BYREF
  _QWORD v141[16]; // [rsp+198h] [rbp+80h] BYREF
  wchar_t pszDest[12]; // [rsp+218h] [rbp+100h] BYREF
  wchar_t v143[24]; // [rsp+230h] [rbp+118h] BYREF

  v5 = 0LL;
  v126 = a1;
  v124 = a4;
  v6 = a2;
  *(_DWORD *)&DestinationString.Length = 0;
  v7 = a3;
  v138 = a3;
  v8 = 0LL;
  DestinationString.Buffer = 0LL;
  v9 = 1;
  *(_DWORD *)&UnicodeString.Length = 0;
  v10 = 0LL;
  UnicodeString.Buffer = 0LL;
  v128 = 1;
  v114 = 1;
  *(_DWORD *)&v133.Length = 0;
  v133.Buffer = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  v125 = 0;
  *(_DWORD *)&v130.Length = 0;
  v130.Buffer = 0LL;
  if ( (byte_140406846 & 0x18) != 0x18 )
    goto LABEL_39;
  if ( !a3 )
  {
    pszDest[0] = 0;
    LOBYTE(v17) = 0;
    v143[0] = 0;
    v114 = 0;
    goto LABEL_20;
  }
  memset(v141, 0, 0x78uLL);
  v11 = *(_QWORD *)(v7 + 16);
  v12 = *(_QWORD *)(v7 + 64);
  v141[2] = &DestinationString;
  v141[7] = &UnicodeString;
  v141[0] = &DEVPKEY_DriverPackage_OriginalInfName;
  LODWORD(v141[1]) = 18;
  HIDWORD(v141[3]) = 6;
  v141[5] = &DEVPKEY_DriverPackage_DriverFlightIds;
  LODWORD(v141[6]) = 8210;
  HIDWORD(v141[8]) = 6;
  if ( (int)PiDevCfgQueryObjectProperties(v13, v12, 8, v11, (__int64)v141, 2) < 0 )
    goto LABEL_39;
  if ( SLODWORD(v141[4]) < 0 )
    RtlInitUnicodeString(&DestinationString, 0LL);
  if ( SLODWORD(v141[9]) < 0 )
    RtlInitUnicodeString(&UnicodeString, 0LL);
  Buffer = UnicodeString.Buffer;
  if ( UnicodeString.Buffer && (Length = UnicodeString.Length, UnicodeString.Length > 4u) )
  {
    v39 = 0;
    if ( (unsigned __int64)UnicodeString.Length >> 1 != 2 )
    {
      v40 = 0LL;
      do
      {
        if ( !Buffer[v40] )
        {
          Buffer[v40] = 59;
          Buffer = UnicodeString.Buffer;
          Length = UnicodeString.Length;
        }
        v40 = ++v39;
      }
      while ( v39 < ((unsigned __int64)Length >> 1) - 2 );
    }
    UnicodeString.Length = Length - 2;
  }
  else
  {
    RtlFreeAnsiString(&UnicodeString);
    RtlInitUnicodeString(&UnicodeString, 0LL);
  }
  if ( DestinationString.Buffer )
  {
    if ( !RtlEqualUnicodeString((PCUNICODE_STRING)(v7 + 40), &DestinationString, 1u) )
      v9 = 0;
    v114 = v9;
  }
  RtlTimeToTimeFields((PLARGE_INTEGER)(v7 + 112), &TimeFields);
  LODWORD(pcchRemaining) = TimeFields.Year;
  LODWORD(ppszDestEnd) = TimeFields.Day;
  if ( RtlStringCchPrintfW(
         pszDest,
         0xBuLL,
         L"%02d/%02d/%04d",
         (unsigned int)TimeFields.Month,
         ppszDestEnd,
         pcchRemaining) < 0 )
    pszDest[0] = 0;
  LODWORD(pcchRemaininga) = *(unsigned __int16 *)(v7 + 122);
  LODWORD(ppszDestEnda) = *(unsigned __int16 *)(v7 + 124);
  if ( RtlStringCchPrintfW(
         v143,
         0x18uLL,
         L"%u.%u.%u.%u",
         (unsigned __int16)HIWORD(*(_DWORD *)(v7 + 124)),
         ppszDestEnda,
         pcchRemaininga,
         *(unsigned __int16 *)(v7 + 120)) < 0 )
    v143[0] = 0;
  v15 = (__int64 **)(v7 + 224);
  v16 = *(__int64 ***)(v7 + 224);
  LOBYTE(v17) = 0;
  if ( *(_DWORD *)(v7 + 108) != -1 )
    v17 = *(_DWORD *)(v7 + 108);
  if ( v16 == v15 )
  {
    v8 = 0LL;
    goto LABEL_19;
  }
  v41 = 0;
  do
  {
    v42 = v16[22];
    v41 += *((unsigned __int16 *)v16 + 20) + *((unsigned __int16 *)v16 + 36) + 22;
    if ( v42 )
    {
      v43 = -1LL;
      do
        v35 = *((_WORD *)v42 + ++v43) == 0;
      while ( !v35 );
      v41 += 2 * v43 + 2;
    }
    v16 = (__int64 **)*v16;
  }
  while ( v16 != v15 );
  v44 = v41 + 2;
  if ( v44 <= 0xFFFE )
  {
    v133.MaximumLength = v44;
  }
  else
  {
    LOWORD(v44) = -2;
    v133.MaximumLength = -2;
  }
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)v44);
  v133.Buffer = StringRoutine;
  v8 = StringRoutine;
  if ( !StringRoutine )
    goto LABEL_39;
  v46 = v133;
  *StringRoutine = 0;
  v47 = *v15;
  TimeFields = (_TIME_FIELDS)v46;
  v137 = v47;
  if ( v47 == (__int64 *)v15 )
    goto LABEL_19;
  while ( v47 == *v15 )
  {
LABEL_98:
    dwFlags[0] = *((_DWORD *)v47 + 27);
    if ( RtlUnicodeStringPrintfEx(
           (PUNICODE_STRING)&TimeFields,
           (PUNICODE_STRING)&TimeFields,
           0x800u,
           L"%wZ:%wZ:%08X",
           v47 + 5,
           v47 + 9,
           *(_QWORD *)dwFlags) >= 0
      && (!v47[22]
       || RtlUnicodeStringPrintfEx((PUNICODE_STRING)&TimeFields, (PUNICODE_STRING)&TimeFields, 0x800u, L":%ws", v47[22]) >= 0) )
    {
      v47 = (__int64 *)*v47;
      v137 = v47;
      if ( v47 != (__int64 *)v15 )
        continue;
    }
    goto LABEL_102;
  }
  if ( (TimeFields.Year & 1) == 0
    && (TimeFields.Month & 1) == 0
    && TimeFields.Year <= (unsigned int)TimeFields.Month
    && TimeFields.Month != -1 )
  {
    v48 = *(wchar_t **)&TimeFields.Minute;
    if ( *(_QWORD *)&TimeFields.Minute || !TimeFields.Year && !TimeFields.Month )
    {
      v49 = *(wchar_t **)&TimeFields.Minute;
      v50 = (unsigned __int64)(unsigned __int16)TimeFields.Month >> 1;
      v51 = 0LL;
      v52 = (unsigned __int16)TimeFields.Month >> 1;
      if ( v50 )
      {
        v54 = 0x7FFFLL;
        v55 = L" ";
        pcchNewDestLength = *(_QWORD *)&TimeFields.Minute - (_QWORD)L" ";
        v56 = (unsigned __int64)(unsigned __int16)TimeFields.Month >> 1;
        v53 = 0;
        while ( v54 && *v55 )
        {
          --v54;
          ++v51;
          *(const WCHAR *)((char *)v55 + pcchNewDestLength) = *v55;
          ++v55;
          v10 = 0LL;
          if ( !--v56 )
            goto LABEL_88;
        }
        if ( v56 )
          goto LABEL_91;
LABEL_88:
        if ( v54 && *v55 )
          v53 = -2147483643;
LABEL_91:
        pcchNewDestLength = v51;
        v52 = v50 - v51;
        v49 = &v48[v51];
        v135 = v49;
        v136 = v50 - v51;
        if ( v53 < 0 )
        {
          RtlUnicodeStringExHandleOtherFlags(v48, v50, (size_t)v48, &pcchNewDestLength, &v135, &v136, 0x800u);
          v49 = v135;
          v52 = v136;
          LOWORD(v51) = pcchNewDestLength;
        }
      }
      else
      {
        if ( !*(_QWORD *)&TimeFields.Minute )
          goto LABEL_102;
        v53 = -2147483643;
      }
      TimeFields.Year = 2 * v51;
      if ( ((v53 + 0x80000000) & 0x80000000) != 0 || v53 == -2147483643 )
      {
        TimeFields.Year = 0;
        TimeFields.Month = 2 * v52;
        *(_QWORD *)&TimeFields.Minute = v49;
      }
      if ( v53 >= 0 )
      {
        v47 = v137;
        goto LABEL_98;
      }
    }
  }
LABEL_102:
  v7 = v138;
  v6 = a2;
  v8 = v133.Buffer;
LABEL_19:
  LOBYTE(a4) = v124;
LABEL_20:
  v18 = a5;
  if ( a5 < 0 )
  {
    if ( a5 == -1073740959 )
    {
      if ( (byte_140406846 & 0x20) != 0 )
      {
        v116 = a4 & 1;
        v67 = v7 + 272;
        if ( !v7 )
          v67 = 0LL;
        v121 = v67;
        v68 = (const wchar_t *)&dword_140912444;
        if ( v8 )
          v68 = v8;
        PnpGetLogString(*(_QWORD *)(v126 + 16) + 40LL);
        PnpGetLogString(v69);
        PnpGetLogString(v70);
        LogString = PnpGetLogString(v121);
        McTemplateK0zzjzzztzdzztdz(
          v114,
          &KMPnPEvt_DeviceConfig_Blocked,
          (__int64)v73,
          *(const wchar_t **)(v6 + 8),
          v76,
          v75,
          pszDest,
          v143,
          (const wchar_t *)LogString,
          v114,
          v73,
          v17,
          v74,
          v68,
          v116,
          97,
          v72);
      }
    }
    else if ( (byte_140406846 & 0x10) != 0 )
    {
      v117 = a4 & 1;
      v77 = v7 + 272;
      if ( !v7 )
        v77 = 0LL;
      v122 = v77;
      v78 = (const wchar_t *)&dword_140912444;
      if ( v8 )
        v78 = v8;
      PnpGetLogString(*(_QWORD *)(v126 + 16) + 40LL);
      PnpGetLogString(v79);
      PnpGetLogString(v80);
      v81 = PnpGetLogString(v122);
      McTemplateK0zzjzzztzdzztdz(
        v114,
        &KMPnPEvt_DeviceConfig_Failure,
        (__int64)v83,
        *(const wchar_t **)(v6 + 8),
        v86,
        v85,
        pszDest,
        v143,
        (const wchar_t *)v81,
        v114,
        v83,
        v17,
        v84,
        v78,
        v117,
        a5,
        v82);
    }
  }
  else if ( (a4 & 2) != 0 )
  {
    if ( (byte_140406846 & 0x20) != 0 )
    {
      v115 = a4 & 1;
      v57 = v7 + 272;
      if ( !v7 )
        v57 = 0LL;
      v120 = v57;
      v58 = (const wchar_t *)&dword_140912444;
      if ( v8 )
        v58 = v8;
      PnpGetLogString(*(_QWORD *)(v126 + 16) + 40LL);
      PnpGetLogString(v59);
      PnpGetLogString(v60);
      v61 = PnpGetLogString(v120);
      McTemplateK0zzjzzztzdzztdz(
        v114,
        &KMPnPEvt_DeviceConfig_RebootRequired,
        (__int64)v63,
        *(const wchar_t **)(v6 + 8),
        v66,
        v65,
        pszDest,
        v143,
        (const wchar_t *)v61,
        v114,
        v63,
        v17,
        v64,
        v58,
        v115,
        a5,
        v62);
    }
  }
  else if ( (byte_140406846 & 8) != 0 )
  {
    if ( (a4 & 1) == 0 )
      v128 = 0;
    if ( v7 )
      v19 = v7 + 272;
    else
      v19 = 0LL;
    v20 = &dword_140912444;
    if ( v8 )
      v20 = (int *)v8;
    v119 = (const wchar_t *)v20;
    PnpGetLogString(*(_QWORD *)(v126 + 16) + 40LL);
    PnpGetLogString(v21);
    PnpGetLogString(v22);
    v23 = PnpGetLogString(v19);
    McTemplateK0zzjzzztzdzztdz(
      v114,
      &KMPnPEvt_DeviceConfig_Success,
      (__int64)v25,
      *(const wchar_t **)(v6 + 8),
      v28,
      v27,
      pszDest,
      v143,
      (const wchar_t *)v23,
      v114,
      v25,
      v17,
      v26,
      v119,
      v128,
      a5,
      v24);
  }
  if ( v7 )
  {
    v29 = (_QWORD *)(v7 + 208);
    v30 = *(_QWORD **)(v7 + 208);
    if ( v30 == (_QWORD *)(v7 + 208) )
      goto LABEL_32;
    v87 = v125;
    do
    {
      v30 = (_QWORD *)*v30;
      ++v87;
    }
    while ( v30 != v29 );
    if ( !v87 )
      goto LABEL_32;
    v130.Length = 0;
    v88 = (unsigned __int16)(823 * v87);
    v130.MaximumLength = 823 * v87;
    v89 = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)(823 * v87));
    v130.Buffer = v89;
    if ( v89 )
    {
      v90 = v88;
      v31 = v89;
      memset(v89, 0, v90);
      v91 = (_QWORD *)*v29;
      TimeFields = (_TIME_FIELDS)v130;
      if ( v91 != v29 )
      {
        v92 = v124 & 1;
        v93 = v91;
        v94 = v92 | 2;
        v125 = v92 | 2;
        do
        {
          v95 = v94;
          if ( !*((_DWORD *)v93 + 97) )
            v95 = v92;
          PiDevCfgLogDeviceConfigured(v126, v6, (_DWORD)v93, v95, v18);
          memset(v141, 0, 0x78uLL);
          v96 = v93[2];
          v97 = v93[8];
          v141[0] = &DEVPKEY_DriverPackage_OriginalInfName;
          v141[2] = &v139;
          v141[7] = &Guid;
          v141[10] = &DEVPKEY_DriverPackage_DriverFlightIds;
          v141[12] = &v129;
          LODWORD(v141[1]) = 18;
          HIDWORD(v141[3]) = 6;
          v141[5] = &DEVPKEY_DriverPackage_ExtensionId;
          LODWORD(v141[6]) = 13;
          LODWORD(v141[8]) = 16;
          LODWORD(v141[11]) = 8210;
          HIDWORD(v141[13]) = 6;
          if ( (int)PiDevCfgQueryObjectProperties(v98, v97, 8, v96, (__int64)v141, 3) >= 0 )
          {
            if ( SLODWORD(v141[4]) < 0 && !RtlCreateUnicodeString(&v139, (PCWSTR)v93[6]) )
              RtlInitUnicodeString(&v139, 0LL);
            if ( SLODWORD(v141[9]) < 0 || RtlStringFromGUIDEx(&Guid, &GuidString, 1u) < 0 )
              RtlInitUnicodeString(&GuidString, 0LL);
            if ( SLODWORD(v141[14]) < 0 )
              RtlInitUnicodeString(&v129, 0LL);
            v99 = v129.Buffer;
            if ( v129.Buffer && (v100 = v129.Length, v129.Length > 4u) )
            {
              v101 = 0;
              if ( (unsigned __int64)v129.Length >> 1 != 2 )
              {
                v102 = 0LL;
                do
                {
                  if ( !v99[v102] )
                  {
                    v99[v102] = 59;
                    v99 = v129.Buffer;
                    v100 = v129.Length;
                  }
                  v102 = ++v101;
                }
                while ( v101 < ((unsigned __int64)v100 >> 1) - 2 );
                v18 = a5;
              }
              v129.Length = v100 - 2;
            }
            else
            {
              RtlFreeAnsiString(&v129);
              RtlInitUnicodeString(&v129, 0LL);
              v99 = v129.Buffer;
            }
            v103 = &v129;
            if ( !v99 )
              v103 = (UNICODE_STRING *)PiDevCfgEmptyString;
            v104 = L",";
            if ( v93 == (_QWORD *)*v29 )
              v104 = &word_140767740;
            v105 = RtlUnicodeStringPrintfEx(
                     (PUNICODE_STRING)&TimeFields,
                     (PUNICODE_STRING)&TimeFields,
                     0x800u,
                     L"%ws%wZ:%wZ:%wZ",
                     v104,
                     &v139,
                     &GuidString,
                     v103);
            RtlFreeAnsiString(&GuidString);
            RtlFreeAnsiString(&v129);
            RtlFreeAnsiString(&v139);
            if ( v105 < 0 )
              break;
          }
          v93 = (_QWORD *)*v93;
          v94 = v125;
        }
        while ( v93 != v29 );
        v7 = v138;
        v10 = 0LL;
LABEL_32:
        v31 = v130.Buffer;
      }
      if ( *(_QWORD *)(v6 + 32) )
        v5 = *(_QWORD *)(v6 + 32);
      if ( *(_QWORD *)(v6 + 48) )
      {
        if ( *(_WORD *)(v6 + 40) > 2u )
        {
          v10 = *(_QWORD *)(v6 + 48);
          v33 = -1LL;
          do
            ++v33;
          while ( *(_WORD *)(v10 + 2 * v33) );
          if ( *(_WORD *)(v10 + 2 * v33 + 2) )
          {
            do
            {
              v34 = -1LL;
              do
                v35 = *(_WORD *)(v10 + 2 * v34++ + 2) == 0;
              while ( !v35 );
              v36 = v10 + 2 * v34;
              v37 = -1LL;
              v10 = v36 + 2;
              do
                ++v37;
              while ( *(_WORD *)(v10 + 2 * v37) );
            }
            while ( *(_WORD *)(v10 + 2 * v37 + 2) );
          }
        }
      }
      v32 = DestinationString.Buffer;
      if ( !DestinationString.Buffer )
        v32 = *(wchar_t **)(v7 + 48);
      LOBYTE(v113) = (v124 & 2) != 0;
      LOBYTE(v112) = PnpSetupInProgress != 0;
      LOBYTE(v111) = v114 != 0;
      PnpTraceDeviceConfig(
        v126 + 40,
        v5,
        v10,
        *(_QWORD *)(v7 + 264),
        v32,
        *(_QWORD *)(v7 + 280),
        pszDest,
        v143,
        v31,
        v111,
        &UnicodeString,
        v112,
        v113,
        v18);
    }
  }
LABEL_39:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v133);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v130);
}
