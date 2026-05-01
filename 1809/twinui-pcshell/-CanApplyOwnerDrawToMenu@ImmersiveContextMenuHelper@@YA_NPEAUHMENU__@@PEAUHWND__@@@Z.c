/*
 * XREFs of ?CanApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YA_NPEAUHMENU__@@PEAUHWND__@@@Z @ 0x1803B61E8
 * Callers:
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x1803B5E4C (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 * Callees:
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x1803B629C (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 */

char __fastcall ImmersiveContextMenuHelper::CanApplyOwnerDrawToMenu(HMENU hmenu, HWND hWnd, HWND a3)
{
  UINT i; // edi
  unsigned int v6; // r9d
  signed int Error; // ebx
  struct tagMENUITEMINFOW mii; // [rsp+20h] [rbp-58h] BYREF

  for ( i = 0; ; ++i )
  {
    memset_0(&mii, 0, sizeof(mii));
    mii.cbSize = 80;
    mii.fMask = 290;
    if ( GetMenuItemInfoW(hmenu, i, 1, &mii) )
      break;
    Error = ResultFromKnownLastError();
    if ( Error >= 0 )
      goto LABEL_5;
LABEL_8:
    if ( Error < 0 )
      return 1;
  }
  Error = 0;
LABEL_5:
  if ( (mii.fType & 0x100) == 0
    || mii.dwItemData && ImmersiveContextMenuHelper::GetContextMenuDataForItem(hWnd, (HWND)mii.dwItemData, mii.wID, v6) )
  {
    goto LABEL_8;
  }
  return 0;
}
