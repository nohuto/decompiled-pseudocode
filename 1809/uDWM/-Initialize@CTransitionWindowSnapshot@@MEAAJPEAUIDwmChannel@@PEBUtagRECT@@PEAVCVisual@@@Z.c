/*
 * XREFs of ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEBUtagRECT@@PEAVCVisual@@@Z @ 0x180045820
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180045770 (-Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F5B0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180032D64 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180037B24 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Initialize(
        CTransitionWindowSnapshot *this,
        struct IDwmChannel *a2,
        const struct tagRECT *a3,
        struct CVisual *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  CDesktopManager *v9; // rcx
  int v10; // eax
  int v11; // eax

  v7 = CVisual::Initialize(this, a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x86u);
  }
  else
  {
    *((_QWORD *)this + 35) = 0LL;
    v9 = CDesktopManager::s_pDesktopManagerInstance;
    *((struct tagRECT *)this + 21) = *a3;
    *((struct tagRECT *)this + 20) = *a3;
    *((float *)this + 88) = CDesktopManager::GetScalingFactorForCVI(v9, a3);
    *((_QWORD *)this + 39) = a4;
    if ( a4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a4 + 2);
      a4 = (struct CVisual *)*((_QWORD *)this + 39);
    }
    v10 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a4 + 64LL))(a4);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x8Eu);
    }
    else
    {
      v11 = CTransitionWindowSnapshot::_EnsureCVIResource(this, a3);
      v8 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x91u);
      else
        CVisual::SetDirtyFlags(this, 4096);
    }
  }
  return v8;
}
