/*
 * XREFs of TtmpPublishDeviceEvent @ 0x1408BB634
 * Callers:
 *     TtmiAssignDevice @ 0x1408BA8AC (TtmiAssignDevice.c)
 *     TtmiPublishDeviceEnumerationEvents @ 0x1408BAA68 (TtmiPublishDeviceEnumerationEvents.c)
 *     TtmiSessionDeviceListWorker @ 0x1408BAAFC (TtmiSessionDeviceListWorker.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140154604 (RtlStringCchCopyW.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     TtmiWriteEventToAllQueues @ 0x1408BDBCC (TtmiWriteEventToAllQueues.c)
 *     TtmiWriteEventToSingleQueue @ 0x1408BFC14 (TtmiWriteEventToSingleQueue.c)
 *     TtmiLogDeviceArrivedTerminalEvent @ 0x1408C07B8 (TtmiLogDeviceArrivedTerminalEvent.c)
 *     TtmiLogDeviceAssignedTerminalEvent @ 0x1408C08F4 (TtmiLogDeviceAssignedTerminalEvent.c)
 *     TtmiLogDeviceDepartedTerminalEvent @ 0x1408C09E0 (TtmiLogDeviceDepartedTerminalEvent.c)
 *     TtmiLogDeviceEnumeratedTerminalEvent @ 0x1408C0BC8 (TtmiLogDeviceEnumeratedTerminalEvent.c)
 */

__int64 __fastcall TtmpPublishDeviceEvent(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v8; // esi
  int v9; // edx
  int v10; // r9d
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  const WCHAR *pwsz; // [rsp+28h] [rbp-E0h]
  _DWORD v16[136]; // [rsp+38h] [rbp-D0h] BYREF

  memset(&v16[1], 0, 0x21CuLL);
  v8 = 0;
  v16[0] = a4;
  switch ( a4 )
  {
    case 0:
    case 3:
      v16[2] = *(_DWORD *)(a3 + 32);
      v16[3] = *(_DWORD *)(a3 + 596);
      v16[4] = *(_DWORD *)(a3 + 16);
      v16[5] = *(_DWORD *)(a3 + 72);
      RtlStringCchCopyW((NTSTRSAFE_PWSTR)&v16[6], 0x104uLL, (NTSTRSAFE_PCWSTR)(a3 + 76));
      v10 = *(_DWORD *)(a3 + 72);
      v11 = *(_DWORD *)(a3 + 16);
      v12 = *(_DWORD *)(a3 + 596);
      v13 = *(_DWORD *)(a3 + 32);
      pwsz = (const WCHAR *)(a3 + 76);
      if ( a4 )
        TtmiLogDeviceArrivedTerminalEvent(v13, v12, v11, v10, pwsz);
      else
        TtmiLogDeviceEnumeratedTerminalEvent(v13, v12, v11, v10, pwsz);
      break;
    case 4:
      v9 = *(_DWORD *)(a3 + 596);
      v16[2] = *(_DWORD *)(a3 + 32);
      v16[3] = v9;
      TtmiLogDeviceAssignedTerminalEvent();
      break;
    case 5:
      v16[2] = *(_DWORD *)(a3 + 32);
      TtmiLogDeviceDepartedTerminalEvent();
      break;
  }
  if ( a2 )
    return (unsigned int)TtmiWriteEventToSingleQueue(a2, v16);
  else
    TtmiWriteEventToAllQueues(a1, v16);
  return v8;
}
