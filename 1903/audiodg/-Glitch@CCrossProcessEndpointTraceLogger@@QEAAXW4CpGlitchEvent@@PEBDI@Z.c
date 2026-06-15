/*
 * XREFs of ?Glitch@CCrossProcessEndpointTraceLogger@@QEAAXW4CpGlitchEvent@@PEBDI@Z @ 0x140053EB4
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140002920 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140054510 (-GetInputDataPointer@CCrossProcessClientInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 *     ?GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140054D70 (-GetOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z @ 0x140056630 (-GetOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAA_KIPEAUAE_CURRENT_POSITION@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14000EEC0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140013FB4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateSz @ 0x14002C0B8 (_TlgCreateSz.c)
 */

__int64 __fastcall CCrossProcessEndpointTraceLogger::Glitch(__int64 a1, unsigned int a2, const CHAR *a3)
{
  const CHAR *v3; // r9
  GUID pRelatedActivityId; // [rsp+30h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  __int64 v9; // [rsp+60h] [rbp-9h]
  __int64 v10; // [rsp+68h] [rbp-1h]
  unsigned __int8 *Data4; // [rsp+70h] [rbp+7h]
  __int64 v12; // [rsp+78h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+17h] BYREF
  GUID *p_pRelatedActivityId; // [rsp+90h] [rbp+27h]
  __int64 v15; // [rsp+98h] [rbp+2Fh]

  v3 = a3;
  pRelatedActivityId.Data1 = 1;
  if ( (unsigned int)dword_140086000 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_140086000, 2uLL) )
  {
    v10 = 16LL;
    v9 = a1 + 8;
    *(_DWORD *)pRelatedActivityId.Data4 = a2;
    Data4 = pRelatedActivityId.Data4;
    v12 = 4LL;
    TlgCreateSz(&pDesc, v3);
    v15 = 4LL;
    p_pRelatedActivityId = &pRelatedActivityId;
    TlgWrite((TraceLoggingHProvider)&dword_140086000, &unk_14007026A, 0LL, &pRelatedActivityId, 6u, &pData);
  }
  (**(void (__fastcall ***)(__int64, _QWORD, GUID *, const CHAR *))(a1 + 104))(a1 + 104, 0LL, &pRelatedActivityId, v3);
  return (**(__int64 (__fastcall ***)(__int64, _QWORD, GUID *))(a1 + 104))(a1 + 104, a2, &pRelatedActivityId);
}
