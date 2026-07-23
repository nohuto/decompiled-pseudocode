/*
 * XREFs of EtwStartAutoLogger @ 0x140743058
 * Callers:
 *     EtwpInitializeAutoLoggers @ 0x140742A4C (EtwpInitializeAutoLoggers.c)
 *     PerfDiagpRestartCKCL @ 0x140742CA0 (PerfDiagpRestartCKCL.c)
 *     EtwpEnumerateAutologgerPath @ 0x140742E18 (EtwpEnumerateAutologgerPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcscmp @ 0x140197840 (wcscmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 *     RtlpQueryRegistryValues @ 0x1405C68AC (RtlpQueryRegistryValues.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlNtStatusToDosError @ 0x140624F00 (RtlNtStatusToDosError.c)
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 *     RtlCreateUnicodeString @ 0x14065BBD0 (RtlCreateUnicodeString.c)
 *     RtlWriteRegistryValue @ 0x1406C3500 (RtlWriteRegistryValue.c)
 *     EtwpEnableKeyProviders @ 0x140743BC0 (EtwpEnableKeyProviders.c)
 *     EtwpUpdateDisallowList @ 0x1408B6AD0 (EtwpUpdateDisallowList.c)
 *     EtwpParsePoolTagFilter @ 0x1408C2594 (EtwpParsePoolTagFilter.c)
 */

