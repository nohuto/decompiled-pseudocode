/*
 * XREFs of ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008D504
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180085EE4 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008D504 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021360 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x1800570C8 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180080CB0 (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ??$MPCGestureHandler_InjectPress@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x18008C510 (--$MPCGestureHandler_InjectPress@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 *     ??$MPCGestureHandler_InjectRelease@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x18008C578 (--$MPCGestureHandler_InjectRelease@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 *     ??$MPCGestureHandler_StartScroll@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x18008C758 (--$MPCGestureHandler_StartScroll@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 *     ??$MPCGestureHandler_StartZoom@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z @ 0x18008C7C0 (--$MPCGestureHandler_StartZoom@AEAJAEAJAEBKK@ISMTracing@@SAXAEAJ0AEBK$$QEAK@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008D504 (-DownLevelTo2D@MPCGestureHandler@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ?FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAUInputInfo@@@Z @ 0x18008F790 (-FeedRecognizer@MPCSpatialGestureRecognizerHandler@@QEAAXPEAUInputInfo@@@Z.c)
 *     ?ResetGestureState@MPCSpatialGestureRecognizerHandler@@QEAAXXZ @ 0x180091210 (-ResetGestureState@MPCSpatialGestureRecognizerHandler@@QEAAXXZ.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800E7858 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800E85B8 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800E8654 (-InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800E86E8 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?IsHoveringForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800E8CB0 (-IsHoveringForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800E8CF4 (-IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z.c)
 *     ?SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z @ 0x1800E8DBC (-SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800E90E0 (-StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z @ 0x1800E9148 (-StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_NK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGestureHandler::DownLevelTo2D(__int64 a1, __int64 a2, __int64 *a3)
{
  MPCSpatialGestureRecognizerHandler *v6; // rcx
  unsigned int v7; // r14d
  bool IsHoveringForDeviceId; // al
  int v9; // r11d
  int v10; // r11d
  ManipulationInjector *v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // edx
  MPCSpatialGestureRecognizerHandler *v14; // rcx
  MPCHolographicInputManager *Instance; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  const char *v18; // r9
  struct IMPCInputPostProcessor *PostProcessor; // rax
  __int64 v21; // [rsp+70h] [rbp+38h] BYREF
  struct tagPOINT v22; // [rsp+78h] [rbp+40h] BYREF
  __int64 *v23; // [rsp+80h] [rbp+48h]
  struct tagPOINT v24; // [rsp+88h] [rbp+50h] BYREF

  v23 = a3;
  if ( (*(_DWORD *)(a2 + 696) == *(_DWORD *)(a1 + 912) || *(_DWORD *)(a2 + 656) == 2)
    && ((*(_DWORD *)(a1 + 168) & 0xFFFFFF7F) != 0 || *(_BYTE *)(a2 + 472))
    && (!(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 144LL))(*a3)
     || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 152LL))(*a3)
     || *(_BYTE *)(a2 + 475))
    && (*((_DWORD *)MPCHolographicInputManager::GetInstance() + 656) == 1 || *(_DWORD *)(a1 + 912)) )
  {
    v6 = *(MPCSpatialGestureRecognizerHandler **)(a1 + 904);
    if ( v6 )
      MPCSpatialGestureRecognizerHandler::FeedRecognizer(v6, (struct InputInfo *)a2);
    v24 = 0LL;
    v24.x = (int)*(float *)(a2 + 672);
    v24.y = (int)*(float *)(a2 + 676);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 80LL))(*a3);
    LODWORD(v21) = v7;
    if ( (*(_DWORD *)(a1 + 168) & 0xFFFFFF7F) == 0 )
      ManipulationInjector::SetInjectionRect((ManipulationInjector *)(a1 + 80), (const struct tagRECT *)(a2 + 680));
    switch ( *(_DWORD *)(a2 + 656) )
    {
      case 1:
        if ( !ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v7) )
        {
          ManipulationInjector::InjectDrag((ManipulationInjector *)(a1 + 80), &v24, v7);
          *(_BYTE *)(a1 + 972) = ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v7);
          Instance = MPCHolographicInputManager::GetInstance();
          PostProcessor = MPCHolographicInputManager::GetPostProcessor(Instance, v16, v17, v18);
          (*(void (__fastcall **)(struct IMPCInputPostProcessor *, struct tagPOINT))(*(_QWORD *)PostProcessor + 64LL))(
            PostProcessor,
            v24);
          v22.x = *(_DWORD *)(a1 + 912);
          ISMTracing::MPCGestureHandler_InjectPress<long &,long &,unsigned long const &,unsigned long>(
            (int *)&v24,
            &v24.y,
            (unsigned int *)&v21,
            &v22);
        }
        break;
      case 2:
        if ( *(_DWORD *)(a1 + 128) == 1 && *(_DWORD *)(a1 + 168) == 64 )
        {
          v22 = *(struct tagPOINT *)(a1 + 224);
          ManipulationInjector::InjectDrag((ManipulationInjector *)(a1 + 80), &v22, v7);
          *(_BYTE *)(a1 + 972) = ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v7);
        }
        if ( ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v7)
          && *(_DWORD *)(a1 + 168) == 1 )
        {
          *(float *)(a1 + 956) = *(float *)(a1 + 952)
                               / (float)((double)(*(_DWORD *)(a2 + 16) - *(_DWORD *)(a1 + 944))
                                       / (double)(int)qword_1801E0BE0);
        }
        ManipulationInjector::EndManipulation((ManipulationInjector *)(a1 + 80), v13);
        if ( (*(_DWORD *)(a1 + 168) & 0xFFFFFF7F) == 0 )
        {
          v14 = *(MPCSpatialGestureRecognizerHandler **)(a1 + 904);
          if ( v14 )
            MPCSpatialGestureRecognizerHandler::ResetGestureState(v14);
        }
        v22.x = *(_DWORD *)(a1 + 912);
        ISMTracing::MPCGestureHandler_InjectRelease<long &,long &,unsigned long const &,unsigned long>(
          (int *)&v24,
          &v24.y,
          (unsigned int *)&v21,
          &v22);
        break;
      case 3:
        *(_DWORD *)(a2 + 656) = 1;
        wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(&v21, *a3);
        MPCGestureHandler::DownLevelTo2D(a1, a2, &v21);
        *(_DWORD *)(a2 + 656) = 2;
        wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(&v21, *a3);
        MPCGestureHandler::DownLevelTo2D(a1, a2, &v21);
        return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a3);
      case 4:
        if ( !ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v7)
          && !*(_BYTE *)(a2 + 700) )
        {
          ManipulationInjector::InjectHover((ManipulationInjector *)(a1 + 80), &v24, v7);
          IsHoveringForDeviceId = ManipulationInjector::IsHoveringForDeviceId((ManipulationInjector *)(a1 + 80), v7);
          goto LABEL_22;
        }
        break;
      case 5:
        if ( *(_DWORD *)(a2 + 180) )
        {
          v11 = (ManipulationInjector *)(a1 + 80);
          if ( *(_DWORD *)(a1 + 168) == 1 )
          {
            if ( ManipulationInjector::IsInContactForDeviceId(v11, v7) )
            {
              *(_DWORD *)(a1 + 960) = *(_DWORD *)(a2 + 660);
              *(_DWORD *)(a1 + 964) = *(_DWORD *)(a2 + 664);
            }
          }
          else
          {
            ManipulationInjector::StartPan(v11, &v24, v7);
            if ( *(_DWORD *)(a1 + 168) == 1 )
            {
              v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a3 + 80LL))(*a3);
              ManipulationInjector::InjectPan(
                (ManipulationInjector *)(a1 + 80),
                *(float *)(a2 + 660),
                *(float *)(a2 + 664),
                v12);
              *(_BYTE *)(a1 + 972) = ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v7);
            }
            v22.x = *(_DWORD *)(a1 + 912);
            ISMTracing::MPCGestureHandler_StartScroll<long &,long &,unsigned long const &,unsigned long>(
              (int *)&v24,
              &v24.y,
              (unsigned int *)&v21,
              &v22);
          }
        }
        if ( *(_BYTE *)(a1 + 972) )
        {
          *(_QWORD *)(a1 + 944) = *(_QWORD *)(a2 + 16);
          *(_DWORD *)(a1 + 952) = 0;
          *(_DWORD *)(a1 + 956) = 0;
        }
        break;
      case 6:
        if ( *(_DWORD *)(a2 + 180) )
        {
          v9 = *(_DWORD *)(a1 + 168);
          if ( (v9 & 0xFFFFFF7F) == 0 || *(_DWORD *)(a1 + 128) == 1 && v9 == 64 )
          {
            ManipulationInjector::StartZoom((ManipulationInjector *)(a1 + 80), &v24, 1, v7);
            *(_BYTE *)(a1 + 972) = (*(_DWORD *)(a1 + 168) & 0xFFFFFF7F) != 0;
            v22.x = *(_DWORD *)(a1 + 912);
            ISMTracing::MPCGestureHandler_StartZoom<long &,long &,unsigned long const &,unsigned long>(
              (int *)&v24,
              &v24.y,
              (unsigned int *)&v21,
              &v22);
          }
          else if ( ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v7)
                 && ((v10 - 16) & 0xFFFFFFEF) == 0 )
          {
            *(_DWORD *)(a1 + 968) = *(_DWORD *)(a2 + 668);
          }
        }
        break;
      case 7:
        ManipulationInjector::InjectDrag((ManipulationInjector *)(a1 + 80), &v24, v7);
        IsHoveringForDeviceId = ManipulationInjector::IsInContactForDeviceId((ManipulationInjector *)(a1 + 80), v7);
LABEL_22:
        *(_BYTE *)(a1 + 972) = IsHoveringForDeviceId;
        break;
    }
  }
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a3);
}
