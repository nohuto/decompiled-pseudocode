/*
 * XREFs of ?GetViewsForPositioner@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x1803348B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x18002EE54 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18005FE10 (-IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800ED150 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ShellPositionerManager::GetViewsForPositioner(
        __int64 a1,
        int a2,
        struct IApplicationView *a3,
        _QWORD *a4)
{
  __int64 v8; // rbx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  const struct _GUID *v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  unsigned int i; // edi
  __int64 v17; // rbx
  struct IImmersiveMonitor *v18; // r8
  void *v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  struct IShellPositionerPriority *v22[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v24; // [rsp+80h] [rbp+30h] BYREF
  struct IApplicationView *v25; // [rsp+98h] [rbp+48h] BYREF

  v22[1] = (struct IShellPositionerPriority *)-2LL;
  *a4 = 0LL;
  v21 = 0LL;
  v8 = *(_QWORD *)(a1 + 72);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 32LL))(v8, &v21);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 24LL))(v21, &v24);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 362LL;
      goto LABEL_5;
    }
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    v14 = CEnumerableObjectCollection::CreateInstance(v13, v12, &v20);
    v10 = v14;
    if ( v14 >= 0 )
    {
      for ( i = 0; i < v24; ++i )
      {
        v25 = 0LL;
        v17 = v21;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
        if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v17 + 32LL))(
               v17,
               i,
               &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
               &v25) >= 0
          && (!a3 || ApplicationViewHelpers::IsViewOnMonitor(v25, a3, v18)) )
        {
          v22[0] = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v22);
          if ( (int)ShellPositionerManager::GetPositionerPriorityForView((ShellPositionerManager *)(a1 - 88), v25, v22) >= 0
            && (*(unsigned int (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v22[0] + 24LL))(v22[0]) == a2 )
          {
            (*(void (__fastcall **)(void *, struct IApplicationView *))(*(_QWORD *)v20 + 40LL))(v20, v25);
          }
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v22);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
      }
      v14 = (**(__int64 (__fastcall ***)(void *, GUID *, _QWORD *))v20)(
              v20,
              &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
              a4);
      v10 = v14;
      if ( v14 >= 0 )
        goto LABEL_20;
      v15 = 385LL;
    }
    else
    {
      v15 = 365LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v14);
LABEL_20:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    goto LABEL_21;
  }
  v11 = 359LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v9);
LABEL_21:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  return v10;
}
