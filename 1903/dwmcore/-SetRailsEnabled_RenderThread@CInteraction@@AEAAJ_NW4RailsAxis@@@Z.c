/*
 * XREFs of ?SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z @ 0x1800A4194
 * Callers:
 *     ?ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATERAILS@@@Z @ 0x1800A412C (-ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATERAILS.c)
 *     ?SetProperty@CInteraction@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801D7E30 (-SetProperty@CInteraction@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800A44AC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteraction::SetRailsEnabled_RenderThread(__int64 a1, char a2, unsigned int a3)
{
  CComposition *v3; // rbx
  signed int ManipulationManager; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  signed int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct CManipulationManager *v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(CComposition **)(a1 + 24);
  v16 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v16);
  ManipulationManager = CComposition::GetManipulationManager(v3, &v16);
  v10 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, ManipulationManager, 0x3ECu, 0LL);
  }
  else
  {
    LOBYTE(v9) = a2;
    v11 = (*(__int64 (__fastcall **)(struct CManipulationManager *, __int64, __int64, _QWORD))(*(_QWORD *)v16 + 80LL))(
            v16,
            a1,
            v9,
            a3);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v11, 0x3EEu, 0LL);
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 264);
      if ( v14 )
      {
        LOBYTE(v12) = a2;
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(v14 + 64) + 48LL))(v14 + 64, v12, a3);
      }
    }
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v16);
  return v10;
}
