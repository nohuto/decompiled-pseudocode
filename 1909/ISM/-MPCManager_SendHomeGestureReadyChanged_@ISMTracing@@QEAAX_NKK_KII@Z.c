/*
 * XREFs of ?MPCManager_SendHomeGestureReadyChanged_@ISMTracing@@QEAAX_NKK_KII@Z @ 0x18007E028
 * Callers:
 *     ?SendHomeGestureReadyChanged@MPCManager@@QEAAX_NKK_KII@Z @ 0x18007F128 (-SendHomeGestureReadyChanged@MPCManager@@QEAAX_NKK_KII@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall ISMTracing::MPCManager_SendHomeGestureReadyChanged_(
        ISMTracing *this,
        char a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  __int64 v9; // r9
  __int64 v10; // [rsp+38h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-61h] BYREF
  __int64 *v12; // [rsp+68h] [rbp-41h]
  __int64 v13; // [rsp+70h] [rbp-39h]
  char *v14; // [rsp+78h] [rbp-31h]
  __int64 v15; // [rsp+80h] [rbp-29h]
  int *v16; // [rsp+88h] [rbp-21h]
  __int64 v17; // [rsp+90h] [rbp-19h]
  int *v18; // [rsp+98h] [rbp-11h]
  __int64 v19; // [rsp+A0h] [rbp-9h]
  char *v20; // [rsp+A8h] [rbp-1h]
  __int64 v21; // [rsp+B0h] [rbp+7h]
  char *v22; // [rsp+B8h] [rbp+Fh]
  __int64 v23; // [rsp+C0h] [rbp+17h]
  char *v24; // [rsp+C8h] [rbp+1Fh]
  __int64 v25; // [rsp+D0h] [rbp+27h]
  char v26; // [rsp+100h] [rbp+57h] BYREF
  int v27; // [rsp+108h] [rbp+5Fh] BYREF
  int v28; // [rsp+110h] [rbp+67h] BYREF

  v28 = a4;
  v27 = a3;
  v26 = a2;
  v7 = (const struct _TlgProvider_t *)wil::details::static_lazy<ISMTracing>::get(
                                        (__int64)this,
                                        lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v7 > 4u )
  {
    if ( TlgKeywordOn(v7, 0x400000000001uLL) )
    {
      v10 = 50331648LL;
      v12 = &v10;
      v14 = &v26;
      v16 = &v27;
      v18 = &v28;
      v20 = &a5;
      v22 = &a6;
      v24 = &a7;
      v13 = 8LL;
      v15 = 1LL;
      v17 = v9;
      v19 = v9;
      v21 = 8LL;
      v23 = v9;
      v25 = v9;
      TlgWrite(v8, &unk_18019B4F8, 0LL, 0LL, 9u, &pData);
    }
  }
}
