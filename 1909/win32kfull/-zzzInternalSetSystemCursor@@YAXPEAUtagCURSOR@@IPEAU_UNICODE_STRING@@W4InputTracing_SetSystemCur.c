/*
 * XREFs of ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C005983C
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0057C04 (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 *     ?_LoadCursorsAndIcons@@YAHXZ @ 0x1C0110510 (-_LoadCursorsAndIcons@@YAHXZ.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01CC2F8 (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01DDA54 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C001E534 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00597FC (_TlgCreateWsz.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C0059A10 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C005B720 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C007F150 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00E95D8 (_TlgCreateSz.c)
 *     RtlInitUnicodeStringOrId @ 0x1C013C7AC (RtlInitUnicodeStringOrId.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?CurIndexName@InputTraceLogging@@CAPEBDI@Z @ 0x1C01CBE20 (-CurIndexName@InputTraceLogging@@CAPEBDI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall zzzInternalSetSystemCursor(__int64 a1, unsigned int a2, const struct _UNICODE_STRING *a3, int a4)
{
  __int64 v6; // r14
  struct _UNICODE_STRING *v8; // rsi
  PWSTR Buffer; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  _BOOL8 v15; // rcx
  __int64 v16; // rbx
  char result; // al
  __int64 v18; // rax
  __int64 v19; // rcx
  const CHAR *v20; // rax
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // edi
  const CHAR *v25; // rdx
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // ecx
  const WCHAR *v40; // rdi
  __int64 v41; // r9
  int v42; // ecx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // ecx
  int v56; // [rsp+30h] [rbp-D0h] BYREF
  int v57; // [rsp+34h] [rbp-CCh] BYREF
  int v58; // [rsp+38h] [rbp-C8h] BYREF
  int v59; // [rsp+3Ch] [rbp-C4h] BYREF
  int v60; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v61[3]; // [rsp+44h] [rbp-BCh] BYREF
  _QWORD v62[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v63; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v64; // [rsp+68h] [rbp-98h] BYREF
  __int64 v65; // [rsp+70h] [rbp-90h] BYREF
  __int64 v66; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v67[2]; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v70; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v71; // [rsp+D0h] [rbp-30h]
  __int64 v72; // [rsp+D8h] [rbp-28h]
  __int64 *v73; // [rsp+E0h] [rbp-20h]
  __int64 v74; // [rsp+E8h] [rbp-18h]
  int *v75; // [rsp+F0h] [rbp-10h]
  __int64 v76; // [rsp+F8h] [rbp-8h]
  int *v77; // [rsp+100h] [rbp+0h]
  __int64 v78; // [rsp+108h] [rbp+8h]
  int *v79; // [rsp+110h] [rbp+10h]
  __int64 v80; // [rsp+118h] [rbp+18h]
  int *v81; // [rsp+120h] [rbp+20h]
  __int64 v82; // [rsp+128h] [rbp+28h]
  __int64 *v83; // [rsp+130h] [rbp+30h]
  __int64 v84; // [rsp+138h] [rbp+38h]
  __int64 *v85; // [rsp+140h] [rbp+40h]
  __int64 v86; // [rsp+148h] [rbp+48h]
  __int64 *v87; // [rsp+150h] [rbp+50h]
  __int64 v88; // [rsp+158h] [rbp+58h]
  int *v89; // [rsp+160h] [rbp+60h]
  __int64 v90; // [rsp+168h] [rbp+68h]
  _QWORD *v91; // [rsp+170h] [rbp+70h]
  __int64 v92; // [rsp+178h] [rbp+78h]
  int *v93; // [rsp+180h] [rbp+80h]
  __int64 v94; // [rsp+188h] [rbp+88h]
  _DWORD *v95; // [rsp+190h] [rbp+90h]
  __int64 v96; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v97; // [rsp+1A0h] [rbp+A0h] BYREF

  v6 = 69LL * a2;
  v8 = (struct _UNICODE_STRING *)&gasyscur[v6 + 2];
  if ( a3 )
  {
    Buffer = a3->Buffer;
    if ( ((unsigned __int64)Buffer & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      RtlInitUnicodeString(v8, (PCWSTR)&gasyscur[v6 + 4]);
      v8->MaximumLength = 520;
      RtlUnicodeStringCopy((struct _UNICODE_STRING *)&gasyscur[v6 + 2], a3);
      v8->Buffer[259] = 0;
    }
    else
    {
      RtlInitUnicodeStringOrId(v8, Buffer);
    }
  }
  else
  {
    RtlInitUnicodeString(v8, 0LL);
  }
  v14 = *(_QWORD *)(v6 * 8 + gasyscur[0] + 8);
  v15 = v14 == 0;
  if ( v15 != (a4 == 0) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15);
  if ( v14 )
  {
    zzzSetSystemImage((struct tagCURSOR *)a1, *(struct tagCURSOR **)(v6 * 8 + gasyscur[0] + 8));
  }
  else
  {
    if ( PsGetCurrentProcess(v15, v11, v12, v13) != gpepCSRSS
      || (v18 = *(_QWORD *)(a1 + 64)) == 0
      || (v18 & 0xFFFFFFFFFFFF0000uLL) != 0
      || (unsigned __int16)v18 - 100 != a2 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(gpepCSRSS);
    }
    v62[1] = a1;
    v19 = *(unsigned __int16 *)(v6 * 8 + gasyscur[0]);
    *(_DWORD *)(a1 + 80) |= 0x200u;
    *(_QWORD *)(a1 + 64) = v19;
    v62[0] = &gasyscur[v6 + 1];
    HMAssignmentLock(v62);
  }
  v16 = *(_QWORD *)(v6 * 8 + gasyscur[0] + 8);
  if ( dword_1C03202C0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 8uLL) )
  {
    v20 = InputTraceLogging::CurIndexName(a2);
    TlgCreateSz(&pDesc, v20);
    if ( a4 )
    {
      v21 = a4 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            v24 = v23 - 1;
            if ( v24 )
            {
              if ( v24 == 1 )
                v25 = "Replace Mouse With Pen";
              else
                v25 = "UNKNOWN";
            }
            else
            {
              v25 = "Restore Mouse Cursors";
            }
          }
          else
          {
            v25 = "App called SetSystemCursor";
          }
        }
        else
        {
          v25 = "App called SPI_SETCURSORS";
        }
      }
      else
      {
        v25 = "User Login";
      }
    }
    else
    {
      v25 = "Session Init";
    }
    TlgCreateSz(&v70, v25);
    v26 = *(_DWORD *)(v16 + 80) & 8;
    if ( v26 )
      v27 = **(_QWORD **)(v16 + 96);
    else
      v27 = v16;
    if ( *(_QWORD *)(v27 + 48) )
    {
      if ( v26 )
        v28 = **(_QWORD **)(v16 + 96);
      else
        v28 = v16;
    }
    else
    {
      v28 = 0LL;
    }
    v64 = v28;
    v71 = &v64;
    v72 = 8LL;
    if ( v26 )
      v29 = **(_QWORD **)(v16 + 96);
    else
      v29 = v16;
    v65 = *(_QWORD *)(v29 + 48);
    v73 = &v65;
    v74 = 8LL;
    if ( v26 )
      v30 = **(_QWORD **)(v16 + 96);
    else
      v30 = v16;
    v76 = 4LL;
    v75 = (int *)(v30 + 76);
    if ( v26 )
      v31 = **(_QWORD **)(v16 + 96);
    else
      v31 = v16;
    v63 = *(_DWORD *)(v31 + 80);
    v77 = &v63;
    v78 = 4LL;
    if ( v26 )
      v32 = **(_QWORD **)(v16 + 96);
    else
      v32 = v16;
    v56 = *(_DWORD *)(v32 + 140);
    v79 = &v56;
    v80 = 4LL;
    if ( v26 )
      v33 = **(_QWORD **)(v16 + 96);
    else
      v33 = v16;
    v57 = *(_DWORD *)(v33 + 144) >> 1;
    v81 = &v57;
    v82 = 4LL;
    if ( v26 )
      v34 = **(_QWORD **)(v16 + 96);
    else
      v34 = v16;
    v58 = *(__int16 *)(v34 + 84);
    v83 = (__int64 *)&v58;
    v84 = 4LL;
    if ( v26 )
      v35 = **(_QWORD **)(v16 + 96);
    else
      v35 = v16;
    v59 = *(__int16 *)(v35 + 86);
    v85 = (__int64 *)&v59;
    v86 = 4LL;
    if ( v26 )
      v36 = **(_QWORD **)(v16 + 96);
    else
      v36 = v16;
    v66 = *(_QWORD *)(v36 + 88);
    v87 = &v66;
    v88 = 8LL;
    if ( v26 )
      v37 = **(_QWORD **)(v16 + 96);
    else
      v37 = v16;
    v67[0] = *(_QWORD *)(v37 + 96);
    v89 = (int *)v67;
    v90 = 8LL;
    if ( v26 )
      v38 = **(_QWORD **)(v16 + 96);
    else
      v38 = v16;
    v62[0] = *(_QWORD *)(v38 + 104);
    v91 = v62;
    v92 = 8LL;
    v39 = *(_DWORD *)UPDWORDPointer(8232LL);
    v93 = &v60;
    v95 = v61;
    v60 = v39;
    v94 = 4LL;
    v61[0] = a2;
    v96 = 4LL;
    if ( a3 )
    {
      v40 = a3->Buffer;
      if ( ((unsigned __int64)v40 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v41 = (unsigned __int16)v40;
        v40 = &gStrBufSetSystemCursorPath;
        RtlStringCchPrintfW(&gStrBufSetSystemCursorPath, 0x104uLL, L"ResourceID %i", v41);
      }
    }
    else
    {
      v40 = L"Empty";
    }
    TlgCreateWsz(&v97, v40);
    TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E49AD, 0LL, 0LL, 0x12u, &pData);
  }
  result = InputTraceLogging::Enabled(0);
  if ( result && v16 )
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(v16 + 40);
      if ( !v16 )
        break;
      if ( dword_1C03202C0 > 5u )
      {
        result = TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 8uLL);
        if ( result )
        {
          v42 = *(_DWORD *)(v16 + 80) & 8;
          if ( v42 )
            v43 = **(_QWORD **)(v16 + 96);
          else
            v43 = v16;
          if ( *(_QWORD *)(v43 + 48) )
          {
            if ( v42 )
              v44 = **(_QWORD **)(v16 + 96);
            else
              v44 = v16;
          }
          else
          {
            v44 = 0LL;
          }
          v62[0] = v44;
          pDesc.Ptr = (ULONGLONG)v62;
          *(_QWORD *)&pDesc.Size = 8LL;
          if ( v42 )
            v45 = **(_QWORD **)(v16 + 96);
          else
            v45 = v16;
          v67[0] = *(_QWORD *)(v45 + 48);
          v70.Ptr = (ULONGLONG)v67;
          *(_QWORD *)&v70.Size = 8LL;
          if ( v42 )
            v46 = **(_QWORD **)(v16 + 96);
          else
            v46 = v16;
          v72 = 4LL;
          v71 = (__int64 *)(v46 + 76);
          if ( v42 )
            v47 = **(_QWORD **)(v16 + 96);
          else
            v47 = v16;
          v61[0] = *(_DWORD *)(v47 + 80);
          v73 = (__int64 *)v61;
          v74 = 4LL;
          if ( v42 )
            v48 = **(_QWORD **)(v16 + 96);
          else
            v48 = v16;
          v60 = *(_DWORD *)(v48 + 140);
          v75 = &v60;
          v76 = 4LL;
          if ( v42 )
            v49 = **(_QWORD **)(v16 + 96);
          else
            v49 = v16;
          v59 = *(_DWORD *)(v49 + 144) >> 1;
          v77 = &v59;
          v78 = 4LL;
          if ( v42 )
            v50 = **(_QWORD **)(v16 + 96);
          else
            v50 = v16;
          v58 = *(__int16 *)(v50 + 84);
          v79 = &v58;
          v80 = 4LL;
          if ( v42 )
            v51 = **(_QWORD **)(v16 + 96);
          else
            v51 = v16;
          v57 = *(__int16 *)(v51 + 86);
          v81 = &v57;
          v82 = 4LL;
          if ( v42 )
            v52 = **(_QWORD **)(v16 + 96);
          else
            v52 = v16;
          v66 = *(_QWORD *)(v52 + 88);
          v83 = &v66;
          v84 = 8LL;
          if ( v42 )
            v53 = **(_QWORD **)(v16 + 96);
          else
            v53 = v16;
          v65 = *(_QWORD *)(v53 + 96);
          v85 = &v65;
          v86 = 8LL;
          if ( v42 )
            v54 = **(_QWORD **)(v16 + 96);
          else
            v54 = v16;
          v64 = *(_QWORD *)(v54 + 104);
          v87 = &v64;
          v88 = 8LL;
          v55 = *(_DWORD *)UPDWORDPointer(8232LL);
          v89 = &v56;
          v56 = v55;
          v90 = 4LL;
          result = TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E4A5F, 0LL, 0LL, 0xEu, &pData);
        }
      }
    }
  }
  return result;
}
