/*
 * XREFs of ?GetPreferredInputFormat@CAPOWrapperSrv@@UEAAJPEAUtWAVEFORMATEX@@PEAPEAU2@@Z @ 0x140042740
 * Callers:
 *     <none>
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140003FBC (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x140007180 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CComQIPtr@UIAPOPreferredFormatSupport@@$1?_GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x1400424D8 (--0-$CComQIPtr@UIAPOPreferredFormatSupport@@$1-_GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7@@3U__s.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAPOWrapperSrv::GetPreferredInputFormat(CAPOWrapperSrv *this, struct tWAVEFORMATEX *a2, LPVOID *a3)
{
  LPVOID v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  void (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rdx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  const struct tWAVEFORMATEX *v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  LPVOID pv; // [rsp+68h] [rbp+28h] BYREF
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF

  v5 = 0LL;
  pv = 0LL;
  v18 = 0LL;
  if ( !a2 || !a3 )
  {
    v7 = -2147024809;
    v13 = 369LL;
    goto LABEL_23;
  }
  v6 = CAudioMediaType::Create(a2, (unsigned int)a2->cbSize + 18, (struct IAudioMediaType **)&pv, 0.0, 1);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x177,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
      (const char *)(unsigned int)v6);
    v5 = pv;
    goto LABEL_24;
  }
  v8 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))*((_QWORD *)this + 11);
  v5 = pv;
  if ( !v8 )
  {
LABEL_15:
    if ( v18 )
    {
      v12 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 40LL))(v18);
      if ( !v12 )
      {
        v7 = -2004287480;
        v13 = 387LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
          (const char *)v7);
        goto LABEL_24;
      }
      pv = 0LL;
      v14 = CloneWaveFormat(v12, (struct tWAVEFORMATEX **)&pv);
      v7 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x186,
          (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
          (const char *)(unsigned int)v14);
        CoTaskMemFree(pv);
        goto LABEL_24;
      }
      *a3 = pv;
      CoTaskMemFree(0LL);
    }
    v7 = 0;
    goto LABEL_24;
  }
  ATL::CComQIPtr<IAPOPreferredFormatSupport,&__s_GUID const _GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7>::CComQIPtr<IAPOPreferredFormatSupport,&__s_GUID const _GUID_45ebff37_f274_4272_9d0d_2c48cea9b7c7>(
    &pv,
    v8);
  if ( !pv )
  {
    v7 = -2147467262;
    v9 = 2147500034LL;
    v10 = 380LL;
    goto LABEL_10;
  }
  v11 = (*(__int64 (__fastcall **)(LPVOID, LPVOID, __int64 *))(*(_QWORD *)pv + 24LL))(pv, v5, &v18);
  v7 = v11;
  if ( v11 >= 0 )
  {
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    goto LABEL_15;
  }
  v9 = (unsigned int)v11;
  v10 = 381LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
    (const char *)v9);
  if ( pv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
LABEL_24:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v5 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v5 + 16LL))(v5);
  return v7;
}
