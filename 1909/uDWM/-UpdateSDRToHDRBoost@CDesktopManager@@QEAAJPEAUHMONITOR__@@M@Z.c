/*
 * XREFs of ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x18007FF24
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F090 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800253B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18002AF20 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?GetDcompTarget@CDWMDisplay@@QEAAPEAUIDCompositionRenderTargetPartner@@XZ @ 0x18002B01C (-GetDcompTarget@CDWMDisplay@@QEAAPEAUIDCompositionRenderTargetPartner@@XZ.c)
 *     ?IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z @ 0x18002C528 (-IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180039BF8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDCompositionRenderTargetPartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionRenderTargetPartner@@@Z @ 0x18007E98C (--4-$ComPtr@UIDCompositionRenderTargetPartner@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDCompositionRend.c)
 */

__int64 __fastcall CDesktopManager::UpdateSDRToHDRBoost(CDesktopManager *this, HMONITOR a2, float a3)
{
  __int64 v3; // rcx
  __int64 v5; // rbx
  int AllDisplaysNoRef; // eax
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r14
  int v11; // eax
  struct IDCompositionRenderTargetPartner *DcompTarget; // rax
  int v14; // eax
  int v15; // eax
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+40h] [rbp-20h]
  int v18; // [rsp+44h] [rbp-1Ch]
  unsigned int v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+80h] [rbp+20h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp+38h] BYREF

  v3 = *((_QWORD *)this + 20);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v5 = 0LL;
  v20 = 0LL;
  v16 = 0LL;
  v21 = 0LL;
  AllDisplaysNoRef = CDWMDisplaySet::GetAllDisplaysNoRef(v3, (__int64)&v16);
  v7 = AllDisplaysNoRef;
  if ( AllDisplaysNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, AllDisplaysNoRef, 0x403u);
    goto LABEL_11;
  }
  v8 = 0LL;
  if ( !v19 )
    goto LABEL_7;
  v9 = v16;
  while ( 1 )
  {
    v10 = (unsigned int)v8;
    if ( *(HMONITOR *)(*(_QWORD *)(v16 + 8 * v8) + 16LL) == a2 )
      break;
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= v19 )
      goto LABEL_7;
  }
  if ( !(unsigned int)IsHDRDisplay(a2) )
    goto LABEL_7;
  DcompTarget = CDWMDisplay::GetDcompTarget(*(CDWMDisplay **)(v9 + 8 * v10));
  Microsoft::WRL::ComPtr<IDCompositionRenderTargetPartner>::operator=((__int64 *)&v21, (__int64)DcompTarget);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v20);
  v5 = (__int64)v21;
  v14 = (**v21)(v21, &GUID_4939a7d9_c3a5_4e8c_ada9_439818241f2e, &v20);
  v7 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x40Cu);
    goto LABEL_9;
  }
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 32LL))(v20);
  v7 = v15;
  if ( v15 >= 0 )
  {
LABEL_7:
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 26) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26));
    v7 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x412u);
    goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x40Du);
LABEL_9:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
LABEL_11:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v20);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v16);
  return v7;
}
