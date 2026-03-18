/*
 * XREFs of ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCursorReason@@@Z @ 0x1C00D889C
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SwapSystemCursorReason@@@Z @ 0x1C00DA5BC (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SwapSystemCursorReas.c)
 *     ?_LoadCursorsAndIcons@@YAHXZ @ 0x1C0129BF0 (-_LoadCursorsAndIcons@@YAHXZ.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01B8648 (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01CA118 (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01CA184 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     RtlInitUnicodeStringOrId @ 0x1C00A60B8 (RtlInitUnicodeStringOrId.c)
 *     RtlUnicodeStringCopy @ 0x1C00AC8B4 (RtlUnicodeStringCopy.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C00D8EC8 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00DA854 (_TlgCreateWsz.c)
 *     RtlStringCchPrintfW @ 0x1C00F0EE8 (RtlStringCchPrintfW.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0117C48 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?CurIndexName@InputTraceLogging@@CAPEBDI@Z @ 0x1C01B83F8 (-CurIndexName@InputTraceLogging@@CAPEBDI@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall zzzInternalSetSystemCursor(__int64 a1, unsigned int a2, const UNICODE_STRING *a3, int a4)
{
  __int64 v4; // r15
  __int64 v8; // rdi
  __int64 v9; // rdi
  struct _UNICODE_STRING *v10; // rsi
  WCHAR *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  _BOOL8 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  const CHAR *v19; // rax
  wchar_t *Buffer; // rdx
  const CHAR *v21; // rdx
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  _QWORD v28[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-60h] BYREF
  int *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  int *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  int *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  __int64 v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  int *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  int *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  int *v50; // [rsp+140h] [rbp+40h]
  __int64 v51; // [rsp+148h] [rbp+48h]
  __int64 v52; // [rsp+150h] [rbp+50h]
  __int64 v53; // [rsp+158h] [rbp+58h]
  __int64 v54; // [rsp+160h] [rbp+60h]
  __int64 v55; // [rsp+168h] [rbp+68h]
  __int64 v56; // [rsp+170h] [rbp+70h]
  __int64 v57; // [rsp+178h] [rbp+78h]
  __int64 v58; // [rsp+180h] [rbp+80h]
  __int64 v59; // [rsp+188h] [rbp+88h]
  __int64 *v60; // [rsp+190h] [rbp+90h]
  __int64 v61; // [rsp+198h] [rbp+98h]
  __int64 *v62; // [rsp+1A0h] [rbp+A0h]
  __int64 v63; // [rsp+1A8h] [rbp+A8h]
  _QWORD *v64; // [rsp+1B0h] [rbp+B0h]
  __int64 v65; // [rsp+1B8h] [rbp+B8h]
  wchar_t pszDest[264]; // [rsp+1C0h] [rbp+C0h] BYREF

  v4 = a2;
  if ( (*(_DWORD *)(a1 + 80) & 8) != 0 )
    v8 = **(_QWORD **)(a1 + 96);
  else
    v8 = a1;
  if ( dword_1C030D340 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 8uLL) )
  {
    v19 = InputTraceLogging::CurIndexName(v4);
    TlgCreateSz(&pDesc, v19);
    v22 = v4;
    v34 = &v22;
    v35 = 4LL;
    if ( a3 )
    {
      Buffer = a3->Buffer;
      if ( ((unsigned __int64)Buffer & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        RtlStringCchPrintfW(pszDest, 0x104uLL, L"ResourceID %i", (unsigned __int16)Buffer);
        Buffer = pszDest;
      }
    }
    else
    {
      Buffer = L"Empty";
    }
    TlgCreateWsz(&v36, Buffer);
    if ( a4 )
    {
      switch ( a4 )
      {
        case 1:
          v21 = "User Login";
          break;
        case 2:
          v21 = "App called SPI_SETCURSORS";
          break;
        case 3:
          v21 = "App called SetSystemCursor";
          break;
        case 4:
          v21 = "Restore Mouse Cursors";
          break;
        case 5:
          v21 = "Replace Arrow With Null";
          break;
        case 6:
          v21 = "Replace Mouse With Pen";
          break;
        default:
          v21 = "UNKNOWN";
          break;
      }
    }
    else
    {
      v21 = "Session Init";
    }
    TlgCreateSz(&v37, v21);
    v29 = v8;
    v38 = &v29;
    v23 = *(_DWORD *)(v8 + 140);
    v40 = &v23;
    v24 = *(_DWORD *)(v8 + 144) >> 1;
    v42 = &v24;
    v44 = v8 + 76;
    v25 = *(__int16 *)(v8 + 84);
    v46 = &v25;
    v26 = *(__int16 *)(v8 + 86);
    v48 = &v26;
    v27 = *(_DWORD *)(v8 + 80);
    v50 = &v27;
    v52 = v8 + 112;
    v54 = v8 + 116;
    v56 = v8 + 120;
    v58 = v8 + 124;
    v30 = *(_QWORD *)(v8 + 88);
    v60 = &v30;
    v31 = *(_QWORD *)(v8 + 96);
    v62 = &v31;
    v28[0] = *(_QWORD *)(v8 + 104);
    v64 = v28;
    v39 = 8LL;
    v41 = 4LL;
    v43 = 4LL;
    v45 = 4LL;
    v47 = 4LL;
    v49 = 4LL;
    v51 = 4LL;
    v53 = 4LL;
    v55 = 4LL;
    v57 = 4LL;
    v59 = 4LL;
    v61 = 8LL;
    v63 = 8LL;
    v65 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D3158, 0LL, 0LL, 0x14u, &pData);
  }
  v9 = 276 * v4;
  v10 = (struct _UNICODE_STRING *)&gasyscur[276 * v4 + 8];
  if ( a3 )
  {
    v11 = a3->Buffer;
    if ( ((unsigned __int64)v11 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      RtlInitUnicodeString(v10, &gasyscur[v9 + 16]);
      v10->MaximumLength = 520;
      RtlUnicodeStringCopy((PUNICODE_STRING)&gasyscur[276 * v4 + 8], a3);
      v10->Buffer[259] = 0;
    }
    else
    {
      RtlInitUnicodeStringOrId(v10, v11);
    }
  }
  else
  {
    RtlInitUnicodeString(v10, 0LL);
  }
  v15 = *(_QWORD *)&gasyscur[276 * v4 + 4];
  v16 = v15 == 0;
  if ( v16 != (a4 == 0) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
  if ( v15 )
  {
    zzzSetSystemImage((struct tagCURSOR *)a1, *(struct tagCURSOR **)&gasyscur[276 * v4 + 4]);
  }
  else
  {
    if ( PsGetCurrentProcess(v16, v12, v13, v14) != gpepCSRSS
      || (v17 = *(_QWORD *)(a1 + 64)) == 0
      || (v17 & 0xFFFFFFFFFFFF0000uLL) != 0
      || (unsigned __int16)v17 - 100 != (_DWORD)v4 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(gpepCSRSS);
    }
    v28[1] = a1;
    v18 = gasyscur[276 * v4];
    *(_DWORD *)(a1 + 80) |= 0x200u;
    *(_QWORD *)(a1 + 64) = v18;
    v28[0] = &gasyscur[v9 + 4];
    HMAssignmentLock(v28);
  }
}
