/*
 * XREFs of ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000AB60
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x18000AA20 (-Create@CTransitionWindowSnapshot@@SAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtag.c)
 * Callees:
 *     ?GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z @ 0x180006F4C (-GetCVI@CWindowSnapshot@@QEAAJPEBUtagRECT@@PEAPEAVCResource@@PEAM@Z.c)
 *     ?CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z @ 0x18000AD04 (-CanUseCVIFromSnapshot@CTransitionWindowSnapshot@@SA_NPEBVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F5B0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x180027724 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180032D64 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x180033020 (-_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ.c)
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x180037B24 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 *     _Init_thread_footer @ 0x18004C1BC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004C22C (_Init_thread_header.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Initialize(
        CTransitionWindowSnapshot *this,
        struct IDwmChannel *a2,
        struct CTopLevelWindow *a3,
        struct CVisual *a4,
        const struct tagRECT *a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rbx
  float ScalingFactorForCVI; // xmm0_4
  CBaseObject *v14; // rcx
  struct tagRECT v15; // xmm1
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-28h]
  CBaseObject *v19; // [rsp+30h] [rbp-18h] BYREF

  if ( dword_1800D7A54 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800D7A54);
    if ( dword_1800D7A54 == -1 )
    {
      dword_1800D4E94 = -2147023434;
      Init_thread_footer(&dword_1800D7A54);
    }
  }
  v19 = 0LL;
  v9 = CVisual::Initialize(this, a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D4E94, 1u, v9, 0x57u);
    return v10;
  }
  v11 = CWindowSnapshot::Create(a3, &v19);
  v10 = v11;
  if ( v11 < 0 )
  {
    v18 = 90;
  }
  else
  {
    v12 = *((_QWORD *)a3 + 90);
    if ( CTransitionWindowSnapshot::CanUseCVIFromSnapshot((const struct CWindowData *)v12)
      && (int)CWindowSnapshot::GetCVI(
                *(CWindowSnapshot **)(v12 + 424),
                a5,
                (struct CResource **)this + 36,
                (float *)this + 88) >= 0 )
    {
      v11 = CTransitionWindowSnapshot::_EnsureBrushForCVI(this);
      v10 = v11;
      if ( v11 < 0 )
      {
        v18 = 95;
        goto LABEL_21;
      }
LABEL_10:
      v14 = v19;
      *((struct tagRECT *)this + 21) = *a5;
      v15 = *a5;
      *((_QWORD *)this + 35) = v14;
      *((struct tagRECT *)this + 20) = v15;
      if ( v14 )
        _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
      CVisual::SetDirtyFlags(this, 0x1000u);
      goto LABEL_13;
    }
    if ( !a4 )
    {
      v10 = -2147023434;
      v18 = 100;
      v17 = -2147023434;
      goto LABEL_23;
    }
    *((_QWORD *)this + 39) = a4;
    _InterlockedIncrement((volatile signed __int32 *)a4 + 2);
    if ( (*(_DWORD *)(v12 + 604) & 0xFFF) == 0x17 )
      ScalingFactorForCVI = FLOAT_1_0;
    else
      ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(CDesktopManager::s_pDesktopManagerInstance, a5);
    *((float *)this + 88) = ScalingFactorForCVI;
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 39) + 64LL))(*((_QWORD *)this + 39));
    v10 = v11;
    if ( v11 < 0 )
    {
      v18 = 116;
      goto LABEL_21;
    }
    v11 = CTransitionWindowSnapshot::_EnsureCVIResource(this, a5);
    v10 = v11;
    if ( v11 >= 0 )
      goto LABEL_10;
    v18 = 119;
  }
LABEL_21:
  v17 = v11;
LABEL_23:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D4E94, 1u, v17, v18);
LABEL_13:
  if ( v19 )
    CBaseObject::Release(v19);
  return v10;
}
