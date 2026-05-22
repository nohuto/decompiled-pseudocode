/*
 * XREFs of ?PointerCrossedClientBounds@ControllerNavigationManager@InputETW@@SAXKUtagPOINT@@@Z @ 0x180072FBC
 * Callers:
 *     ?OnPointerCrossedClientBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z @ 0x180072CC4 (-OnPointerCrossedClientBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x18006BFD8 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

void __fastcall InputETW::ControllerNavigationManager::PointerCrossedClientBounds(__int64 a1, struct tagPOINT a2)
{
  LONG x; // ebx
  __int64 v3; // rdi
  __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  struct tagPOINT v7; // [rsp+30h] [rbp-29h] BYREF
  __int64 v8; // [rsp+38h] [rbp-21h] BYREF
  __int64 v9; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v11; // [rsp+70h] [rbp+17h]
  int v12; // [rsp+78h] [rbp+1Fh]
  int v13; // [rsp+7Ch] [rbp+23h]
  __int64 *v14; // [rsp+80h] [rbp+27h]
  int v15; // [rsp+88h] [rbp+2Fh]
  int v16; // [rsp+8Ch] [rbp+33h]
  struct tagPOINT *v17; // [rsp+90h] [rbp+37h]
  int v18; // [rsp+98h] [rbp+3Fh]
  int v19; // [rsp+9Ch] [rbp+43h]

  x = a2.x;
  v3 = (unsigned int)a1;
  v7 = a2;
  if ( InputETW::IsEnabled(a1) )
  {
    v5 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<InputETW>::get(
                                                      v4,
                                                      lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                                        + 1);
    if ( *(_DWORD *)v5 > 5u )
    {
      if ( TlgKeywordOn(v5, 1uLL) )
      {
        v13 = 0;
        v16 = 0;
        v19 = 0;
        v11 = &v8;
        v9 = x;
        v14 = &v9;
        v7 = (struct tagPOINT)v7.y;
        v17 = &v7;
        v8 = v3;
        v12 = 8;
        v15 = 8;
        v18 = 8;
        TlgWrite(v6, &unk_18019B22C, 0LL, 0LL, 5u, &pData);
      }
    }
  }
}
