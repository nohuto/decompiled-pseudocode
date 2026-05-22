/*
 * XREFs of ?FeedPositionData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@@Z @ 0x18006B6E8
 * Callers:
 *     ?FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z @ 0x18006B4EC (-FeedAnimationDataIfNeeded@DragNDropProcessor@@QEAAJKUtagPOINT@@UtagPOINTF@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x18006BFD8 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

void __fastcall InputETW::DragNDrop::FeedPositionData(__int64 a1, unsigned __int64 a2, __int64 a3, struct tagPOINT a4)
{
  LONG x; // ebx
  __int64 v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  struct tagPOINT v8; // [rsp+38h] [rbp-49h] BYREF
  __int64 v9; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  __int64 *v11; // [rsp+68h] [rbp-19h]
  int v12; // [rsp+70h] [rbp-11h]
  int v13; // [rsp+74h] [rbp-Dh]
  unsigned __int64 *v14; // [rsp+78h] [rbp-9h]
  int v15; // [rsp+80h] [rbp-1h]
  int v16; // [rsp+84h] [rbp+3h]
  __int64 *v17; // [rsp+88h] [rbp+7h]
  int v18; // [rsp+90h] [rbp+Fh]
  int v19; // [rsp+94h] [rbp+13h]
  __int64 *v20; // [rsp+98h] [rbp+17h]
  int v21; // [rsp+A0h] [rbp+1Fh]
  int v22; // [rsp+A4h] [rbp+23h]
  struct tagPOINT *v23; // [rsp+A8h] [rbp+27h]
  int v24; // [rsp+B0h] [rbp+2Fh]
  int v25; // [rsp+B4h] [rbp+33h]
  __int64 v26; // [rsp+E8h] [rbp+67h] BYREF
  unsigned __int64 v27; // [rsp+F0h] [rbp+6Fh] BYREF
  __int64 v28; // [rsp+F8h] [rbp+77h] BYREF

  v28 = a3;
  v27 = a2;
  v26 = a1;
  x = a4.x;
  v8 = a4;
  if ( InputETW::IsEnabled(a1, a2) )
  {
    v6 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<InputETW>::get(
                                                      v5,
                                                      lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                                        + 1);
    if ( *(_DWORD *)v6 > 5u )
    {
      if ( TlgKeywordOn(v6, 1uLL) )
      {
        v13 = 0;
        v16 = 0;
        v19 = 0;
        v22 = 0;
        v25 = 0;
        v11 = &v26;
        v14 = &v27;
        v17 = &v28;
        v9 = x;
        v20 = &v9;
        v8 = (struct tagPOINT)v8.y;
        v23 = &v8;
        v12 = 8;
        v15 = 8;
        v18 = 8;
        v21 = 8;
        v24 = 8;
        TlgWrite(v7, &unk_18019AA66, 0LL, 0LL, 7u, &pData);
      }
    }
  }
}
