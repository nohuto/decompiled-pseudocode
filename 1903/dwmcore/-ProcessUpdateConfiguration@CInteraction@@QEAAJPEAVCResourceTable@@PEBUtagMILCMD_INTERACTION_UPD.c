/*
 * XREFs of ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x1800A439C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800A44AC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?TraceUpdatedConfiguration@CInteraction@@QEAAXW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@IPEBX@Z @ 0x1800A44FC (-TraceUpdatedConfiguration@CInteraction@@QEAAXW4Enum@InteractionConfigurationUpdateType@@W42Inte.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteraction::ProcessUpdateConfiguration(
        CComposition **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INTERACTION_UPDATECONFIGURATION *a3,
        const void *a4,
        unsigned int a5)
{
  int v6; // r8d
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // kr00_8
  unsigned int v12; // esi
  CComposition *v13; // rbx
  int ManipulationManager; // eax
  unsigned int v15; // ebx
  unsigned int v17; // r9d
  unsigned int v18[2]; // [rsp+20h] [rbp-38h]
  unsigned int v19; // [rsp+20h] [rbp-38h]
  struct CManipulationManager *v20; // [rsp+68h] [rbp+10h] BYREF

  v20 = 0LL;
  v6 = *((_DWORD *)a3 + 4);
  if ( v6 == 1 || v6 == 2 || v6 == 3 )
  {
LABEL_4:
    v9 = 12LL;
    goto LABEL_5;
  }
  if ( v6 != 4 )
  {
    if ( v6 != 5 )
    {
      v15 = -2147024809;
      v19 = 344;
LABEL_15:
      v17 = v15;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v17, v19, 0LL);
      goto LABEL_9;
    }
    goto LABEL_4;
  }
  v9 = 4LL;
LABEL_5:
  v11 = v9;
  v10 = *((unsigned int *)a3 + 2) * v9;
  if ( !is_mul_ok(*((unsigned int *)a3 + 2), v11) )
  {
    v15 = -2147024362;
    v19 = 347;
    goto LABEL_15;
  }
  v12 = a5;
  if ( v10 != a5 )
  {
    v15 = -2003303421;
    v19 = 351;
    goto LABEL_15;
  }
  v18[1] = HIDWORD(a4);
  CInteraction::TraceUpdatedConfiguration(this, *((unsigned int *)a3 + 3));
  v13 = this[3];
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v20);
  ManipulationManager = CComposition::GetManipulationManager(v13, &v20);
  v15 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v19 = 359;
    goto LABEL_19;
  }
  v18[0] = *((_DWORD *)a3 + 2);
  ManipulationManager = (*(__int64 (__fastcall **)(struct CManipulationManager *, CComposition **, _QWORD, _QWORD, unsigned int *, const void *, unsigned int))(*(_QWORD *)v20 + 72LL))(
                          v20,
                          this,
                          *((unsigned int *)a3 + 3),
                          *((unsigned int *)a3 + 4),
                          *(unsigned int **)v18,
                          a4,
                          v12);
  v15 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v19 = 361;
LABEL_19:
    v17 = ManipulationManager;
    goto LABEL_20;
  }
LABEL_9:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v20);
  return v15;
}
