/*
 * XREFs of ?TabletModeChanged@VirtualDesktopTabletModeNotificationListener@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x18040FE20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopTabletModeNotificationListener::TabletModeChanged(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, SID *, GUID *, __int64 *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, _QWORD *, GUID *, GUID *, __int64 *); // rdi
  int v10; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int64 *); // rdi
  int v13; // eax
  __int64 v14; // rdx
  _QWORD v16[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v18; // [rsp+70h] [rbp+30h] BYREF
  __int64 v19; // [rsp+80h] [rbp+40h] BYREF
  __int64 v20; // [rsp+88h] [rbp+48h] BYREF

  v16[1] = -2LL;
  v20 = 0LL;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  v6 = v5(v4, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v20);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v16[0] = 0LL;
    v19 = 0LL;
    v8 = v20;
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD *, GUID *, GUID *, __int64 *))(*(_QWORD *)v20 + 96LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v10 = v9(v8, v16, &GUID_975d55f5_ce62_42c0_868a_eda817f3871e, &GUID_975d55f5_ce62_42c0_868a_eda817f3871e, &v19);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA8,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
        (const char *)(unsigned int)v10);
LABEL_11:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      goto LABEL_12;
    }
    v18 = 0LL;
    v11 = v19;
    v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 72LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    v13 = v12(v11, &v18);
    v7 = v13;
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 32LL))(
              *(_QWORD *)(a1 + 16),
              a2,
              v18);
      v7 = v13;
      if ( v13 >= 0 )
      {
LABEL_10:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        goto LABEL_11;
      }
      v14 = 173LL;
    }
    else
    {
      v14 = 171LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA4,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
    (const char *)(unsigned int)v6);
LABEL_12:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
  return v7;
}
