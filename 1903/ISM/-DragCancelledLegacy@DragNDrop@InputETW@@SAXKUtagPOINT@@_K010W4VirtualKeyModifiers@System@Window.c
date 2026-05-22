/*
 * XREFs of ?DragCancelledLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x1800FEB24
 * Callers:
 *     ?CancelDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z @ 0x1800FE830 (-CancelDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z.c)
 * Callees:
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x180014694 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x1800147C8 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

char __fastcall InputETW::DragNDrop::DragCancelledLegacy(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v7; // rsi
  int v8; // edi
  int v9; // ebx
  LPVOID v10; // rax
  __int64 v11; // rcx
  const struct _TlgProvider_t *v12; // rcx
  const struct _TlgProvider_t *v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v24; // [rsp+90h] [rbp-70h]
  int v25; // [rsp+98h] [rbp-68h]
  int v26; // [rsp+9Ch] [rbp-64h]
  __int64 *v27; // [rsp+A0h] [rbp-60h]
  int v28; // [rsp+A8h] [rbp-58h]
  int v29; // [rsp+ACh] [rbp-54h]
  __int64 *v30; // [rsp+B0h] [rbp-50h]
  int v31; // [rsp+B8h] [rbp-48h]
  int v32; // [rsp+BCh] [rbp-44h]
  __int64 *v33; // [rsp+C0h] [rbp-40h]
  int v34; // [rsp+C8h] [rbp-38h]
  int v35; // [rsp+CCh] [rbp-34h]
  __int64 *v36; // [rsp+D0h] [rbp-30h]
  int v37; // [rsp+D8h] [rbp-28h]
  int v38; // [rsp+DCh] [rbp-24h]
  __int64 *v39; // [rsp+E0h] [rbp-20h]
  int v40; // [rsp+E8h] [rbp-18h]
  int v41; // [rsp+ECh] [rbp-14h]
  char *v42; // [rsp+F0h] [rbp-10h]
  int v43; // [rsp+F8h] [rbp-8h]
  int v44; // [rsp+FCh] [rbp-4h]
  __int64 *v45; // [rsp+100h] [rbp+0h]
  int v46; // [rsp+108h] [rbp+8h]
  int v47; // [rsp+10Ch] [rbp+Ch]
  __int64 *v48; // [rsp+110h] [rbp+10h]
  int v49; // [rsp+118h] [rbp+18h]
  int v50; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v51; // [rsp+120h] [rbp+20h]
  int v52; // [rsp+128h] [rbp+28h]
  int v53; // [rsp+12Ch] [rbp+2Ch]
  __int64 v54; // [rsp+170h] [rbp+70h] BYREF

  v54 = a3;
  v7 = a1;
  v8 = a4;
  v15 = a2;
  v9 = a2;
  v16 = a4;
  LOBYTE(v10) = InputETW::IsVerboseEnabled(1uLL);
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
        v53 = 0;
        v24 = &v17;
        v18 = v9;
        v27 = &v18;
        v15 = SHIDWORD(v15);
        v30 = &v15;
        v33 = &v54;
        v19 = v8;
        v36 = &v19;
        v16 = SHIDWORD(v16);
        v39 = &v16;
        v42 = &a5;
        v20 = (int)a6;
        v45 = &v20;
        v21 = SHIDWORD(a6);
        v48 = &v21;
        v22 = a7;
        v51 = &v22;
        v17 = v7;
        v25 = 8;
        v28 = 8;
        v31 = 8;
        v34 = 8;
        v37 = 8;
        v40 = 8;
        v43 = 8;
        v46 = 8;
        v49 = 8;
        v52 = 8;
        LOBYTE(v10) = TlgWrite(v13, &unk_1801A0704, 0LL, 0LL, 0xCu, &pData);
      }
    }
  }
  return (char)v10;
}
