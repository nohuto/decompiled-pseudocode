/*
 * XREFs of ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x180437CDC
 * Callers:
 *     ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x180397750 (-ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z.c)
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x180437CDC (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 *     ?HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x1804381A0 (-HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180136190 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18013B2DC (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??_GContextMenuRenderingData@@QEAAPEAXI@Z @ 0x180396DC4 (--_GContextMenuRenderingData@@QEAAPEAXI@Z.c)
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x180437CDC (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 *     ?CanApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YA_NPEAUHMENU__@@PEAUHWND__@@@Z @ 0x180438084 (-CanApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YA_NPEAUHMENU__@@PEAUHWND__@@@Z.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x180438138 (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 *     ?HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x1804381A0 (-HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 *     ?OverrideBackgroundColor@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@W4ImmersiveContextMenuOptions@@@Z @ 0x180438334 (-OverrideBackgroundColor@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@W4ImmersiveCont.c)
 *     ?RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x1804384B4 (-RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 *     ?ShouldUseDarkTheme@ImmersiveContextMenuHelper@@YA_NW4ImmersiveContextMenuOptions@@@Z @ 0x180438574 (-ShouldUseDarkTheme@ImmersiveContextMenuHelper@@YA_NW4ImmersiveContextMenuOptions@@@Z.c)
 *     ?StoreContextMenuDataForItem@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@_KIPEAUContextMenuRenderingData@@@Z @ 0x180438654 (-StoreContextMenuDataForItem@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@_KIPEAUContextMenuRender.c)
 *     ?_GetRenderingDataForMenuItem@ImmersiveContextMenuHelper@@YAJW4ScaleType@DPIToPPIHelpers@@UtagMENUITEMINFOW@@PEBGPEAUtagPOINT@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@PEAUContextMenuRenderingData@@W4ImmersiveContextMenuOptions@@PEAPEAU7@@Z @ 0x180438744 (-_GetRenderingDataForMenuItem@ImmersiveContextMenuHelper@@YAJW4ScaleType@DPIToPPIHelpers@@UtagME.c)
 *     ?_StoreParentArrayOnWindow@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@PEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x180438A8C (-_StoreParentArrayOnWindow@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@PEAV-$CSimplePointerArrayN.c)
 */

