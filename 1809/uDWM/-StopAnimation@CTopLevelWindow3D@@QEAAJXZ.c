/*
 * XREFs of ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800198B0
 * Callers:
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18000D720 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180014A70 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18001F720 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180020430 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x180023EB8 (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x1800301D8 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z @ 0x180035790 (-SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z.c)
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180039100 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800882AC (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     _lambda_9b37f3d03e1ad1f523dfdba086665a20_::operator() @ 0x18009E714 (_lambda_9b37f3d03e1ad1f523dfdba086665a20_--operator().c)
 * Callees:
 *     ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x1800063C8 (-QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180019C10 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180033EA0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x180037974 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x180039CB0 (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x180076094 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     McTemplateU0qp @ 0x18007826C (McTemplateU0qp.c)
 */

__int64 __fastcall CTopLevelWindow3D::StopAnimation(unsigned __int64 this)
{
  CBaseObject *v2; // rcx
  unsigned int v3; // edi
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  float v6; // xmm0_4
  __int64 v7; // rdx
  char v8; // r11
  bool v9; // r11
  CTopLevelWindow *v10; // rcx
  int v11; // eax
  CLivePreview *v13; // rcx
  bool v14; // al
  __int64 v15; // rax
  char v16; // cl
  __int64 *v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  bool v20; // zf
  __int64 v21; // rax
  bool v22; // al
  int v23; // ecx
  __int64 v24; // rdi
  __int64 v25; // rsi
  CBaseObject *v26; // rcx
  int v27; // eax
  _QWORD v28[2]; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_QWORD *)(this + 360) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp(this, &UdwmAnimation_Stop, *(unsigned int *)(this + 368));
    CTopLevelWindow3D::GetScenarioGuid(this, *(unsigned int *)(this + 368), v28);
    v15 = v28[0] - *(_QWORD *)&GUID_NULL.Data1;
    if ( v28[0] == *(_QWORD *)&GUID_NULL.Data1 )
      v15 = v28[1] - *(_QWORD *)GUID_NULL.Data4;
    if ( v15 )
      (*(void (__fastcall **)(_QWORD, _QWORD *, unsigned __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 5)
                                                                 + 232LL))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
        v28,
        this | 0xD100000000000000uLL);
    v16 = CDesktopManager::s_fTimelineDirty;
    v17 = (__int64 *)(this + 376);
    v18 = 10LL;
    do
    {
      v19 = *v17;
      if ( *v17 )
      {
        v20 = (*(_DWORD *)(v19 + 8))-- == 1;
        if ( v20 )
          v16 = 1;
        *v17 = 0LL;
        CDesktopManager::s_fTimelineDirty = v16;
      }
      ++v17;
      --v18;
    }
    while ( v18 );
    v21 = *(_QWORD *)(this + 360);
    if ( v21 )
    {
      v20 = (*(_DWORD *)(v21 + 8))-- == 1;
      v22 = v16;
      if ( v20 )
        v22 = 1;
      *(_QWORD *)(this + 360) = 0LL;
      CDesktopManager::s_fTimelineDirty = v22;
    }
    if ( CDesktopManager::UnregisterForGlobalTimeChangeNotification((struct CVisual *)this) )
      --*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8);
    v23 = *(_DWORD *)(this + 368);
    if ( v23 == 9 && !*(_BYTE *)(this + 288) || *(_DWORD *)(this + 372) && (unsigned int)(v23 - 7) > 2 )
      *(_OWORD *)(this + 308) = *(_OWORD *)(*(_QWORD *)(this + 328) + 48LL);
    if ( (unsigned int)(v23 - 7) > 2 )
      *(_DWORD *)(this + 372) = 0;
    *(_DWORD *)(this + 368) = 0;
  }
  else if ( *(_BYTE *)(this + 480) && CDesktopManager::UnregisterForGlobalTimeChangeNotification((struct CVisual *)this) )
  {
    *(_BYTE *)(this + 480) = 0;
  }
  if ( *(int *)(this + 272) > 0 )
  {
    v24 = 0LL;
    v25 = *(unsigned int *)(this + 272);
    do
    {
      v26 = *(CBaseObject **)(v24 + *(_QWORD *)(this + 248));
      if ( v26 )
      {
        CBaseObject::Release(v26);
        *(_QWORD *)(v24 + *(_QWORD *)(this + 248)) = 0LL;
      }
      v24 += 8LL;
      --v25;
    }
    while ( v25 );
    *(_DWORD *)(this + 272) = 0;
    DynArrayImpl<0>::ShrinkToSize(this + 248, 8LL);
    (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)this + 24LL))(this, 4LL);
  }
  v2 = *(CBaseObject **)(this + 336);
  v3 = 0;
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *(_QWORD *)(this + 336) = 0LL;
  }
  v4 = *(CBaseObject **)(this + 344);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *(_QWORD *)(this + 344) = 0LL;
  }
  v5 = *(CBaseObject **)(this + 352);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *(_QWORD *)(this + 352) = 0LL;
  }
  v6 = *(double *)(this + 184);
  *(_BYTE *)(this + 290) = 0;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v6 - 1.0)) & _xmm) > 0.0000011920929 )
  {
    *(_QWORD *)(this + 184) = 0x3FF0000000000000LL;
    (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)this + 24LL))(this, 32LL);
  }
  v7 = *(_QWORD *)(this + 328);
  v8 = *(_BYTE *)(v7 + 596);
  if ( (v8 & 4) != 0 )
  {
    v27 = CWindowList::QueueDestroySprite(
            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
            (struct CWindowData *)v7);
    v3 = v27;
    if ( v27 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x572u);
  }
  else
  {
    v9 = v8 & 1;
    if ( !v9
      || ((v13 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 64), !*((_BYTE *)v13 + 280))
       || !v7
        ? (v14 = 0)
        : (v14 = CLivePreview::_IsInLivePreview(v13, (const struct CWindowData *)v7)),
          !v14) )
    {
      v10 = *(CTopLevelWindow **)(v7 + 392);
      if ( v10 )
      {
        v11 = CTopLevelWindow::ShowWindow(v10, v9);
        v3 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x56Du);
      }
    }
  }
  return v3;
}
