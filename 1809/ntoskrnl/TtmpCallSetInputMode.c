/*
 * XREFs of TtmpCallSetInputMode @ 0x14087ED68
 * Callers:
 *     TtmpPushTerminalState @ 0x14087F67C (TtmpPushTerminalState.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmpStartCallout @ 0x14087F840 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x14087F92C (TtmpStopCallout.c)
 */

void __fastcall TtmpCallSetInputMode(int a1, __int64 a2, unsigned int a3)
{
  __int64 (__fastcall *v3)(_QWORD, _QWORD); // rdi
  int v7; // ebx
  _BYTE v8[48]; // [rsp+30h] [rbp-38h] BYREF

  v3 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a2 + 64);
  if ( v3 )
  {
    memset(v8, 0, 0x28uLL);
    TtmpStartCallout((unsigned int)v8, a1, a2, 3, (__int64)v3, a3);
    v7 = v3(*(_QWORD *)(a2 + 24), a3);
    TtmpStopCallout(v8, (unsigned int)v7);
    if ( v7 < 0 )
      TtmiLogError("TtmpCallSetInputMode", 2391, v7, -1);
  }
}
