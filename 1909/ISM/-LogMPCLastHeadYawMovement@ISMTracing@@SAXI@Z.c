/*
 * XREFs of ?LogMPCLastHeadYawMovement@ISMTracing@@SAXI@Z @ 0x180096BA0
 * Callers:
 *     ?OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ @ 0x180096C64 (-OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall ISMTracing::LogMPCLastHeadYawMovement(__int64 a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const struct _TlgProvider_t *v2; // rcx
  UINT32 cData; // r9d
  __int64 v4; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  int *v9; // [rsp+70h] [rbp-28h]
  UINT32 v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]
  int v12; // [rsp+A0h] [rbp+8h] BYREF

  v12 = a1;
  v1 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                        a1,
                                        lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v1 > 4u )
  {
    if ( TlgKeywordOn(v1, 0x400000000001uLL) )
    {
      v8 = 0;
      v11 = 0;
      v6 = &v4;
      v9 = &v12;
      v4 = 50331648LL;
      v7 = 8;
      v10 = cData;
      TlgWrite(v2, &unk_18019C479, 0LL, 0LL, cData, &pData);
    }
  }
}
