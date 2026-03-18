/*
 * XREFs of ?_SaveSDRWhiteLevelToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C02CB688
 * Callers:
 *     ?SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z @ 0x1C02CDF68 (-SetSDRWhiteLevel@DXGMONITOR@@QEAAJK@Z.c)
 * Callees:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C01752C0 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_SaveSDRWhiteLevelToMonitorStore(DXGMONITOR *this, int a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  Data = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 0LL, &KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"SDRWhiteLevel");
    v4 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
    if ( (int)v4 >= 0 )
    {
      return 0LL;
    }
    else
    {
      v8 = WdLogNewEntry5_WdError(v6, v5, v7);
      *(_QWORD *)(v8 + 24) = this;
      *(_QWORD *)(v8 + 32) = v4;
      WdLogEvent5_WdError(v8);
      return (unsigned int)v4;
    }
  }
  return result;
}
