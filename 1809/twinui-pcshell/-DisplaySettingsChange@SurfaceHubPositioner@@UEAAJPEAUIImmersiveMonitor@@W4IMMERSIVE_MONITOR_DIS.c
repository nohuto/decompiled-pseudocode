/*
 * XREFs of ?DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1803388D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1803397C0 (-_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18033992C (-_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SurfaceHubPositioner::DisplaySettingsChange(__int64 a1, struct IImmersiveMonitor *a2, char a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  SurfaceHubPositioner *v14; // rdi
  struct IImmersiveMonitor *v15[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v17; // [rsp+60h] [rbp+20h] BYREF
  struct IImmersiveMonitor *v18; // [rsp+78h] [rbp+38h] BYREF

  v15[1] = (struct IImmersiveMonitor *)-2LL;
  if ( *(_BYTE *)(a1 + 432) )
  {
    if ( (a3 & 0x10) != 0 )
    {
      v5 = SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange((SurfaceHubPositioner *)(a1 - 120), a2);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1C6,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v5);
        return v6;
      }
    }
    if ( (a3 & 0x28) != 0 )
    {
      v18 = 0LL;
      v8 = *(_QWORD *)(a1 + 40);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v8 + 72LL))(
             v8,
             0LL,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &v18);
      v6 = v9;
      if ( v9 < 0 )
      {
        v10 = 461LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v9);
        goto LABEL_22;
      }
      v17 = 1;
      v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 40) + 32LL))(
             *(_QWORD *)(a1 + 40),
             &v17);
      v6 = v9;
      if ( v9 < 0 )
      {
        v10 = 463LL;
        goto LABEL_21;
      }
      if ( v17 <= 1 )
      {
        v14 = (SurfaceHubPositioner *)(a1 - 120);
      }
      else
      {
        v15[0] = 0LL;
        v11 = *(_QWORD *)(a1 + 40);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
        v12 = (*(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, struct IImmersiveMonitor **))(*(_QWORD *)v11 + 104LL))(
                v11,
                1LL,
                v18,
                v15);
        v6 = v12;
        if ( v12 < 0 )
        {
          v13 = 467LL;
LABEL_16:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
            (const char *)(unsigned int)v12);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
LABEL_22:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
          return v6;
        }
        v14 = (SurfaceHubPositioner *)(a1 - 120);
        v12 = SurfaceHubPositioner::_ReLayoutAllApps(v14, v15[0]);
        v6 = v12;
        if ( v12 < 0 )
        {
          v13 = 468LL;
          goto LABEL_16;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
      }
      v9 = SurfaceHubPositioner::_ReLayoutAllApps(v14, v18);
      v6 = v9;
      if ( v9 < 0 )
      {
        v10 = 470LL;
        goto LABEL_21;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    }
  }
  return 0LL;
}
