/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1803B40AC
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1803B4090 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     TraceLoggingProviderEnabled @ 0x18002F6C0 (TraceLoggingProviderEnabled.c)
 *     _TlgCreateSz @ 0x18006C010 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     TraceLoggingRegister @ 0x1800E3668 (TraceLoggingRegister.c)
 *     TraceLoggingUnregister @ 0x1800E3678 (TraceLoggingUnregister.c)
 *     GetImageTuple @ 0x1803B3FEC (GetImageTuple.c)
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
  DWORD ImageTuple; // r13d
  char *v11; // rdx
  int v12; // edi
  int v13; // r8d
  CHAR v14; // dl
  int v15; // r14d
  __int64 v16; // rdi
  CHAR *v17; // r15
  const CHAR *v18; // rdx
  int v19; // ecx
  unsigned int v20; // [rsp+38h] [rbp-D0h] BYREF
  int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  ULONGLONG RegHandle; // [rsp+40h] [rbp-C8h] BYREF
  int v23; // [rsp+48h] [rbp-C0h] BYREF
  int v24; // [rsp+4Ch] [rbp-BCh] BYREF
  int v25; // [rsp+50h] [rbp-B8h] BYREF
  int v26; // [rsp+54h] [rbp-B4h] BYREF
  int v27; // [rsp+58h] [rbp-B0h] BYREF
  GUID ProviderId; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  int *v30; // [rsp+98h] [rbp-70h]
  __int64 v31; // [rsp+A0h] [rbp-68h]
  int *v32; // [rsp+A8h] [rbp-60h]
  __int64 v33; // [rsp+B0h] [rbp-58h]
  int *v34; // [rsp+B8h] [rbp-50h]
  __int64 v35; // [rsp+C0h] [rbp-48h]
  unsigned int *v36; // [rsp+C8h] [rbp-40h]
  __int64 v37; // [rsp+D0h] [rbp-38h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D8h] [rbp-30h] BYREF
  int *v39; // [rsp+E8h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-18h]
  int *v41; // [rsp+F8h] [rbp-10h]
  __int64 v42; // [rsp+100h] [rbp-8h]
  int *v43; // [rsp+108h] [rbp+0h]
  __int64 v44; // [rsp+110h] [rbp+8h]
  ULONGLONG *p_RegHandle; // [rsp+118h] [rbp+10h]
  __int64 v46; // [rsp+120h] [rbp+18h]
  CHAR v47[272]; // [rsp+128h] [rbp+20h] BYREF

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
    ImageTuple = GetImageTuple(v8, v47, v9, &v21, &v20);
    if ( ImageTuple
      && a1 >= (unsigned __int64)&_ImageBase
      && (v11 = (char *)&_ImageBase + v20, v11 > (char *)&_ImageBase)
      && a1 <= (unsigned __int64)v11 )
    {
      v12 = a1 - (unsigned int)&_ImageBase;
    }
    else
    {
      v12 = 0;
    }
    v24 = v12;
    if ( *((_DWORD *)v4 + 4) == 1 && !TraceLoggingRegister((TraceLoggingHProvider)&unk_18050D140) )
    {
      if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&unk_18050D140, 0, 0LL) )
      {
        v14 = v47[0];
        v2 = v13 + 1;
        ProviderId.Data1 = 488056742;
        v3 = v13 + 1;
        *(_DWORD *)&ProviderId.Data2 = 1311216328;
        v15 = 0;
        *(_DWORD *)ProviderId.Data4 = -1961924164;
        *(_DWORD *)&ProviderId.Data4[4] = -1655403451;
        if ( v47[0] )
        {
          v16 = 0LL;
          v17 = v47;
          do
          {
            *((_BYTE *)&ProviderId.Data1 + v16) += toupper(v14);
            v14 = *++v17;
            v16 = (v16 + 1) & -(__int64)((unsigned int)(v15 + 1) < 0x10);
            v15 = (unsigned int)(v15 + 1) < 0x10 ? v15 + 1 : 0;
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
      TraceLoggingUnregister((TraceLoggingHProvider)&unk_18050D140);
    }
    if ( !TraceLoggingRegister((TraceLoggingHProvider)&dword_18050D108) )
    {
      if ( dword_18050D108 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18050D108, 0x400000000000uLL) )
      {
        v23 = 10;
        v30 = &v23;
        v18 = v47;
        v31 = 4LL;
        v32 = &v24;
        v33 = 4LL;
        v35 = 4LL;
        v34 = &v21;
        v21 = ImageTuple != 0 ? v21 : 0;
        v37 = 4LL;
        v36 = &v20;
        v20 &= -(ImageTuple != 0);
        if ( !ImageTuple )
          v18 = "<unknown>";
        TlgCreateSz(&pDesc, v18);
        v19 = *((_DWORD *)v4 + 3);
        v39 = &v25;
        v26 = *((_DWORD *)v4 + 4);
        v41 = &v26;
        v43 = &v27;
        p_RegHandle = &RegHandle;
        v25 = v19;
        v40 = 4LL;
        v42 = 4LL;
        v27 = v2;
        v44 = 4LL;
        LODWORD(RegHandle) = v3;
        v46 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_18050D108, &unk_18046C286, 0LL, 0LL, 0xBu, &pData);
      }
      TraceLoggingUnregister((TraceLoggingHProvider)&dword_18050D108);
    }
    if ( v3 && v2 )
      Sleep(0x3E8u);
    *((_DWORD *)v4 + 3) = 0;
  }
LABEL_36:
  ReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
}
