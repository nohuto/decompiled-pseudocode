/*
 * XREFs of PiDevCfgLogDeviceConfigured @ 0x1406FD994
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1406FB30C (PiDevCfgProcessDevice.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406FD994 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1400880E8 (RtlStringCchPrintfW.c)
 *     PnpGetLogString @ 0x140144C44 (PnpGetLogString.c)
 *     McTemplateK0zzjzzztzdzztdz @ 0x140144E0C (McTemplateK0zzjzzztzdzztdz.c)
 *     RtlUnicodeStringPrintfEx @ 0x1401451DC (RtlUnicodeStringPrintfEx.c)
 *     RtlTimeToTimeFields @ 0x1401453D0 (RtlTimeToTimeFields.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlUnicodeStringExHandleOtherFlags @ 0x14029D670 (RtlUnicodeStringExHandleOtherFlags.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x140694F30 (RtlCreateUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x14069DD28 (RtlStringFromGUIDEx.c)
 *     ExpAllocateStringRoutine @ 0x1406D4640 (ExpAllocateStringRoutine.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406FD994 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406FEB14 (PiDevCfgQueryObjectProperties.c)
 *     PnpTraceDeviceConfig @ 0x1406FEEA8 (PnpTraceDeviceConfig.c)
 */

void __fastcall PiDevCfgLogDeviceConfigured(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
  __int64 v6; // rdi
  wchar_t *v7; // rdx
  unsigned __int16 v8; // r15
  __int64 v9; // r9
  __int64 v10; // rdx
  wchar_t *Buffer; // r8
  int v12; // r12d
  __int64 **v13; // r14
  __int64 **v14; // r8
  int v15; // r13d
  char v16; // r14
  const wchar_t *v17; // rbx
  __int64 v18; // r9
  __int64 v19; // r8
  int *v20; // rax
  const wchar_t *v21; // rdx
  const wchar_t *v22; // r8
  const wchar_t *v23; // r9
  const wchar_t *v24; // r10
  __int64 v25; // r11
  __int64 **v26; // r14
  __int64 **v27; // rax
  wchar_t *v28; // r12
  __int64 v29; // r10
  __int64 v30; // r11
  wchar_t *v31; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r11
  unsigned __int16 Length; // cx
  unsigned int v36; // r9d
  __int64 v37; // rdx
  int v38; // edx
  __int64 *v39; // rcx
  __int64 v40; // rax
  unsigned int v41; // edx
  wchar_t *StringRoutine; // rax
  UNICODE_STRING v43; // xmm0
  __int64 *v44; // rsi
  wchar_t *v45; // r8
  wchar_t *v46; // r9
  size_t v47; // rdx
  size_t v48; // rax
  __int16 v49; // cx
  int v50; // ebx
  __int64 v51; // r9
  const WCHAR *v52; // rcx
  __int64 v53; // r11
  unsigned __int64 v54; // r10
  char v55; // r14
  const wchar_t *v56; // rbx
  __int64 v57; // r9
  __int64 v58; // r8
  int *v59; // rax
  const wchar_t *v60; // rdx
  const wchar_t *v61; // r8
  const wchar_t *v62; // r9
  const wchar_t *v63; // r10
  __int64 v64; // r11
  char v65; // r14
  const wchar_t *v66; // rbx
  __int64 v67; // r9
  __int64 v68; // r8
  int *LogString; // rax
  const wchar_t *v70; // rdx
  const wchar_t *v71; // r8
  const wchar_t *v72; // r9
  const wchar_t *v73; // r10
  __int64 v74; // r11
  char v75; // r14
  const wchar_t *v76; // rbx
  __int64 v77; // r9
  __int64 v78; // r8
  int *v79; // rax
  const wchar_t *v80; // rdx
  const wchar_t *v81; // r8
  const wchar_t *v82; // r9
  const wchar_t *v83; // r10
  __int64 v84; // r11
  int v85; // ecx
  wchar_t *v86; // rax
  __int64 *v87; // rsi
  int v88; // edi
  int v89; // r15d
  int v90; // r9d
  __int64 v91; // r9
  __int64 v92; // rdx
  unsigned __int16 v93; // cx
  unsigned int v94; // r8d
  __int64 v95; // rdx
  UNICODE_STRING *v96; // r8
  UNICODE_STRING *v97; // rdx
  const wchar_t *v98; // rcx
  NTSTATUS v99; // ebx
  wchar_t **ppszDestEnd; // [rsp+20h] [rbp-F0h]
  wchar_t **ppszDestEnda; // [rsp+20h] [rbp-F0h]
  size_t *pcchRemaining; // [rsp+28h] [rbp-E8h]
  size_t *pcchRemaininga; // [rsp+28h] [rbp-E8h]
  ULONG dwFlags[2]; // [rsp+30h] [rbp-E0h]
  int v105; // [rsp+50h] [rbp-C0h]
  int v106; // [rsp+60h] [rbp-B0h]
  int v107; // [rsp+68h] [rbp-A8h]
  BOOL v108; // [rsp+90h] [rbp-80h]
  _TIME_FIELDS TimeFields; // [rsp+A0h] [rbp-70h] BYREF
  int v110; // [rsp+B0h] [rbp-60h]
  UNICODE_STRING UnicodeString; // [rsp+B8h] [rbp-58h] BYREF
  __int64 v112; // [rsp+C8h] [rbp-48h]
  __int64 v113; // [rsp+D0h] [rbp-40h]
  UNICODE_STRING v114; // [rsp+D8h] [rbp-38h] BYREF
  UNICODE_STRING v115; // [rsp+F0h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+100h] [rbp-10h] BYREF
  UNICODE_STRING v117; // [rsp+110h] [rbp+0h] BYREF
  int v118; // [rsp+120h] [rbp+10h]
  int v119; // [rsp+124h] [rbp+14h]
  UNICODE_STRING GuidString; // [rsp+128h] [rbp+18h] BYREF
  UNICODE_STRING v121; // [rsp+138h] [rbp+28h] BYREF
  UNICODE_STRING v122; // [rsp+148h] [rbp+38h] BYREF
  UNICODE_STRING v123; // [rsp+158h] [rbp+48h] BYREF
  wchar_t *v124; // [rsp+168h] [rbp+58h] BYREF
  size_t v125; // [rsp+170h] [rbp+60h] BYREF
  size_t pcchNewDestLength; // [rsp+178h] [rbp+68h] BYREF
  __int64 v127; // [rsp+180h] [rbp+70h]
  __int64 v128; // [rsp+188h] [rbp+78h]
  __int64 v129; // [rsp+190h] [rbp+80h]
  GUID Guid; // [rsp+198h] [rbp+88h] BYREF
  _QWORD v131[20]; // [rsp+1B0h] [rbp+A0h] BYREF
  wchar_t pszDest[12]; // [rsp+250h] [rbp+140h] BYREF
  wchar_t v133[24]; // [rsp+268h] [rbp+158h] BYREF

  v129 = a6;
  v6 = a3;
  v112 = a2;
  *(_QWORD *)&TimeFields.Year = 0LL;
  v7 = 0LL;
  *(_QWORD *)&TimeFields.Minute = 0LL;
  *(_QWORD *)&v122.Length = 0LL;
  v122.Buffer = 0LL;
  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  *(_QWORD *)&v114.Length = 0LL;
  v114.Buffer = 0LL;
  *(_QWORD *)&v123.Length = 0LL;
  v123.Buffer = 0LL;
  v110 = a4;
  v127 = a3;
  v113 = a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v121.Length = 0LL;
  v121.Buffer = 0LL;
  v108 = 1;
  v128 = 0LL;
  *(_QWORD *)&v117.Length = 0LL;
  v117.Buffer = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  v119 = 0;
  *(_QWORD *)&v115.Length = 0LL;
  v115.Buffer = 0LL;
  if ( (byte_14042BDBA & 0x18) != 0x18 )
    goto LABEL_39;
  v8 = 0x7FFF;
  if ( a3 )
  {
    memset(v131, 0, sizeof(v131));
    v9 = *(_QWORD *)(v6 + 16);
    v10 = *(_QWORD *)(v6 + 64);
    v131[0] = &DEVPKEY_DriverPackage_OriginalInfName;
    v131[2] = &DestinationString;
    v131[5] = &DEVPKEY_DriverPackage_DriverFlightIds;
    v131[7] = &UnicodeString;
    v131[10] = &DEVPKEY_DriverPackage_SubmissionId;
    v131[12] = &v121;
    LODWORD(v131[1]) = 18;
    HIDWORD(v131[3]) = 6;
    LODWORD(v131[6]) = 8210;
    HIDWORD(v131[8]) = 6;
    LODWORD(v131[11]) = 18;
    HIDWORD(v131[13]) = 6;
    if ( (int)PiDevCfgQueryObjectProperties(18, v10, 8, v9, (__int64)v131, 3) < 0 )
      goto LABEL_39;
    if ( SLODWORD(v131[4]) < 0 )
      RtlInitUnicodeString(&DestinationString, 0LL);
    if ( SLODWORD(v131[9]) < 0 )
      RtlInitUnicodeString(&UnicodeString, 0LL);
    Buffer = UnicodeString.Buffer;
    if ( UnicodeString.Buffer && (Length = UnicodeString.Length, UnicodeString.Length > 4u) )
    {
      v36 = 0;
      if ( (unsigned __int64)UnicodeString.Length >> 1 != 2 )
      {
        v37 = 0LL;
        do
        {
          if ( !Buffer[v37] )
          {
            Buffer[v37] = 59;
            Buffer = UnicodeString.Buffer;
            Length = UnicodeString.Length;
          }
          v37 = ++v36;
        }
        while ( v36 < ((unsigned __int64)Length >> 1) - 2 );
      }
      UnicodeString.Length = Length - 2;
    }
    else
    {
      RtlFreeAnsiString(&UnicodeString);
      RtlInitUnicodeString(&UnicodeString, 0LL);
    }
    if ( SLODWORD(v131[14]) < 0 )
      RtlInitUnicodeString(&v121, 0LL);
    if ( DestinationString.Buffer )
      v108 = RtlEqualUnicodeString((PCUNICODE_STRING)(v6 + 40), &DestinationString, 1u) != 0;
    RtlTimeToTimeFields((PLARGE_INTEGER)(v6 + 112), &TimeFields);
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
    LODWORD(pcchRemaininga) = *(unsigned __int16 *)(v6 + 122);
    LODWORD(ppszDestEnda) = *(unsigned __int16 *)(v6 + 124);
    if ( RtlStringCchPrintfW(
           v133,
           0x18uLL,
           L"%u.%u.%u.%u",
           (unsigned __int16)HIWORD(*(_DWORD *)(v6 + 124)),
           ppszDestEnda,
           pcchRemaininga,
           *(unsigned __int16 *)(v6 + 120)) < 0 )
      v133[0] = 0;
    v12 = *(_DWORD *)(v6 + 108);
    v13 = (__int64 **)(v6 + 224);
    v14 = *(__int64 ***)(v6 + 224);
    if ( v12 == -1 )
      v12 = 0;
    v118 = v12;
    if ( v14 != v13 )
    {
      v38 = 0;
      do
      {
        v39 = v14[22];
        v38 += *((unsigned __int16 *)v14 + 20) + *((unsigned __int16 *)v14 + 36) + 22;
        if ( v39 )
        {
          v40 = -1LL;
          do
            ++v40;
          while ( *((_WORD *)v39 + v40) );
          v38 += 2 * v40 + 2;
        }
        v14 = (__int64 **)*v14;
      }
      while ( v14 != v13 );
      v41 = v38 + 2;
      if ( v41 > 0xFFFE )
        LOWORD(v41) = -2;
      v117.MaximumLength = v41;
      StringRoutine = (wchar_t *)ExpAllocateStringRoutine((unsigned __int16)v41);
      v117.Buffer = StringRoutine;
      if ( !StringRoutine )
        goto LABEL_39;
      v43 = v117;
      *StringRoutine = 0;
      v44 = *v13;
      TimeFields = (_TIME_FIELDS)v43;
      if ( v44 != (__int64 *)v13 )
      {
        do
        {
          if ( v44 != *v13 )
          {
            if ( (TimeFields.Year & 1) != 0 )
              break;
            if ( (TimeFields.Month & 1) != 0 )
              break;
            if ( TimeFields.Year > (unsigned int)TimeFields.Month )
              break;
            if ( TimeFields.Month == -1 )
              break;
            v45 = *(wchar_t **)&TimeFields.Minute;
            if ( !*(_QWORD *)&TimeFields.Minute && (TimeFields.Year || TimeFields.Month) )
              break;
            v46 = *(wchar_t **)&TimeFields.Minute;
            v47 = (unsigned __int64)(unsigned __int16)TimeFields.Month >> 1;
            v48 = 0LL;
            v49 = (unsigned __int16)TimeFields.Month >> 1;
            if ( v47 )
            {
              v51 = 0x7FFFLL;
              v52 = L" ";
              v53 = *(_QWORD *)&TimeFields.Minute - (_QWORD)L" ";
              v54 = (unsigned __int64)(unsigned __int16)TimeFields.Month >> 1;
              v50 = 0;
              do
              {
                if ( !v51 )
                  break;
                if ( !*v52 )
                  break;
                *(const WCHAR *)((char *)v52 + v53) = *v52;
                --v51;
                ++v52;
                ++v48;
                --v54;
              }
              while ( v54 );
              if ( !v54 && v51 && *v52 )
                v50 = -2147483643;
              pcchNewDestLength = v48;
              v49 = v47 - v48;
              v46 = &v45[v48];
              v124 = v46;
              v125 = v47 - v48;
              if ( v50 < 0 )
              {
                RtlUnicodeStringExHandleOtherFlags(v45, v47, (size_t)v45, &pcchNewDestLength, &v124, &v125, 0x800u);
                v46 = v124;
                v49 = v125;
                LOWORD(v48) = pcchNewDestLength;
              }
              v8 = 0x7FFF;
            }
            else
            {
              v50 = *(_QWORD *)&TimeFields.Minute != 0LL ? -2147483643 : -1073741811;
            }
            TimeFields.Year = 2 * v48;
            if ( ((v50 + 0x80000000) & 0x80000000) != 0 || v50 == -2147483643 )
            {
              TimeFields.Year = 0;
              TimeFields.Month = 2 * v49;
              *(_QWORD *)&TimeFields.Minute = v46;
            }
            if ( v50 < 0 )
              break;
          }
          dwFlags[0] = *((_DWORD *)v44 + 27);
          if ( RtlUnicodeStringPrintfEx(
                 (PUNICODE_STRING)&TimeFields,
                 (PUNICODE_STRING)&TimeFields,
                 0x800u,
                 L"%wZ:%wZ:%08X",
                 v44 + 5,
                 v44 + 9,
                 *(_QWORD *)dwFlags) < 0
            || v44[22]
            && RtlUnicodeStringPrintfEx(
                 (PUNICODE_STRING)&TimeFields,
                 (PUNICODE_STRING)&TimeFields,
                 0x800u,
                 L":%ws",
                 v44[22]) < 0 )
          {
            break;
          }
          v44 = (__int64 *)*v44;
        }
        while ( v44 != (__int64 *)v13 );
        v6 = v127;
        LOBYTE(v12) = v118;
      }
    }
    v7 = v117.Buffer;
    LOBYTE(a4) = v110;
  }
  else
  {
    pszDest[0] = 0;
    LOBYTE(v12) = 0;
    v133[0] = 0;
    v108 = 0;
  }
  v15 = a5;
  if ( a5 < 0 )
  {
    if ( a5 == -1073740959 )
    {
      if ( (byte_14042BDBA & 0x20) != 0 )
      {
        v65 = a4 & 1;
        v66 = (const wchar_t *)&dword_14094F2E4;
        if ( v7 )
          v66 = v7;
        PnpGetLogString(*(_QWORD *)(v113 + 16) + 40LL);
        PnpGetLogString(v67);
        PnpGetLogString(v68);
        LogString = PnpGetLogString((v6 + 272) & -(__int64)(v6 != 0));
        McTemplateK0zzjzzztzdzztdz(
          v108,
          &KMPnPEvt_DeviceConfig_Blocked,
          (__int64)v71,
          *(const wchar_t **)(v112 + 8),
          v73,
          v74,
          pszDest,
          v133,
          (const wchar_t *)LogString,
          v108,
          v71,
          v12,
          v72,
          v66,
          v65,
          97,
          v70);
      }
    }
    else if ( (byte_14042BDBA & 0x10) != 0 )
    {
      v75 = a4 & 1;
      v76 = (const wchar_t *)&dword_14094F2E4;
      if ( v7 )
        v76 = v7;
      PnpGetLogString(*(_QWORD *)(v113 + 16) + 40LL);
      PnpGetLogString(v77);
      PnpGetLogString(v78);
      v79 = PnpGetLogString((v6 + 272) & -(__int64)(v6 != 0));
      McTemplateK0zzjzzztzdzztdz(
        v108,
        &KMPnPEvt_DeviceConfig_Failure,
        (__int64)v81,
        *(const wchar_t **)(v112 + 8),
        v83,
        v84,
        pszDest,
        v133,
        (const wchar_t *)v79,
        v108,
        v81,
        v12,
        v82,
        v76,
        v75,
        a5,
        v80);
    }
  }
  else if ( (a4 & 2) != 0 )
  {
    if ( (byte_14042BDBA & 0x20) != 0 )
    {
      v55 = a4 & 1;
      v56 = (const wchar_t *)&dword_14094F2E4;
      if ( v7 )
        v56 = v7;
      PnpGetLogString(*(_QWORD *)(v113 + 16) + 40LL);
      PnpGetLogString(v57);
      PnpGetLogString(v58);
      v59 = PnpGetLogString((v6 + 272) & -(__int64)(v6 != 0));
      McTemplateK0zzjzzztzdzztdz(
        v108,
        &KMPnPEvt_DeviceConfig_RebootRequired,
        (__int64)v61,
        *(const wchar_t **)(v112 + 8),
        v63,
        v64,
        pszDest,
        v133,
        (const wchar_t *)v59,
        v108,
        v61,
        v12,
        v62,
        v56,
        v55,
        a5,
        v60);
    }
  }
  else if ( (byte_14042BDBA & 8) != 0 )
  {
    v16 = a4 & 1;
    v17 = (const wchar_t *)&dword_14094F2E4;
    if ( v7 )
      v17 = v7;
    PnpGetLogString(*(_QWORD *)(v113 + 16) + 40LL);
    PnpGetLogString(v18);
    PnpGetLogString(v19);
    v20 = PnpGetLogString((v6 + 272) & -(__int64)(v6 != 0));
    McTemplateK0zzjzzztzdzztdz(
      v108,
      &KMPnPEvt_DeviceConfig_Success,
      (__int64)v22,
      *(const wchar_t **)(v112 + 8),
      v24,
      v25,
      pszDest,
      v133,
      (const wchar_t *)v20,
      v108,
      v22,
      v12,
      v23,
      v17,
      v16,
      a5,
      v21);
  }
  if ( v6 )
  {
    v26 = (__int64 **)(v6 + 208);
    v27 = *(__int64 ***)(v6 + 208);
    if ( v27 == (__int64 **)(v6 + 208) )
      goto LABEL_31;
    v85 = v119;
    do
    {
      v27 = (__int64 **)*v27;
      ++v85;
    }
    while ( v27 != v26 );
    if ( !v85 )
    {
LABEL_31:
      v28 = v115.Buffer;
    }
    else
    {
      if ( (unsigned int)(1646 * v85 + 2) <= 0x7FFF )
      {
        v8 = 1646 * v85 + 2;
        v115.MaximumLength = v8;
      }
      else
      {
        v115.MaximumLength = 0x7FFF;
      }
      v115.Length = 0;
      v86 = (wchar_t *)ExpAllocateStringRoutine(v8);
      v115.Buffer = v86;
      v28 = v86;
      if ( !v86 )
        goto LABEL_39;
      memset(v86, 0, v8);
      v87 = *v26;
      v115.MaximumLength = v8 - 2;
      TimeFields = (_TIME_FIELDS)v115;
      if ( v87 != (__int64 *)v26 )
      {
        v88 = v112;
        v89 = v110 & 1;
        do
        {
          v90 = v89 | 2;
          if ( !*((_DWORD *)v87 + 97) )
            v90 = v89;
          PiDevCfgLogDeviceConfigured(v113, v88, (_DWORD)v87, v90, v15, v129);
          memset(v131, 0, sizeof(v131));
          v91 = v87[2];
          v131[0] = &DEVPKEY_DriverPackage_OriginalInfName;
          LODWORD(v131[1]) = 18;
          v131[2] = &v122;
          v131[5] = &DEVPKEY_DriverPackage_ExtensionId;
          v131[7] = &Guid;
          LODWORD(v131[16]) = 18;
          v131[10] = &DEVPKEY_DriverPackage_DriverFlightIds;
          HIDWORD(v131[3]) = 6;
          v131[12] = &v114;
          v131[15] = &DEVPKEY_DriverPackage_SubmissionId;
          v131[17] = &v123;
          v92 = v87[8];
          LODWORD(v131[6]) = 13;
          LODWORD(v131[8]) = 16;
          LODWORD(v131[11]) = 8210;
          HIDWORD(v131[13]) = 6;
          HIDWORD(v131[18]) = 6;
          if ( (int)PiDevCfgQueryObjectProperties(6, v92, 8, v91, (__int64)v131, 4) >= 0 )
          {
            if ( SLODWORD(v131[4]) < 0 && !RtlCreateUnicodeString(&v122, (PCWSTR)v87[6]) )
              RtlInitUnicodeString(&v122, 0LL);
            if ( SLODWORD(v131[9]) < 0 || RtlStringFromGUIDEx(&Guid, &GuidString, 1u) < 0 )
              RtlInitUnicodeString(&GuidString, 0LL);
            if ( SLODWORD(v131[14]) < 0 )
              RtlInitUnicodeString(&v114, 0LL);
            if ( v114.Buffer && (v93 = v114.Length, v114.Length > 4u) )
            {
              v94 = 0;
              if ( (unsigned __int64)v114.Length >> 1 != 2 )
              {
                v95 = 0LL;
                do
                {
                  if ( !v114.Buffer[v95] )
                  {
                    v114.Buffer[v95] = 59;
                    v93 = v114.Length;
                  }
                  v95 = ++v94;
                }
                while ( v94 < ((unsigned __int64)v93 >> 1) - 2 );
                v15 = a5;
              }
              v114.Length = v93 - 2;
            }
            else
            {
              RtlFreeAnsiString(&v114);
              RtlInitUnicodeString(&v114, 0LL);
            }
            if ( SLODWORD(v131[19]) < 0 )
              RtlInitUnicodeString(&v123, 0LL);
            v96 = &v123;
            if ( !v123.Buffer )
              v96 = (UNICODE_STRING *)PiDevCfgEmptyString;
            v97 = &v114;
            v98 = L",";
            if ( !v114.Buffer )
              v97 = (UNICODE_STRING *)PiDevCfgEmptyString;
            if ( v87 == *v26 )
              v98 = &word_14078F2B0;
            v99 = RtlUnicodeStringPrintfEx(
                    (PUNICODE_STRING)&TimeFields,
                    (PUNICODE_STRING)&TimeFields,
                    0x800u,
                    L"%ws%wZ:%wZ:%wZ:%wZ",
                    v98,
                    &v122,
                    &GuidString,
                    v97,
                    v96);
            RtlFreeAnsiString(&GuidString);
            RtlFreeAnsiString(&v114);
            RtlFreeAnsiString(&v122);
            RtlFreeAnsiString(&v123);
            if ( v99 < 0 )
              break;
          }
          v87 = (__int64 *)*v87;
        }
        while ( v87 != (__int64 *)v26 );
        v6 = v127;
        v28 = v115.Buffer;
      }
    }
    v29 = 0LL;
    if ( *(_QWORD *)(v112 + 32) )
      v29 = *(_QWORD *)(v112 + 32);
    if ( *(_QWORD *)(v112 + 48) && *(_WORD *)(v112 + 40) > 2u )
    {
      v30 = *(_QWORD *)(v112 + 48);
      v32 = -1LL;
      do
        ++v32;
      while ( *(_WORD *)(v30 + 2 * v32) );
      while ( *(_WORD *)(v30 + 2 * v32 + 2) )
      {
        v33 = -1LL;
        do
          ++v33;
        while ( *(_WORD *)(v30 + 2 * v33) );
        v34 = v30 + 2 * v33;
        v32 = -1LL;
        v30 = v34 + 2;
        do
          ++v32;
        while ( *(_WORD *)(v30 + 2 * v32) );
      }
    }
    else
    {
      v30 = v128;
    }
    v31 = DestinationString.Buffer;
    if ( !DestinationString.Buffer )
      v31 = *(wchar_t **)(v6 + 48);
    LOBYTE(v107) = (v110 & 2) != 0;
    LOBYTE(v106) = PnpSetupInProgress != 0;
    LOBYTE(v105) = v108;
    PnpTraceDeviceConfig(
      v113 + 40,
      v29,
      v30,
      *(_QWORD *)(v6 + 264),
      v31,
      *(_QWORD *)(v6 + 280),
      pszDest,
      v133,
      v121.Buffer,
      v28,
      v105,
      &UnicodeString,
      v106,
      v107,
      v15,
      v129);
  }
LABEL_39:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&v117);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v115);
  RtlFreeAnsiString(&v121);
}
