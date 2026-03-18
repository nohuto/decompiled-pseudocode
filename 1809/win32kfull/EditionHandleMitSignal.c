/*
 * XREFs of EditionHandleMitSignal @ 0x1C00AE650
 * Callers:
 *     <none>
 * Callees:
 *     xxxComputeInputSinkInfo @ 0x1C00053B0 (xxxComputeInputSinkInfo.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00AE738 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C00AE7DC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C0117C48 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C02264B4 (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 */

void __fastcall EditionHandleMitSignal(HANDLE a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  const CHAR *v10; // rdx
  _BYTE v11[8]; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+58h] [rbp-20h] BYREF

  if ( a1 == ghDITEvent )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v11,
      L"HandleMitSignal",
      0LL);
    while ( 1 )
    {
      v1 = gdwDITWakeReason & -gdwDITWakeReason;
      if ( !v1 )
        break;
      _InterlockedAnd(&gdwDITWakeReason, ~v1);
      if ( dword_1C030D340 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C030D340, 2uLL) )
      {
        if ( v1 == 1 )
        {
          v10 = "Mouse";
        }
        else if ( v1 == 2 )
        {
          v10 = "InputSinkFromPoint";
        }
        else
        {
          v7 = v1 - 2 - v6;
          if ( v7 )
          {
            v8 = v7 - 4;
            if ( v8 )
            {
              v9 = v8 - 8;
              if ( v9 )
              {
                if ( v9 == 16 )
                  v10 = "MouseInterceptCallout";
                else
                  v10 = "UNKNOWN";
              }
              else
              {
                v10 = "PNP KeyboardCallout";
              }
            }
            else
            {
              v10 = "PNP MouseCallout";
            }
          }
          else
          {
            v10 = "PTPInertiaToMT";
          }
        }
        TlgCreateSz(&pDesc, v10);
        TlgWrite((TraceLoggingHProvider)&dword_1C030D340, &unk_1C02D55AC, 0LL, 0LL, 3u, &pData);
      }
      switch ( v1 )
      {
        case 1u:
          ProcessMouseEvent();
          break;
        case 2u:
          EnterCrit(0LL, 1LL);
          xxxComputeInputSinkInfo();
          UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
          break;
        case 4u:
          if ( (gInertiaMTInfo & 1) != 0 )
            xxxRouteSyntheticTouchpadToMT(dword_1C031AE0C, stru_1C031AE10, stru_1C031AE18, qword_1C031AE20);
          break;
        case 8u:
        case 0x10u:
          ExecuteMarshaledPnpRequest(v1);
          break;
        case 0x20u:
          ExecuteMarshaledInterceptRequest();
          break;
      }
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v11);
  }
}
