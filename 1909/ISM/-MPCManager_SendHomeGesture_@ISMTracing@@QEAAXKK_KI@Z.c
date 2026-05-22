/*
 * XREFs of ?MPCManager_SendHomeGesture_@ISMTracing@@QEAAXKK_KI@Z @ 0x18007E12C
 * Callers:
 *     ?SendHomeGesture@MPCManager@@QEAAXKK_KI@Z @ 0x18007F06C (-SendHomeGesture@MPCManager@@QEAAXKK_KI@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void ISMTracing::MPCManager_SendHomeGesture_(ISMTracing *this, int a2, int a3, __int64 a4, ...)
{
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-31h] BYREF
  __int64 *v9; // [rsp+68h] [rbp-11h]
  __int64 v10; // [rsp+70h] [rbp-9h]
  int *v11; // [rsp+78h] [rbp-1h]
  __int64 v12; // [rsp+80h] [rbp+7h]
  int *v13; // [rsp+88h] [rbp+Fh]
  __int64 v14; // [rsp+90h] [rbp+17h]
  __int64 *v15; // [rsp+98h] [rbp+1Fh]
  __int64 v16; // [rsp+A0h] [rbp+27h]
  va_list v17; // [rsp+A8h] [rbp+2Fh]
  __int64 v18; // [rsp+B0h] [rbp+37h]
  int v19; // [rsp+E0h] [rbp+67h] BYREF
  int v20; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v21; // [rsp+F0h] [rbp+77h] BYREF
  va_list va; // [rsp+F8h] [rbp+7Fh] BYREF

  va_start(va, a4);
  v21 = a4;
  v20 = a3;
  v19 = a2;
  v4 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                        (__int64)this,
                                        lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v4 > 4u )
  {
    if ( TlgKeywordOn(v4, 0x400000000001uLL) )
    {
      v7 = 50331648LL;
      v9 = &v7;
      v11 = &v19;
      v13 = &v20;
      v15 = &v21;
      va_copy(v17, va);
      v10 = 8LL;
      v12 = v6;
      v14 = v6;
      v16 = 8LL;
      v18 = v6;
      TlgWrite(v5, &unk_18019B5F0, 0LL, 0LL, 7u, &pData);
    }
  }
}
