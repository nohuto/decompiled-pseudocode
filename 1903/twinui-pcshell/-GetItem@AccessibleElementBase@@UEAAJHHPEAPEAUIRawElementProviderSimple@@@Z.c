/*
 * XREFs of ?GetItem@AccessibleElementBase@@UEAAJHHPEAPEAUIRawElementProviderSimple@@@Z @ 0x180375580
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803764F8 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AccessibleElementBase::GetItem(
        AccessibleElementBase *this,
        int a2,
        int a3,
        struct IRawElementProviderSimple **a4)
{
  __int64 v6; // rsi
  __int64 v7; // rbp
  int Element; // ebx
  void *v9; // rbx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  void *v14; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0LL;
  v14 = 0LL;
  v6 = a3;
  v7 = a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  Element = AccessibleElementBase::_GetElement(
              (AccessibleElementBase *)((char *)this - 72),
              &GUID_32fb1eed_1f54_4f39_8ace_bc73caac51e2,
              &v14);
  if ( Element >= 0 )
  {
    v13 = 0LL;
    v9 = v14;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    Element = (*(__int64 (__fastcall **)(void *, __int64, __int64, __int64 *))(*(_QWORD *)v9 + 72LL))(v9, v7, v6, &v13);
    if ( Element >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IRawElementProviderSimple **))(*(_QWORD *)v13 + 376LL))(
              v13,
              &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
              a4);
      Element = v10;
      if ( v10 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x25E,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)(unsigned int)v10);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return (unsigned int)Element;
}
