/*
 * XREFs of LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x1800D1F1C
 * Callers:
 *     LdrDeleteEnclave @ 0x1800CECB0 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1800213E0 (RtlRunOnceExecuteOnce.c)
 *     _TlgKeywordOn @ 0x18004B5F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18004D1E8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1800D2458 (_TlgCreateSz.c)
 */

char __fastcall LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry(unsigned int a1)
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
    if ( dword_18015F590 > 4u )
    {
      LOBYTE(v1) = TlgKeywordOn((TraceLoggingHProvider)&dword_18015F590, 0x400000000000uLL);
      if ( (_BYTE)v1 )
      {
        pRelatedActivityId.Data1 = a1;
        TlgCreateSz(&pDesc, "LdrDeleteEnclave");
        v11 = 0;
        p_pRelatedActivityId = &pRelatedActivityId;
        v10 = cData;
        LOBYTE(v1) = TlgWrite(
                       (TraceLoggingHProvider)&dword_18015F590,
                       &unk_18012C584,
                       v4,
                       &pRelatedActivityId,
                       cData,
                       &pData);
      }
    }
  }
  return (char)v1;
}
