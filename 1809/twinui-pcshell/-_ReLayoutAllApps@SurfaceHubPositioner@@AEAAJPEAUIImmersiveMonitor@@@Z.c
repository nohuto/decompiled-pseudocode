/*
 * XREFs of ?_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1803397C0
 * Callers:
 *     ?DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1803388D0 (-DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DIS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180339BD8 (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SurfaceHubPositioner::_ReLayoutAllApps(SurfaceHubPositioner *this, struct IImmersiveMonitor *a2)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int i; // edi
  __int64 v9; // rbx
  int v10; // eax
  __int64 v12[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v14; // [rsp+60h] [rbp+20h] BYREF
  int v15; // [rsp+70h] [rbp+30h] BYREF
  struct IApplicationView *v16; // [rsp+78h] [rbp+38h] BYREF

  v12[1] = -2LL;
  v12[0] = 0LL;
  v4 = *((_QWORD *)this + 23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)v4 + 64LL))(
         v4,
         2LL,
         a2,
         v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 565LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_14;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12[0] + 24LL))(v12[0], &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 567LL;
    goto LABEL_5;
  }
  for ( i = 0; i < v14; ++i )
  {
    v16 = 0LL;
    v9 = v12[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v9 + 32LL))(
           v9,
           i,
           &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
           &v16) >= 0
      && (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v16 + 216LL))(v16, &v15) >= 0 )
    {
      if ( v15 )
      {
        v10 = SurfaceHubPositioner::_SetDefaultLayout(this, v16, 0);
        if ( v10 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            579LL,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
            (const char *)(unsigned int)v10);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  }
  v6 = 0;
LABEL_14:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
  return v6;
}
