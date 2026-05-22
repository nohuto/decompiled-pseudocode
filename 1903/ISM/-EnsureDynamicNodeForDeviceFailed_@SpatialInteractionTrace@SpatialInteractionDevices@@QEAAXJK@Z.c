/*
 * XREFs of ?EnsureDynamicNodeForDeviceFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJK@Z @ 0x18016561C
 * Callers:
 *     wil::details::lambda_call__lambda_6bcc6914c6f7140c2e7947a0a05a7a7e___::_lambda_call__lambda_6bcc6914c6f7140c2e7947a0a05a7a7e___ @ 0x180163174 (wil--details--lambda_call__lambda_6bcc6914c6f7140c2e7947a0a05a7a7e___--_lambda_call__lambda_6bcc.c)
 *     ?EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@PEAK@Z @ 0x1801653B0 (-EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800DA21C (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::EnsureDynamicNodeForDeviceFailed_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        int a3)
{
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  UINT32 cData; // r9d
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v7; // [rsp+50h] [rbp-38h]
  UINT32 v8; // [rsp+58h] [rbp-30h]
  int v9; // [rsp+5Ch] [rbp-2Ch]
  int *v10; // [rsp+60h] [rbp-28h]
  UINT32 v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+6Ch] [rbp-1Ch]
  int v13; // [rsp+98h] [rbp+10h] BYREF
  int v14; // [rsp+A0h] [rbp+18h] BYREF

  v14 = a3;
  v13 = a2;
  v3 = (const struct _TlgProvider_t *)wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v3 > 4u )
  {
    if ( TlgKeywordOn(v3, 2uLL) )
    {
      v9 = 0;
      v12 = 0;
      v7 = &v13;
      v10 = &v14;
      v8 = cData;
      v11 = cData;
      TlgWrite(v4, &unk_1801A4643, 0LL, 0LL, cData, &pData);
    }
  }
}
