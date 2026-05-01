/*
 * XREFs of ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x180101C08
 * Callers:
 *     ?OnDesktopVisibilityChanged@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@H@Z @ 0x180101620 (-OnDesktopVisibilityChanged@CImmersiveMode@@UEAAJPEAUIImmersiveMonitor@@H@Z.c)
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180101DC0 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x1801023AC (-_UnregisterDesktopVisibilitySource@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x1800170E0 (-UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800FAE0C (WPP_SF_d.c)
 *     ?_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z @ 0x18010218C (-_ScheduleDesktopVisibilityNotification@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N@Z.c)
 *     ?_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z @ 0x1801022E8 (-_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z.c)
 *     ?_UpdateFallbackWindow@CImmersiveMode@@AEAAXXZ @ 0x180102558 (-_UpdateFallbackWindow@CImmersiveMode@@AEAAXXZ.c)
 *     WPP_SF_l @ 0x1801027EC (WPP_SF_l.c)
 */

void __fastcall CImmersiveMode::_HandleDesktopVisibilityChange(
        CImmersiveMode *this,
        struct IUnknown *a2,
        char a3,
        char a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // r15d
  char v10; // r14
  unsigned __int8 v11; // di
  unsigned int v12; // esi
  unsigned __int64 v13; // rbp
  __int64 v14; // r14
  int v15; // edx
  char v16; // bp
  char v17; // [rsp+60h] [rbp+8h]
  int v18; // [rsp+68h] [rbp+10h] BYREF
  char v19; // [rsp+78h] [rbp+20h]

  v19 = a4;
  if ( ((int (__fastcall *)(struct IUnknown *, int *))a2->lpVtbl[2].QueryInterface)(a2, &v18) >= 0 && v18 )
    (*(void (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 43) + 56LL))(*((_QWORD *)this + 43), a2);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = *((_DWORD *)this + 98);
  v10 = 0;
  v11 = 0;
  v17 = 0;
  v12 = 0;
  v13 = 0LL;
  if ( *((_QWORD *)this + 55) )
  {
    do
    {
      v14 = *(_QWORD *)(*((_QWORD *)this + 54) + 8 * v13);
      if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)v14, a2) && *(_BYTE *)(v14 + 12) != a3 )
      {
        v15 = *((_DWORD *)this + 84);
        *(_BYTE *)(v14 + 12) = a3;
        v17 = 1;
        CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(v14, v15);
      }
      if ( *(_BYTE *)(v14 + 12) )
        v11 = 1;
      else
        v12 = 1;
      ++v13;
    }
    while ( v13 < *((_QWORD *)this + 55) );
    v10 = v17;
  }
  if ( v12 != v9 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, &WPP_5bfe0afb15183a40aba57cd6662ed6d1_Traceguids, v12);
    *((_DWORD *)this + 98) = v12;
    CImmersiveMode::_UpdateFallbackWindow(this);
  }
  v16 = *((_BYTE *)this + 396);
  if ( v11 != v16 )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_l(*((_QWORD *)WPP_GLOBAL_Control + 2), v7, v8, v11);
    *((_BYTE *)this + 396) = v11;
  }
  if ( v10 || v19 )
    CImmersiveMode::_ScheduleDesktopVisibilityNotification(this, (struct IImmersiveMonitor *)a2, a3);
  if ( v11 != v16 )
    CImmersiveMode::_ScheduleDesktopVisibilityNotification(this, 0LL, v11);
  if ( v12 != v9 )
    CImmersiveMode::_ScheduleLegacyModeNotification(this, v9, v12);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
