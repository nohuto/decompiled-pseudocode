/*
 * XREFs of ?SpatialInputController_Added_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKQEB_WGGG@Z @ 0x1800E4878
 * Callers:
 *     ??$SpatialInputController_Added@KPEB_WGGG@SpatialInteractionTrace@SpatialInteractionDevices@@SAX$$QEAK$$QEAPEB_W$$QEAG22@Z @ 0x1800DF9BC (--$SpatialInputController_Added@KPEB_WGGG@SpatialInteractionTrace@SpatialInteractionDevices@@SAX.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D9FDC (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialInputController_Added_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        const WCHAR *a3,
        __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  _QWORD *v7; // rax
  TraceLoggingHProvider v8; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-39h] BYREF
  int *v10; // [rsp+58h] [rbp-19h]
  __int64 v11; // [rsp+60h] [rbp-11h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp-9h] BYREF
  __int16 *v13; // [rsp+78h] [rbp+7h]
  __int64 v14; // [rsp+80h] [rbp+Fh]
  unsigned __int16 *v15; // [rsp+88h] [rbp+17h]
  __int64 v16; // [rsp+90h] [rbp+1Fh]
  unsigned __int16 *v17; // [rsp+98h] [rbp+27h]
  __int64 v18; // [rsp+A0h] [rbp+2Fh]
  int v19; // [rsp+D0h] [rbp+5Fh] BYREF
  __int16 v20; // [rsp+E0h] [rbp+6Fh] BYREF

  v20 = a4;
  v19 = a2;
  v7 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
         (__int64)this,
         (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v7[1] > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)v7[1], 0x400000000000uLL) )
    {
      v11 = 4LL;
      v10 = &v19;
      TlgCreateWsz(&pDesc, a3);
      v14 = 2LL;
      v15 = &a5;
      v13 = &v20;
      v17 = &a6;
      v16 = 2LL;
      v18 = 2LL;
      TlgWrite(v8, &unk_18019DF35, 0LL, 0LL, 7u, &pData);
    }
  }
}
