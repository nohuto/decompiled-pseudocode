/*
 * XREFs of ?SpatialObjectReadNextStateError_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@J_J@Z @ 0x1800F1A00
 * Callers:
 *     ??$SpatialObjectReadNextStateError@U_GUID@@AEAJAEA_J@SpatialInteractionTrace@SpatialInteractionDevices@@SAX$$QEAU_GUID@@AEAJAEA_J@Z @ 0x1800F0454 (--$SpatialObjectReadNextStateError@U_GUID@@AEAJAEA_J@SpatialInteractionTrace@SpatialInteractionD.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800DA21C (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectReadNextStateError_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        const struct _GUID *a2,
        int a3,
        __int64 a4)
{
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  const struct _GUID *v8; // [rsp+58h] [rbp+17h]
  __int64 v9; // [rsp+60h] [rbp+1Fh]
  __int64 *v10; // [rsp+68h] [rbp+27h]
  __int64 v11; // [rsp+70h] [rbp+2Fh]
  int *v12; // [rsp+78h] [rbp+37h]
  __int64 v13; // [rsp+80h] [rbp+3Fh]
  int v14; // [rsp+B8h] [rbp+77h] BYREF
  __int64 v15; // [rsp+C0h] [rbp+7Fh] BYREF

  v15 = a4;
  v14 = a3;
  v5 = (const struct _TlgProvider_t *)wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v5 > 4u )
  {
    if ( TlgKeywordOn(v5, 2uLL) )
    {
      v8 = a2;
      v10 = &v15;
      v12 = &v14;
      v9 = 16LL;
      v11 = 8LL;
      v13 = 4LL;
      TlgWrite(v6, &unk_18019FC21, 0LL, 0LL, 5u, &pData);
    }
  }
}
