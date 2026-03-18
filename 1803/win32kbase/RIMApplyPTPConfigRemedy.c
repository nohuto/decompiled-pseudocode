/*
 * XREFs of RIMApplyPTPConfigRemedy @ 0x1C01087F4
 * Callers:
 *     rimInputApc @ 0x1C00FE6E0 (rimInputApc.c)
 * Callees:
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C000F3BC (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     UserLogError @ 0x1C00BCF40 (UserLogError.c)
 *     RIMConfigurePointerDevice @ 0x1C00EE77C (RIMConfigurePointerDevice.c)
 *     RIMFindReferencedSiblingPointerDeviceForMouseDevice @ 0x1C00EF680 (RIMFindReferencedSiblingPointerDeviceForMouseDevice.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0109320 (WPP_RECORDER_SF_qqd.c)
 *     ApiSetIsPTPInputEnabled @ 0x1C0140E88 (ApiSetIsPTPInputEnabled.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C0141A98 (ApiSetSetUserPTPEnabledPreference.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMApplyPTPConfigRemedy(__int64 a1, __int64 a2)
{
  int v3; // edx
  int v4; // r8d
  int v5; // r8d
  unsigned int v6; // ecx
  unsigned __int8 v7; // al
  _QWORD *v8; // r15
  __int64 v9; // rsi
  const GUID *v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r9
  int v14; // edx
  int v15; // r8d
  PVOID Object; // [rsp+40h] [rbp-49h] BYREF
  _DWORD v17[2]; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  int *v19; // [rsp+70h] [rbp-19h]
  __int64 v20; // [rsp+78h] [rbp-11h]
  __int64 v21; // [rsp+80h] [rbp-9h]
  int v22; // [rsp+88h] [rbp-1h] BYREF
  int v23; // [rsp+8Ch] [rbp+3h]
  _DWORD *v24; // [rsp+90h] [rbp+7h]
  __int64 v25; // [rsp+98h] [rbp+Fh]
  __int64 v26; // [rsp+A0h] [rbp+17h]
  _DWORD v27[2]; // [rsp+A8h] [rbp+1Fh] BYREF

  if ( !*(_BYTE *)(a2 + 48) && (*(_DWORD *)(a2 + 184) & 0x4000000) != 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v17, 1, 0);
    if ( (unsigned int)ApiSetIsPTPInputEnabled() && (*(_DWORD *)(a2 + 184) & 0x8000000) != 0 )
    {
      WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v3, v4, 12);
      v6 = *(_DWORD *)(a2 + 1652);
      if ( v6 % 0x19 == 1 && (v7 = *(_BYTE *)(a2 + 206), *(_BYTE *)(a2 + 206) = v7 + 1, v7 < 0x14u) )
      {
        WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v6 / 0x19, v5, 13);
        Object = 0LL;
        RIMFindReferencedSiblingPointerDeviceForMouseDevice(a2, &Object);
        v8 = Object;
        if ( Object )
        {
          v9 = *((_QWORD *)Object + 52);
          RIMLockExclusive(v9 + 96);
          if ( *(_BYTE *)(a2 + 206) == 1
            && hProvider > 5u
            && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000000uLL) )
          {
            v20 = 2LL;
            v19 = &v22;
            v21 = *(_QWORD *)(a2 + 216);
            v22 = *(unsigned __int16 *)(a2 + 208);
            v24 = v27;
            v26 = v8[37];
            v27[0] = *((unsigned __int16 *)v8 + 144);
            v23 = 0;
            v25 = 2LL;
            v27[1] = 0;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0178C4F, 0LL, v10, 6u, &pData);
          }
          RIMConfigurePointerDevice(v9, (__int64)(v8 + 10), v8[68]);
          if ( !v8[70] )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
          ApiSetSetUserPTPEnabledPreference(v8 + 10, v8[68], v9);
          *(_QWORD *)(v9 + 104) = 0LL;
          ExReleasePushLockExclusiveEx(v9 + 96, 0LL);
          KeLeaveCriticalRegion();
          ObfDereferenceObject(v8);
        }
      }
      else if ( *(_BYTE *)(a2 + 206) >= 0x14u )
      {
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000000uLL) )
        {
          v20 = 2LL;
          v19 = &v22;
          v21 = *(_QWORD *)(a2 + 216);
          v22 = *(unsigned __int16 *)(a2 + 208);
          v23 = 0;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0178C16, 0LL, v13, 4u, &pData);
        }
        UserLogError(-1073741550);
        *(_DWORD *)(a2 + 184) &= ~0x8000000u;
        WPP_RECORDER_SF_qqd(WPP_GLOBAL_Control->DeviceExtension, v14, v15, 14);
      }
    }
    if ( v17[0] && !v17[1] && (int)IsLeaveEditionCritSupported() >= 0 )
      LeaveEditionCrit();
  }
}
