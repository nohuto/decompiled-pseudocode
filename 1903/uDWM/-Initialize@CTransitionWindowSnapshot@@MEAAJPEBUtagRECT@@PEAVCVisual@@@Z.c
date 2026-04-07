/*
 * XREFs of ?Initialize@CTransitionWindowSnapshot@@MEAAJPEBUtagRECT@@PEAVCVisual@@@Z @ 0x1800447F0
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180044748 (-Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180014440 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x1800252E0 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18002B500 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x1800301A8 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Initialize(
        CTransitionWindowSnapshot *this,
        const struct tagRECT *a2,
        struct CVisual *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  CDesktopManager *v8; // rcx
  int v9; // eax
  int v10; // eax
  void *v12; // [rsp+28h] [rbp-10h]

  v6 = CVisual::Initialize(this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x86u, v12);
  }
  else
  {
    *((_QWORD *)this + 35) = 0LL;
    v8 = CDesktopManager::s_pDesktopManagerInstance;
    *((struct tagRECT *)this + 21) = *a2;
    *((struct tagRECT *)this + 20) = *a2;
    *((float *)this + 88) = CDesktopManager::GetScalingFactorForCVI(v8, a2);
    *((_QWORD *)this + 39) = a3;
    if ( a3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
      a3 = (struct CVisual *)*((_QWORD *)this + 39);
    }
    v9 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a3 + 64LL))(a3);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x8Eu, v12);
    }
    else
    {
      v10 = CTransitionWindowSnapshot::_EnsureCVIResource(this, a2);
      v7 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x91u, v12);
      else
        CVisual::SetDirtyFlags(this, 4096);
    }
  }
  return v7;
}
