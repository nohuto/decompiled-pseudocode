/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x180222268
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x180222210 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180222240 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 * Callees:
 *     _TlgCreateSz @ 0x180033404 (_TlgCreateSz.c)
 *     TraceLoggingProviderEnabled @ 0x180086B28 (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     TraceLoggingRegisterEx @ 0x1800D569C (TraceLoggingRegisterEx.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     GetImageTuple @ 0x18022216C (GetImageTuple.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1, int a2, const CHAR *a3, int a4, int a5)
{
  int v7; // r14d
  int v8; // esi
  int v9; // r13d
  struct MicrosoftTelemetryAssertTriggeredNode *v10; // rbx
  struct MicrosoftTelemetryAssertTriggeredNode *v11; // rax
  DWORD TickCount; // eax
  struct MicrosoftTelemetryAssertTriggeredNode *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  void (__stdcall *v16)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v17; // r8
  DWORD ImageTuple; // r15d
  int v19; // edi
  __int64 v20; // rdi
  CHAR *v21; // rax
  CHAR v22; // dl
  unsigned int v23; // r14d
  CHAR *v24; // r13
  unsigned int v25; // ecx
  const CHAR *v26; // rdx
  unsigned int v27; // ecx
  const CHAR *v28; // rdx
  int v29; // ecx
  int v30; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v31; // [rsp+3Ch] [rbp-CCh] BYREF
  int v32; // [rsp+40h] [rbp-C8h] BYREF
  int v33; // [rsp+44h] [rbp-C4h] BYREF
  int v34; // [rsp+48h] [rbp-C0h] BYREF
  int v35; // [rsp+4Ch] [rbp-BCh] BYREF
  int v36; // [rsp+50h] [rbp-B8h] BYREF
  int v37; // [rsp+54h] [rbp-B4h] BYREF
  ULONGLONG RegHandle; // [rsp+58h] [rbp-B0h] BYREF
  int v39; // [rsp+60h] [rbp-A8h] BYREF
  GUID ProviderId; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  ULONGLONG *v42; // [rsp+98h] [rbp-70h]
  __int64 v43; // [rsp+A0h] [rbp-68h]
  int *v44; // [rsp+A8h] [rbp-60h]
  __int64 v45; // [rsp+B0h] [rbp-58h]
  int *v46; // [rsp+B8h] [rbp-50h]
  __int64 v47; // [rsp+C0h] [rbp-48h]
  int *v48; // [rsp+C8h] [rbp-40h]
  __int64 v49; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int *v51; // [rsp+E8h] [rbp-20h]
  __int64 v52; // [rsp+F0h] [rbp-18h]
  int *v53; // [rsp+F8h] [rbp-10h]
  __int64 v54; // [rsp+100h] [rbp-8h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+108h] [rbp+0h] BYREF
  int *v56; // [rsp+118h] [rbp+10h]
  __int64 v57; // [rsp+120h] [rbp+18h]
  int *v58; // [rsp+128h] [rbp+20h]
  __int64 v59; // [rsp+130h] [rbp+28h]
  int *v60; // [rsp+138h] [rbp+30h]
  __int64 v61; // [rsp+140h] [rbp+38h]
  ULONGLONG *p_RegHandle; // [rsp+148h] [rbp+40h]
  __int64 v63; // [rsp+150h] [rbp+48h]
  CHAR v64[272]; // [rsp+158h] [rbp+50h] BYREF

  v33 = a4;
  v34 = a2;
  v7 = a2;
  v8 = 0;
  v9 = 0;
  AcquireSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
  v10 = g_MicrosoftTelemetryAssertsTriggeredList;
  if ( !g_MicrosoftTelemetryAssertsTriggeredList )
    goto LABEL_5;
  do
  {
    if ( *(_QWORD *)v10 == a1 )
      break;
    v10 = (struct MicrosoftTelemetryAssertTriggeredNode *)*((_QWORD *)v10 + 3);
  }
  while ( v10 );
  if ( !v10 )
  {
LABEL_5:
    v11 = (struct MicrosoftTelemetryAssertTriggeredNode *)LocalAlloc(0x40u, 0x20uLL);
    v10 = v11;
    if ( !v11 )
      goto LABEL_48;
    *(_QWORD *)v11 = a1;
    TickCount = GetTickCount();
    v13 = g_MicrosoftTelemetryAssertsTriggeredList;
    *((_DWORD *)v10 + 3) = 0;
    *((_DWORD *)v10 + 4) = 0;
    *((_DWORD *)v10 + 2) = TickCount - 60001;
    *((_QWORD *)v10 + 3) = v13;
    g_MicrosoftTelemetryAssertsTriggeredList = v10;
  }
  ++*((_DWORD *)v10 + 3);
  ++*((_DWORD *)v10 + 4);
  if ( GetTickCount() - *((_DWORD *)v10 + 2) > 0xEA60 )
  {
    *((_DWORD *)v10 + 2) = GetTickCount();
    ImageTuple = GetImageTuple(v14, v64, v15, &v30, &v31);
    if ( ImageTuple
      && a1 >= (unsigned __int64)&_ImageBase
      && (v16 = (void (__stdcall *)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID))((char *)&_ImageBase + v31),
          (struct HINSTANCE__ *)v16 > &_ImageBase)
      && a1 <= (unsigned __int64)v16 )
    {
      v19 = a1 - (unsigned int)&_ImageBase;
    }
    else
    {
      v19 = 0;
    }
    v39 = v19;
    v20 = 0LL;
    if ( !a3 )
    {
      v21 = v64;
      if ( !ImageTuple )
        v21 = 0LL;
      a3 = v21;
    }
    if ( *((_DWORD *)v10 + 4) == 1 && !TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_18033A810, v16, v17) )
    {
      if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_18033A810, 0, 0LL) )
      {
        v22 = v64[0];
        v9 = 1;
        ProviderId.Data1 = 488056742;
        v8 = 1;
        *(_DWORD *)&ProviderId.Data2 = 1311216328;
        v23 = 0;
        *(_DWORD *)ProviderId.Data4 = -1961924164;
        *(_DWORD *)&ProviderId.Data4[4] = -1655403451;
        if ( v64[0] )
        {
          v24 = v64;
          do
          {
            *((_BYTE *)&ProviderId.Data1 + v20) += toupper(v22);
            ++v24;
            v25 = v23 + 1;
            v22 = *v24;
            v23 = v25 < 0x10 ? v25 : 0;
            v20 = (v20 + 1) & -(__int64)(v25 < 0x10);
          }
          while ( *v24 );
          v9 = 1;
        }
        if ( !EventRegister(&ProviderId, 0LL, 0LL, &RegHandle) )
        {
          if ( EventProviderEnabled(RegHandle, 0, 0LL) )
            v8 = 0;
          EventUnregister(RegHandle);
        }
        v7 = v34;
      }
      EventUnregister(qword_18033A830);
      qword_18033A830 = 0LL;
      dword_18033A810 = 0;
    }
    if ( !TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_18033A848, v16, v17) )
    {
      if ( v7 )
      {
        if ( dword_18033A848 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A848, 0x400000000000uLL) )
        {
          v32 = 10;
          v42 = (ULONGLONG *)&v32;
          v26 = v64;
          v43 = 4LL;
          v44 = &v39;
          v45 = 4LL;
          v47 = 4LL;
          v46 = &v30;
          v30 = ImageTuple != 0 ? v30 : 0;
          v49 = 4LL;
          v48 = &v34;
          v34 = ImageTuple != 0 ? v31 : 0;
          if ( !ImageTuple )
            v26 = "<unknown>";
          TlgCreateSz(&pDesc, v26);
          v27 = *((_DWORD *)v10 + 3);
          v51 = &v31;
          v35 = *((_DWORD *)v10 + 4);
          v31 = v27;
          v53 = &v35;
          v52 = 4LL;
          v54 = 4LL;
          TlgCreateSz(&v55, a3);
          v56 = &v33;
          v36 = a5;
          v58 = &v36;
          v60 = &v37;
          p_RegHandle = &RegHandle;
          v57 = 4LL;
          v59 = 4LL;
          v37 = v8;
          v61 = 4LL;
          LODWORD(RegHandle) = v9;
          v63 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_18033A848, &unk_1802DD88D, 0LL, 0LL, 0xEu, &pData);
        }
      }
      else if ( dword_18033A848 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18033A848, 0x400000000000uLL) )
      {
        LODWORD(RegHandle) = 10;
        v42 = &RegHandle;
        v28 = v64;
        v43 = 4LL;
        v44 = &v39;
        v45 = 4LL;
        v47 = 4LL;
        v46 = &v37;
        v37 = ImageTuple != 0 ? v30 : 0;
        v49 = 4LL;
        v48 = &v36;
        v36 = ImageTuple != 0 ? v31 : 0;
        if ( !ImageTuple )
          v28 = "<unknown>";
        TlgCreateSz(&pDesc, v28);
        v29 = *((_DWORD *)v10 + 3);
        v51 = (unsigned int *)&v33;
        v35 = *((_DWORD *)v10 + 4);
        v53 = &v35;
        v55.Ptr = (ULONGLONG)&v32;
        v56 = &v30;
        v33 = v29;
        v52 = 4LL;
        v54 = 4LL;
        v32 = v8;
        *(_QWORD *)&v55.Size = 4LL;
        v30 = v9;
        v57 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18033A848, &unk_1802DD80C, 0LL, 0LL, 0xBu, &pData);
      }
      EventUnregister(qword_18033A868);
      qword_18033A868 = 0LL;
      dword_18033A848 = 0;
    }
    if ( v9 && v8 )
      Sleep(0x3E8u);
    *((_DWORD *)v10 + 3) = 0;
  }
LABEL_48:
  ReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
}
