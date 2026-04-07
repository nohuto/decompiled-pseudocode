/*
 * XREFs of ?CreateRootVisual@CWindowList@@AEAAJXZ @ 0x180044988
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180043F80 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x1800269D8 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
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
  void *v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+44h] [rbp+Ch]

  v1 = this + 10;
  v2 = CVisual::Create(this + 10);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x738u, v9);
  }
  else
  {
    v4 = *v1;
    v10 = 0x7FFFFFFF;
    v11 = 0x7FFFFFFF;
    v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 96LL))(v4, &v10);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x73Bu, v9);
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 64LL))(*v1);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x73Eu, v9);
      }
      else
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                             + 16LL)
                                               + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 5)
                                                                  + 16LL));
        v3 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x740u, v9);
      }
    }
  }
  return v3;
}
