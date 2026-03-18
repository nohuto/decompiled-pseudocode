/*
 * XREFs of ?_SaveVirtualModeSupportToRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C02CBA10
 * Callers:
 *     ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAJ_N@Z @ 0x1C02CE234 (-_DisableVirtualModeSupport@DXGMONITOR@@QEAAJ_N@Z.c)
 * Callees:
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C01790B0 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_SaveVirtualModeSupportToRegistry(DXGMONITOR *this)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+58h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp+18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 0LL, &KeyHandle);
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
      v7 = WdLogNewEntry5_WdError(v5, v4, v6);
      *(_QWORD *)(v7 + 24) = this;
      *(_QWORD *)(v7 + 32) = v3;
      WdLogEvent5_WdError(v7);
      return (unsigned int)v3;
    }
  }
  return result;
}
