/*
 * XREFs of ?_InsertWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJPEAUITaskWindow@@_K@Z @ 0x180014F70
 * Callers:
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x1800146D0 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180141F48 (-AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerI.c)
 *     ?_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z @ 0x18014B9E0 (-_UpdateZOrderActivation@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K_N@Z.c)
 * Callees:
 *     ?_MakeRoomAt@?$CTSimpleArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1800150AC (-_MakeRoomAt@-$CTSimpleArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18001511C (-OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_InsertWindow(
        CSplashScreen **this,
        struct ITaskWindow *a2,
        __int64 a3)
{
  _QWORD *v6; // r14
  int RoomAt; // esi
  struct ITaskWindow **v8; // rdx
  __int64 (__fastcall *v9)(struct ITaskWindow *, GUID *, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  int v14; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  struct ITaskWindow *v17; // [rsp+58h] [rbp+10h] BYREF

  v14 = -2;
  v6 = this + 21;
  v17 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct ITaskWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  RoomAt = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::_MakeRoomAt(
             v6,
             a3);
  if ( RoomAt >= 0 )
  {
    v8 = (struct ITaskWindow **)(*v6 + 8 * a3);
    if ( v8 )
    {
      *v8 = 0LL;
      if ( v8 != &v17 )
      {
        *v8 = a2;
        v17 = 0LL;
      }
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  if ( RoomAt >= 0 )
    CSplashScreen::OnViewAdded(this[31], a2);
  (*(void (__fastcall **)(struct ITaskWindow *, _QWORD))(*(_QWORD *)a2 + 248LL))(a2, 0LL);
  v16 = 0LL;
  v9 = *(__int64 (__fastcall **)(struct ITaskWindow *, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  v10 = v9(a2, &GUID_f4a53d68_890b_4931_bdbf_71158377eece, &v16);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1C73,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v10,
      -2);
  if ( v16 )
  {
    LOBYTE(v11) = *((_BYTE *)this + 202);
    v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 640LL))(v16, v11);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1C76,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)v12,
        v14);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  return (unsigned int)RoomAt;
}
