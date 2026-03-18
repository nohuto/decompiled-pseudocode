/*
 * XREFs of EtwTraceInputProcessDelay @ 0x1C00706D0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ValidateHwnd @ 0x1C0022EB0 (ValidateHwnd.c)
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C004E080 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C00AB258 (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00AB2C0 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00AB2F4 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     McTemplateK0qqqzzzqx @ 0x1C00AF888 (McTemplateK0qqqzzzqx.c)
 *     McTemplateK0qqqzzzzqx @ 0x1C00AF9E4 (McTemplateK0qqqzzzzqx.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EtwTraceInputProcessDelay(struct tagTHREADINFO *a1)
{
  unsigned int v3; // r13d
  unsigned int ThreadInfoFlags; // r14d
  PWSTR Buffer; // rdi
  const WCHAR *v6; // rsi
  struct tagWND *v7; // rax
  struct tagWND *v8; // r12
  struct tagWND *v9; // rax
  const WCHAR *v10; // r12
  __int64 v11; // rcx
  int v12; // eax
  int v13; // r8d
  int v14; // r12d
  const WCHAR *v15; // rdx
  const WCHAR *v16; // rcx
  const WCHAR *v17; // rdx
  const WCHAR *v18; // rdx
  int v19; // r10d
  LPCGUID v20; // r9
  PEPROCESS ThreadProcess; // rax
  unsigned int *v22; // rdx
  __int64 v23; // rcx
  ULONG64 v24; // r8
  ULONG64 v25; // rdx
  _BYTE **v26; // rax
  int v27; // r10d
  LPCGUID v28; // r9
  unsigned int v29; // [rsp+60h] [rbp-3D8h] BYREF
  int v30; // [rsp+64h] [rbp-3D4h] BYREF
  unsigned int v31; // [rsp+68h] [rbp-3D0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-3C8h] BYREF
  PACCESS_TOKEN PrimaryToken; // [rsp+78h] [rbp-3C0h]
  unsigned int v34; // [rsp+80h] [rbp-3B8h] BYREF
  unsigned int v35; // [rsp+84h] [rbp-3B4h] BYREF
  unsigned int v36; // [rsp+88h] [rbp-3B0h] BYREF
  int v37; // [rsp+8Ch] [rbp-3ACh] BYREF
  int v38; // [rsp+90h] [rbp-3A8h]
  unsigned int v39; // [rsp+94h] [rbp-3A4h]
  unsigned int v40; // [rsp+98h] [rbp-3A0h] BYREF
  unsigned int v41; // [rsp+9Ch] [rbp-39Ch] BYREF
  unsigned int v42; // [rsp+A0h] [rbp-398h] BYREF
  int v43; // [rsp+A4h] [rbp-394h] BYREF
  const WCHAR *v44; // [rsp+A8h] [rbp-390h]
  __int64 v45; // [rsp+B0h] [rbp-388h] BYREF
  _QWORD v46[3]; // [rsp+B8h] [rbp-380h] BYREF
  int v47; // [rsp+D0h] [rbp-368h] BYREF
  const WCHAR *v48; // [rsp+D8h] [rbp-360h]
  struct _UNICODE_STRING UnicodeString; // [rsp+E0h] [rbp-358h] BYREF
  struct _UNICODE_STRING v50; // [rsp+F0h] [rbp-348h] BYREF
  EVENT_DATA_DESCRIPTOR v51; // [rsp+110h] [rbp-328h] BYREF
  unsigned int *v52; // [rsp+130h] [rbp-308h]
  int v53; // [rsp+138h] [rbp-300h]
  int v54; // [rsp+13Ch] [rbp-2FCh]
  unsigned int *v55; // [rsp+140h] [rbp-2F8h]
  int v56; // [rsp+148h] [rbp-2F0h]
  int v57; // [rsp+14Ch] [rbp-2ECh]
  unsigned int *v58; // [rsp+150h] [rbp-2E8h]
  int v59; // [rsp+158h] [rbp-2E0h]
  int v60; // [rsp+15Ch] [rbp-2DCh]
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+160h] [rbp-2D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+170h] [rbp-2C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+180h] [rbp-2B8h] BYREF
  int *v64; // [rsp+190h] [rbp-2A8h]
  int v65; // [rsp+198h] [rbp-2A0h]
  int v66; // [rsp+19Ch] [rbp-29Ch]
  __int64 *v67; // [rsp+1A0h] [rbp-298h]
  int v68; // [rsp+1A8h] [rbp-290h]
  int v69; // [rsp+1ACh] [rbp-28Ch]
  int *v70; // [rsp+1B0h] [rbp-288h]
  int v71; // [rsp+1B8h] [rbp-280h]
  int v72; // [rsp+1BCh] [rbp-27Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C0h] [rbp-278h] BYREF
  unsigned int *v74; // [rsp+1E0h] [rbp-258h]
  int v75; // [rsp+1E8h] [rbp-250h]
  int v76; // [rsp+1ECh] [rbp-24Ch]
  unsigned int *v77; // [rsp+1F0h] [rbp-248h]
  int v78; // [rsp+1F8h] [rbp-240h]
  int v79; // [rsp+1FCh] [rbp-23Ch]
  unsigned int *v80; // [rsp+200h] [rbp-238h]
  int v81; // [rsp+208h] [rbp-230h]
  int v82; // [rsp+20Ch] [rbp-22Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+210h] [rbp-228h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+220h] [rbp-218h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v85; // [rsp+230h] [rbp-208h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+240h] [rbp-1F8h] BYREF
  int *v87; // [rsp+250h] [rbp-1E8h]
  int v88; // [rsp+258h] [rbp-1E0h]
  int v89; // [rsp+25Ch] [rbp-1DCh]
  __int64 *v90; // [rsp+260h] [rbp-1D8h]
  int v91; // [rsp+268h] [rbp-1D0h]
  int v92; // [rsp+26Ch] [rbp-1CCh]
  int *v93; // [rsp+270h] [rbp-1C8h]
  int v94; // [rsp+278h] [rbp-1C0h]
  int v95; // [rsp+27Ch] [rbp-1BCh]
  _BYTE v96[144]; // [rsp+280h] [rbp-1B8h] BYREF
  _BYTE v97[256]; // [rsp+310h] [rbp-128h] BYREF

  if ( (W32kEtwEnabledKeyword & 0x8001000000040000uLL) == 0 )
    return;
  if ( (unsigned __int8)(byte_1C019A1D8 - 1) <= 2u
    || (qword_1C019A1C0 & 0x8001000000040000uLL) == 0
    || (qword_1C019A1C8 & 0x8001000000040000uLL) != qword_1C019A1C8 )
  {
    return;
  }
  EtwpGetLastInputProcessTime(
    *((struct tagQ *const *)a1 + 53),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    &v29,
    &v31);
  if ( v29 < W32kEtwInputProcessDelayTimeoutMs )
    return;
  v3 = v31;
  if ( v31 < W32kEtwInputProcessDelayTimeoutMs )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags(a1);
  v39 = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 8) == 0 && (ThreadInfoFlags & 0x20) == 0 )
    return;
  Buffer = 0LL;
  PrimaryToken = 0LL;
  v6 = 0LL;
  v44 = 0LL;
  v7 = (struct tagWND *)ValidateHwnd(*((void **)a1 + 144));
  v8 = v7;
  if ( v7 )
  {
    if ( EtwpGetClassName(v7, &UnicodeString) >= 0 )
      Buffer = UnicodeString.Buffer;
    PrimaryToken = Buffer;
    v9 = (int)Is_GetTopLevelWindowSupported() < 0 ? 0LL : (struct tagWND *)_GetTopLevelWindow(v8);
    if ( v9 )
    {
      if ( v8 == v9 )
      {
        v6 = Buffer;
      }
      else
      {
        if ( EtwpGetClassName(v9, &v50) < 0 )
          goto LABEL_25;
        v6 = v50.Buffer;
      }
      v44 = v6;
    }
  }
LABEL_25:
  v30 = *((_DWORD *)a1 + 290);
  v32 = *((_QWORD *)a1 + 146);
  v10 = 0LL;
  v11 = *((_QWORD *)a1 + 52);
  if ( (*(_DWORD *)(v11 + 812) & 0x30) != 0x10 )
  {
    ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
    v22 = (unsigned int *)(*(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL);
    if ( (unsigned __int64)v22 >= MmUserProbeAddress )
      v22 = (unsigned int *)MmUserProbeAddress;
    v23 = *v22;
    v38 = v23;
    v47 = v23;
    v24 = *((_QWORD *)v22 + 1);
    v48 = (const WCHAR *)v24;
    if ( (v24 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v25 = v24 + (unsigned __int16)v23 + 2LL;
    v26 = (_BYTE **)MmUserProbeAddress;
    if ( v25 < MmUserProbeAddress && (unsigned __int16)v23 <= HIWORD(v38) )
    {
      if ( (v23 & 1) != 0 )
        goto LABEL_49;
      if ( v25 > v24 )
      {
LABEL_51:
        v46[1] = &v47;
        if ( &v47 )
          v10 = v48;
        if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
          McTemplateK0qqqzzzqx(
            v23,
            v25,
            v24,
            ThreadInfoFlags,
            v29,
            v31,
            (__int64)Buffer,
            (__int64)v6,
            (__int64)v10,
            v30,
            v32);
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000040000uLL) )
        {
          v40 = ThreadInfoFlags;
          v52 = &v40;
          v53 = 4;
          v54 = 0;
          v41 = v29;
          v55 = &v41;
          v56 = 4;
          v57 = 0;
          v42 = v31;
          v58 = &v42;
          v59 = 4;
          v60 = 0;
          TlgCreateWsz(&v61, v10);
          TlgCreateWsz(&v62, Buffer);
          TlgCreateWsz(&v63, v6);
          v64 = &v30;
          v65 = v27;
          v66 = 0;
          v67 = &v32;
          v68 = 8;
          v69 = 0;
          v43 = 1;
          v70 = &v43;
          v71 = v27;
          v72 = 0;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0177EAD, 0LL, v28, 0xBu, &v51);
        }
        goto LABEL_58;
      }
    }
    if ( (v23 & 1) == 0 )
    {
LABEL_50:
      **v26 = 0;
      goto LABEL_51;
    }
LABEL_49:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v25);
    v26 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_50;
  }
  PrimaryToken = PsReferencePrimaryToken(*(PEPROCESS *)v11);
  v46[0] = 256LL;
  v45 = 130LL;
  v12 = RtlQueryPackageIdentity(PrimaryToken, v97, v46, v96, &v45, 0LL);
  v14 = v12;
  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
  {
    v15 = (const WCHAR *)v96;
    if ( v12 < 0 )
      v15 = &pwsz;
    v16 = (const WCHAR *)v97;
    if ( v12 < 0 )
      v16 = &pwsz;
    McTemplateK0qqqzzzzqx(
      (_DWORD)v16,
      (_DWORD)v15,
      v13,
      ThreadInfoFlags,
      v29,
      v3,
      (__int64)Buffer,
      (__int64)v6,
      (__int64)v16,
      (__int64)v15,
      v30,
      v32);
  }
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000040000uLL) )
  {
    v34 = ThreadInfoFlags;
    v74 = &v34;
    v75 = 4;
    v76 = 0;
    v35 = v29;
    v77 = &v35;
    v78 = 4;
    v79 = 0;
    v36 = v3;
    v80 = &v36;
    v81 = 4;
    v82 = 0;
    v17 = (const WCHAR *)v97;
    if ( v14 < 0 )
      v17 = &pwsz;
    TlgCreateWsz(&pDesc, v17);
    v18 = (const WCHAR *)v96;
    if ( v14 < 0 )
      v18 = &pwsz;
    TlgCreateWsz(&v84, v18);
    TlgCreateWsz(&v85, Buffer);
    TlgCreateWsz(&v86, v6);
    v87 = &v30;
    v88 = v19;
    v89 = 0;
    v90 = &v32;
    v91 = 8;
    v92 = 0;
    v37 = 1;
    v93 = &v37;
    v94 = v19;
    v95 = 0;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0177F67, 0LL, v20, 0xCu, &pData);
  }
  PsDereferencePrimaryToken(PrimaryToken);
LABEL_58:
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v6 )
  {
    if ( Buffer != v6 )
      RtlFreeUnicodeString(&v50);
  }
}
