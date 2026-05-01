/*
 * XREFs of ?TabletModeChanged@VirtualDesktopTabletModePolicy@@UEAAJW4_TABLETMODESTATE@@PEAUIAppLayout@@@Z @ 0x1803F0880
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?TransitionToDesktopMode@VirtualDesktopTabletModePolicy@@AEAAJPEAUIAppLayout@@@Z @ 0x1803F0A84 (-TransitionToDesktopMode@VirtualDesktopTabletModePolicy@@AEAAJPEAUIAppLayout@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopTabletModePolicy::TabletModeChanged(__int64 a1, int a2, struct IAppLayout *a3)
{
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, __int64); // rdi
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, _QWORD); // rbx
  _QWORD *v13; // rax
  unsigned __int64 v14; // r9
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64, __int64); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v20; // [rsp+68h] [rbp+20h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**(_QWORD **)(a1 + 72) + 32LL))(*(_QWORD *)(a1 + 72), &v20);
  if ( a2 == *(_DWORD *)(a1 + 96) )
    goto LABEL_13;
  *(_DWORD *)(a1 + 96) = a2;
  if ( a2 != 1 )
  {
    v8 = VirtualDesktopTabletModePolicy::TransitionToDesktopMode((VirtualDesktopTabletModePolicy *)a1, a3);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 52LL;
      goto LABEL_11;
    }
    goto LABEL_13;
  }
  v6 = *(_QWORD *)(a1 + 56);
  v7 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 224LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 80));
  v8 = v7(v6, a1 + 80);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 46LL;
LABEL_11:
    v14 = (unsigned int)v8;
    goto LABEL_12;
  }
  v11 = *(_QWORD *)(a1 + 56);
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 248LL);
  v13 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 48) + 96LL))(
                    *(_QWORD *)(a1 + 48),
                    &v19);
  v9 = v12(v11, *v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  if ( v9 >= 0 )
  {
    v15 = *(_QWORD *)(a1 + 56);
    v16 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 280LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 88));
    v8 = v16(v15, a1 + 88);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 48LL;
      goto LABEL_11;
    }
LABEL_13:
    v9 = 0;
    goto LABEL_14;
  }
  v14 = (unsigned int)v9;
  v10 = 47LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoptabletmodepolicy.cpp",
    (const char *)v14);
LABEL_14:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v20);
  return (unsigned int)v9;
}
