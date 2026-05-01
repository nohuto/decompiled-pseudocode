/*
 * XREFs of ?HandleDestruction@CImmersiveApp@@UEAA?AW4WINDOW_DESTROYED_RESULT@@AEBVCTaskWindowFinder@@PEAPEAUITaskWindow@@@Z @ 0x180164920
 * Callers:
 *     <none>
 * Callees:
 *     ??$FindEx@VCTaskWindowFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCTaskWindowFinder@@AEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180034C00 (--$FindEx@VCTaskWindowFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$C.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x18003C938 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x180058150 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     ?_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ @ 0x180058BF0 (-_ClearForegroundBoostHintedProcess@CImmersiveApp@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18014BA80 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTaskMe.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x180162544 (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180165B9C (-IsApplicationWindowVisible@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x18016A59C (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ?_RemoveFromChain@CImmersiveApp@@AEAAXXZ @ 0x18016A650 (-_RemoveFromChain@CImmersiveApp@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::HandleDestruction(
        __int64 a1,
        const struct CTaskWindowFinder *a2,
        struct IUnknown **a3)
{
  unsigned int v6; // esi
  CImmersiveApp::CImmersiveWindowCollection *v7; // r14
  _QWORD *v8; // rbp
  bool v9; // bl
  int v10; // ebx
  bool v11; // bp
  char v12; // bl
  struct IApplicationPresentationLayer *v13; // rdx
  int v15; // [rsp+38h] [rbp-40h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v18; // [rsp+90h] [rbp+18h] BYREF

  *a3 = 0LL;
  v6 = 0;
  v7 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 184);
  v8 = (_QWORD *)(a1 + 440);
  v17 = 0LL;
  v9 = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITaskWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::FindEx<CTaskWindowFinder>(
              (_QWORD *)(a1 + 440),
              (__int64)a2,
              (__int64)a3,
              &v18) >= 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  if ( v9 )
  {
    CTSimpleArray<Microsoft::WRL::ComPtr<ITaskWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::RemoveAt(
      v8,
      v18);
    return 7;
  }
  else if ( (int)CImmersiveApp::CImmersiveWindowCollection::DeleteWindow(v7, a2, (bool *)&v17, a3) >= 0 )
  {
    v6 = 2;
    v10 = *(_DWORD *)(a1 + 472) & 2;
    v11 = (*(_DWORD *)(a1 + 472) & 4) != 0 && !CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowVisible(v7);
    CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)(a1 - 112));
    if ( *(_QWORD *)(a1 + 360) )
    {
      if ( v11 )
      {
        GetSystemTimeAsFileTime((LPFILETIME)(a1 + 604));
        if ( v10 )
          *(_QWORD *)(a1 + 588) = *(_QWORD *)(a1 + 604);
        else
          v6 = 1;
        *(_DWORD *)(a1 + 472) &= ~2u;
        v13 = *(struct IApplicationPresentationLayer **)(a1 + 336);
        *(_DWORD *)(a1 + 520) |= 1u;
        CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer((CImmersiveApp::CloakType *)(a1 + 520), v13);
      }
      else if ( (_BYTE)v17 && v10 )
      {
        *(_DWORD *)(a1 + 472) &= ~2u;
        v6 = 4;
      }
      else
      {
        v6 = 3;
      }
    }
    else
    {
      v12 = *(_BYTE *)(a1 + 624);
      *(_DWORD *)(a1 + 472) = 0;
      *(_DWORD *)(a1 + 560) = 0;
      CImmersiveApp::_ClearForegroundBoostHintedProcess((HANDLE *)(a1 - 112));
      *(_DWORD *)(a1 + 700) = 1;
      memset_0((void *)(a1 + 564), 0, 0x30uLL);
      GetSystemTimeAsFileTime((LPFILETIME)(a1 + 572));
      CImmersiveApp::_RemoveFromChain((CImmersiveApp *)(a1 - 112));
      v6 = (v12 != 0) + 5;
    }
    if ( !*(_BYTE *)(a1 + 624) && v6 == 5 )
    {
      v15 = 6;
      v16 = 0LL;
      CImmersiveApp::_ScheduleApplicationNotifications(
        (CImmersiveApp *)(a1 - 112),
        (const struct APP_CHANGE_INFO *const)&v15,
        1uLL);
    }
  }
  return v6;
}
