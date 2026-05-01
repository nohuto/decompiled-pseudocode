/*
 * XREFs of ?OnApplicationViewChanged@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18005FC50
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x18005FDE8 (-SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ.c)
 *     ?IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18005FE10 (-IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180141178 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?RemoveView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180142404 (-RemoveView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180142A38 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FullScreenPositioner::OnApplicationViewChanged(
        __int64 a1,
        struct IUnknown *a2,
        struct IImmersiveMonitor *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 *v8; // rcx
  int v9; // eax
  __int64 *v10; // rcx
  __int64 v11; // rdx
  FullScreenPositioner *v12; // rsi
  _QWORD v13[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v15; // [rsp+40h] [rbp+10h] BYREF

  v13[1] = -2LL;
  if ( !*(_DWORD *)(a1 + 208) )
    return 0LL;
  if ( (_DWORD)a3 == 1 )
  {
    v12 = (FullScreenPositioner *)(a1 - 152);
    if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(a1 + 88), a2) )
      FullScreenPositioner::SetVisibleView(v12, 0LL);
    FullScreenPositioner::RemoveView(v12, (struct IApplicationView *)a2);
    return 0LL;
  }
  if ( (int)a3 <= 6 )
    return 0LL;
  if ( (int)a3 <= 8 )
  {
    if ( !ApplicationViewHelpers::IsViewOnMonitor(
            (ApplicationViewHelpers *)a2,
            *(struct IApplicationView **)(a1 + 80),
            a3)
      || (unsigned int)SHIsSameObject(*(struct IUnknown **)(a1 + 88), a2) )
    {
      return 0LL;
    }
    LODWORD(v15) = 0;
    v13[0] = 0LL;
    if ( ((int (__fastcall *)(struct IUnknown *, _QWORD *))a2->lpVtbl[11].QueryInterface)(a2, v13) >= 0
      && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 24LL))(v13[0]) == 3 )
    {
      v6 = FullScreenPositioner::FullScreenViewGetsFocus(
             (FullScreenPositioner *)(a1 - 152),
             (struct IApplicationView *)a2);
      v7 = v6;
      if ( v6 >= 0 )
      {
LABEL_16:
        v8 = v13;
LABEL_17:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
        return 0LL;
      }
      v11 = 739LL;
    }
    else
    {
      if ( v13[0] && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 24LL))(v13[0]) == 4 )
        goto LABEL_16;
      if ( ((int (__fastcall *)(struct IUnknown *, __int64 *))a2->lpVtbl[14].QueryInterface)(a2, &v15) < 0 )
        goto LABEL_16;
      if ( (_DWORD)v15 )
        goto LABEL_16;
      v6 = FullScreenPositioner::SwitchToNonFullScreenApp((FullScreenPositioner *)(a1 - 152));
      v7 = v6;
      if ( v6 >= 0 )
        goto LABEL_16;
      v11 = 749LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v6);
    v10 = v13;
    goto LABEL_28;
  }
  if ( (_DWORD)a3 != 9
    || !ApplicationViewHelpers::IsViewOnMonitor(
          (ApplicationViewHelpers *)a2,
          *(struct IApplicationView **)(a1 + 80),
          a3) )
  {
    return 0LL;
  }
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  if ( ((int (__fastcall *)(struct IUnknown *, __int64 *))a2->lpVtbl[11].QueryInterface)(a2, &v15) >= 0
    && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15) == 3
    || (v9 = FullScreenPositioner::SwitchToNonFullScreenApp((FullScreenPositioner *)(a1 - 152)), v7 = v9, v9 >= 0) )
  {
    v8 = &v15;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x304,
    (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
    (const char *)(unsigned int)v9);
  v10 = &v15;
LABEL_28:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v10);
  return v7;
}
