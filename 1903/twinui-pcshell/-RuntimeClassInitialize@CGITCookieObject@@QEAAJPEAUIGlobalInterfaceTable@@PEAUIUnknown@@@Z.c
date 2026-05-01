/*
 * XREFs of ?RuntimeClassInitialize@CGITCookieObject@@QEAAJPEAUIGlobalInterfaceTable@@PEAUIUnknown@@@Z @ 0x180413FE0
 * Callers:
 *     ??$MakeAndInitialize@VCGITCookieObject@@UIGITCookieObject@@PEAUIGlobalInterfaceTable@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAUIGITCookieObject@@$$QEAPEAUIGlobalInterfaceTable@@AEAPEAUIUnknown@@@Z @ 0x1804139E4 (--$MakeAndInitialize@VCGITCookieObject@@UIGITCookieObject@@PEAUIGlobalInterfaceTable@@AEAPEAUIUn.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGITCookieObject::RuntimeClassInitialize(
        CGITCookieObject *this,
        struct IGlobalInterfaceTable *a2,
        struct IUnknown *a3)
{
  struct IGlobalInterfaceTable *v5; // rcx
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IGlobalInterfaceTable *v12; // [rsp+40h] [rbp+8h] BYREF

  v5 = (struct IGlobalInterfaceTable *)*((_QWORD *)this + 7);
  if ( v5 != a2 )
  {
    v12 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    v7 = *((_QWORD *)this + 7);
    v5 = a2;
    *((_QWORD *)this + 7) = a2;
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      v5 = (struct IGlobalInterfaceTable *)*((_QWORD *)this + 7);
    }
  }
  v8 = ((__int64 (__fastcall *)(struct IGlobalInterfaceTable *, struct IUnknown *, GUID *, char *))v5->lpVtbl->RegisterInterfaceInGlobal)(
         v5,
         a3,
         &GUID_00000000_0000_0000_c000_000000000046,
         (char *)this + 48);
  v9 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"shell\\lib\\gitreglist.cpp",
      (const char *)(unsigned int)v8);
  return v9;
}
