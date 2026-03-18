/*
 * XREFs of RIMApplyPTPConfigRemedy @ 0x1C012FEAC
 * Callers:
 *     rimInputApc @ 0x1C008E340 (rimInputApc.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00304B0 (_TlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0050484 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     UserLogError @ 0x1C00F46E0 (UserLogError.c)
 *     RIMConfigurePointerDevice @ 0x1C011A76C (RIMConfigurePointerDevice.c)
 *     RIMFindReferencedSiblingPointerDeviceForMouseDevice @ 0x1C011AEB0 (RIMFindReferencedSiblingPointerDeviceForMouseDevice.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0130A38 (WPP_RECORDER_SF_qqd.c)
 *     ApiSetIsPTPInputEnabled @ 0x1C0164424 (ApiSetIsPTPInputEnabled.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C016517C (ApiSetSetUserPTPEnabledPreference.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMApplyPTPConfigRemedy(char a1, __int64 a2)
{
  int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // edx
  unsigned __int8 v7; // al
  __int64 v8; // r8
  _QWORD *v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // edx
  PVOID Object; // [rsp+40h] [rbp-49h] BYREF
  _DWORD v16[2]; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  int *v18; // [rsp+70h] [rbp-19h]
  __int64 v19; // [rsp+78h] [rbp-11h]
  __int64 v20; // [rsp+80h] [rbp-9h]
  int v21; // [rsp+88h] [rbp-1h] BYREF
  int v22; // [rsp+8Ch] [rbp+3h]
  _DWORD *v23; // [rsp+90h] [rbp+7h]
  __int64 v24; // [rsp+98h] [rbp+Fh]
  __int64 v25; // [rsp+A0h] [rbp+17h]
  _DWORD v26[2]; // [rsp+A8h] [rbp+1Fh] BYREF

  if ( !*(_BYTE *)(a2 + 48) && (*(_DWORD *)(a2 + 184) & 0x2000000) != 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v16, 1, 0);
    if ( (unsigned int)ApiSetIsPTPInputEnabled() && (*(_DWORD *)(a2 + 184) & 0x4000000) != 0 )
    {
      LOBYTE(v4) = 3;
      WPP_RECORDER_SF_qqd(
        gRimLog,
        v4,
        22,
        12,
        (__int64)&WPP_73f007a49fbc3e0c9d7274cb4a467b6e_Traceguids,
        a1,
        a2,
        *(_BYTE *)(a2 + 206));
      v5 = *(_DWORD *)(a2 + 2004);
      v6 = v5 / 0x19;
      if ( v5 % 0x19 == 1 && (v7 = *(_BYTE *)(a2 + 206), *(_BYTE *)(a2 + 206) = v7 + 1, v7 < 0x14u) )
      {
        LOBYTE(v6) = 3;
        WPP_RECORDER_SF_qqd(
          gRimLog,
          v6,
          22,
          13,
          (__int64)&WPP_73f007a49fbc3e0c9d7274cb4a467b6e_Traceguids,
          a1,
          a2,
          v7 + 1);
        Object = 0LL;
        RIMFindReferencedSiblingPointerDeviceForMouseDevice(a2, &Object, v8);
        v9 = Object;
        if ( Object )
        {
          v10 = *((_QWORD *)Object + 53);
          RIMLockExclusive(v10 + 104);
          if ( *(_BYTE *)(a2 + 206) == 1
            && hProvider > 5u
            && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000000uLL) )
          {
            v19 = 2LL;
            v18 = &v21;
            v20 = *(_QWORD *)(a2 + 216);
            v21 = *(unsigned __int16 *)(a2 + 208);
            v23 = v26;
            v25 = v9[38];
            v26[0] = *((unsigned __int16 *)v9 + 148);
            v22 = 0;
            v24 = 2LL;
            v26[1] = 0;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C019FD32, 0LL, 0LL, 6u, &pData);
          }
          RIMConfigurePointerDevice(v10, (__int64)(v9 + 11), v9[69]);
          if ( !v9[71] )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
          ApiSetSetUserPTPEnabledPreference(v9 + 11, v9[69], v10);
          *(_QWORD *)(v10 + 112) = 0LL;
          ExReleasePushLockExclusiveEx(v10 + 104, 0LL);
          KeLeaveCriticalRegion();
          ObfDereferenceObject(v9);
        }
      }
      else if ( *(_BYTE *)(a2 + 206) >= 0x14u )
      {
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x800000000000uLL) )
        {
          v19 = 2LL;
          v18 = &v21;
          v20 = *(_QWORD *)(a2 + 216);
          v21 = *(unsigned __int16 *)(a2 + 208);
          v22 = 0;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C019FCF9, 0LL, 0LL, 4u, &pData);
        }
        UserLogError(-1073741550);
        *(_DWORD *)(a2 + 184) &= ~0x4000000u;
        LOBYTE(v14) = 3;
        WPP_RECORDER_SF_qqd(
          gRimLog,
          v14,
          22,
          14,
          (__int64)&WPP_73f007a49fbc3e0c9d7274cb4a467b6e_Traceguids,
          a1,
          a2,
          *(_BYTE *)(a2 + 206));
      }
    }
    if ( v16[0] && !v16[1] && (int)IsLeaveEditionCritSupported() >= 0 )
      LeaveEditionCrit();
  }
}
