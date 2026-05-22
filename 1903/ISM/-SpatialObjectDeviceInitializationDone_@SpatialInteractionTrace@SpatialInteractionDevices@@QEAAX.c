/*
 * XREFs of ?SpatialObjectDeviceInitializationDone_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WJ@Z @ 0x1800ED93C
 * Callers:
 *     _lambda_a95b93df32bd5c2434c79e330695bd51_::operator() @ 0x1800EB3F8 (_lambda_a95b93df32bd5c2434c79e330695bd51_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800DA21C (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectDeviceInitializationDone_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        const wchar_t *a2,
        int a3)
{
  _QWORD *v4; // rax
  UINT32 cData; // r11d
  TraceLoggingHProvider v6; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-38h] BYREF
  int *v9; // [rsp+60h] [rbp-28h]
  UINT32 v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+6Ch] [rbp-1Ch]
  int v12; // [rsp+A0h] [rbp+18h] BYREF

  v12 = a3;
  v4 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
         (__int64)this,
         (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v4[1] > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v4[1], 2uLL) )
    {
      TlgCreateWsz(&pDesc, a2);
      v11 = 0;
      v9 = &v12;
      v10 = cData;
      TlgWrite(v6, &unk_18019EE45, 0LL, 0LL, cData, &pData);
    }
  }
}
