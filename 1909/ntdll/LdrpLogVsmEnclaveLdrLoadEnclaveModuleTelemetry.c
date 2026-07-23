/*
 * XREFs of LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1800D08AC
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800CD760 (LdrLoadEnclaveModule.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800062B0 (_TlgKeywordOn.c)
 *     RtlRunOnceExecuteOnce @ 0x18000AFD0 (RtlRunOnceExecuteOnce.c)
 *     _TlgWrite @ 0x1800899FC (_TlgWrite.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1800D0C28 (_TlgCreateSz.c)
 */

char __fastcall LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry(unsigned int a1)
{
  struct _PEB *v1; // rax
  UINT32 cData; // r10d
  LPCGUID v4; // r8
  GUID pRelatedActivityId; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  GUID *p_pRelatedActivityId; // [rsp+70h] [rbp-28h]
  UINT32 v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  v1 = NtCurrentPeb();
  if ( v1->ProcessHeap )
  {
    LOBYTE(v1) = RtlRunOnceExecuteOnce(&VsmEnclaveTelemetryInitRunOnce, VsmEnclaveTelemetryInitOnce, 0LL, 0LL);
    if ( dword_18015F4C0 > 4u )
    {
      LOBYTE(v1) = TlgKeywordOn((TraceLoggingHProvider)&dword_18015F4C0, 0x400000000000uLL);
      if ( (_BYTE)v1 )
      {
        pRelatedActivityId.Data1 = a1;
        TlgCreateSz(&pDesc, "LdrLoadEnclaveModule");
        v11 = 0;
        p_pRelatedActivityId = &pRelatedActivityId;
        v10 = cData;
        LOBYTE(v1) = TlgWrite(
                       (TraceLoggingHProvider)&dword_18015F4C0,
                       &unk_18012B81D,
                       v4,
                       &pRelatedActivityId,
                       cData,
                       &pData);
      }
    }
  }
  return (char)v1;
}
