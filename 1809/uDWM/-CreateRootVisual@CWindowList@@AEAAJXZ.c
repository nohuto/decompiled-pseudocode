/*
 * XREFs of ?CreateRootVisual@CWindowList@@AEAAJXZ @ 0x18003DA28
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18003CFEC (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180026E70 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::CreateRootVisual(struct CVisual **this)
{
  _QWORD *v1; // rdi
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+44h] [rbp+Ch]

  v1 = this + 10;
  v2 = CVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5), this + 10);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x72Cu);
  }
  else
  {
    v4 = *v1;
    v9 = 0x7FFFFFFF;
    v10 = 0x7FFFFFFF;
    v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 96LL))(v4, &v9);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x72Fu);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 64LL))(*v1);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x732u);
      }
      else
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 5) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5));
        v3 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x734u);
      }
    }
  }
  return v3;
}
