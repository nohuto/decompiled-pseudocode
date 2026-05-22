/*
 * XREFs of ?ClientStateChanged@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z @ 0x18007274C
 * Callers:
 *     ?ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180072670 (-ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x1800147C8 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x18006C218 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

void __fastcall InputETW::ControllerNavigationManager::ClientStateChanged(
        __int64 a1,
        struct tagRECT *a2,
        struct tagPOINT a3)
{
  LONG x; // ebx
  __int64 v4; // rsi
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  const struct _TlgProvider_t *v8; // rcx
  struct tagPOINT v9; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+40h] [rbp-C8h] BYREF
  __int64 top; // [rsp+48h] [rbp-C0h] BYREF
  __int64 left; // [rsp+50h] [rbp-B8h] BYREF
  __int64 bottom; // [rsp+58h] [rbp-B0h] BYREF
  __int64 right; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v17; // [rsp+98h] [rbp-70h]
  int v18; // [rsp+A0h] [rbp-68h]
  int v19; // [rsp+A4h] [rbp-64h]
  __int64 *p_top; // [rsp+A8h] [rbp-60h]
  int v21; // [rsp+B0h] [rbp-58h]
  int v22; // [rsp+B4h] [rbp-54h]
  __int64 *p_left; // [rsp+B8h] [rbp-50h]
  int v24; // [rsp+C0h] [rbp-48h]
  int v25; // [rsp+C4h] [rbp-44h]
  __int64 *p_bottom; // [rsp+C8h] [rbp-40h]
  int v27; // [rsp+D0h] [rbp-38h]
  int v28; // [rsp+D4h] [rbp-34h]
  __int64 *p_right; // [rsp+D8h] [rbp-30h]
  int v30; // [rsp+E0h] [rbp-28h]
  int v31; // [rsp+E4h] [rbp-24h]
  __int64 *v32; // [rsp+E8h] [rbp-20h]
  int v33; // [rsp+F0h] [rbp-18h]
  int v34; // [rsp+F4h] [rbp-14h]
  struct tagPOINT *v35; // [rsp+F8h] [rbp-10h]
  int v36; // [rsp+100h] [rbp-8h]
  int v37; // [rsp+104h] [rbp-4h]

  x = a3.x;
  v4 = (unsigned int)a1;
  v9 = a3;
  if ( InputETW::IsEnabled(a1) )
  {
    v7 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<InputETW>::get(
                                                      v6,
                                                      lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                                        + 1);
    if ( *(_DWORD *)v7 > 5u )
    {
      if ( TlgKeywordOn(v7, 1uLL) )
      {
        v19 = 0;
        v22 = 0;
        v25 = 0;
        v28 = 0;
        v31 = 0;
        v34 = 0;
        v37 = 0;
        v17 = &v10;
        top = a2->top;
        p_top = &top;
        left = a2->left;
        p_left = &left;
        bottom = a2->bottom;
        p_bottom = &bottom;
        right = a2->right;
        p_right = &right;
        v15 = x;
        v32 = &v15;
        v9 = (struct tagPOINT)v9.y;
        v35 = &v9;
        v10 = v4;
        v18 = 8;
        v21 = 8;
        v24 = 8;
        v27 = 8;
        v30 = 8;
        v33 = 8;
        v36 = 8;
        TlgWrite(v8, &unk_18019AF9D, 0LL, 0LL, 9u, &pData);
      }
    }
  }
}
