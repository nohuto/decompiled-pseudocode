/*
 * XREFs of ?SpatialInputController_Removed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKQEB_W@Z @ 0x1800E496C
 * Callers:
 *     _lambda_c565c19ed9733c9533da0ee0ab27a7d0_::operator() @ 0x1800E0F58 (_lambda_c565c19ed9733c9533da0ee0ab27a7d0_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D9FDC (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialInputController_Removed_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        const WCHAR *a3)
{
  _QWORD *v4; // rax
  int v5; // r11d
  TraceLoggingHProvider v6; // r10
  UINT32 cData; // r11d
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v9; // [rsp+50h] [rbp-38h]
  int v10; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+5Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-28h] BYREF
  int v13; // [rsp+98h] [rbp+10h] BYREF

  v13 = a2;
  v4 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
         (__int64)this,
         (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v4[1] > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v4[1], 0x400000000000uLL) )
    {
      v11 = 0;
      v9 = &v13;
      v10 = v5;
      TlgCreateWsz(&pDesc, a3);
      TlgWrite(v6, &unk_18019E591, 0LL, 0LL, cData, &pData);
    }
  }
}
