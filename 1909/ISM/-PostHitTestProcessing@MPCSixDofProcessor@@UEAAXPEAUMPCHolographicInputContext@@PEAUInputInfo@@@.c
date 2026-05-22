/*
 * XREFs of ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180131510
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021360 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x1800570C8 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z @ 0x18007E8FC (-OnMenuPressed@MPCManager@@QEAAXAEBUDeviceInfo@@W4MPCSourceKind@@@Z.c)
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x180081480 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180085EE4 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18008616C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008632C (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008645C (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x18012FE78 (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?HasMenuButtonReleased@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z @ 0x180130190 (-HasMenuButtonReleased@MPCSixDofProcessor@@AEAA_NPEAUInputInfo@@@Z.c)
 *     ?PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801310A0 (-PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180131EEC (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180132F14 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18013D110 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 */

void __fastcall MPCSixDofProcessor::PostHitTestProcessing(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  bool HasMenuButtonReleased; // bl
  struct MPCHolographicInputManager *Instance; // rax
  const char *v7; // r9
  int v8; // eax
  struct MPCHolographicInputManager *v9; // rax
  const char *v10; // r9
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 *v14; // rax
  char IsInjecting; // al
  struct InputInfo *v16; // rdx
  MPCSixDofProcessor *v17; // rcx
  __int64 **v18; // rax
  __int64 **v19; // rbx
  __int64 *v20; // rax
  const char *v21; // r9
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 *v24; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v26; // [rsp+50h] [rbp+8h] BYREF

  if ( MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this) )
  {
    MPCSixDofProcessor::UpdatePoint((MPCSixDofProcessor *)(this - 24), a3);
    HasMenuButtonReleased = MPCSixDofProcessor::HasMenuButtonReleased((MPCSixDofProcessor *)(this - 24), a3);
    if ( HasMenuButtonReleased )
      MPCManager::OnMenuPressed((__int64)MPCManager::s_instance, *(_QWORD *)(this + 24), 5u);
    if ( *((_BYTE *)a3 + 152) )
    {
      if ( HasMenuButtonReleased )
      {
        Instance = MPCHolographicInputManager::GetInstance();
        v8 = MPCHolographicInputManager::InjectRightClick(
               (__int64)Instance,
               1,
               *((_DWORD *)a3 + 46),
               v7,
               *((float *)a3 + 40));
        if ( v8 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            993LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
            (const char *)(unsigned int)v8);
        v9 = MPCHolographicInputManager::GetInstance();
        v11 = MPCHolographicInputManager::InjectRightClick(
                (__int64)v9,
                0,
                *((_DWORD *)a3 + 46),
                v10,
                *((float *)a3 + 40));
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1001LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
            (const char *)(unsigned int)v11);
      }
      if ( *(_BYTE *)(this + 4621) )
      {
        MPCSixDofProcessor::UpdateTouchpadDownleveling((MPCSixDofProcessor *)(this - 24), a3);
        return;
      }
      MPCGestureHandlerManager::GetInstance();
      v13 = v12;
      v14 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v26,
              this & -(__int64)(this != 24));
      IsInjecting = MPCGestureHandlerManager::IsInjecting(v13, v14);
      v16 = a3;
      v17 = (MPCSixDofProcessor *)(this - 24);
      if ( !IsInjecting )
      {
        MPCSixDofProcessor::UpdateTouchpadDownleveling(v17, a3);
        if ( *(_BYTE *)(this + 4621) )
          return;
        v16 = a3;
        v17 = (MPCSixDofProcessor *)(this - 24);
      }
      MPCSixDofProcessor::PopulateDownLevelInfo(v17, v16);
      MPCGestureHandlerManager::GetInstance();
      v19 = v18;
      v20 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v26,
              this & -(__int64)(this != 24));
      MPCGestureHandlerManager::DownLevelTo2D(v19, (__int64)a3, v20, v21);
    }
    else
    {
      MPCGestureHandlerManager::GetInstance();
      v23 = v22;
      v24 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v26,
              this & -(__int64)(this != 24));
      if ( MPCGestureHandlerManager::IsHovering(v23, v24) )
        MPCSixDofProcessor::EndGesture((MPCSixDofProcessor *)(this - 24));
    }
  }
}
