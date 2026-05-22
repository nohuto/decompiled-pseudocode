/*
 * XREFs of ?NavigationEnabled@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z @ 0x1800729D4
 * Callers:
 *     ?EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180072748 (-EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x18006BFD8 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

void __fastcall InputETW::ControllerNavigationManager::NavigationEnabled(struct tagRECT *a1, struct tagPOINT a2)
{
  LONG x; // ebx
  __int64 v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  __int64 top; // rax
  struct tagPOINT v8; // [rsp+30h] [rbp-69h] BYREF
  __int64 v9; // [rsp+38h] [rbp-61h] BYREF
  __int64 left; // [rsp+40h] [rbp-59h] BYREF
  __int64 bottom; // [rsp+48h] [rbp-51h] BYREF
  __int64 right; // [rsp+50h] [rbp-49h] BYREF
  __int64 v13; // [rsp+58h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-39h] BYREF
  __int64 *v15; // [rsp+80h] [rbp-19h]
  int v16; // [rsp+88h] [rbp-11h]
  int v17; // [rsp+8Ch] [rbp-Dh]
  __int64 *p_left; // [rsp+90h] [rbp-9h]
  int v19; // [rsp+98h] [rbp-1h]
  int v20; // [rsp+9Ch] [rbp+3h]
  __int64 *p_bottom; // [rsp+A0h] [rbp+7h]
  int v22; // [rsp+A8h] [rbp+Fh]
  int v23; // [rsp+ACh] [rbp+13h]
  __int64 *p_right; // [rsp+B0h] [rbp+17h]
  int v25; // [rsp+B8h] [rbp+1Fh]
  int v26; // [rsp+BCh] [rbp+23h]
  __int64 *v27; // [rsp+C0h] [rbp+27h]
  int v28; // [rsp+C8h] [rbp+2Fh]
  int v29; // [rsp+CCh] [rbp+33h]
  struct tagPOINT *v30; // [rsp+D0h] [rbp+37h]
  int v31; // [rsp+D8h] [rbp+3Fh]
  int v32; // [rsp+DCh] [rbp+43h]

  x = a2.x;
  v8 = a2;
  if ( InputETW::IsEnabled((__int64)a1) )
  {
    v5 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<InputETW>::get(
                                                      v4,
                                                      lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                                        + 1);
    if ( *(_DWORD *)v5 > 5u )
    {
      if ( TlgKeywordOn(v5, 1uLL) )
      {
        top = a1->top;
        v17 = 0;
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v32 = 0;
        v9 = top;
        v15 = &v9;
        left = a1->left;
        p_left = &left;
        bottom = a1->bottom;
        p_bottom = &bottom;
        right = a1->right;
        p_right = &right;
        v13 = x;
        v27 = &v13;
        v8 = (struct tagPOINT)v8.y;
        v30 = &v8;
        v16 = 8;
        v19 = 8;
        v22 = 8;
        v25 = 8;
        v28 = 8;
        v31 = 8;
        TlgWrite(v6, &unk_18019AF1B, 0LL, 0LL, 8u, &pData);
      }
    }
  }
}
