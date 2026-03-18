/*
 * XREFs of EtwTraceInputProcessDelay @ 0x1C0034AE0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00322E8 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ValidateHwnd @ 0x1C0026610 (ValidateHwnd.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C002E914 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     TraceLoggingProviderEnabled @ 0x1C0031E30 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C0089A5C (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     _TlgCreateWsz @ 0x1C0096B24 (_TlgCreateWsz.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C0099CC0 (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     McTemplateK0qqqzzzzqx @ 0x1C00B0820 (McTemplateK0qqqzzzzqx.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     McTemplateK0qqqzzzqx @ 0x1C010EC58 (McTemplateK0qqqzzzqx.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EtwTraceInputProcessDelay(struct tagTHREADINFO *a1)
{
  char v2; // al
  unsigned int ThreadInfoFlags; // eax
  unsigned int v4; // r15d
  const WCHAR *Buffer; // rdi
  const WCHAR *v6; // rsi
  struct tagWND *v7; // rax
  struct tagWND *v8; // r12
  struct tagWND *v9; // rax
  const WCHAR *v10; // r12
  PEPROCESS ThreadProcess; // rax
  unsigned int *v12; // rdx
  __int64 v13; // rcx
  ULONG64 v14; // r8
  ULONG64 v15; // rdx
  _BYTE **v16; // rax
  __int64 v17; // rcx
  PACCESS_TOKEN v18; // r13
  int v19; // eax
  int v20; // r8d
  const WCHAR *v21; // rdx
  const WCHAR *v22; // rcx
  int v23; // r11d
  const WCHAR *v24; // rdx
  const WCHAR *v25; // rdx
  int v26; // r11d
  int v27; // r10d
  int v28; // r10d
  unsigned int v29; // [rsp+60h] [rbp-3F8h] BYREF
  unsigned int v30; // [rsp+64h] [rbp-3F4h] BYREF
  int v31; // [rsp+68h] [rbp-3F0h] BYREF
  unsigned int v32; // [rsp+6Ch] [rbp-3ECh]
  __int64 v33; // [rsp+70h] [rbp-3E8h] BYREF
  int v34; // [rsp+78h] [rbp-3E0h]
  unsigned int v35; // [rsp+7Ch] [rbp-3DCh] BYREF
  unsigned int v36; // [rsp+80h] [rbp-3D8h] BYREF
  unsigned int v37; // [rsp+84h] [rbp-3D4h] BYREF
  int v38; // [rsp+88h] [rbp-3D0h] BYREF
  int v39; // [rsp+8Ch] [rbp-3CCh] BYREF
  unsigned int v40; // [rsp+90h] [rbp-3C8h] BYREF
  unsigned int v41; // [rsp+94h] [rbp-3C4h] BYREF
  unsigned int v42; // [rsp+98h] [rbp-3C0h] BYREF
  int v43; // [rsp+9Ch] [rbp-3BCh] BYREF
  const WCHAR *v44; // [rsp+A0h] [rbp-3B8h]
  const WCHAR *v45; // [rsp+A8h] [rbp-3B0h]
  __int64 v46; // [rsp+B0h] [rbp-3A8h] BYREF
  const WCHAR *v47; // [rsp+B8h] [rbp-3A0h]
  struct _UNICODE_STRING UnicodeString; // [rsp+C0h] [rbp-398h] BYREF
  struct _UNICODE_STRING v49; // [rsp+D0h] [rbp-388h] BYREF
  __int64 *v50; // [rsp+E0h] [rbp-378h]
  struct tagTHREADINFO *v51; // [rsp+F0h] [rbp-368h]
  __int64 v52; // [rsp+F8h] [rbp-360h] BYREF
  __int64 v53; // [rsp+100h] [rbp-358h] BYREF
  EVENT_DATA_DESCRIPTOR v54; // [rsp+110h] [rbp-348h] BYREF
  unsigned int *v55; // [rsp+130h] [rbp-328h]
  int v56; // [rsp+138h] [rbp-320h]
  int v57; // [rsp+13Ch] [rbp-31Ch]
  unsigned int *v58; // [rsp+140h] [rbp-318h]
  int v59; // [rsp+148h] [rbp-310h]
  int v60; // [rsp+14Ch] [rbp-30Ch]
  unsigned int *v61; // [rsp+150h] [rbp-308h]
  int v62; // [rsp+158h] [rbp-300h]
  int v63; // [rsp+15Ch] [rbp-2FCh]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+160h] [rbp-2F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+170h] [rbp-2E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+180h] [rbp-2D8h] BYREF
  int *v67; // [rsp+190h] [rbp-2C8h]
  int v68; // [rsp+198h] [rbp-2C0h]
  int v69; // [rsp+19Ch] [rbp-2BCh]
  __int64 *v70; // [rsp+1A0h] [rbp-2B8h]
  int v71; // [rsp+1A8h] [rbp-2B0h]
  int v72; // [rsp+1ACh] [rbp-2ACh]
  int *v73; // [rsp+1B0h] [rbp-2A8h]
  int v74; // [rsp+1B8h] [rbp-2A0h]
  int v75; // [rsp+1BCh] [rbp-29Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C0h] [rbp-298h] BYREF
  unsigned int *v77; // [rsp+1E0h] [rbp-278h]
  int v78; // [rsp+1E8h] [rbp-270h]
  int v79; // [rsp+1ECh] [rbp-26Ch]
  unsigned int *v80; // [rsp+1F0h] [rbp-268h]
  int v81; // [rsp+1F8h] [rbp-260h]
  int v82; // [rsp+1FCh] [rbp-25Ch]
  unsigned int *v83; // [rsp+200h] [rbp-258h]
  int v84; // [rsp+208h] [rbp-250h]
  int v85; // [rsp+20Ch] [rbp-24Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+210h] [rbp-248h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v87; // [rsp+220h] [rbp-238h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v88; // [rsp+230h] [rbp-228h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v89; // [rsp+240h] [rbp-218h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v90; // [rsp+250h] [rbp-208h] BYREF
  int *v91; // [rsp+260h] [rbp-1F8h]
  int v92; // [rsp+268h] [rbp-1F0h]
  int v93; // [rsp+26Ch] [rbp-1ECh]
  __int64 *v94; // [rsp+270h] [rbp-1E8h]
  int v95; // [rsp+278h] [rbp-1E0h]
  int v96; // [rsp+27Ch] [rbp-1DCh]
  int *v97; // [rsp+280h] [rbp-1D8h]
  int v98; // [rsp+288h] [rbp-1D0h]
  int v99; // [rsp+28Ch] [rbp-1CCh]
  int *v100; // [rsp+290h] [rbp-1C8h]
  int v101; // [rsp+298h] [rbp-1C0h]
  int v102; // [rsp+29Ch] [rbp-1BCh]
  _BYTE v103[144]; // [rsp+2A0h] [rbp-1B8h] BYREF
  _BYTE v104[256]; // [rsp+330h] [rbp-128h] BYREF

  v51 = a1;
  if ( (W32kEtwEnabledKeyword & 0x8001000000040000uLL) == 0
    || ((unsigned __int8)(byte_1C020C438 - 1) <= 2u
     || (qword_1C020C420 & 0x8001000000040000uLL) == 0
     || (qword_1C020C428 & 0x8001000000040000uLL) != qword_1C020C428
      ? (v2 = 0)
      : (v2 = 1),
        !v2) )
  {
    if ( !TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 5u, 0x400000000000uLL)
      && !TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 5u, 0x40000uLL) )
    {
      return;
    }
  }
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v49.Length = 0LL;
  v49.Buffer = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  EtwpGetLastInputProcessTime(
    *((struct tagQ *const *)a1 + 53),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    &v29,
    &v30);
  if ( v29 < W32kEtwInputProcessDelayTimeoutMs )
    return;
  if ( v30 < W32kEtwInputProcessDelayTimeoutMs )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags(a1);
  v4 = ThreadInfoFlags;
  v32 = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 8) == 0 && (ThreadInfoFlags & 0x20) == 0 )
    return;
  Buffer = 0LL;
  v45 = 0LL;
  v6 = 0LL;
  v44 = 0LL;
  v7 = (struct tagWND *)ValidateHwnd(*((_QWORD *)a1 + 147));
  v8 = v7;
  if ( !v7 )
    goto LABEL_27;
  if ( EtwpGetClassName(v7, &UnicodeString) >= 0 )
    Buffer = UnicodeString.Buffer;
  v45 = Buffer;
  v9 = (int)Is_GetTopLevelWindowSupported() < 0 ? 0LL : (struct tagWND *)_GetTopLevelWindow(v8);
  if ( !v9 )
    goto LABEL_27;
  if ( v8 == v9 )
  {
    v6 = Buffer;
    goto LABEL_26;
  }
  if ( EtwpGetClassName(v9, &v49) >= 0 )
  {
    v6 = v49.Buffer;
LABEL_26:
    v44 = v6;
  }
LABEL_27:
  v31 = *((_DWORD *)a1 + 296);
  v33 = *((_QWORD *)a1 + 149);
  v10 = 0LL;
  ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
  v12 = (unsigned int *)(*(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL);
  if ( (unsigned __int64)v12 >= MmUserProbeAddress )
    v12 = (unsigned int *)MmUserProbeAddress;
  v13 = *v12;
  v34 = v13;
  LODWORD(v46) = v13;
  v14 = *((_QWORD *)v12 + 1);
  v47 = (const WCHAR *)v14;
  if ( (v14 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = v14 + (unsigned __int16)v13 + 2LL;
  v16 = (_BYTE **)MmUserProbeAddress;
  if ( v15 >= MmUserProbeAddress || (unsigned __int16)v13 > HIWORD(v34) )
    goto LABEL_35;
  if ( (v13 & 1) != 0 )
    goto LABEL_36;
  if ( v15 <= v14 )
  {
LABEL_35:
    if ( (v13 & 1) == 0 )
    {
LABEL_37:
      **v16 = 0;
      goto LABEL_38;
    }
LABEL_36:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v15, v14);
    v16 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_37;
  }
LABEL_38:
  v50 = &v46;
  if ( &v46 )
    v10 = v47;
  v17 = *((_QWORD *)a1 + 52);
  if ( (*(_DWORD *)(v17 + 812) & 0x30) == 0x10 )
  {
    v18 = PsReferencePrimaryToken(*(PEPROCESS *)v17);
    v53 = 256LL;
    v52 = 130LL;
    v19 = RtlQueryPackageIdentity(v18, v104, &v53, v103, &v52, 0LL);
    v32 = v19;
    if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 1) != 0 )
    {
      v21 = (const WCHAR *)v103;
      if ( v19 < 0 )
        v21 = &pwsz;
      v22 = (const WCHAR *)v104;
      if ( v19 < 0 )
        v22 = &pwsz;
      McTemplateK0qqqzzzzqx(
        (_DWORD)v22,
        (_DWORD)v21,
        v20,
        v4,
        v29,
        v30,
        (__int64)Buffer,
        (__int64)v6,
        (__int64)v22,
        (__int64)v21,
        v31,
        v33);
    }
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000040000uLL) )
    {
      v35 = v4;
      v77 = &v35;
      v78 = 4;
      v79 = 0;
      v36 = v29;
      v80 = &v36;
      v81 = 4;
      v82 = 0;
      v37 = v30;
      v83 = &v37;
      v84 = 4;
      v85 = 0;
      v24 = (const WCHAR *)v104;
      if ( v23 < 0 )
        v24 = &pwsz;
      TlgCreateWsz(&pDesc, v24);
      v25 = (const WCHAR *)v103;
      if ( v26 < 0 )
        v25 = &pwsz;
      TlgCreateWsz(&v87, v25);
      TlgCreateWsz(&v88, v10);
      TlgCreateWsz(&v89, Buffer);
      TlgCreateWsz(&v90, v6);
      v91 = &v31;
      v92 = v27;
      v93 = 0;
      v94 = &v33;
      v95 = 8;
      v96 = 0;
      v38 = 1;
      v97 = &v38;
      v98 = v27;
      v99 = 0;
      v39 = 2;
      v100 = &v39;
      v101 = v27;
      v102 = 0;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E1AC7, 0LL, 0LL, 0xEu, &pData);
    }
    PsDereferencePrimaryToken(v18);
  }
  else
  {
    if ( (BYTE1(Microsoft_Windows_Win32kEnableBits) & 1) != 0 )
      McTemplateK0qqqzzzqx(v17, v15, v14, v4, v29, v30, (__int64)Buffer, (__int64)v6, (__int64)v10, v31, v33);
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000040000uLL) )
    {
      v40 = v4;
      v55 = &v40;
      v56 = 4;
      v57 = 0;
      v41 = v29;
      v58 = &v41;
      v59 = 4;
      v60 = 0;
      v42 = v30;
      v61 = &v42;
      v62 = 4;
      v63 = 0;
      TlgCreateWsz(&v64, v10);
      TlgCreateWsz(&v65, Buffer);
      TlgCreateWsz(&v66, v6);
      v67 = &v31;
      v68 = v28;
      v69 = 0;
      v70 = &v33;
      v71 = 8;
      v72 = 0;
      v43 = 1;
      v73 = &v43;
      v74 = v28;
      v75 = 0;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E1A0D, 0LL, 0LL, 0xBu, &v54);
    }
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v6 )
  {
    if ( Buffer != v6 )
      RtlFreeUnicodeString(&v49);
  }
}
