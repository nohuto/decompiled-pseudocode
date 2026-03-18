/*
 * XREFs of ?_SaveWCGEnforcedToMonitorStore@DXGMONITOR@@AEAAJE@Z @ 0x1C02CBA24
 * Callers:
 *     ?SetEnforceWideColorMode@DXGMONITOR@@QEAAJE@Z @ 0x1C02CDD70 (-SetEnforceWideColorMode@DXGMONITOR@@QEAAJE@Z.c)
 * Callees:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C01752C0 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_SaveWCGEnforcedToMonitorStore(DXGMONITOR *this, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+60h] [rbp+18h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+20h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 0LL, &KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"WCGEnforced");
    Data = a2;
    v5 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
    if ( (int)v5 >= 0 )
    {
      return 0LL;
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v7, v6, v8);
      *(_QWORD *)(v9 + 24) = this;
      *(_QWORD *)(v9 + 32) = v5;
      WdLogEvent5_WdError(v9);
      return (unsigned int)v5;
    }
  }
  return result;
}
