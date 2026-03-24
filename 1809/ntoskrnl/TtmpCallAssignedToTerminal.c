/*
 * XREFs of TtmpCallAssignedToTerminal @ 0x14087D92C
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x14087D71C (TtmiSessionDeviceListWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     TtmiLogError @ 0x1407616DC (TtmiLogError.c)
 *     TtmpStartCallout @ 0x14087E5E0 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x14087E6CC (TtmpStopCallout.c)
 */

void __fastcall TtmpCallAssignedToTerminal(int a1, __int64 a2)
{
  __int64 (__fastcall *v2)(_QWORD, _QWORD); // rdi
  int v5; // ebx
  _BYTE v6[56]; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a2 + 48);
  if ( v2 )
  {
    memset(v6, 0, 0x28uLL);
    TtmpStartCallout((unsigned int)v6, a1, a2, 1, (__int64)v2, *(_DWORD *)(a2 + 596));
    v5 = v2(*(_QWORD *)(a2 + 24), *(unsigned int *)(a2 + 596));
    TtmpStopCallout(v6, (unsigned int)v5);
    if ( v5 < 0 )
      TtmiLogError("TtmpCallAssignedToTerminal", 2274, v5, -1);
  }
}
