/*
 * XREFs of ?HandleCurrentMonitorDisconnect@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18029F490
 * Callers:
 *     s_HandleCurrentMonitorDisconnect @ 0x18029FAA0 (s_HandleCurrentMonitorDisconnect.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?MoveStartToMonitorWithoutHiding@ImmersiveMonitorHelper@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18029F684 (-MoveStartToMonitorWithoutHiding@ImmersiveMonitorHelper@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ImmersiveMonitorHelper::HandleCurrentMonitorDisconnect(__int64 a1, struct IUnknown *a2, char a3)
{
  char v6; // di
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rdx
  struct IImmersiveMonitor *v12[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v14; // [rsp+60h] [rbp+18h] BYREF
  int v15; // [rsp+68h] [rbp+20h] BYREF

  v12[1] = (struct IImmersiveMonitor *)-2LL;
  if ( (a3 & 0x20) == 0 )
    return 0;
  v6 = 0;
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, int *))a2->lpVtbl[2].QueryInterface)(a2, &v14);
  if ( v7 >= 0 )
  {
    if ( v14 || !(unsigned int)SHIsSameObject(*(struct IUnknown **)(a1 + 64), a2) )
      return v6;
    v12[0] = 0LL;
    v8 = *(_QWORD *)(a1 + 72);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v12);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v8 + 72LL))(
           v8,
           0LL,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
           v12);
    v10 = retaddr;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, int *))(*(_QWORD *)v12[0] + 48LL))(v12[0], &v15);
      v10 = retaddr;
      if ( v9 >= 0 )
      {
        if ( !v15 )
          goto LABEL_15;
        v9 = ImmersiveMonitorHelper::MoveStartToMonitorWithoutHiding((ImmersiveMonitorHelper *)a1, v12[0]);
        v10 = retaddr;
        if ( v9 >= 0 )
          goto LABEL_15;
        v11 = 331LL;
      }
      else
      {
        v11 = 329LL;
      }
    }
    else
    {
      v11 = 326LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v10,
      v11,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v9);
LABEL_15:
    v6 = 1;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v12);
    return v6;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    318LL,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
    (const char *)(unsigned int)v7);
  return v6;
}
