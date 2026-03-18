/*
 * XREFs of EtwTraceMessageCheckDelay @ 0x1C0035E30
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0033038 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ValidateHwnd @ 0x1C00260F0 (ValidateHwnd.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C002F724 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     TraceLoggingProviderEnabled @ 0x1C0032B80 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     McTemplateK0qqqqzzzqx @ 0x1C006C4B0 (McTemplateK0qqqqzzzqx.c)
 *     McTemplateK0qqqqzzzzqx @ 0x1C006C638 (McTemplateK0qqqqzzzzqx.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C008DF0C (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     _TlgCreateWsz @ 0x1C00983C4 (_TlgCreateWsz.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C009B100 (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EtwTraceMessageCheckDelay(PETHREAD *a1)
{
  char v2; // al
  unsigned __int64 v3; // r13
  int v4; // eax
  unsigned int v5; // r12d
  unsigned int ThreadInfoFlags; // eax
  unsigned int v7; // r15d
  const WCHAR *Buffer; // rdi
  const WCHAR *v9; // rsi
  struct tagWND *v10; // rax
  struct tagWND *v11; // rax
  const WCHAR *v12; // r13
  PEPROCESS ThreadProcess; // rax
  unsigned int *v14; // rdx
  __int64 v15; // rcx
  ULONG64 v16; // r8
  ULONG64 v17; // rdx
  _BYTE **v18; // rax
  PETHREAD v19; // rcx
  int v20; // eax
  int v21; // r8d
  const WCHAR *v22; // rdx
  const WCHAR *v23; // rcx
  int v24; // r11d
  const WCHAR *v25; // rdx
  const WCHAR *v26; // rdx
  int v27; // r11d
  int v28; // r10d
  int v29; // r10d
  unsigned int v30; // [rsp+70h] [rbp-428h] BYREF
  unsigned int v31; // [rsp+74h] [rbp-424h] BYREF
  int v32; // [rsp+78h] [rbp-420h] BYREF
  unsigned int v33; // [rsp+7Ch] [rbp-41Ch]
  struct tagWND *v34; // [rsp+80h] [rbp-418h]
  PETHREAD v35; // [rsp+88h] [rbp-410h] BYREF
  unsigned int v36; // [rsp+90h] [rbp-408h] BYREF
  unsigned int v37; // [rsp+94h] [rbp-404h] BYREF
  unsigned int v38; // [rsp+98h] [rbp-400h] BYREF
  unsigned int v39; // [rsp+9Ch] [rbp-3FCh] BYREF
  int v40; // [rsp+A0h] [rbp-3F8h] BYREF
  int v41; // [rsp+A4h] [rbp-3F4h] BYREF
  unsigned int v42; // [rsp+A8h] [rbp-3F0h] BYREF
  unsigned int v43; // [rsp+ACh] [rbp-3ECh] BYREF
  unsigned int v44; // [rsp+B0h] [rbp-3E8h] BYREF
  unsigned int v45; // [rsp+B4h] [rbp-3E4h] BYREF
  _DWORD v46[2]; // [rsp+B8h] [rbp-3E0h] BYREF
  const WCHAR *v47; // [rsp+C0h] [rbp-3D8h]
  PACCESS_TOKEN PrimaryToken; // [rsp+C8h] [rbp-3D0h]
  const WCHAR *v49; // [rsp+D0h] [rbp-3C8h]
  __int64 v50; // [rsp+D8h] [rbp-3C0h] BYREF
  const WCHAR *v51; // [rsp+E0h] [rbp-3B8h]
  struct _UNICODE_STRING UnicodeString; // [rsp+E8h] [rbp-3B0h] BYREF
  struct _UNICODE_STRING v53; // [rsp+F8h] [rbp-3A0h] BYREF
  __int64 *v54; // [rsp+108h] [rbp-390h]
  __int64 v55; // [rsp+118h] [rbp-380h] BYREF
  __int64 v56; // [rsp+120h] [rbp-378h] BYREF
  EVENT_DATA_DESCRIPTOR v57; // [rsp+130h] [rbp-368h] BYREF
  unsigned int *v58; // [rsp+150h] [rbp-348h]
  int v59; // [rsp+158h] [rbp-340h]
  int v60; // [rsp+15Ch] [rbp-33Ch]
  unsigned int *v61; // [rsp+160h] [rbp-338h]
  int v62; // [rsp+168h] [rbp-330h]
  int v63; // [rsp+16Ch] [rbp-32Ch]
  unsigned int *v64; // [rsp+170h] [rbp-328h]
  int v65; // [rsp+178h] [rbp-320h]
  int v66; // [rsp+17Ch] [rbp-31Ch]
  unsigned int *v67; // [rsp+180h] [rbp-318h]
  int v68; // [rsp+188h] [rbp-310h]
  int v69; // [rsp+18Ch] [rbp-30Ch]
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+190h] [rbp-308h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+1A0h] [rbp-2F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v72; // [rsp+1B0h] [rbp-2E8h] BYREF
  int *v73; // [rsp+1C0h] [rbp-2D8h]
  int v74; // [rsp+1C8h] [rbp-2D0h]
  int v75; // [rsp+1CCh] [rbp-2CCh]
  PETHREAD *v76; // [rsp+1D0h] [rbp-2C8h]
  int v77; // [rsp+1D8h] [rbp-2C0h]
  int v78; // [rsp+1DCh] [rbp-2BCh]
  _DWORD *v79; // [rsp+1E0h] [rbp-2B8h]
  int v80; // [rsp+1E8h] [rbp-2B0h]
  int v81; // [rsp+1ECh] [rbp-2ACh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1F0h] [rbp-2A8h] BYREF
  unsigned int *v83; // [rsp+210h] [rbp-288h]
  int v84; // [rsp+218h] [rbp-280h]
  int v85; // [rsp+21Ch] [rbp-27Ch]
  unsigned int *v86; // [rsp+220h] [rbp-278h]
  int v87; // [rsp+228h] [rbp-270h]
  int v88; // [rsp+22Ch] [rbp-26Ch]
  unsigned int *v89; // [rsp+230h] [rbp-268h]
  int v90; // [rsp+238h] [rbp-260h]
  int v91; // [rsp+23Ch] [rbp-25Ch]
  unsigned int *v92; // [rsp+240h] [rbp-258h]
  int v93; // [rsp+248h] [rbp-250h]
  int v94; // [rsp+24Ch] [rbp-24Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+250h] [rbp-248h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v96; // [rsp+260h] [rbp-238h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v97; // [rsp+270h] [rbp-228h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v98; // [rsp+280h] [rbp-218h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v99; // [rsp+290h] [rbp-208h] BYREF
  int *v100; // [rsp+2A0h] [rbp-1F8h]
  int v101; // [rsp+2A8h] [rbp-1F0h]
  int v102; // [rsp+2ACh] [rbp-1ECh]
  PETHREAD *v103; // [rsp+2B0h] [rbp-1E8h]
  int v104; // [rsp+2B8h] [rbp-1E0h]
  int v105; // [rsp+2BCh] [rbp-1DCh]
  int *v106; // [rsp+2C0h] [rbp-1D8h]
  int v107; // [rsp+2C8h] [rbp-1D0h]
  int v108; // [rsp+2CCh] [rbp-1CCh]
  int *v109; // [rsp+2D0h] [rbp-1C8h]
  int v110; // [rsp+2D8h] [rbp-1C0h]
  int v111; // [rsp+2DCh] [rbp-1BCh]
  _BYTE v112[144]; // [rsp+2E0h] [rbp-1B8h] BYREF
  _BYTE v113[256]; // [rsp+370h] [rbp-128h] BYREF

  PrimaryToken = a1;
  if ( (W32kEtwEnabledKeyword & 0x8001000000040000uLL) == 0
    || ((unsigned __int8)(byte_1C020F438 - 1) <= 2u
     || (qword_1C020F420 & 0x8001000000040000uLL) == 0
     || (qword_1C020F428 & 0x8001000000040000uLL) != qword_1C020F428
      ? (v2 = 0)
      : (v2 = 1),
        !v2) )
  {
    if ( !TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 5u, 0x40000uLL) )
      return;
  }
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v53.Length = 0LL;
  v53.Buffer = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = *((_DWORD *)a1 + 292);
  if ( !v4 )
    return;
  v5 = v3 - v4;
  v46[1] = v3 - v4;
  if ( (int)v3 - v4 < W32kEtwMessageCheckDelayTimeoutMs )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)a1);
  v7 = ThreadInfoFlags;
  v33 = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 8) == 0 && (ThreadInfoFlags & 0x20) == 0 )
    return;
  if ( (ThreadInfoFlags & 0x200) != 0 && v5 < gdwHungAppTimeout )
    return;
  Buffer = 0LL;
  v49 = 0LL;
  v9 = 0LL;
  v47 = 0LL;
  v10 = (struct tagWND *)ValidateHwnd((__int64)a1[147]);
  v34 = v10;
  if ( !v10 )
    goto LABEL_28;
  if ( EtwpGetClassName(v10, &UnicodeString) >= 0 )
    Buffer = UnicodeString.Buffer;
  v49 = Buffer;
  v11 = (int)Is_GetTopLevelWindowSupported() < 0 ? 0LL : (struct tagWND *)_GetTopLevelWindow(v34);
  if ( !v11 )
    goto LABEL_28;
  if ( v34 == v11 )
  {
    v9 = Buffer;
    goto LABEL_27;
  }
  if ( EtwpGetClassName(v11, &v53) >= 0 )
  {
    v9 = v53.Buffer;
LABEL_27:
    v47 = v9;
  }
LABEL_28:
  EtwpGetLastInputProcessTime(a1[53], v3, &v30, &v31);
  v32 = *((_DWORD *)a1 + 296);
  v35 = a1[149];
  v12 = 0LL;
  ThreadProcess = PsGetThreadProcess(*a1);
  v14 = (unsigned int *)(*(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL);
  if ( (unsigned __int64)v14 >= MmUserProbeAddress )
    v14 = (unsigned int *)MmUserProbeAddress;
  v15 = *v14;
  LODWORD(v34) = v15;
  LODWORD(v50) = v15;
  v16 = *((_QWORD *)v14 + 1);
  v51 = (const WCHAR *)v16;
  if ( (v16 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v17 = v16 + (unsigned __int16)v15 + 2LL;
  v18 = (_BYTE **)MmUserProbeAddress;
  if ( v17 >= MmUserProbeAddress || (unsigned __int16)v15 > WORD1(v34) )
    goto LABEL_36;
  if ( (v15 & 1) != 0 )
    goto LABEL_37;
  if ( v17 <= v16 )
  {
LABEL_36:
    if ( (v15 & 1) == 0 )
    {
LABEL_38:
      **v18 = 0;
      goto LABEL_39;
    }
LABEL_37:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v17, v16);
    v18 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_38;
  }
LABEL_39:
  v54 = &v50;
  if ( &v50 )
    v12 = v51;
  v19 = a1[52];
  if ( (*((_DWORD *)v19 + 203) & 0x30) == 0x10 )
  {
    PrimaryToken = PsReferencePrimaryToken(*(PEPROCESS *)v19);
    v56 = 256LL;
    v55 = 130LL;
    v20 = RtlQueryPackageIdentity(PrimaryToken, v113, &v56, v112, &v55, 0LL);
    v33 = v20;
    if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 1) != 0 )
    {
      v22 = (const WCHAR *)v112;
      if ( v20 < 0 )
        v22 = &pwsz;
      v23 = (const WCHAR *)v113;
      if ( v20 < 0 )
        v23 = &pwsz;
      McTemplateK0qqqqzzzzqx(
        (_DWORD)v23,
        (_DWORD)v22,
        v21,
        v7,
        v5,
        v30,
        v31,
        (__int64)Buffer,
        (__int64)v9,
        (__int64)v23,
        (__int64)v22,
        v32,
        (char)v35);
    }
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x40000uLL) )
    {
      v36 = v7;
      v83 = &v36;
      v84 = 4;
      v85 = 0;
      v37 = v5;
      v86 = &v37;
      v87 = 4;
      v88 = 0;
      v38 = v30;
      v89 = &v38;
      v90 = 4;
      v91 = 0;
      v39 = v31;
      v92 = &v39;
      v93 = 4;
      v94 = 0;
      v25 = (const WCHAR *)v113;
      if ( v24 < 0 )
        v25 = &pwsz;
      TlgCreateWsz(&pDesc, v25);
      v26 = (const WCHAR *)v112;
      if ( v27 < 0 )
        v26 = &pwsz;
      TlgCreateWsz(&v96, v26);
      TlgCreateWsz(&v97, v12);
      TlgCreateWsz(&v98, Buffer);
      TlgCreateWsz(&v99, v9);
      v100 = &v32;
      v101 = v28;
      v102 = 0;
      v103 = &v35;
      v104 = 8;
      v105 = 0;
      v40 = 1;
      v106 = &v40;
      v107 = v28;
      v108 = 0;
      v41 = 2;
      v109 = &v41;
      v110 = v28;
      v111 = 0;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E3C32, 0LL, 0LL, 0xFu, &pData);
    }
    PsDereferencePrimaryToken(PrimaryToken);
  }
  else
  {
    if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 1) != 0 )
      McTemplateK0qqqqzzzqx(
        (_DWORD)v19,
        v17,
        v16,
        v7,
        v5,
        v30,
        v31,
        (__int64)Buffer,
        (__int64)v9,
        (__int64)v12,
        v32,
        (char)v35);
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x40000uLL) )
    {
      v42 = v7;
      v58 = &v42;
      v59 = 4;
      v60 = 0;
      v43 = v5;
      v61 = &v43;
      v62 = 4;
      v63 = 0;
      v44 = v30;
      v64 = &v44;
      v65 = 4;
      v66 = 0;
      v45 = v31;
      v67 = &v45;
      v68 = 4;
      v69 = 0;
      TlgCreateWsz(&v70, v12);
      TlgCreateWsz(&v71, Buffer);
      TlgCreateWsz(&v72, v9);
      v73 = &v32;
      v74 = v29;
      v75 = 0;
      v76 = &v35;
      v77 = 8;
      v78 = 0;
      v46[0] = 1;
      v79 = v46;
      v80 = v29;
      v81 = 0;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E3B6B, 0LL, 0LL, 0xCu, &v57);
    }
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v9 )
  {
    if ( Buffer != v9 )
      RtlFreeUnicodeString(&v53);
  }
}
