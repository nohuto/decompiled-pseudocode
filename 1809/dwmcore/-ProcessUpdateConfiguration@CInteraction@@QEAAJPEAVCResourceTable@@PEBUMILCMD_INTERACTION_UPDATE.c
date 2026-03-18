/*
 * XREFs of ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x18007F640
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfigurationUpdateType@@W43InteractionInputType@@IPEBXI@Z @ 0x18007F740 (-NotifyUpdateConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4Enum@InteractionConfig.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18007F878 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?TraceUpdatedConfiguration@CInteraction@@QEAAXW4Enum@InteractionConfigurationUpdateType@@W42InteractionInputType@@IPEBX@Z @ 0x18007F8C8 (-TraceUpdatedConfiguration@CInteraction@@QEAAXW4Enum@InteractionConfigurationUpdateType@@W42Inte.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CInteraction::ProcessUpdateConfiguration(
        CComposition **this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_UPDATECONFIGURATION *a3,
        const void *a4,
        unsigned int a5)
{
  int v6; // r8d
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // kr00_8
  unsigned int v12; // esi
  int ManipulationManager; // eax
  unsigned int v14; // ebx
  int v16; // r9d
  unsigned int v17[2]; // [rsp+20h] [rbp-38h]
  unsigned int v18; // [rsp+20h] [rbp-38h]
  struct CManipulationManager *v19; // [rsp+68h] [rbp+10h] BYREF

  v19 = 0LL;
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
      v14 = -2147024809;
      v18 = 346;
LABEL_15:
      v16 = v14;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v16, v18);
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
    v14 = -2147024362;
    v18 = 349;
    goto LABEL_15;
  }
  v12 = a5;
  if ( v10 != a5 )
  {
    v14 = -2003303421;
    v18 = 353;
    goto LABEL_15;
  }
  v17[1] = HIDWORD(a4);
  CInteraction::TraceUpdatedConfiguration(this, *((unsigned int *)a3 + 3));
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v19);
  ManipulationManager = CComposition::GetManipulationManager(this[3], &v19);
  v14 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v18 = 361;
    goto LABEL_19;
  }
  v17[0] = *((_DWORD *)a3 + 2);
  ManipulationManager = CManipulationManager::NotifyUpdateConfiguration(
                          this,
                          this,
                          *((unsigned int *)a3 + 3),
                          *((unsigned int *)a3 + 4),
                          *(_QWORD *)v17,
                          a4,
                          v12);
  v14 = ManipulationManager;
  if ( ManipulationManager < 0 )
  {
    v18 = 363;
LABEL_19:
    v16 = ManipulationManager;
    goto LABEL_20;
  }
LABEL_9:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v19);
  return v14;
}
