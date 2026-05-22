/*
 * XREFs of ?FeaturesRead_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WJK@Z @ 0x1801658EC
 * Callers:
 *     ?EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x180165110 (-EndInitialize@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800DA21C (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::FeaturesRead_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        const wchar_t *a2,
        int a3,
        int a4)
{
  _QWORD *v5; // rax
  TraceLoggingHProvider v6; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+58h] [rbp+17h] BYREF
  int *v9; // [rsp+68h] [rbp+27h]
  int v10; // [rsp+70h] [rbp+2Fh]
  int v11; // [rsp+74h] [rbp+33h]
  int *v12; // [rsp+78h] [rbp+37h]
  int v13; // [rsp+80h] [rbp+3Fh]
  int v14; // [rsp+84h] [rbp+43h]
  int v15; // [rsp+B8h] [rbp+77h] BYREF
  int v16; // [rsp+C0h] [rbp+7Fh] BYREF

  v16 = a4;
  v15 = a3;
  v5 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
         (__int64)this,
         (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v5[1] > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v5[1], 0x200000000000uLL) )
    {
      TlgCreateWsz(&pDesc, a2);
      v11 = 0;
      v14 = 0;
      v9 = &v15;
      v10 = 4;
      v13 = 4;
      v12 = &v16;
      TlgWrite(v6, &unk_1801A45BF, 0LL, 0LL, 5u, &pData);
    }
  }
}