__int64 __fastcall EtwStartAutoLogger(wchar_t *SourceString, PCWSTR a2, const WCHAR *a3)
{
  GUID *v5; // r14
  __int64 v6; // rbx
  NTSTATUS RegistryValues; // edi
  PVOID v8; // rax
  int *v9; // rsi
  _WORD *v10; // r14
  int v11; // r13d
  _WORD *v12; // r15
  int v13; // eax
  const WCHAR *v14; // rdx
  unsigned int *v16; // rsi
  __int64 v17; // r9
  int v18; // eax
  unsigned int v19; // r12d
  unsigned __int16 v20; // r14
  int v21; // eax
  GUID v22; // xmm0
  __int64 v23; // rsi
  __int64 v24; // rcx
  int started; // eax
  unsigned int v26; // r15d
  _QWORD *v27; // rax
  __int64 v28; // rax
  _WORD *v29; // rcx
  int v30; // eax
  unsigned int v31; // eax
  const WCHAR *v32; // rdx
  _WORD *v33; // rdx
  unsigned __int16 v34; // cx
  __int64 v35; // r9
  void *v36; // r9
  unsigned int v37; // esi
  unsigned int v38; // ecx
  __int64 v39; // r13
  int v40; // r14d
  GUID *v41; // r12
  _QWORD *CurrentServerSiloGlobals; // rax
  ULONG v43; // eax
  __int16 v44; // [rsp+40h] [rbp-C0h] BYREF
  GUID *PoolWithTag; // [rsp+48h] [rbp-B8h]
  int v46; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v47; // [rsp+54h] [rbp-ACh] BYREF
  int v48; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 v49; // [rsp+5Ch] [rbp-A4h]
  int v50; // [rsp+60h] [rbp-A0h] BYREF
  int v51; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG ValueData; // [rsp+68h] [rbp-98h] BYREF
  ULONG Disposition; // [rsp+6Ch] [rbp-94h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v56; // [rsp+80h] [rbp-80h] BYREF
  int v57; // [rsp+90h] [rbp-70h] BYREF
  int v58; // [rsp+94h] [rbp-6Ch] BYREF
  int v59; // [rsp+98h] [rbp-68h] BYREF
  void *Src; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING GuidString; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING v63; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v64; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v65; // [rsp+E0h] [rbp-20h]
  int v66; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v67; // [rsp+F0h] [rbp-10h]
  PCWSTR SourceStringa; // [rsp+F8h] [rbp-8h]
  UNICODE_STRING DestinationString; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v70; // [rsp+110h] [rbp+10h] BYREF
  __int64 v71; // [rsp+118h] [rbp+18h]
  wchar_t *Str1; // [rsp+120h] [rbp+20h]
  PCWSTR v73; // [rsp+128h] [rbp+28h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+130h] [rbp+30h] BYREF
  GUID Guid; // [rsp+160h] [rbp+60h] BYREF
  int v76; // [rsp+170h] [rbp+70h] BYREF
  int *v77; // [rsp+178h] [rbp+78h]
  int v78; // [rsp+180h] [rbp+80h] BYREF
  int *v79; // [rsp+188h] [rbp+88h]
  int v80; // [rsp+190h] [rbp+90h] BYREF
  __int64 v81; // [rsp+198h] [rbp+98h]
  int v82; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v83; // [rsp+1A8h] [rbp+A8h]
  int v84; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v85; // [rsp+1B8h] [rbp+B8h]
  int v86; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v87; // [rsp+1C8h] [rbp+C8h]
  int v88; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned int *v89; // [rsp+1D8h] [rbp+D8h]
  int v90; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int *v91; // [rsp+1E8h] [rbp+E8h]
  int v92; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v93; // [rsp+1F8h] [rbp+F8h]
  int v94; // [rsp+200h] [rbp+100h] BYREF
  __int64 v95; // [rsp+208h] [rbp+108h]
  int v96; // [rsp+210h] [rbp+110h] BYREF
  __int64 v97; // [rsp+218h] [rbp+118h]
  int v98; // [rsp+220h] [rbp+120h] BYREF
  int *v99; // [rsp+228h] [rbp+128h]
  int v100; // [rsp+230h] [rbp+130h] BYREF
  UNICODE_STRING *p_UnicodeString; // [rsp+238h] [rbp+138h]
  int v102; // [rsp+240h] [rbp+140h] BYREF
  __int64 v103; // [rsp+248h] [rbp+148h]
  int v104; // [rsp+250h] [rbp+150h] BYREF
  unsigned int *v105; // [rsp+258h] [rbp+158h]
  int v106; // [rsp+260h] [rbp+160h] BYREF
  UNICODE_STRING *v107; // [rsp+268h] [rbp+168h]
  int v108; // [rsp+270h] [rbp+170h] BYREF
  int *v109; // [rsp+278h] [rbp+178h]
  int v110; // [rsp+280h] [rbp+180h] BYREF
  int *v111; // [rsp+288h] [rbp+188h]
  int v112; // [rsp+290h] [rbp+190h] BYREF
  UNICODE_STRING *v113; // [rsp+298h] [rbp+198h]
  int v114; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v115; // [rsp+2A8h] [rbp+1A8h]
  _QWORD v116[148]; // [rsp+2C0h] [rbp+1C0h] BYREF

  SourceStringa = a3;
  v73 = a2;
  Str1 = SourceString;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v5 = 0LL;
  KeyHandle = 0LL;
  v57 = 1;
  v6 = 0LL;
  Handle = 0LL;
  ValueData = 0;
  v50 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v63.Length = 0LL;
  v63.Buffer = 0LL;
  *(_QWORD *)&v56.Length = 0LL;
  v56.Buffer = 0LL;
  v47 = 0;
  v51 = 0;
  v48 = 0;
  v46 = 0;
  v44 = 0;
  v59 = 0;
  v58 = 100;
  v49 = 0;
  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  *(_QWORD *)&GuidString.Length = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( RegistryValues >= 0 )
  {
    PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x2000uLL, 0x50777445u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      v8 = ExAllocatePoolWithTag(PagedPool, 0x504uLL, 0x50777445u);
      v6 = (__int64)v8;
      if ( v8 )
      {
        memset(v8, 0, 0x504uLL);
        v9 = (int *)(v6 + 48);
        *(_DWORD *)(v6 + 44) = 0x20000;
        *(_DWORD *)(v6 + 48) = 4;
        RtlInitUnicodeString((PUNICODE_STRING)(v6 + 144), SourceString);
        *(_DWORD *)(v6 + 72) = 0x80000000;
        *(_WORD *)(v6 + 72) = 176;
        v10 = (_WORD *)(v6 + 180);
        *(_BYTE *)(v6 + 74) = -1;
        *(_DWORD *)(v6 + 176) = 1;
        Src = (void *)(v6 + 224);
        v11 = 180;
        v12 = (_WORD *)(v6 + 1252);
        memset(v116, 0, 0x498uLL);
        v116[0] = &EtwpQueryRegistryCallback;
        v116[3] = &v76;
        v116[7] = &EtwpQueryRegistryCallback;
        v116[2] = L"Start";
        LODWORD(v116[4]) = 4;
        v77 = &v50;
        v76 = 4;
        v116[10] = &v78;
        v116[9] = L"Immutable";
        v79 = &v46;
        LODWORD(v116[11]) = 4;
        v78 = 4;
        RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v116, 0LL);
        if ( RegistryValues < 0 )
          goto LABEL_11;
        if ( SourceStringa )
        {
          Disposition = 0;
          RtlInitUnicodeString(&DestinationString, SourceStringa);
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          RegistryValues = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
          if ( RegistryValues )
          {
            RegistryValues = 0;
            Handle = 0LL;
          }
          v13 = v46;
          if ( Disposition == 1 )
            v13 = 1;
          v46 = v13;
        }
        else
        {
          v13 = v46;
        }
        if ( !v13 )
        {
          if ( Handle )
          {
            memset(&v116[7], 0, 0x38uLL);
            v116[5] = &v50;
            RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, (__int64)v116, 0LL);
            if ( RegistryValues < 0 )
              RegistryValues = 0;
          }
          v9 = (int *)(v6 + 48);
        }
        if ( !v50 )
          goto LABEL_11;
        v79 = v9;
        LODWORD(v116[4]) = 4;
        v116[0] = &EtwpQueryRegistryCallback;
        v116[3] = &v76;
        v116[2] = L"FlushThreshold";
        v76 = 4;
        v77 = (int *)(v6 + 76);
        v116[7] = &EtwpQueryRegistryCallback;
        v116[10] = &v78;
        v116[9] = L"BufferSize";
        v116[17] = &v80;
        v116[16] = L"MinimumBuffers";
        v81 = v6 + 52;
        v116[24] = &v82;
        v116[23] = L"FlushTimer";
        v83 = v6 + 68;
        v116[31] = &v84;
        v116[30] = L"MaximumBuffers";
        v85 = v6 + 56;
        v116[38] = &v86;
        v116[37] = L"FileName";
        v116[40] = &v44;
        v87 = v6 + 128;
        v71 = v6 + 184;
        v116[45] = &v88;
        v116[44] = L"EnableKernelFlags";
        v89 = &v70;
        v65 = v6 + 228;
        v116[52] = &v90;
        v116[51] = L"StackWalkingFilter";
        LODWORD(v116[11]) = 4;
        v78 = 4;
        v116[14] = &EtwpQueryRegistryCallback;
        LODWORD(v116[18]) = 4;
        v80 = 4;
        v116[21] = &EtwpQueryRegistryCallback;
        LODWORD(v116[25]) = 4;
        v82 = 4;
        v116[28] = &EtwpQueryRegistryCallback;
        LODWORD(v116[32]) = 4;
        v84 = 4;
        v116[35] = &EtwpQueryRegistryCallback;
        LODWORD(v116[39]) = 1;
        v86 = 1;
        v70 = 40;
        v116[42] = &EtwpQueryRegistryCallback;
        LODWORD(v116[46]) = 3;
        v88 = 3;
        v64 = 1024;
        v116[49] = &EtwpQueryRegistryCallback;
        LODWORD(v116[53]) = 3;
        v90 = 3;
        v116[56] = &EtwpQueryRegistryCallback;
        v91 = &v64;
        LODWORD(v116[60]) = 4;
        v116[59] = &v92;
        v16 = (unsigned int *)(v6 + 96);
        LODWORD(v116[62]) = 4;
        v116[58] = L"ClockType";
        v116[61] = &v57;
        v93 = v6 + 40;
        v116[66] = &v94;
        v116[65] = L"MaxFileSize";
        v116[68] = &v58;
        v95 = v6 + 60;
        v116[73] = &v96;
        v116[72] = L"LogFileMode";
        v116[75] = &v59;
        v116[80] = &v98;
        v116[79] = L"DisableRealtimePersistence";
        v99 = &v51;
        v116[87] = &v100;
        v116[86] = L"Guid";
        v116[89] = &v44;
        p_UnicodeString = &UnicodeString;
        v116[94] = &v102;
        v116[93] = L"FileCounter";
        v116[101] = &v104;
        v116[100] = L"FileMax";
        v105 = &v47;
        v116[108] = &v106;
        v116[107] = L"PoolTagFilter";
        v92 = 4;
        v116[63] = &EtwpQueryRegistryCallback;
        LODWORD(v116[67]) = 4;
        LODWORD(v116[69]) = 4;
        v94 = 4;
        v116[70] = &EtwpQueryRegistryCallback;
        LODWORD(v116[74]) = 4;
        LODWORD(v116[76]) = 4;
        v96 = 4;
        v97 = v6 + 64;
        v116[77] = &EtwpQueryRegistryCallback;
        LODWORD(v116[81]) = 4;
        v98 = 4;
        v116[84] = &EtwpQueryRegistryCallback;
        LODWORD(v116[88]) = 1;
        v100 = 1;
        v116[91] = &EtwpQueryRegistryCallback;
        LODWORD(v116[95]) = 4;
        v102 = 4;
        v103 = v6 + 96;
        v116[98] = &EtwpQueryRegistryCallback;
        LODWORD(v116[102]) = 4;
        v104 = 4;
        v116[105] = &EtwpQueryRegistryCallback;
        LODWORD(v116[109]) = 1;
        v106 = 1;
        v116[110] = &v44;
        v107 = &v63;
        v67 = v6 + 1276;
        v116[115] = &v108;
        v116[114] = L"StackCaching";
        v109 = &v66;
        v116[122] = &v110;
        v116[121] = L"EnableSecurityProvider";
        v111 = &v48;
        v116[129] = &v112;
        v116[128] = L"DisallowList";
        v116[131] = &v44;
        v113 = &v56;
        v116[136] = &v114;
        v116[135] = L"V2Options";
        LODWORD(v116[137]) = 11;
        v114 = 11;
        v116[112] = &EtwpQueryRegistryCallback;
        LODWORD(v116[116]) = 3;
        v108 = 3;
        v116[119] = &EtwpQueryRegistryCallback;
        LODWORD(v116[123]) = 4;
        v110 = 4;
        v116[126] = &EtwpQueryRegistryCallback;
        LODWORD(v116[130]) = 1;
        v112 = 1;
        v116[133] = &EtwpQueryRegistryCallback;
        v115 = v6 + 80;
        v66 = 8;
        LODWORD(v116[139]) = 8;
        RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v116, 0LL);
        if ( RegistryValues < 0 )
          goto LABEL_11;
        if ( Handle )
        {
          if ( v46 )
          {
            v116[5] = v6 + 96;
            v116[3] = &v102;
            v116[0] = &EtwpQueryRegistryCallback;
            v116[2] = L"FileCounter";
            LODWORD(v116[4]) = 4;
            v76 = 4;
            v77 = (int *)(v6 + 96);
            v116[7] = 0LL;
          }
          else
          {
            v116[75] = v6 + 64;
            v116[5] = v6 + 76;
            v116[12] = v6 + 48;
            v116[19] = v6 + 52;
            v116[26] = v6 + 68;
            v116[33] = v6 + 56;
            v116[40] = *(_QWORD *)(v6 + 136);
            LODWORD(v116[41]) = *(unsigned __int16 *)(v6 + 128);
            v116[47] = v71;
            LODWORD(v116[48]) = v70;
            v116[54] = v65;
            LODWORD(v116[55]) = v64;
            v116[61] = v6 + 40;
            v116[68] = v6 + 60;
            v116[82] = &v51;
            v116[89] = UnicodeString.Buffer;
            LODWORD(v116[90]) = UnicodeString.Length;
            v116[103] = &v47;
            v116[110] = v63.Buffer;
            LODWORD(v116[111]) = v63.Length;
            v116[117] = v67;
            LODWORD(v116[118]) = v66;
            v116[124] = &v48;
            v116[131] = v56.Buffer;
            LODWORD(v116[132]) = v56.Length;
            v116[96] = v6 + 96;
          }
          RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, (__int64)v116, 0LL);
          RegistryValues = 0;
        }
        v17 = 1LL;
        v18 = *(_DWORD *)(v6 + 112) | 2;
        *(_DWORD *)(v6 + 112) = v18;
        if ( !v51 )
          *(_DWORD *)(v6 + 112) = v18 | 1;
        v19 = v70 >> 2;
        if ( (unsigned __int16)(v70 >> 2) )
        {
          *(_WORD *)(v6 + 182) = 1;
          *v10 = v19 + 1;
          ++*(_WORD *)(v6 + 178);
          *(_WORD *)(v6 + 176) += *v10;
          v11 = 4 * (unsigned __int16)*v10 + 180;
        }
        if ( v64 )
        {
          v33 = Src;
          v34 = (v64 >> 2) + 1;
          if ( (v64 & 3) == 0 )
            v34 = v64 >> 2;
          *((_WORD *)Src + 1) = 3;
          *v33 = v34 + 1;
          ++*(_WORD *)(v6 + 178);
          *(_WORD *)(v6 + 176) += *v33;
          v11 += 4 * (unsigned __int16)*v33;
          if ( (_WORD)v19 )
            v10 += 2 * (unsigned __int16)*v10;
          if ( v10 != v33 )
            memmove(v10, v33, 4LL * v34 + 4);
        }
        if ( v63.Buffer )
        {
          Src = (void *)(v6 + 4 * (*(unsigned __int16 *)(v6 + 176) + 44LL));
          v20 = EtwpParsePoolTagFilter(&v63, v6 + 1256, 0LL, v17);
          if ( v20 )
          {
            *v12 = v20 + 1;
            *(_WORD *)(v6 + 1254) = 4;
            ++*(_WORD *)(v6 + 178);
            *(_WORD *)(v6 + 176) += *v12;
            v11 += 4 * (unsigned __int16)*v12;
            if ( Src != v12 )
              memmove(Src, (const void *)(v6 + 1252), 4LL * v20 + 4);
          }
        }
        else
        {
          v20 = v49;
        }
        if ( v66 == 8 )
        {
          v35 = *(unsigned __int16 *)(v6 + 176);
          *(_DWORD *)(v6 + 1272) = 327683;
          ++*(_WORD *)(v6 + 178);
          *(_WORD *)(v6 + 176) += *(_WORD *)(v6 + 1272);
          v36 = (void *)(v6 + 4 * (v35 + 44));
          v11 += 4 * *(unsigned __int16 *)(v6 + 1272);
          if ( v36 != (void *)(v6 + 1272) )
            memmove(v36, (const void *)(v6 + 1272), 0xCuLL);
        }
        if ( !(_WORD)v19 && !v64 && !v66 && !v20 )
          *(_DWORD *)(v6 + 72) = 0;
        v21 = *(_DWORD *)(v6 + 64);
        if ( ((v21 & 0x500) == 0 || (v21 & 0x200) != 0) && !*(_QWORD *)(v6 + 136) )
        {
          if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v6 + 128), L"%SystemRoot%") )
          {
            RegistryValues = -1073741801;
            goto LABEL_11;
          }
          RegistryValues = 0;
        }
        if ( v48 )
        {
          v30 = *(_DWORD *)(v6 + 64);
          if ( (v30 & 0x80u) == 0 || (v30 & 0x100) == 0 || *(_QWORD *)(v6 + 136) )
            RegistryValues = -1073741790;
          else
            *(_DWORD *)(v6 + 112) |= 0x8004000u;
        }
        if ( RegistryValues >= 0 )
        {
          if ( v47 )
          {
            v31 = *v16 + 1;
            *v16 = v31;
            if ( v31 > v47 || v31 > 0x10 )
              *v16 = 1;
            v32 = (const WCHAR *)Handle;
            if ( !Handle )
              v32 = (const WCHAR *)KeyHandle;
            RtlWriteRegistryValue(0x40000000u, v32, L"FileCounter", 4u, (PVOID)(v6 + 96), 4u);
          }
          if ( !wcscmp(Str1, L"GlobalLogger") )
            Guid = GlobalLoggerGuid;
          else
            RegistryValues = UnicodeString.Buffer ? RtlGUIDFromString(&UnicodeString, &Guid) : -1073741811;
          if ( RegistryValues >= 0 )
          {
            v22 = Guid;
            v23 = *(_QWORD *)&GuidString.Length;
            v24 = *(_QWORD *)&GuidString.Length;
            *(_DWORD *)v6 = v11;
            *(GUID *)(v6 + 24) = v22;
            started = EtwpStartLogger(v24, v6);
            v26 = *(unsigned __int16 *)(v6 + 8);
            RegistryValues = started;
            if ( started >= 0 )
            {
              if ( *(_WORD *)(v6 + 8) && v48 )
              {
                v28 = 0LL;
                v29 = (_WORD *)(v23 + 4048);
                while ( *v29 )
                {
                  v28 = (unsigned int)(v28 + 1);
                  ++v29;
                  if ( (unsigned int)v28 >= 8 )
                    goto LABEL_52;
                }
                *(_WORD *)(v23 + 2 * v28 + 4048) = v26;
              }
LABEL_52:
              if ( !v56.Length )
                goto LABEL_53;
              v37 = v56.Length / 0x4Cu;
              v38 = v56.Length % 0x4Cu;
              if ( v56.Length != 76 * v37 )
                goto LABEL_53;
              v39 = v38 + 76;
              GuidString.Buffer = v56.Buffer;
              GuidString.Length = v38 + 76;
              GuidString.MaximumLength = v38 + 76 + v56.MaximumLength - v56.Length;
              if ( v37 > 0x200 )
                goto LABEL_53;
              v40 = 0;
              if ( v37 )
              {
                v41 = PoolWithTag;
                while ( 1 )
                {
                  RegistryValues = RtlGUIDFromString(&GuidString, &v41[v40]);
                  if ( RegistryValues )
                    break;
                  GuidString.Buffer = (wchar_t *)((char *)GuidString.Buffer + v39);
                  if ( ++v40 >= v37 )
                    goto LABEL_110;
                }
                v5 = v41;
                goto LABEL_54;
              }
LABEL_110:
              if ( !RegistryValues )
              {
                CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                v5 = PoolWithTag;
                EtwpUpdateDisallowList(CurrentServerSiloGlobals[108], v26, v37, PoolWithTag);
              }
              else
              {
LABEL_53:
                v5 = PoolWithTag;
              }
LABEL_54:
              v27 = PsGetCurrentServerSiloGlobals();
              EtwpEnableKeyProviders(v27[108], v26, (_DWORD)v73, (_DWORD)SourceStringa, v46);
              goto LABEL_12;
            }
          }
        }
LABEL_11:
        v5 = PoolWithTag;
        goto LABEL_12;
      }
    }
    RegistryValues = -1073741801;
  }
LABEL_12:
  v14 = (const WCHAR *)KeyHandle;
  if ( KeyHandle )
  {
    if ( RegistryValues < 0 )
    {
      v43 = RtlNtStatusToDosError(RegistryValues);
      v14 = (const WCHAR *)KeyHandle;
      ValueData = v43;
    }
    if ( Handle )
      v14 = (const WCHAR *)Handle;
    RtlWriteRegistryValue(0x40000000u, v14, L"Status", 4u, &ValueData, 4u);
    ZwClose(KeyHandle);
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v6 )
  {
    RtlFreeAnsiString((PUNICODE_STRING)(v6 + 128));
    ExFreePoolWithTag((PVOID)v6, 0);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v63);
  RtlFreeAnsiString(&v56);
  return (unsigned int)RegistryValues;
}
