/*
 * XREFs of ?get_FragmentRoot@AccessibleElementBase@@UEAAJPEAPEAUIRawElementProviderFragmentRoot@@@Z @ 0x180316540
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180315EF8 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AccessibleElementBase::get_FragmentRoot(
        __int64 (__fastcall ***this)(char *, GUID *, struct IRawElementProviderFragmentRoot **),
        struct IRawElementProviderFragmentRoot **a2)
{
  int Element; // ebx
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rbx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  void *v13; // [rsp+40h] [rbp+20h] BYREF
  __int64 v14; // [rsp+48h] [rbp+28h] BYREF
  __int64 v15; // [rsp+50h] [rbp+30h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  Element = AccessibleElementBase::_GetElement(
              (AccessibleElementBase *)(this - 1),
              &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
              &v13);
  if ( Element < 0 )
    goto LABEL_11;
  v5 = *(_QWORD *)(*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, &v15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  if ( v5 )
  {
    v14 = 0LL;
    v7 = *(_QWORD *)(*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v13 + 24LL))(v13, &v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    Element = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v7 + 376LL))(
                v7,
                &GUID_f7063da8_8359_439c_9297_bbc5299a7d87,
                &v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    if ( Element >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, struct IRawElementProviderFragmentRoot **))(*(_QWORD *)v14 + 64LL))(
              v14,
              a2);
      Element = v10;
      if ( v10 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
        goto LABEL_11;
      }
      v8 = (unsigned int)v10;
      v9 = 228LL;
    }
    else
    {
      v8 = (unsigned int)Element;
      v9 = 227LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)v8);
    goto LABEL_10;
  }
  v6 = (**(this - 1))((char *)this - 8, &GUID_620ce2a5_ab8f_40a9_86cb_de3c75599b58, a2);
  Element = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDE,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
      (const char *)(unsigned int)v6);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  return (unsigned int)Element;
}
