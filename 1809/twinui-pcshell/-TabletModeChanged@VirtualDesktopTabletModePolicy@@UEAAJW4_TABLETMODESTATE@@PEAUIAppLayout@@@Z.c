/*
 * XREFs of ?TabletModeChanged@VirtualDesktopTabletModePolicy@@UEAAJW4_TABLETMODESTATE@@PEAUIAppLayout@@@Z @ 0x18038AA70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?TransitionToDesktopMode@VirtualDesktopTabletModePolicy@@AEAAJPEAUIAppLayout@@@Z @ 0x18038AC74 (-TransitionToDesktopMode@VirtualDesktopTabletModePolicy@@AEAAJPEAUIAppLayout@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopTabletModePolicy::TabletModeChanged(__int64 a1, int a2, struct IAppLayout *a3)
{
  __int64 v6; // rdi
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v17; // [rsp+58h] [rbp+20h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(a1 + 72) + 32LL))(*(_QWORD *)(a1 + 72), &v17);
  if ( a2 == *(_DWORD *)(a1 + 96) )
    goto LABEL_13;
  *(_DWORD *)(a1 + 96) = a2;
  if ( a2 != 1 )
  {
    v7 = VirtualDesktopTabletModePolicy::TransitionToDesktopMode((VirtualDesktopTabletModePolicy *)a1, a3);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 52LL;
      goto LABEL_11;
    }
    goto LABEL_13;
  }
  v6 = *(_QWORD *)(a1 + 56);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 80));
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 224LL))(v6, a1 + 80);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 46LL;
LABEL_11:
    v12 = (unsigned int)v7;
    goto LABEL_12;
  }
  v10 = *(_QWORD *)(a1 + 56);
  v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 48) + 96LL))(
                    *(_QWORD *)(a1 + 48),
                    &v16);
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 248LL))(v10, *v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  if ( v8 >= 0 )
  {
    v13 = *(_QWORD *)(a1 + 56);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 88));
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 280LL))(v13, a1 + 88);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 48LL;
      goto LABEL_11;
    }
LABEL_13:
    v8 = 0;
    goto LABEL_14;
  }
  v12 = (unsigned int)v8;
  v9 = 47LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
    (const char *)v12);
LABEL_14:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v17);
  return (unsigned int)v8;
}
