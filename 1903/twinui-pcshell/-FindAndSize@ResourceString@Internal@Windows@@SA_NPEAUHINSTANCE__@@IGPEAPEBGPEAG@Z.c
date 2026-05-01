/*
 * XREFs of ?FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z @ 0x18022F2AC
 * Callers:
 *     ?TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z @ 0x18023F180 (-TryAssignViewToTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAU_GUID@@@Z.c)
 *     ?InitializeResFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1802E3370 (-InitializeResFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QE.c)
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x18035B210 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 *     ?GetAccessibleName@CSwitchItemGrid@@UEAAJPEAPEAG@Z @ 0x1803689F0 (-GetAccessibleName@CSwitchItemGrid@@UEAAJPEAPEAG@Z.c)
 *     ?GetAccessibleName@CGlyphButtonElement@@UEAAJPEAPEAG@Z @ 0x1803745A0 (-GetAccessibleName@CGlyphButtonElement@@UEAAJPEAPEAG@Z.c)
 *     ?GetAccessibleName@LightDismissElement@@UEAAJPEAPEAG@Z @ 0x18037DFD0 (-GetAccessibleName@LightDismissElement@@UEAAJPEAPEAG@Z.c)
 *     ?GetAccessibleName@CVirtualDesktopContainerElement@@UEAAJPEAPEAG@Z @ 0x180381990 (-GetAccessibleName@CVirtualDesktopContainerElement@@UEAAJPEAPEAG@Z.c)
 *     TabletModeDragPattern::GenerateStringWithMap @ 0x1803CBC00 (TabletModeDragPattern--GenerateStringWithMap.c)
 *     ?GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z @ 0x1803DF790 (-GenerateDropEffectPlaceMode@@YAJPEBGW4PlaceModeEvent@@PEAPEAG@Z.c)
 *     ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1803E04F0 (-InitializeResMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@Q.c)
 *     ?RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktopNotificationServicePrivate@@PEAUIVirtualDesktopCollection@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@@Z @ 0x1803F2E00 (-RuntimeClassInitialize@VirtualDesktopAcessibility@@QEAAJW4_TABLETMODESTATE@@PEAUIVirtualDesktop.c)
 * Callees:
 *     <none>
 */

char __fastcall Windows::Internal::ResourceString::FindAndSize(
        HINSTANCE hModule,
        unsigned int a2,
        __int64 a3,
        const unsigned __int16 **a4,
        unsigned __int16 *a5)
{
  char v5; // bl
  char v7; // si
  HRSRC Resource; // rax
  HGLOBAL v10; // rax
  unsigned __int16 *v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rdx
  unsigned __int16 v14; // ax
  const unsigned __int16 *v15; // rcx

  v5 = 0;
  *a4 = 0LL;
  v7 = a2;
  if ( a5 )
    *a5 = 0;
  Resource = FindResourceExW(hModule, (LPCWSTR)6, (LPCWSTR)(unsigned __int16)((a2 >> 4) + 1), 0);
  if ( Resource )
  {
    v10 = LoadResource(hModule, Resource);
    if ( v10 )
    {
      v11 = (unsigned __int16 *)LockResource(v10);
      if ( v11 )
      {
        v12 = v7 & 0xF;
        if ( v12 )
        {
          v13 = v12;
          do
          {
            v11 += *v11 + 1;
            --v13;
          }
          while ( v13 );
        }
        v14 = *v11;
        if ( *v11 )
          v15 = v11 + 1;
        else
          v15 = &String2;
        *a4 = v15;
        if ( a5 )
          *a5 = v14;
        return 1;
      }
    }
  }
  return v5;
}
