/*
 * XREFs of ?SpatialObjectEnsureDynamicNodeInfo_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@0@Z @ 0x1800EDBFC
 * Callers:
 *     _lambda_8af77e303c344d221a281039b3d8ff10_::operator() @ 0x1800EB344 (_lambda_8af77e303c344d221a281039b3d8ff10_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800DA21C (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectEnsureDynamicNodeInfo_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        const struct _GUID *a2,
        const struct _GUID *a3)
{
  const struct _TlgProvider_t *v5; // rcx
  int v6; // edx
  const struct _TlgProvider_t *v7; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  const struct _GUID *v9; // [rsp+50h] [rbp-38h]
  int v10; // [rsp+58h] [rbp-30h]
  int v11; // [rsp+5Ch] [rbp-2Ch]
  const struct _GUID *v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+68h] [rbp-20h]
  int v14; // [rsp+6Ch] [rbp-1Ch]

  v5 = (const struct _TlgProvider_t *)wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v5 > 4u )
  {
    if ( TlgKeywordOn(v5, 2uLL) )
    {
      v11 = 0;
      v14 = 0;
      v10 = v6 + 14;
      v13 = v6 + 14;
      v9 = a2;
      v12 = a3;
      TlgWrite(v7, &unk_18019F0C2, 0LL, 0LL, 4u, &pData);
    }
  }
}