__int64 __fastcall ImmersiveContextMenuHelper::ApplyOwnerDrawToMenu(
        HMENU a1,
        HWND a2,
        HWND a3,
        unsigned int a4,
        _QWORD *hData)
{
  int Error; // ebx
  char ShouldUseDarkTheme; // al
  HWND v10; // r8
  _DWORD *v11; // rdi
  INPUT_MESSAGE_DEVICE_TYPE i; // esi
  unsigned int v13; // r9d
  struct ContextMenuRenderingData *ContextMenuDataForItem; // rax
  HWND v15; // rsi
  __int64 v16; // rdx
  HWND *v17; // rdx
  HWND dwItemData; // rdx
  int v19; // eax
  unsigned int v20; // eax
  char v22; // [rsp+40h] [rbp-C0h]
  INPUT_MESSAGE_SOURCE inputMessageSource; // [rsp+48h] [rbp-B8h] BYREF
  int pvParam; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+54h] [rbp-ACh]
  int v26[2]; // [rsp+58h] [rbp-A8h]
  struct tagMENUITEMINFOW mii; // [rsp+60h] [rbp-A0h] BYREF
  HWND v28; // [rsp+B0h] [rbp-50h]
  MENUITEMINFOW v29; // [rsp+C0h] [rbp-40h] BYREF
  struct tagMENUITEMINFOW v30; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v31[528]; // [rsp+160h] [rbp+60h] BYREF

  *(_QWORD *)v26 = a3;
  v25 = a4 & 2;
  Error = 1;
  if ( (a4 & 2) == 0 && !ImmersiveContextMenuHelper::CanApplyOwnerDrawToMenu(a1, (HMENU)a2, a3) )
    return (unsigned int)Error;
  if ( (a4 & 4) == 0 && GetCurrentInputMessageSource(&inputMessageSource) && inputMessageSource.deviceType == IMDT_TOUCH
    || (v22 = 0, (GetMessageExtraInfo() & 0xFF515780LL) == 0xFF515780LL) )
  {
    v22 = 1;
  }
  Error = ImmersiveContextMenuHelper::_StoreParentArrayOnWindow(a2, hData);
  ShouldUseDarkTheme = ImmersiveContextMenuHelper::ShouldUseDarkTheme(a4);
  pvParam = 0;
  byte_1805C3B44 = ShouldUseDarkTheme;
  SystemParametersInfoW(0x100Au, 0, &pvParam, 0);
  v11 = 0LL;
  for ( i = IMDT_UNAVAILABLE; ; ++i )
  {
    inputMessageSource.deviceType = i;
    if ( Error < 0 )
      break;
    memset_0(&mii, 0, sizeof(mii));
    mii.cbSize = 80;
    mii.fMask = 495;
    memset_0(v31, 0, 0x208uLL);
    mii.cch = 260;
    mii.dwTypeData = (LPWSTR)v31;
    if ( GetMenuItemInfoW(a1, i, 1, &mii) )
    {
      Error = 0;
    }
    else
    {
      Error = ResultFromKnownLastError();
      if ( Error < 0 )
        continue;
    }
    ContextMenuDataForItem = ImmersiveContextMenuHelper::GetContextMenuDataForItem(
                               a2,
                               (HWND)mii.dwItemData,
                               mii.wID,
                               v13);
    v11 = ContextMenuDataForItem;
    if ( ((mii.fType & 0x100) == 0 || !mii.dwItemData)
      && (!ContextMenuDataForItem || v22 != ((*((_DWORD *)ContextMenuDataForItem + 14) & 4) != 0)) )
    {
      v30 = mii;
      Error = ImmersiveContextMenuHelper::_GetRenderingDataForMenuItem(a4 & 1, &v30, v31, *(_QWORD *)v26);
      if ( Error >= 0 )
      {
        v15 = v28;
        Error = 0;
        *((_DWORD *)v28 + 18) = pvParam;
        v16 = hData[1];
        if ( v16 != hData[3]
          || (Error = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                        (__int64)hData,
                        v16 + 1,
                        v10),
              Error >= 0) )
        {
          v17 = (HWND *)(*hData + 8 * hData[1]++);
          if ( v17 )
            *v17 = v15;
        }
        if ( Error < 0 )
        {
          ContextMenuRenderingData::`scalar deleting destructor'((ContextMenuRenderingData *)v15);
        }
        else
        {
          memset_0(&v29, 0, sizeof(v29));
          v29.hbmpItem = 0LL;
          dwItemData = (HWND)mii.dwItemData;
          v29.hbmpChecked = mii.hbmpChecked;
          v29.hbmpUnchecked = mii.hbmpUnchecked;
          v29.cbSize = 80;
          v29.fMask = 392;
          v29.fType = mii.fType | 0x100;
          if ( !mii.dwItemData )
          {
            v29.fMask = 424;
            dwItemData = v15;
            v29.dwItemData = (ULONG_PTR)v15;
          }
          Error = ImmersiveContextMenuHelper::StoreContextMenuDataForItem(
                    a2,
                    dwItemData,
                    mii.wID,
                    (unsigned int)v15,
                    (struct ContextMenuRenderingData *)hData);
          if ( Error >= 0 )
          {
            if ( SetMenuItemInfoW(a1, inputMessageSource.deviceType, 1, &v29) )
            {
              Error = 0;
LABEL_28:
              if ( mii.hSubMenu )
              {
                if ( v25 )
                  ImmersiveContextMenuHelper::HandleMergedMenus(
                    (ImmersiveContextMenuHelper *)mii.hSubMenu,
                    (HMENU)a2,
                    v10);
                else
                  ImmersiveContextMenuHelper::ApplyOwnerDrawToMenu((int)mii.hSubMenu, (int)a2, v26[0], a4 | 0x10, hData);
              }
            }
            else
            {
              Error = ResultFromKnownLastError();
              if ( Error >= 0 )
                goto LABEL_28;
            }
          }
          v11 = v15;
          *((_QWORD *)v15 + 10) = hData;
          if ( v22 )
            *((_DWORD *)v15 + 14) |= 4u;
        }
        i = inputMessageSource.deviceType;
      }
    }
    if ( v11 )
    {
      v19 = v11[14];
      if ( i )
        v20 = v19 & 0xFFFFFFFE;
      else
        v20 = v19 | 1;
      v11[14] = v20 & 0xFFFFFFFD;
    }
  }
  if ( Error != -2147023440 )
    goto LABEL_49;
  if ( !hData[1] )
    goto LABEL_50;
  Error = 0;
  if ( v11 )
    v11[14] |= 2u;
  if ( (a4 & 0x10) == 0 )
  {
    ImmersiveContextMenuHelper::OverrideBackgroundColor(a1, a2, a4);
LABEL_49:
    if ( Error < 0 )
LABEL_50:
      ImmersiveContextMenuHelper::RemoveOwnerDrawFromMenu(a1, (HMENU)a2, v10);
  }
  return (unsigned int)Error;
}
