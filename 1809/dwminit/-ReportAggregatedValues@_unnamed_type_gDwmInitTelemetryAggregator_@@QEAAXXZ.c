/*
 * XREFs of ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x1800012CC
 * Callers:
 *     ?FallBackToBDD@@YA_NXZ @ 0x18000246C (-FallBackToBDD@@YA_NXZ.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180002714 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002B10 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     DwmpTerminateSessionProcess @ 0x1800033C0 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     _TlgWrite @ 0x180001090 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800050C0 (__security_check_cookie.c)
 */

void __fastcall _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(
        _unnamed_type_gDwmInitTelemetryAggregator_ *this,
        __int64 a2,
        __int64 a3,
        const GUID *a4)
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-59h] BYREF
  GUID *v5; // [rsp+50h] [rbp-39h]
  __int64 v6; // [rsp+58h] [rbp-31h]
  int *v7; // [rsp+60h] [rbp-29h]
  __int64 v8; // [rsp+68h] [rbp-21h]
  int *v9; // [rsp+70h] [rbp-19h]
  __int64 v10; // [rsp+78h] [rbp-11h]
  int *v11; // [rsp+80h] [rbp-9h]
  __int64 v12; // [rsp+88h] [rbp-1h]
  int *v13; // [rsp+90h] [rbp+7h]
  __int64 v14; // [rsp+98h] [rbp+Fh]
  GUID *v15; // [rsp+A0h] [rbp+17h]
  __int64 v16; // [rsp+A8h] [rbp+1Fh]
  unsigned __int16 *v17; // [rsp+B0h] [rbp+27h]
  __int64 v18; // [rsp+B8h] [rbp+2Fh]
  unsigned __int16 *v19; // [rsp+C0h] [rbp+37h]
  __int64 v20; // [rsp+C8h] [rbp+3Fh]

  if ( (gDwmInitTelemetryAggregator || dword_18000B754 || dword_18000B758 || dword_18000B75C)
    && (unsigned int)dword_18000B000 > 5
    && (qword_18000B010 & 0x400000000000LL) != 0
    && (qword_18000B018 & 0x400000000000LL) == qword_18000B018 )
  {
    v6 = 16LL;
    v5 = &gDwmInitTelemetryActivityId;
    v7 = &gDwmInitTelemetryAggregator;
    v9 = &dword_18000B754;
    v11 = &dword_18000B758;
    v13 = &dword_18000B75C;
    v15 = &gDwmInitTargetAppSessionGuid;
    v17 = &gBootId;
    v19 = &gSessionId;
    v8 = 4LL;
    v10 = 4LL;
    v12 = 4LL;
    v14 = 4LL;
    v16 = 16LL;
    v18 = 2LL;
    v20 = 2LL;
    TlgWrite(this, &unk_1800089A5, 0LL, a4, 0xAu, &pData);
  }
}
