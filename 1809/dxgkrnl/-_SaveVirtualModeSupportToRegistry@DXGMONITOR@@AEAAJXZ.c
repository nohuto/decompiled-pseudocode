/*
 * XREFs of ?_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C02969A4
 * Callers:
 *     ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAJ_N@Z @ 0x1C02973CC (-_DisableVirtualModeSupport@DXGMONITOR@@QEAAJ_N@Z.c)
 * Callees:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0294934 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_SaveVirtualModeSupportToRegistry(DXGMONITOR *this)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  result = DXGMONITOR::_OpenMonitorDataStore(this, 0, &KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"VMSDisabled");
    Data = (*((_DWORD *)this + 10) >> 7) & 1;
    v3 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
    if ( (int)v3 >= 0 )
    {
      return 0LL;
    }
    else
    {
      v5 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v5 + 24) = this;
      *(_QWORD *)(v5 + 32) = v3;
      WdLogEvent5_WdError(v5);
      return (unsigned int)v3;
    }
  }
  return result;
}
