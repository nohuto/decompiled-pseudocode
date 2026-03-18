/*
 * XREFs of ?DwmHolographicDisplayAdd_@CompositorTracing@@QEAAXIAEBU_GUID@@@Z @ 0x180241234
 * Callers:
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x180240CBC (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800D5ED0 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

void __fastcall CompositorTracing::DwmHolographicDisplayAdd_(CompositorTracing *this, int a2, const struct _GUID *a3)
{
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  UINT32 cData; // r9d
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  int *v8; // [rsp+50h] [rbp-38h]
  UINT32 v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  const struct _GUID *v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]
  int v14; // [rsp+98h] [rbp+10h] BYREF

  v14 = a2;
  v4 = (const struct _TlgProvider_t *)wil::details::static_lazy<CompositorTracing>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v4 > 4u )
  {
    if ( TlgKeywordOn(v4, 0x400000000000uLL) )
    {
      v10 = 0;
      v13 = 0;
      v8 = &v14;
      v9 = cData;
      v11 = a3;
      v12 = 16;
      TlgWrite(v5, &unk_1802E0DE0, 0LL, 0LL, cData, &pData);
    }
  }
}
