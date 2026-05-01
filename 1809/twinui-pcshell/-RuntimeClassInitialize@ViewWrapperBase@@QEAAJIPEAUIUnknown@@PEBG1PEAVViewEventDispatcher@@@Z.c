/*
 * XREFs of ?RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x180243778
 * Callers:
 *     ?RuntimeClassInitialize@LegacyViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1W4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Z @ 0x18023C630 (-RuntimeClassInitialize@LegacyViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1W4ViewLifetimePolicy@1@PEAVV.c)
 *     ?RuntimeClassInitialize@UAPViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x18023D300 (-RuntimeClassInitialize@UAPViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18000E50C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x180020094 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@QEAAAEAV012@PEAVViewEventDispatcher@@@Z @ 0x18022FA84 (--4-$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@QEAAAEAV012@PEAVViewEventDispatcher@@@Z.c)
 *     ??$ViewWrapperCreated@AEAIAEAPEBGAEAPEBG@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEBG1@Z @ 0x18023F540 (--$ViewWrapperCreated@AEAIAEAPEBGAEAPEBG@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEBG1@Z.c)
 *     ?SetCallback@WindowReadyState@@QEAAXV?$function@$$A6AX_N@Z@std@@@Z @ 0x18024DFE0 (-SetCallback@WindowReadyState@@QEAAXV-$function@$$A6AX_N@Z@std@@@Z.c)
 */

__int64 __fastcall ViewWrapperBase::RuntimeClassInitialize(
        ViewWrapperBase *this,
        int a2,
        struct IUnknown *a3,
        const unsigned __int16 *a4,
        unsigned __int16 *a5,
        struct ViewEventDispatcher *a6)
{
  _QWORD *v6; // rbx
  int v9; // ebx
  __int64 v10; // rdx
  int v12; // edi
  _QWORD v13[8]; // [rsp+20h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v15; // [rsp+98h] [rbp+38h] BYREF
  const WCHAR *v16; // [rsp+A8h] [rbp+48h] BYREF

  v16 = a4;
  v15 = a2;
  *((_DWORD *)this + 37) = a2;
  v6 = (_QWORD *)((char *)this + 192);
  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 24, (__int64)a3);
  Microsoft::WRL::ComPtr<ViewEventDispatcher>::operator=((__int64 *)this + 21, (__int64)a6);
  if ( *v6 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)this + 21) + 520LL) + 296LL))(
           *(_QWORD *)(*((_QWORD *)this + 21) + 520LL),
           *v6,
           (char *)this + 176);
    if ( v9 < 0 )
    {
      v10 = 87LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
  }
  v13[1] = this;
  v13[0] = off_1803E5CF8;
  v13[7] = v13;
  WindowReadyState::SetCallback((char *)this + 360, v13);
  v9 = -2147467261;
  if ( a4 )
    v12 = Windows::Internal::String::_InitializeHelper((HSTRING *)this + 19, a4);
  else
    v12 = -2147467261;
  if ( v12 >= 0 )
  {
    if ( a5 )
      v9 = Windows::Internal::String::_InitializeHelper((HSTRING *)this + 20, a5);
    if ( v9 < 0 )
    {
      v10 = 100LL;
      goto LABEL_4;
    }
    ViewManagerInteropTraceLogging::ViewWrapperCreated<unsigned int &,unsigned short const * &,unsigned short const * &>(
      &v15,
      &v16,
      (LPCWSTR *)&a5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
}
