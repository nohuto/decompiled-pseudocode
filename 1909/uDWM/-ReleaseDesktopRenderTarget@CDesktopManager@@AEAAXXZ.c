/*
 * XREFs of ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ @ 0x18007FC2C
 * Callers:
 *     ?EnsureDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18004C190 (-EnsureDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x18007E66C (--1CDesktopManager@@EEAA@XZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x18007F7D0 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x18002C3EC (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?SetRenderTargetForDesktops@CWindowList@@QEAAXPEAUIDCompositionDesktopTargetPartner@@@Z @ 0x18004BF70 (-SetRenderTargetForDesktops@CWindowList@@QEAAXPEAUIDCompositionDesktopTargetPartner@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDesktopManager::ReleaseDesktopRenderTarget(CDesktopManager *this, unsigned int a2)
{
  CBaseObject *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  CBaseObject *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  CDWMDisplaySet *v12; // rcx

  if ( *((_QWORD *)this + 9) )
  {
    CWindowList::SetRenderTargetForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61), 0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 9) + 8LL))(*((_QWORD *)this + 9), 0LL);
    v3 = (CBaseObject *)*((_QWORD *)this + 9);
    if ( v3 )
    {
      CBaseObject::Release(v3);
      *((_QWORD *)this + 9) = 0LL;
    }
  }
  v4 = *((_QWORD *)this + 11);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 11) = 0LL;
  }
  v5 = *((_QWORD *)this + 10);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 40LL))(v5, 0LL);
    v6 = *((_QWORD *)this + 10);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      *((_QWORD *)this + 10) = 0LL;
    }
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 18);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 18) = 0LL;
  }
  v8 = *((_QWORD *)this + 12);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 12) = 0LL;
  }
  v9 = *((_QWORD *)this + 17);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)this + 17) = 0LL;
  }
  v10 = *((_QWORD *)this + 26);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
  v11 = *((_QWORD *)this + 19);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    *((_QWORD *)this + 19) = 0LL;
  }
  v12 = (CDWMDisplaySet *)*((_QWORD *)this + 20);
  if ( v12 )
  {
    CDWMDisplaySet::Release(v12, a2);
    *((_QWORD *)this + 20) = 0LL;
  }
}
