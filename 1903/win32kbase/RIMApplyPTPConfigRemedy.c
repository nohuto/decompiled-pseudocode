/*
 * XREFs of RIMApplyPTPConfigRemedy @ 0x1C015CE68
 * Callers:
 *     rimInputApc @ 0x1C006E9D0 (rimInputApc.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     TraceLoggingProviderEnabled @ 0x1C0032B80 (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0067E40 (WPP_RECORDER_SF_qqd.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C006B5CC (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C006BA34 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C00BF498 (RIMFindSiblingPointerDeviceForMouse.c)
 *     IsPTPInputEnabled @ 0x1C0109F4C (IsPTPInputEnabled.c)
 *     RIMConfigurePointerDevice @ 0x1C0142FF0 (RIMConfigurePointerDevice.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C01A0FC4 (ApiSetSetUserPTPEnabledPreference.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMApplyPTPConfigRemedy(char a1, __int64 a2)
{
  int v4; // edx
  __int64 v5; // r8
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned __int8 v8; // al
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  void *v14; // rcx
  void *v15; // rdi
  int v16; // edx
  __int64 v17; // r8
  unsigned __int16 *v18; // r9
  __int64 v19; // [rsp+38h] [rbp-81h]
  __int64 v20; // [rsp+40h] [rbp-79h] BYREF
  _OWORD *v21; // [rsp+48h] [rbp-71h]
  _BYTE v22[16]; // [rsp+50h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-59h] BYREF
  int *v24; // [rsp+80h] [rbp-39h]
  __int64 v25; // [rsp+88h] [rbp-31h]
  __int64 v26; // [rsp+90h] [rbp-29h]
  int v27; // [rsp+98h] [rbp-21h] BYREF
  int v28; // [rsp+9Ch] [rbp-1Dh]
  int *v29; // [rsp+A0h] [rbp-19h]
  __int64 v30; // [rsp+A8h] [rbp-11h]
  __int64 v31; // [rsp+B0h] [rbp-9h]
  int v32; // [rsp+B8h] [rbp-1h] BYREF
  int v33; // [rsp+BCh] [rbp+3h]
  _OWORD v34[2]; // [rsp+C0h] [rbp+7h] BYREF
  int v35; // [rsp+E0h] [rbp+27h]

  if ( !*(_BYTE *)(a2 + 48) && (*(_DWORD *)(a2 + 184) & 0x2000000) != 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v22, 1, 0);
    if ( (unsigned int)IsPTPInputEnabled() && (*(_DWORD *)(a2 + 184) & 0x4000000) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v4) = 4;
        WPP_RECORDER_SF_qqd(
          (_DWORD)gRimLog,
          v4,
          1,
          12,
          (__int64)&WPP_22c64a88e7383c76adeac9d441829d05_Traceguids,
          a1,
          a2,
          *(_BYTE *)(a2 + 206));
      }
      v6 = *(_DWORD *)(a2 + 2180);
      v7 = v6 / 0x19;
      if ( v6 % 0x19 == 1 && (v8 = *(_BYTE *)(a2 + 206), *(_BYTE *)(a2 + 206) = v8 + 1, v8 < 0x14u) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 4;
          WPP_RECORDER_SF_qqd(
            (_DWORD)gRimLog,
            v7,
            1,
            13,
            (__int64)&WPP_22c64a88e7383c76adeac9d441829d05_Traceguids,
            a1,
            a2,
            v8 + 1);
        }
        v20 = 0LL;
        RIMFindSiblingPointerDeviceForMouse(a2, &v20, v5);
        v9 = v20;
        if ( !v20 )
          goto LABEL_30;
        v10 = *(_QWORD *)(v20 + 424);
        RIMLockExclusive(v10 + 104);
        if ( *(_BYTE *)(a2 + 206) == 1
          && hProvider > 5u
          && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000000uLL) )
        {
          v25 = 2LL;
          v24 = &v27;
          v26 = *(_QWORD *)(a2 + 216);
          v27 = *(unsigned __int16 *)(a2 + 208);
          v29 = &v32;
          v31 = *(_QWORD *)(v9 + 304);
          v32 = *(unsigned __int16 *)(v9 + 296);
          v28 = 0;
          v30 = 2LL;
          v33 = 0;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E5DB7, 0LL, 0LL, 6u, &pData);
        }
        RIMConfigurePointerDevice(v10, v9 + 88, *(_QWORD *)(v9 + 552));
        if ( !*(_QWORD *)(v9 + 568) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
        ApiSetSetUserPTPEnabledPreference(v9 + 88, *(_QWORD *)(v9 + 552), v10);
        *(_QWORD *)(v10 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(v10 + 104, 0LL);
        KeLeaveCriticalRegion();
        v14 = (void *)v9;
      }
      else
      {
        if ( *(_BYTE *)(a2 + 206) < 0x14u )
          goto LABEL_30;
        v20 = 0LL;
        v15 = 0LL;
        if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 0, 0LL) )
        {
          RIMFindSiblingPointerDeviceForMouse(a2, &v20, v17);
          v15 = (void *)v20;
        }
        v35 = *(_DWORD *)L">";
        v21 = v34;
        v20 = 2359330LL;
        v34[0] = *(_OWORD *)L"<Unknown sibling>";
        v34[1] = *(_OWORD *)L" sibling>";
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000000uLL) )
        {
          v25 = 2LL;
          v24 = &v27;
          v26 = *(_QWORD *)(a2 + 216);
          v27 = *(unsigned __int16 *)(a2 + 208);
          v29 = &v32;
          v31 = *((_QWORD *)v18 + 1);
          v32 = *v18;
          v28 = 0;
          v30 = 2LL;
          v33 = 0;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C01E5D6B, 0LL, 0LL, 6u, &pData);
        }
        *(_DWORD *)(a2 + 184) &= ~0x4000000u;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 4;
          LODWORD(v19) = *(unsigned __int8 *)(a2 + 206);
          WPP_RECORDER_SF_qqd(
            (_DWORD)gRimLog,
            v16,
            1,
            14,
            (__int64)&WPP_22c64a88e7383c76adeac9d441829d05_Traceguids,
            a1,
            a2,
            v19,
            v20,
            v21);
        }
        if ( !v15 )
          goto LABEL_30;
        v14 = v15;
      }
      ObfDereferenceObject(v14);
    }
LABEL_30:
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v22);
  }
}
