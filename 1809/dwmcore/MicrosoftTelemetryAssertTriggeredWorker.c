/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x180222134
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180222118 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x18002C0A0 (TraceLoggingProviderEnabled.c)
 *     TraceLoggingRegisterEx @ 0x180078EF4 (TraceLoggingRegisterEx.c)
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1800E2D04 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     GetImageTuple @ 0x180222074 (GetImageTuple.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned __int64 a1)
{
  int v2; // esi
  int v3; // r12d
  struct MicrosoftTelemetryAssertTriggeredNode *v4; // rbx
  struct MicrosoftTelemetryAssertTriggeredNode *v5; // rax
  DWORD TickCount; // eax
  struct MicrosoftTelemetryAssertTriggeredNode *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  void (__stdcall *v10)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v11; // r8
  DWORD ImageTuple; // r13d
  int v13; // edi
  CHAR v14; // dl
  unsigned int v15; // r14d
  __int64 v16; // rdi
  CHAR *v17; // r15
  unsigned int v18; // ecx
  const CHAR *v19; // rdx
  int v20; // ecx
  unsigned int v21; // [rsp+38h] [rbp-D0h] BYREF
  int v22; // [rsp+3Ch] [rbp-CCh] BYREF
  ULONGLONG RegHandle; // [rsp+40h] [rbp-C8h] BYREF
  int v24; // [rsp+48h] [rbp-C0h] BYREF
  int v25; // [rsp+4Ch] [rbp-BCh] BYREF
  int v26; // [rsp+50h] [rbp-B8h] BYREF
  int v27; // [rsp+54h] [rbp-B4h] BYREF
  int v28; // [rsp+58h] [rbp-B0h] BYREF
  GUID ProviderId; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  int *v31; // [rsp+98h] [rbp-70h]
  __int64 v32; // [rsp+A0h] [rbp-68h]
  int *v33; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp-58h]
  int *v35; // [rsp+B8h] [rbp-50h]
  __int64 v36; // [rsp+C0h] [rbp-48h]
  unsigned int *v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp-30h] BYREF
  int *v40; // [rsp+E8h] [rbp-20h]
  __int64 v41; // [rsp+F0h] [rbp-18h]
  int *v42; // [rsp+F8h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp-8h]
  int *v44; // [rsp+108h] [rbp+0h]
  __int64 v45; // [rsp+110h] [rbp+8h]
  ULONGLONG *p_RegHandle; // [rsp+118h] [rbp+10h]
  __int64 v47; // [rsp+120h] [rbp+18h]
  CHAR v48[272]; // [rsp+128h] [rbp+20h] BYREF

  v2 = 0;
  v3 = 0;
  AcquireSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
  v4 = g_MicrosoftTelemetryAssertsTriggeredList;
  if ( !g_MicrosoftTelemetryAssertsTriggeredList )
    goto LABEL_5;
  do
  {
    if ( *(_QWORD *)v4 == a1 )
      break;
    v4 = (struct MicrosoftTelemetryAssertTriggeredNode *)*((_QWORD *)v4 + 3);
  }
  while ( v4 );
  if ( !v4 )
  {
LABEL_5:
    v5 = (struct MicrosoftTelemetryAssertTriggeredNode *)LocalAlloc(0x40u, 0x20uLL);
    v4 = v5;
    if ( !v5 )
      goto LABEL_36;
    *(_QWORD *)v5 = a1;
    TickCount = GetTickCount();
    v7 = g_MicrosoftTelemetryAssertsTriggeredList;
    *((_DWORD *)v4 + 2) = TickCount - 60001;
    *(_QWORD *)((char *)v4 + 12) = 0LL;
    *((_QWORD *)v4 + 3) = v7;
    g_MicrosoftTelemetryAssertsTriggeredList = v4;
  }
  ++*((_DWORD *)v4 + 3);
  ++*((_DWORD *)v4 + 4);
  if ( GetTickCount() - *((_DWORD *)v4 + 2) > 0xEA60 )
  {
    *((_DWORD *)v4 + 2) = GetTickCount();
    ImageTuple = GetImageTuple(v8, v48, v9, &v22, &v21);
    if ( ImageTuple
      && a1 >= (unsigned __int64)&_ImageBase
      && (v10 = (void (__stdcall *)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID))((char *)&_ImageBase + v21),
          (struct HINSTANCE__ *)v10 > &_ImageBase)
      && a1 <= (unsigned __int64)v10 )
    {
      v13 = a1 - (unsigned int)&_ImageBase;
    }
    else
    {
      v13 = 0;
    }
    v25 = v13;
    if ( *((_DWORD *)v4 + 4) == 1 && !TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1803064E0, v10, v11) )
    {
      if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_1803064E0, 0, 0LL) )
      {
        v14 = v48[0];
        v2 = 1;
        ProviderId.Data1 = 488056742;
        v3 = 1;
        *(_DWORD *)&ProviderId.Data2 = 1311216328;
        v15 = 0;
        *(_DWORD *)ProviderId.Data4 = -1961924164;
        *(_DWORD *)&ProviderId.Data4[4] = -1655403451;
        if ( v48[0] )
        {
          v16 = 0LL;
          v17 = v48;
          do
          {
            *((_BYTE *)&ProviderId.Data1 + v16) += toupper(v14);
            ++v17;
            v18 = v15 + 1;
            v14 = *v17;
            v15 = v18 < 0x10 ? v18 : 0;
            v16 = (v16 + 1) & -(__int64)(v18 < 0x10);
          }
          while ( *v17 );
        }
        if ( !EventRegister(&ProviderId, 0LL, 0LL, &RegHandle) )
        {
          if ( EventProviderEnabled(RegHandle, 0, 0LL) )
            v2 = 0;
          EventUnregister(RegHandle);
        }
      }
      EventUnregister(qword_180306500);
      qword_180306500 = 0LL;
      dword_1803064E0 = 0;
    }
    if ( !TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1803064A8, v10, v11) )
    {
      if ( dword_1803064A8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1803064A8, 0x400000000000uLL) )
      {
        v24 = 10;
        v31 = &v24;
        v19 = v48;
        v32 = 4LL;
        v33 = &v25;
        v34 = 4LL;
        v36 = 4LL;
        v35 = &v22;
        v22 = ImageTuple != 0 ? v22 : 0;
        v38 = 4LL;
        v37 = &v21;
        v21 &= -(ImageTuple != 0);
        if ( !ImageTuple )
          v19 = "<unknown>";
        TlgCreateSz(&pDesc, v19);
        v20 = *((_DWORD *)v4 + 3);
        v40 = &v26;
        v27 = *((_DWORD *)v4 + 4);
        v42 = &v27;
        v44 = &v28;
        p_RegHandle = &RegHandle;
        v26 = v20;
        v41 = 4LL;
        v43 = 4LL;
        v28 = v2;
        v45 = 4LL;
        LODWORD(RegHandle) = v3;
        v47 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1803064A8, &unk_1802B9137, 0LL, 0LL, 0xBu, &pData);
      }
      EventUnregister(qword_1803064C8);
      qword_1803064C8 = 0LL;
      dword_1803064A8 = 0;
    }
    if ( v3 && v2 )
      Sleep(0x3E8u);
    *((_DWORD *)v4 + 3) = 0;
  }
LABEL_36:
  ReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
}
