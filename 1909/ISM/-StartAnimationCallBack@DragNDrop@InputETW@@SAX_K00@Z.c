/*
 * XREFs of ?StartAnimationCallBack@DragNDrop@InputETW@@SAX_K00@Z @ 0x18006CC24
 * Callers:
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18006C8C0 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x18006BFD8 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

void __fastcall InputETW::DragNDrop::StartAnimationCallBack(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  __int64 *v7; // [rsp+58h] [rbp+17h]
  int v8; // [rsp+60h] [rbp+1Fh]
  int v9; // [rsp+64h] [rbp+23h]
  __int64 *v10; // [rsp+68h] [rbp+27h]
  int v11; // [rsp+70h] [rbp+2Fh]
  int v12; // [rsp+74h] [rbp+33h]
  __int64 *v13; // [rsp+78h] [rbp+37h]
  int v14; // [rsp+80h] [rbp+3Fh]
  int v15; // [rsp+84h] [rbp+43h]
  __int64 v16; // [rsp+A8h] [rbp+67h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+6Fh] BYREF
  __int64 v18; // [rsp+B8h] [rbp+77h] BYREF

  v18 = a3;
  v17 = a2;
  v16 = a1;
  if ( InputETW::IsEnabled(a1) )
  {
    v4 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<InputETW>::get(
                                                      v3,
                                                      lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                                        + 1);
    if ( *(_DWORD *)v4 > 5u )
    {
      if ( TlgKeywordOn(v4, 1uLL) )
      {
        v9 = 0;
        v12 = 0;
        v15 = 0;
        v7 = &v16;
        v10 = &v17;
        v13 = &v18;
        v8 = 8;
        v11 = 8;
        v14 = 8;
        TlgWrite(v5, &unk_18019AAEB, 0LL, 0LL, 5u, &pData);
      }
    }
  }
}
