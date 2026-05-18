/*
 * XREFs of ?FallBackToBDD@@YA_NXZ @ 0x18000245C
 * Callers:
 *     ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x18000261C (-ShouldRestartSession@@YA_NU_FILETIME@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001090 (_TlgWrite.c)
 *     ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x1800012BC (-ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x180001410 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     __security_check_cookie @ 0x180005060 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800065E0 (_guard_dispatch_icall_nop.c)
 */

bool FallBackToBDD(void)
{
  HMODULE LibraryW; // rax
  HMODULE v1; // rbx
  FARPROC ProcAddress; // rax
  __int64 v3; // r8
  const GUID *v4; // r9
  int v5; // edx
  _unnamed_type_gDwmInitTelemetryAggregator_ *v6; // rcx
  int v8; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v9[5]; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-39h] BYREF
  GUID *v11; // [rsp+80h] [rbp-19h]
  __int64 v12; // [rsp+88h] [rbp-11h]
  int *v13; // [rsp+90h] [rbp-9h]
  __int64 v14; // [rsp+98h] [rbp-1h]
  int *v15; // [rsp+A0h] [rbp+7h]
  __int64 v16; // [rsp+A8h] [rbp+Fh]
  GUID *v17; // [rsp+B0h] [rbp+17h]
  __int64 v18; // [rsp+B8h] [rbp+1Fh]
  GUID *v19; // [rsp+C0h] [rbp+27h]
  __int64 v20; // [rsp+C8h] [rbp+2Fh]
  unsigned __int16 *v21; // [rsp+D0h] [rbp+37h]
  __int64 v22; // [rsp+D8h] [rbp+3Fh]

  v8 = -1073741823;
  LibraryW = LoadLibraryW(L"gdi32.dll");
  v1 = LibraryW;
  if ( LibraryW )
  {
    ProcAddress = GetProcAddress(LibraryW, "D3DKMTEscape");
    if ( ProcAddress )
    {
      v9[1] = 1029LL;
      v9[3] = 0LL;
      v9[0] = 0LL;
      v9[2] = 0LL;
      v8 = ((__int64 (__fastcall *)(_QWORD *))ProcAddress)(v9);
      v5 = v8;
      if ( v8 >= 0 )
      {
        ++dword_18000B74C;
        v6 = (_unnamed_type_gDwmInitTelemetryAggregator_ *)(unsigned int)(dword_18000B758 + 1);
        dword_18000B758 = (int)v6;
        if ( (int)v6 > 10 )
        {
          _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v6, (unsigned int)v8, v3, v4);
          v5 = v8;
          dword_18000B758 = 0;
        }
        if ( (unsigned int)dword_18000B000 > 5
          && (qword_18000B010 & 0x400000000000LL) != 0
          && (qword_18000B018 & 0x400000000000LL) == qword_18000B018 )
        {
          v12 = 16LL;
          v11 = &gDwmInitTelemetryActivityId;
          v13 = &v8;
          v15 = &gDwmNumRetriesSoFar;
          v17 = &gDwmInitTargetAppSessionGuid;
          v19 = &gDwmInitTargetAppSessionGuid;
          v21 = &gSessionId;
          v14 = 4LL;
          v16 = 4LL;
          v18 = 16LL;
          v20 = 16LL;
          v22 = 2LL;
          TlgWrite(v6, &unk_180008808, (LPCGUID)0x400000000000LL, v4, 8u, &pData);
          v5 = v8;
        }
        TraceLoggingWriteEtw(
          (const struct _TlgProvider_t *)1,
          v5 | 0x10000000,
          (const GUID *)(unsigned int)gDwmNumRetriesSoFar);
      }
    }
    FreeLibrary(v1);
  }
  return v8 >= 0;
}
