/*
 * XREFs of ?InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z @ 0x180315794
 * Callers:
 *     ?GetPropertyValue@AccessibleElementBase@@UEAAJHPEAUtagVARIANT@@@Z @ 0x180315180 (-GetPropertyValue@AccessibleElementBase@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?GetPropertyValue@AppResizeAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x180366AE0 (-GetPropertyValue@AppResizeAcc@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?RaisePropertyChangeNotification@AppResizeAcc@@AEAAXH@Z @ 0x180366D18 (-RaisePropertyChangeNotification@AppResizeAcc@@AEAAXH@Z.c)
 *     ?GetPropertyValue@CoverWindowAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x1803683B0 (-GetPropertyValue@CoverWindowAcc@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?GetPropertyValue@JointResizeAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x18036BD10 (-GetPropertyValue@JointResizeAcc@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?RaisePropertyChangeNotification@JointResizeAcc@@AEAAXH@Z @ 0x18036BEA8 (-RaisePropertyChangeNotification@JointResizeAcc@@AEAAXH@Z.c)
 *     ?GetPropertyValue@CDragVisualAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x180379D80 (-GetPropertyValue@CDragVisualAcc@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?GetPropertyValue@CPlaceModeButtonAcc@@UEAAJHPEAUtagVARIANT@@@Z @ 0x180379F60 (-GetPropertyValue@CPlaceModeButtonAcc@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?StartDrag@CDragVisualAcc@@UEAAXXZ @ 0x18037AC40 (-StartDrag@CDragVisualAcc@@UEAAXXZ.c)
 *     ?_RaiseDropEffectChangeEvent@CDragVisualAcc@@AEAAXXZ @ 0x18037AE6C (-_RaiseDropEffectChangeEvent@CDragVisualAcc@@AEAAXXZ.c)
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
