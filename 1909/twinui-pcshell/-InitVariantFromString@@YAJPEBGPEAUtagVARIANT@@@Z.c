/*
 * XREFs of ?InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z @ 0x180395684
 * Callers:
 *     ?GetPropertyValue@AccessibleElementBase@@UEAAJHPEAUtagVARIANT@@@Z @ 0x180395070 (-GetPropertyValue@AccessibleElementBase@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?GetPropertyValue@AppResizeAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x1803EC000 (-GetPropertyValue@AppResizeAcc@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?RaisePropertyChangeNotification@AppResizeAcc@@AEAAXH@Z @ 0x1803EC238 (-RaisePropertyChangeNotification@AppResizeAcc@@AEAAXH@Z.c)
 *     ?GetPropertyValue@CoverWindowAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x1803ED8D0 (-GetPropertyValue@CoverWindowAcc@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?GetPropertyValue@JointResizeAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x1803F11E0 (-GetPropertyValue@JointResizeAcc@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?RaisePropertyChangeNotification@JointResizeAcc@@AEAAXH@Z @ 0x1803F1378 (-RaisePropertyChangeNotification@JointResizeAcc@@AEAAXH@Z.c)
 *     ?GetPropertyValue@CDragVisualAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x1803FF220 (-GetPropertyValue@CDragVisualAcc@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?GetPropertyValue@CPlaceModeButtonAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x1803FF400 (-GetPropertyValue@CPlaceModeButtonAcc@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?StartDrag@CDragVisualAcc@@UEAAXXZ @ 0x1804000D0 (-StartDrag@CDragVisualAcc@@UEAAXXZ.c)
 *     ?_RaiseDropEffectChangeEvent@CDragVisualAcc@@AEAAXXZ @ 0x1804002FC (-_RaiseDropEffectChangeEvent@CDragVisualAcc@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitVariantFromString(const unsigned __int16 *a1, struct tagVARIANT *a2)
{
  BSTR v4; // rax
  unsigned int v5; // ebx

  a2->vt = 8;
  v4 = SysAllocString(a1);
  v5 = 0;
  a2->llVal = (LONGLONG)v4;
  if ( !v4 )
  {
    v5 = a1 != 0LL ? -2147024882 : -2147024809;
    VariantInit(a2);
  }
  return v5;
}
