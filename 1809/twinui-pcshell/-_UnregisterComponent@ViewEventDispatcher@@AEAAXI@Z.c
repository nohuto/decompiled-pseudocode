/*
 * XREFs of ?_UnregisterComponent@ViewEventDispatcher@@AEAAXI@Z @ 0x180220A08
 * Callers:
 *     ?DisconnectComponent@ViewEventDispatcher@@UEAAJI@Z @ 0x180214020 (-DisconnectComponent@ViewEventDispatcher@@UEAAJI@Z.c)
 *     ?UnregisterComponent@ViewEventDispatcher@@UEAAJI@Z @ 0x18021BA40 (-UnregisterComponent@ViewEventDispatcher@@UEAAJI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x18021FA4C (-_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180220CE0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 */

void __fastcall ViewEventDispatcher::_UnregisterComponent(ViewEventDispatcher *this, unsigned int a2)
{
  __int64 v4; // r8
  struct IViewWrapperInternal *v5; // [rsp+50h] [rbp+18h] BYREF
  int v6; // [rsp+58h] [rbp+20h] BYREF
  int v7; // [rsp+5Ch] [rbp+24h]

  v5 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId(this, a2, &v5) >= 0 )
  {
    (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD))(*(_QWORD *)v5 + 848LL))(v5, 0LL);
    (*(void (__fastcall **)(struct IViewWrapperInternal *, __int64))(*(_QWORD *)v5 + 872LL))(v5, 4LL);
    v6 = 0;
    v7 = 0;
    (*(void (__fastcall **)(struct IViewWrapperInternal *, int *))(*(_QWORD *)v5 + 880LL))(v5, &v6);
    ViewEventDispatcher::_HostChanged(this, v5, v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
}
