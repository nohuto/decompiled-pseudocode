/*
 * XREFs of ?Log_Error_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W@Z @ 0x1800F5554
 * Callers:
 *     ?ReadInitializationTimeProperties@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@MEAAJXZ @ 0x1800F6250 (-ReadInitializationTimeProperties@SpatialInteractionSourceHand@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800DA21C (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::Log_Error_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        const wchar_t *a3)
{
  _QWORD *v4; // rax
  int v5; // edx
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
  if ( *(_DWORD *)v4[1] > 2u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v4[1], 2uLL) )
    {
      v11 = 0;
      v10 = v5 + 2;
      v9 = &v13;
      TlgCreateWsz(&pDesc, a3);
      TlgWrite(v6, &unk_18019FFF9, 0LL, 0LL, cData, &pData);
    }
  }
}
