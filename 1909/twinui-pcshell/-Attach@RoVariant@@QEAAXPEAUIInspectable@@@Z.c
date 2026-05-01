/*
 * XREFs of ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z @ 0x1800229E4
 * Callers:
 *     ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18006DA3C (-OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChang.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x1801B1364 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ?OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B1E60 (-OnViewPropertiesChanging@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperien.c)
 *     ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B35F0 (-OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801BAD7C (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801BC270 (-OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801C1B60 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801C4C74 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z @ 0x180240210 (-GetRectFromPropertySet@PeoplePaneViewManager@@AEAAJPEBGPEAUtagRECT@@@Z.c)
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x180240CE8 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 *     ?IsDeviceEnabled@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceInformationUpdate@Enumeration@Devices@Windows@@PEA_N@Z @ 0x18041FFEC (-IsDeviceEnabled@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUIDeviceInformationUpdate@Enumer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall RoVariant::Attach(RoVariant *this, struct IInspectable *a2)
{
  int v4; // eax
  int v5; // edi
  struct IInspectable *v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  struct IInspectable *v9; // [rsp+40h] [rbp+8h] BYREF

  if ( a2 )
  {
    v4 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, struct IInspectable **))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
           &v9);
    v5 = v4;
    if ( v4 < 0 )
    {
      if ( v4 == -2147467262 )
      {
        v6 = a2;
        v5 = 3;
      }
      else
      {
        v6 = 0LL;
        ((void (__fastcall *)(struct IInspectable *))a2->lpVtbl->Release)(a2);
      }
    }
    else
    {
      v6 = v9;
      ((void (__fastcall *)(struct IInspectable *))a2->lpVtbl->Release)(a2);
      v5 = 7;
    }
  }
  else
  {
    v6 = 0LL;
    v5 = 0;
  }
  v7 = *(_QWORD *)this;
  *(_QWORD *)this = v6;
  v8 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 2) = v5;
  if ( v7 )
  {
    if ( ((v8 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
}
