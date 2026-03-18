/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x140008950
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000892C (MicrosoftTelemetryAssertTriggeredArgs.c)
 * Callees:
 *     __security_check_cookie @ 0x140003000 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx @ 0x140008494 (TraceLoggingRegisterEx.c)
 *     _TlgWrite @ 0x1400085D0 (_TlgWrite.c)
 *     GetImageTuple @ 0x14000887C (GetImageTuple.c)
 *     _TlgCreateSz @ 0x140008D78 (_TlgCreateSz.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  int v6; // esi
  int v7; // r12d
  int v8; // r15d
  struct MicrosoftTelemetryAssertTriggeredNode *v9; // rbx
  struct MicrosoftTelemetryAssertTriggeredNode *v10; // rax
  DWORD TickCount; // eax
  struct MicrosoftTelemetryAssertTriggeredNode *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  DWORD ImageTuple; // eax
  void (__stdcall *v16)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v17; // r8
  unsigned int v18; // r14d
  DWORD v19; // r13d
  int v20; // edi
  __int64 v21; // rdi
  CHAR v22; // r8
  unsigned int v23; // r14d
  CHAR *v24; // r15
  char v25; // al
  CHAR v26; // dl
  unsigned int v27; // ecx
  __int64 v28; // rax
  const CHAR *v29; // rdx
  int v30; // eax
  unsigned int v31; // eax
  int v32; // ecx
  LPCGUID v33; // r8
  LPCGUID v34; // r9
  unsigned int v35; // [rsp+30h] [rbp-D0h] BYREF
  int v36; // [rsp+34h] [rbp-CCh] BYREF
  int v37; // [rsp+38h] [rbp-C8h] BYREF
  ULONGLONG RegHandle; // [rsp+40h] [rbp-C0h] BYREF
  int v39; // [rsp+48h] [rbp-B8h] BYREF
  int v40; // [rsp+4Ch] [rbp-B4h] BYREF
  int v41; // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+54h] [rbp-ACh] BYREF
  int v43; // [rsp+58h] [rbp-A8h] BYREF
  int v44; // [rsp+5Ch] [rbp-A4h] BYREF
  GUID ProviderId; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  int *v47; // [rsp+90h] [rbp-70h]
  __int64 v48; // [rsp+98h] [rbp-68h]
  int *v49; // [rsp+A0h] [rbp-60h]
  __int64 v50; // [rsp+A8h] [rbp-58h]
  int *v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  unsigned int *v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp-30h] BYREF
  int *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  int *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+100h] [rbp+0h] BYREF
  int *v61; // [rsp+110h] [rbp+10h]
  __int64 v62; // [rsp+118h] [rbp+18h]
  int *v63; // [rsp+120h] [rbp+20h]
  __int64 v64; // [rsp+128h] [rbp+28h]
  int *v65; // [rsp+130h] [rbp+30h]
  __int64 v66; // [rsp+138h] [rbp+38h]
  ULONGLONG *p_RegHandle; // [rsp+140h] [rbp+40h]
  __int64 v68; // [rsp+148h] [rbp+48h]
  CHAR v69[272]; // [rsp+150h] [rbp+50h] BYREF

  v36 = a4;
  v6 = 0;
  v7 = 0;
  v8 = a4;
  AcquireSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
  v9 = g_MicrosoftTelemetryAssertsTriggeredList;
  if ( g_MicrosoftTelemetryAssertsTriggeredList )
  {
    while ( *(_QWORD *)v9 != a1 )
    {
      v9 = (struct MicrosoftTelemetryAssertTriggeredNode *)*((_QWORD *)v9 + 3);
      if ( !v9 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v10 = (struct MicrosoftTelemetryAssertTriggeredNode *)LocalAlloc(0x40u, 0x20uLL);
    v9 = v10;
    if ( !v10 )
      goto LABEL_46;
    *(_QWORD *)v10 = a1;
    TickCount = GetTickCount();
    v12 = g_MicrosoftTelemetryAssertsTriggeredList;
    *((_DWORD *)v9 + 2) = TickCount - 60001;
    *(_QWORD *)((char *)v9 + 12) = 0LL;
    *((_QWORD *)v9 + 3) = v12;
    g_MicrosoftTelemetryAssertsTriggeredList = v9;
  }
  ++*((_DWORD *)v9 + 3);
  ++*((_DWORD *)v9 + 4);
  if ( GetTickCount() - *((_DWORD *)v9 + 2) > 0xEA60 )
  {
    *((_DWORD *)v9 + 2) = GetTickCount();
    ImageTuple = GetImageTuple(v13, v69, v14, &v37, &v35);
    v18 = v35;
    v19 = ImageTuple;
    if ( ImageTuple
      && a1 >= (unsigned __int64)&_ImageBase
      && (v16 = (void (__stdcall *)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID))((char *)&_ImageBase + v35),
          (struct HINSTANCE__ *)v16 > &_ImageBase)
      && a1 <= (unsigned __int64)v16 )
    {
      v20 = a1 - (unsigned int)&_ImageBase;
    }
    else
    {
      v20 = 0;
    }
    v39 = v20;
    if ( *((_DWORD *)v9 + 4) == 1 && !TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1400101C8, v16, v17) )
    {
      v21 = 0LL;
      if ( dword_1400101C8 )
      {
        v22 = v69[0];
        v6 = 1;
        ProviderId.Data1 = 488056742;
        v7 = 1;
        *(_DWORD *)&ProviderId.Data2 = 1311216328;
        v23 = 0;
        *(_DWORD *)ProviderId.Data4 = -1961924164;
        *(_DWORD *)&ProviderId.Data4[4] = -1655403451;
        if ( v69[0] )
        {
          v24 = v69;
          do
          {
            v25 = toupper(v22);
            v26 = v24[1];
            v27 = v23 + 1;
            *((_BYTE *)&ProviderId.Data1 + v21) += v25;
            ++v24;
            v23 = 0;
            v28 = v21 + 1;
            v22 = v26;
            if ( v27 < 0x10 )
              v23 = v27;
            v21 = 0LL;
            if ( v27 < 0x10 )
              v21 = v28;
          }
          while ( v26 );
          v8 = v36;
        }
        if ( !EventRegister(&ProviderId, 0LL, 0LL, &RegHandle) )
        {
          if ( EventProviderEnabled(RegHandle, 0, 0LL) )
            v6 = 0;
          EventUnregister(RegHandle);
        }
        v18 = v35;
      }
      EventUnregister(qword_1400101E8);
      qword_1400101E8 = 0LL;
      dword_1400101C8 = 0;
    }
    if ( !TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_140010200, v16, v17) )
    {
      if ( dword_140010200 > 5u
        && (qword_140010210 & 0x400000000000LL) != 0
        && (qword_140010218 & 0x400000000000LL) == qword_140010218 )
      {
        v36 = 10;
        v48 = 4LL;
        v47 = &v36;
        v29 = v69;
        v50 = 4LL;
        v49 = &v39;
        v30 = 0;
        v52 = 4LL;
        if ( v19 )
          v30 = v37;
        v37 = v30;
        v51 = &v37;
        v31 = 0;
        if ( v19 )
          v31 = v18;
        v54 = 4LL;
        v35 = v31;
        v53 = &v35;
        if ( !v19 )
          v29 = "<unknown>";
        TlgCreateSz(&pDesc, v29);
        v32 = *((_DWORD *)v9 + 3);
        v56 = &v40;
        v41 = *((_DWORD *)v9 + 4);
        v40 = v32;
        v58 = &v41;
        v57 = 4LL;
        v59 = 4LL;
        TlgCreateSz(&v60, "dwm.exe");
        v42 = v8;
        v61 = &v42;
        v43 = a5;
        v63 = &v43;
        v65 = &v44;
        p_RegHandle = &RegHandle;
        v62 = 4LL;
        v64 = 4LL;
        v44 = v6;
        v66 = 4LL;
        LODWORD(RegHandle) = v7;
        v68 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_140010200, &unk_14000B950, v33, v34, 0xEu, &pData);
      }
      EventUnregister(qword_140010220);
      qword_140010220 = 0LL;
      dword_140010200 = 0;
    }
    if ( v7 && v6 )
      Sleep(0x3E8u);
    *((_DWORD *)v9 + 3) = 0;
  }
LABEL_46:
  ReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
}
