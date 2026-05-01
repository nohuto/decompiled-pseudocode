/*
 * XREFs of ?_SetViewPositionHelper@CApplicationManager@@AEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@PEAUIImmersiveApplication@@PEAUIImmersiveApplicationInternal@@@Z @ 0x18013F28C
 * Callers:
 *     ?SetApplicationViewPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewPosition@@W4SET_IMM_APP_POS@@@Z @ 0x180136CB0 (-SetApplicationViewPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicatio.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x18013BB74 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_SetViewPositionHelper(
        CApplicationManager *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10,
        __int64 a11,
        struct ISyncIAMEventHandler *a12)
{
  struct ISyncIAMEventHandler *v13; // rsi
  int v14; // eax
  unsigned int v15; // edi
  __int64 v17; // [rsp+30h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v13 = a12;
  HIDWORD(v17) = HIDWORD(a7);
  v14 = (*(__int64 (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)a12 + 256LL))(a12);
  v15 = v14;
  if ( v14 >= 0 )
  {
    if ( a10 && ((*(__int64 (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v13 + 280LL))(v13) & 2) != 0 )
    {
      a12 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a12);
      if ( (int)CApplicationManager::_GetGlobalSyncEventHandler(a1, &a12) >= 0 )
      {
        LODWORD(v17) = 1;
        (*(void (__fastcall **)(struct ISyncIAMEventHandler *, _QWORD, unsigned __int64, __int64, int, int, __int64, __int64, int, int))(*(_QWORD *)a12 + 24LL))(
          a12,
          0LL,
          ((unsigned __int64)a1 + 248) & -(__int64)(a1 != 0LL),
          a11,
          a10,
          5,
          v17,
          a8,
          a9,
          a10);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a12);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x106F,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v14);
    return v15;
  }
}
