/*
 * XREFs of ??$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIWindowManagerBridge@@$$QEAPEAVWindowEventDispatcher@@@Z @ 0x180277CAC
 * Callers:
 *     ?RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ @ 0x1802802AC (-RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025AC0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWindowManagerBridge@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180078E40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWindowManagerBr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0WindowManagerBridge@@QEAA@XZ @ 0x180279C54 (--0WindowManagerBridge@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z @ 0x1802A13B8 (-RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<WindowManagerBridge,IWindowManagerBridge,WindowEventDispatcher *>(
        void **a1,
        _QWORD *a2)
{
  WindowManagerBridge *v4; // rax
  int CanCastTo; // ebx
  WindowManagerBridge *v6; // rdi
  _DWORD *v7; // rcx
  _DWORD *v8; // r9
  const struct _GUID *v9; // rdx

  *a1 = 0LL;
  v4 = (WindowManagerBridge *)operator new(0x128uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v6 = WindowManagerBridge::WindowManagerBridge(v4);
  CanCastTo = WindowManagerBridge::RuntimeClassInitialize(
                v6,
                (struct IWindowEventDispatcherInternal *)((*a2 + 16LL) & -(__int64)(*a2 != 0LL)));
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_fd4a9568_9653_4679_88b2_d7d1f960e8e1, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v6;
      (*(void (__fastcall **)(WindowManagerBridge *))(*(_QWORD *)v6 + 8LL))(v6);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v7, v8) )
      {
        *a1 = v6;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((WindowManagerBridge *)((char *)v6 + 8), v9, a1);
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
        if ( CanCastTo < 0 )
          goto LABEL_12;
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
  }
LABEL_12:
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWindowManagerBridge,Microsoft::WRL::FtmBase>::Release((volatile signed __int32 *)v6);
  return (unsigned int)CanCastTo;
}
