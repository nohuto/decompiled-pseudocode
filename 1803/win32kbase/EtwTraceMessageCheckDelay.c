/*
 * XREFs of EtwTraceMessageCheckDelay @ 0x1C0070E20
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
 *     McTemplateK0qqqqzzzqx @ 0x1C00AF408 (McTemplateK0qqqqzzzqx.c)
 *     McTemplateK0qqqqzzzzqx @ 0x1C00AF584 (McTemplateK0qqqqzzzzqx.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EtwTraceMessageCheckDelay(struct tagTHREADINFO *a1)
{
  unsigned __int64 v3; // r13
  int v4; // eax
  unsigned int v5; // r15d
  unsigned int ThreadInfoFlags; // r14d
  const WCHAR *Buffer; // rdi
  const WCHAR *v8; // rsi
  struct tagWND *v9; // rax
  struct tagWND *TopLevelWindow; // rax
  const WCHAR *v11; // r13
  __int64 v12; // rcx
  PACCESS_TOKEN v13; // r13
  int v14; // eax
  int v15; // r8d
  const WCHAR *v16; // rdx
  const WCHAR *v17; // rcx
  int v18; // r11d
  const WCHAR *v19; // rdx
  const WCHAR *v20; // rdx
  int v21; // r11d
  LPCGUID v22; // r9
  PEPROCESS ThreadProcess; // rax
  unsigned int *v24; // rdx
  __int64 v25; // rcx
  ULONG64 v26; // r8
  ULONG64 v27; // rdx
  _BYTE **v28; // rax
  LPCGUID v29; // r9
  unsigned int v30; // [rsp+70h] [rbp-418h] BYREF
  unsigned int v31; // [rsp+74h] [rbp-414h] BYREF
  int v32; // [rsp+78h] [rbp-410h] BYREF
  unsigned int v33; // [rsp+7Ch] [rbp-40Ch] BYREF
  struct tagWND *v34; // [rsp+80h] [rbp-408h]
  __int64 v35; // [rsp+88h] [rbp-400h] BYREF
  unsigned int v36; // [rsp+90h] [rbp-3F8h] BYREF
  unsigned int v37; // [rsp+94h] [rbp-3F4h] BYREF
  unsigned int v38; // [rsp+98h] [rbp-3F0h] BYREF
  _DWORD v39[3]; // [rsp+9Ch] [rbp-3ECh] BYREF
  unsigned int v40; // [rsp+A8h] [rbp-3E0h] BYREF
  unsigned int v41; // [rsp+ACh] [rbp-3DCh] BYREF
  unsigned int v42; // [rsp+B0h] [rbp-3D8h] BYREF
  unsigned int v43; // [rsp+B4h] [rbp-3D4h] BYREF
  int v44; // [rsp+B8h] [rbp-3D0h] BYREF
  PWSTR v45; // [rsp+C0h] [rbp-3C8h]
  const WCHAR *v46; // [rsp+C8h] [rbp-3C0h]
  __int64 v47; // [rsp+D0h] [rbp-3B8h] BYREF
  _QWORD v48[3]; // [rsp+D8h] [rbp-3B0h] BYREF
  int v49; // [rsp+F0h] [rbp-398h] BYREF
  const WCHAR *v50; // [rsp+F8h] [rbp-390h]
  struct _UNICODE_STRING UnicodeString; // [rsp+100h] [rbp-388h] BYREF
  struct _UNICODE_STRING v52; // [rsp+110h] [rbp-378h] BYREF
  EVENT_DATA_DESCRIPTOR v53; // [rsp+130h] [rbp-358h] BYREF
  unsigned int *v54; // [rsp+150h] [rbp-338h]
  __int64 v55; // [rsp+158h] [rbp-330h]
  unsigned int *v56; // [rsp+160h] [rbp-328h]
  __int64 v57; // [rsp+168h] [rbp-320h]
  unsigned int *v58; // [rsp+170h] [rbp-318h]
  __int64 v59; // [rsp+178h] [rbp-310h]
  unsigned int *v60; // [rsp+180h] [rbp-308h]
  __int64 v61; // [rsp+188h] [rbp-300h]
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+190h] [rbp-2F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+1A0h] [rbp-2E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+1B0h] [rbp-2D8h] BYREF
  int *v65; // [rsp+1C0h] [rbp-2C8h]
  __int64 v66; // [rsp+1C8h] [rbp-2C0h]
  __int64 *v67; // [rsp+1D0h] [rbp-2B8h]
  __int64 v68; // [rsp+1D8h] [rbp-2B0h]
  int *v69; // [rsp+1E0h] [rbp-2A8h]
  __int64 v70; // [rsp+1E8h] [rbp-2A0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1F0h] [rbp-298h] BYREF
  unsigned int *v72; // [rsp+210h] [rbp-278h]
  __int64 v73; // [rsp+218h] [rbp-270h]
  unsigned int *v74; // [rsp+220h] [rbp-268h]
  __int64 v75; // [rsp+228h] [rbp-260h]
  unsigned int *v76; // [rsp+230h] [rbp-258h]
  __int64 v77; // [rsp+238h] [rbp-250h]
  unsigned int *v78; // [rsp+240h] [rbp-248h]
  __int64 v79; // [rsp+248h] [rbp-240h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+250h] [rbp-238h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+260h] [rbp-228h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v82; // [rsp+270h] [rbp-218h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+280h] [rbp-208h] BYREF
  int *v84; // [rsp+290h] [rbp-1F8h]
  __int64 v85; // [rsp+298h] [rbp-1F0h]
  __int64 *v86; // [rsp+2A0h] [rbp-1E8h]
  __int64 v87; // [rsp+2A8h] [rbp-1E0h]
  _DWORD *v88; // [rsp+2B0h] [rbp-1D8h]
  __int64 v89; // [rsp+2B8h] [rbp-1D0h]
  _BYTE v90[144]; // [rsp+2C0h] [rbp-1C8h] BYREF
  _BYTE v91[256]; // [rsp+350h] [rbp-138h] BYREF

  if ( (W32kEtwEnabledKeyword & 0x8001000000040000uLL) == 0 )
    return;
  if ( (unsigned __int8)(byte_1C019A1D8 - 1) <= 2u
    || (qword_1C019A1C0 & 0x8001000000040000uLL) == 0
    || (qword_1C019A1C8 & 0x8001000000040000uLL) != qword_1C019A1C8 )
  {
    return;
  }
  v3 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v4 = *((_DWORD *)a1 + 286);
  if ( !v4 )
    return;
  v5 = v3 - v4;
  v39[1] = v3 - v4;
  if ( (int)v3 - v4 < W32kEtwMessageCheckDelayTimeoutMs )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags(a1);
  v39[2] = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 8) == 0 && (ThreadInfoFlags & 0x20) == 0 )
    return;
  if ( (ThreadInfoFlags & 0x200) != 0 && v5 < gdwHungAppTimeout )
    return;
  Buffer = 0LL;
  v46 = 0LL;
  v8 = 0LL;
  v45 = 0LL;
  v9 = (struct tagWND *)ValidateHwnd(*((void **)a1 + 144));
  v34 = v9;
  if ( v9 )
  {
    if ( EtwpGetClassName(v9, &UnicodeString) >= 0 )
      Buffer = UnicodeString.Buffer;
    v46 = Buffer;
    if ( (int)Is_GetTopLevelWindowSupported() < 0 )
      TopLevelWindow = 0LL;
    else
      TopLevelWindow = (struct tagWND *)_GetTopLevelWindow(v34);
    if ( TopLevelWindow )
    {
      if ( v34 == TopLevelWindow )
      {
        v8 = Buffer;
        v45 = (PWSTR)Buffer;
      }
      else if ( EtwpGetClassName(TopLevelWindow, &v52) >= 0 )
      {
        v8 = v52.Buffer;
        v45 = v52.Buffer;
      }
    }
  }
  EtwpGetLastInputProcessTime(*((struct tagQ *const *)a1 + 53), v3, &v30, &v31);
  v32 = *((_DWORD *)a1 + 290);
  v35 = *((_QWORD *)a1 + 146);
  v11 = 0LL;
  v48[2] = 0LL;
  v12 = *((_QWORD *)a1 + 52);
  if ( (*(_DWORD *)(v12 + 812) & 0x30) != 0x10 )
  {
    ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
    v24 = (unsigned int *)(*(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL);
    if ( (unsigned __int64)v24 >= MmUserProbeAddress )
      v24 = (unsigned int *)MmUserProbeAddress;
    v25 = *v24;
    LODWORD(v34) = v25;
    v49 = v25;
    v26 = *((_QWORD *)v24 + 1);
    v50 = (const WCHAR *)v26;
    if ( (v26 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v27 = v26 + (unsigned __int16)v25 + 2LL;
    v28 = (_BYTE **)MmUserProbeAddress;
    if ( v27 < MmUserProbeAddress && (unsigned __int16)v25 <= WORD1(v34) )
    {
      if ( (v25 & 1) != 0 )
        goto LABEL_50;
      if ( v27 > v26 )
      {
LABEL_52:
        v48[1] = &v49;
        if ( &v49 )
          v11 = v50;
        if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
          McTemplateK0qqqqzzzqx(
            v25,
            v27,
            v26,
            ThreadInfoFlags,
            v5,
            v30,
            v31,
            (__int64)Buffer,
            (__int64)v8,
            (__int64)v11,
            v32,
            v35);
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x40000uLL) )
        {
          v40 = ThreadInfoFlags;
          v54 = &v40;
          v55 = 4LL;
          v41 = v5;
          v56 = &v41;
          v57 = 4LL;
          v42 = v30;
          v58 = &v42;
          v59 = 4LL;
          v43 = v31;
          v60 = &v43;
          v61 = 4LL;
          TlgCreateWsz(&v62, v11);
          TlgCreateWsz(&v63, Buffer);
          TlgCreateWsz(&v64, v8);
          v65 = &v32;
          v66 = 4LL;
          v67 = &v35;
          v68 = 8LL;
          v44 = 1;
          v69 = &v44;
          v70 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0178037, 0LL, v29, 0xCu, &v53);
        }
        goto LABEL_59;
      }
    }
    if ( (v25 & 1) == 0 )
    {
LABEL_51:
      **v28 = 0;
      goto LABEL_52;
    }
LABEL_50:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v27);
    v28 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_51;
  }
  v13 = PsReferencePrimaryToken(*(PEPROCESS *)v12);
  v48[0] = 256LL;
  v47 = 130LL;
  v14 = RtlQueryPackageIdentity(v13, v91, v48, v90, &v47, 0LL);
  v33 = v14;
  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
  {
    v16 = (const WCHAR *)v90;
    if ( v14 < 0 )
      v16 = &pwsz;
    v17 = (const WCHAR *)v91;
    if ( v14 < 0 )
      v17 = &pwsz;
    McTemplateK0qqqqzzzzqx(
      (_DWORD)v17,
      (_DWORD)v16,
      v15,
      ThreadInfoFlags,
      v5,
      v30,
      v31,
      (__int64)Buffer,
      (__int64)v8,
      (__int64)v17,
      (__int64)v16,
      v32,
      v35);
  }
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x40000uLL) )
  {
    v33 = ThreadInfoFlags;
    v72 = &v33;
    v73 = 4LL;
    v36 = v5;
    v74 = &v36;
    v75 = 4LL;
    v37 = v30;
    v76 = &v37;
    v77 = 4LL;
    v38 = v31;
    v78 = &v38;
    v79 = 4LL;
    v19 = (const WCHAR *)v91;
    if ( v18 < 0 )
      v19 = &pwsz;
    TlgCreateWsz(&pDesc, v19);
    v20 = (const WCHAR *)v90;
    if ( v21 < 0 )
      v20 = &pwsz;
    TlgCreateWsz(&v81, v20);
    TlgCreateWsz(&v82, Buffer);
    TlgCreateWsz(&v83, v8);
    v84 = &v32;
    v85 = 4LL;
    v86 = &v35;
    v87 = 8LL;
    v39[0] = 1;
    v88 = v39;
    v89 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01780FE, 0LL, v22, 0xDu, &pData);
  }
  PsDereferencePrimaryToken(v13);
LABEL_59:
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v8 )
  {
    if ( Buffer != v8 )
      RtlFreeUnicodeString(&v52);
  }
}
