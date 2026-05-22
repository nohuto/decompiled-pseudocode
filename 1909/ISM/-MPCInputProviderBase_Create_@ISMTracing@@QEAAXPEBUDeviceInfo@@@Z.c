/*
 * XREFs of ?MPCInputProviderBase_Create_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z @ 0x18013DD8C
 * Callers:
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180021264 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCInputProviderBase_Create_(ISMTracing *this, const struct DeviceInfo *a2)
{
  __int64 v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  UINT32 cData; // r9d
  int v7; // eax
  int v8; // [rsp+30h] [rbp-68h] BYREF
  int v9; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v11; // [rsp+60h] [rbp-38h]
  UINT32 v12; // [rsp+68h] [rbp-30h]
  int v13; // [rsp+6Ch] [rbp-2Ch]
  int *v14; // [rsp+70h] [rbp-28h]
  UINT32 v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+7Ch] [rbp-1Ch]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v4 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                          v3,
                                          lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
    if ( *(_DWORD *)v4 > 4u )
    {
      if ( TlgKeywordOn(v4, 1uLL) )
      {
        v7 = *(_DWORD *)a2;
        v13 = 0;
        v16 = 0;
        v8 = v7;
        v11 = &v8;
        v9 = *((_DWORD *)a2 + 1);
        v14 = &v9;
        v12 = cData;
        v15 = cData;
        TlgWrite(v5, &unk_1801A1526, 0LL, 0LL, cData, &pData);
      }
    }
  }
}
