/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180036BB0
 * Callers:
 *     ??1ApplicationSpecificEndpointInfo@@UEAA@XZ @ 0x18001AA5C (--1ApplicationSpecificEndpointInfo@@UEAA@XZ.c)
 *     ??1TSSession@@QEAA@XZ @ 0x180026390 (--1TSSession@@QEAA@XZ.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x180026834 (-GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@.c)
 *     ??1?$CAutoPtr@VCStreamClassPolicyGainsWrapper@@@ATL@@QEAA@XZ @ 0x18002ADB8 (--1-$CAutoPtr@VCStreamClassPolicyGainsWrapper@@@ATL@@QEAA@XZ.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$10 @ 0x180038CB1 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$10.c)
 *     _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$6 @ 0x180039811 (_TSSession--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$6.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180036C24 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_dispatch_icall_fptr();
  }
}
