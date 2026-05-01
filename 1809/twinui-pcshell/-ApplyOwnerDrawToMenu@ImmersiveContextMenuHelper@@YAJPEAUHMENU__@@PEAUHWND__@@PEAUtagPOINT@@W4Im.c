/*
 * XREFs of ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x1803B5E4C
 * Callers:
 *     ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x180317880 (-ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z.c)
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x1803B5E4C (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 *     ?HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x1803B6304 (-HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800F6B54 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??_GContextMenuRenderingData@@QEAAPEAXI@Z @ 0x180316EF4 (--_GContextMenuRenderingData@@QEAAPEAXI@Z.c)
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x1803B5E4C (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 *     ?CanApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YA_NPEAUHMENU__@@PEAUHWND__@@@Z @ 0x1803B61E8 (-CanApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YA_NPEAUHMENU__@@PEAUHWND__@@@Z.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x1803B629C (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 *     ?HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x1803B6304 (-HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 *     ?OverrideBackgroundColor@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@W4ImmersiveContextMenuOptions@@@Z @ 0x1803B6498 (-OverrideBackgroundColor@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@W4ImmersiveCont.c)
 *     ?RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x1803B65F4 (-RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 *     ?StoreContextMenuDataForItem@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@_KIPEAUContextMenuRenderingData@@@Z @ 0x1803B66B4 (-StoreContextMenuDataForItem@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@_KIPEAUContextMenuRender.c)
 *     ?_GetRenderingDataForMenuItem@ImmersiveContextMenuHelper@@YAJW4ScaleType@DPIToPPIHelpers@@UtagMENUITEMINFOW@@PEBGPEAUtagPOINT@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@PEAUContextMenuRenderingData@@W4ImmersiveContextMenuOptions@@PEAPEAU7@@Z @ 0x1803B67A4 (-_GetRenderingDataForMenuItem@ImmersiveContextMenuHelper@@YAJW4ScaleType@DPIToPPIHelpers@@UtagME.c)
 *     ?_StoreParentArrayOnWindow@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@PEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x1803B6AF0 (-_StoreParentArrayOnWindow@ImmersiveContextMenuHelper@@YAJPEAUHWND__@@PEAV-$CSimplePointerArrayN.c)
 */

__int64 __fastcall ImmersiveContextMenuHelper::ApplyOwnerDrawToMenu(
        HMENU a1,
        HWND a2,
        HWND a3,
        unsigned int a4,
        _QWORD *hData)
{
  int Error; // ebx
  int v9; // eax
  HWND v10; // r8
  _DWORD *v11; // rdi
  INPUT_MESSAGE_DEVICE_TYPE i; // esi
  unsigned int v13; // r9d
  struct ContextMenuRenderingData *ContextMenuDataForItem; // rax
  HWND v15; // rsi
  __int64 v16; // rdx
  HWND *v17; // rdx
  HWND dwItemData; // rdx
  char v20; // [rsp+40h] [rbp-C0h]
  INPUT_MESSAGE_SOURCE inputMessageSource; // [rsp+48h] [rbp-B8h] BYREF
  int pvParam; // [rsp+50h] [rbp-B0h] BYREF
  int v23; // [rsp+54h] [rbp-ACh]
  int v24[2]; // [rsp+58h] [rbp-A8h]
  struct tagMENUITEMINFOW mii; // [rsp+60h] [rbp-A0h] BYREF
  HWND v26; // [rsp+B0h] [rbp-50h]
  MENUITEMINFOW v27; // [rsp+C0h] [rbp-40h] BYREF
  struct tagMENUITEMINFOW v28; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v29[528]; // [rsp+160h] [rbp+60h] BYREF

  *(_QWORD *)v24 = a3;
  v23 = a4 & 2;
  Error = 1;
  if ( (a4 & 2) == 0 && !ImmersiveContextMenuHelper::CanApplyOwnerDrawToMenu(a1, (HMENU)a2, a3) )
    return (unsigned int)Error;
  if ( (a4 & 4) == 0 && GetCurrentInputMessageSource(&inputMessageSource) && inputMessageSource.deviceType == IMDT_TOUCH
    || (v20 = 0, (GetMessageExtraInfo() & 0xFF515780LL) == 0xFF515780LL) )
  {
    v20 = 1;
  }
  v9 = ImmersiveContextMenuHelper::_StoreParentArrayOnWindow(a2, hData);
  pvParam = 0;
  Error = v9;
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
    memset_0(v29, 0, 0x208uLL);
    mii.cch = 260;
    mii.dwTypeData = (LPWSTR)v29;
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
      && (!ContextMenuDataForItem || v20 != ((*((_DWORD *)ContextMenuDataForItem + 14) & 4) != 0)) )
    {
      v28 = mii;
      Error = ImmersiveContextMenuHelper::_GetRenderingDataForMenuItem(a4 & 1, &v28, v29, *(_QWORD *)v24);
      if ( Error >= 0 )
      {
        v15 = v26;
        Error = 0;
        *((_DWORD *)v26 + 18) = pvParam;
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
          memset_0(&v27, 0, sizeof(v27));
          v27.hbmpItem = 0LL;
          dwItemData = (HWND)mii.dwItemData;
          v27.hbmpChecked = mii.hbmpChecked;
          v27.hbmpUnchecked = mii.hbmpUnchecked;
          v27.cbSize = 80;
          v27.fMask = 392;
          v27.fType = mii.fType | 0x100;
          if ( !mii.dwItemData )
          {
            v27.fMask = 424;
            dwItemData = v15;
            v27.dwItemData = (ULONG_PTR)v15;
          }
          Error = ImmersiveContextMenuHelper::StoreContextMenuDataForItem(
                    a2,
                    dwItemData,
                    mii.wID,
                    (unsigned int)v15,
                    (struct ContextMenuRenderingData *)hData);
          if ( Error >= 0 )
          {
            if ( SetMenuItemInfoW(a1, inputMessageSource.deviceType, 1, &v27) )
            {
              Error = 0;
LABEL_28:
              if ( mii.hSubMenu )
              {
                if ( v23 )
                  ImmersiveContextMenuHelper::HandleMergedMenus(
                    (ImmersiveContextMenuHelper *)mii.hSubMenu,
                    (HMENU)a2,
                    v10);
                else
                  ImmersiveContextMenuHelper::ApplyOwnerDrawToMenu((int)mii.hSubMenu, (int)a2, v24[0], a4 | 0x10, hData);
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
          if ( v20 )
            *((_DWORD *)v15 + 14) |= 4u;
        }
        i = inputMessageSource.deviceType;
      }
    }
    if ( v11 )
    {
      if ( i )
        v11[14] &= ~1u;
      else
        v11[14] |= 1u;
      v11[14] &= ~2u;
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
