/*
 * XREFs of ?DragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@@Z @ 0x18006ACF4
 * Callers:
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18006CCEC (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x18006BFD8 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

char __fastcall InputETW::DragNDrop::DragCancelled(
        unsigned int a1,
        int *a2,
        int *a3,
        int *a4,
        char a5,
        unsigned int a6)
{
  __int64 v7; // r14
  LPVOID v10; // rax
  __int64 v11; // rcx
  const struct _TlgProvider_t *v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  __int64 v15; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v24; // [rsp+98h] [rbp-70h]
  int v25; // [rsp+A0h] [rbp-68h]
  int v26; // [rsp+A4h] [rbp-64h]
  __int64 *v27; // [rsp+A8h] [rbp-60h]
  int v28; // [rsp+B0h] [rbp-58h]
  int v29; // [rsp+B4h] [rbp-54h]
  __int64 *v30; // [rsp+B8h] [rbp-50h]
  int v31; // [rsp+C0h] [rbp-48h]
  int v32; // [rsp+C4h] [rbp-44h]
  __int64 *v33; // [rsp+C8h] [rbp-40h]
  int v34; // [rsp+D0h] [rbp-38h]
  int v35; // [rsp+D4h] [rbp-34h]
  __int64 *v36; // [rsp+D8h] [rbp-30h]
  int v37; // [rsp+E0h] [rbp-28h]
  int v38; // [rsp+E4h] [rbp-24h]
  __int64 *v39; // [rsp+E8h] [rbp-20h]
  int v40; // [rsp+F0h] [rbp-18h]
  int v41; // [rsp+F4h] [rbp-14h]
  __int64 *v42; // [rsp+F8h] [rbp-10h]
  int v43; // [rsp+100h] [rbp-8h]
  int v44; // [rsp+104h] [rbp-4h]
  char *v45; // [rsp+108h] [rbp+0h]
  int v46; // [rsp+110h] [rbp+8h]
  int v47; // [rsp+114h] [rbp+Ch]
  __int64 *v48; // [rsp+118h] [rbp+10h]
  int v49; // [rsp+120h] [rbp+18h]
  int v50; // [rsp+124h] [rbp+1Ch]

  v7 = a1;
  LOBYTE(v10) = InputETW::IsEnabled(a1, (unsigned __int64)a2);
  if ( (_BYTE)v10 )
  {
    v10 = wil::details::static_lazy<InputETW>::get(
            v11,
            lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    v12 = (const struct _TlgProvider_t *)*((_QWORD *)v10 + 1);
    if ( *(_DWORD *)v12 > 5u )
    {
      LOBYTE(v10) = TlgKeywordOn(v12, 1uLL);
      if ( (_BYTE)v10 )
      {
        v26 = 0;
        v29 = 0;
        v32 = 0;
        v35 = 0;
        v38 = 0;
        v41 = 0;
        v44 = 0;
        v47 = 0;
        v50 = 0;
        v24 = &v15;
        v16 = *a2;
        v27 = &v16;
        v17 = a2[1];
        v30 = &v17;
        v18 = *a3;
        v33 = &v18;
        v19 = a3[1];
        v36 = &v19;
        v20 = *a4;
        v39 = &v20;
        v21 = a4[1];
        v42 = &v21;
        v45 = &a5;
        v22 = a6;
        v48 = &v22;
        v15 = v7;
        v25 = 8;
        v28 = 8;
        v31 = 8;
        v34 = 8;
        v37 = 8;
        v40 = 8;
        v43 = 8;
        v46 = 8;
        v49 = 8;
        LOBYTE(v10) = TlgWrite(v13, &unk_18019AD36, 0LL, 0LL, 0xBu, &pData);
      }
    }
  }
  return (char)v10;
}
