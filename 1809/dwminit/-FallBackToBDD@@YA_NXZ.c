/*
 * XREFs of ?FallBackToBDD@@YA_NXZ @ 0x18000246C
 * Callers:
 *     ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x180002648 (-ShouldRestartSession@@YA_NU_FILETIME@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001090 (_TlgWrite.c)
 *     ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x1800012CC (-ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x180001420 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     __security_check_cookie @ 0x1800050C0 (__security_check_cookie.c)
 *     memset_0 @ 0x180005A56 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180006620 (_guard_dispatch_icall_nop.c)
 */

bool FallBackToBDD(void)
{
  HMODULE LibraryW; // rax
  HMODULE v1; // rbx
  FARPROC ProcAddress; // rdi
  __int64 v3; // r8
  const GUID *v4; // r9
  int v5; // edx
  _unnamed_type_gDwmInitTelemetryAggregator_ *v6; // rcx
  int v8; // [rsp+38h] [rbp-69h] BYREF
  __int64 v9; // [rsp+40h] [rbp-61h] BYREF
  int v10; // [rsp+48h] [rbp-59h]
  __int64 v11; // [rsp+50h] [rbp-51h]
  int v12; // [rsp+58h] [rbp-49h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-39h] BYREF
  GUID *v14; // [rsp+88h] [rbp-19h]
  __int64 v15; // [rsp+90h] [rbp-11h]
  int *v16; // [rsp+98h] [rbp-9h]
  __int64 v17; // [rsp+A0h] [rbp-1h]
  int *v18; // [rsp+A8h] [rbp+7h]
  __int64 v19; // [rsp+B0h] [rbp+Fh]
  GUID *v20; // [rsp+B8h] [rbp+17h]
  __int64 v21; // [rsp+C0h] [rbp+1Fh]
  GUID *v22; // [rsp+C8h] [rbp+27h]
  __int64 v23; // [rsp+D0h] [rbp+2Fh]
  unsigned __int16 *v24; // [rsp+D8h] [rbp+37h]
  __int64 v25; // [rsp+E0h] [rbp+3Fh]

  v8 = -1073741823;
  LibraryW = LoadLibraryW(L"gdi32.dll");
  v1 = LibraryW;
  if ( LibraryW )
  {
    ProcAddress = GetProcAddress(LibraryW, "D3DKMTEscape");
    if ( ProcAddress )
    {
      memset_0(&v9, 0, 0x20uLL);
      v9 = 0LL;
      v10 = 1029;
      v11 = 0LL;
      v12 = 0;
      v8 = ((__int64 (__fastcall *)(__int64 *))ProcAddress)(&v9);
      v5 = v8;
      if ( v8 >= 0 )
      {
        ++dword_18000B754;
        v6 = (_unnamed_type_gDwmInitTelemetryAggregator_ *)(unsigned int)(dword_18000B760 + 1);
        dword_18000B760 = (int)v6;
        if ( (int)v6 > 10 )
        {
          _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v6, (unsigned int)v8, v3, v4);
          v5 = v8;
          dword_18000B760 = 0;
        }
        if ( (unsigned int)dword_18000B000 > 5
          && (qword_18000B010 & 0x400000000000LL) != 0
          && (qword_18000B018 & 0x400000000000LL) == qword_18000B018 )
        {
          v15 = 16LL;
          v14 = &gDwmInitTelemetryActivityId;
          v16 = &v8;
          v18 = &gDwmNumRetriesSoFar;
          v20 = &gDwmInitTargetAppSessionGuid;
          v22 = &gDwmInitTargetAppSessionGuid;
          v24 = &gSessionId;
          v17 = 4LL;
          v19 = 4LL;
          v21 = 16LL;
          v23 = 16LL;
          v25 = 2LL;
          TlgWrite(v6, &unk_1800087A8, (LPCGUID)0x400000000000LL, v4, 8u, &pData);
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
