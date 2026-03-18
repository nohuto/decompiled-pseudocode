/*
 * XREFs of EditionHandleMitSignal @ 0x1C001E3E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxComputeInputSinkInfo @ 0x1C0007CA0 (xxxComputeInputSinkInfo.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C001E4A0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C001E4CC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00E95D8 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall EditionHandleMitSignal(HANDLE a1)
{
  int v1; // ebx
  int v2; // ebx
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // edx
  const CHAR *v6; // rdx
  char v7[8]; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+58h] [rbp-20h] BYREF

  if ( a1 == ghDITEvent )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v7,
      L"HandleMitSignal",
      0LL);
    while ( 1 )
    {
      v1 = gdwDITWakeReason & -gdwDITWakeReason;
      if ( !v1 )
        break;
      _InterlockedAnd(&gdwDITWakeReason, ~v1);
      if ( dword_1C03202C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 2uLL) )
      {
        if ( v1 == 1 )
        {
          v6 = "Mouse";
        }
        else if ( v1 == 2 )
        {
          v6 = "InputSinkFromPoint";
        }
        else if ( v1 - 2 == v5 )
        {
          v6 = "MouseInterceptCallout";
        }
        else
        {
          v6 = "UNKNOWN";
        }
        TlgCreateSz(&pDesc, v6);
        TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E76DD, 0LL, 0LL, 3u, &pData);
      }
      v2 = v1 - 1;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( v3 )
        {
          if ( v3 == 2 )
            ExecuteMarshaledInterceptRequest();
        }
        else
        {
          EnterCrit(0LL, 1LL);
          xxxComputeInputSinkInfo();
          UserSessionSwitchLeaveCrit(v4);
        }
      }
      else
      {
        ProcessMouseEvent();
      }
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v7);
  }
}
