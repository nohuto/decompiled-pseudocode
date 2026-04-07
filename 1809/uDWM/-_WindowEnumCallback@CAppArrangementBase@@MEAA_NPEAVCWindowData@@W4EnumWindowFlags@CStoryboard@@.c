/*
 * XREFs of ?_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A6D20
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A6DF0 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A78B0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?_AddToAnimatingMonitors@CAppArrangementBase@@IEAAXAEBUtagRECT@@@Z @ 0x1800A4FC0 (-_AddToAnimatingMonitors@CAppArrangementBase@@IEAAXAEBUtagRECT@@@Z.c)
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A8E50 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 */

char __fastcall CAppArrangementBase::_WindowEnumCallback(
        CAppArrangementBase *a1,
        const struct tagRECT *a2,
        char a3,
        _DWORD *a4)
{
  LONG bottom; // edx
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx

  CGroupingStoryboard::_WindowEnumCallback();
  bottom = a2[37].bottom;
  v9 = bottom & 0xFFF;
  if ( (a3 & 4) != 0 )
  {
    if ( (unsigned int)v9 > 0x34 || (v10 = 0x10080000400000LL, !_bittest64(&v10, v9)) )
    {
      if ( (bottom & 0x1000000) != 0 )
      {
        CAppArrangementBase::_AddToAnimatingMonitors(a1, a2 + 39);
        bottom = a2[37].bottom;
      }
      if ( (bottom & 0x800000) != 0 )
      {
        CAppArrangementBase::_AddToAnimatingMonitors(a1, a2 + 41);
        bottom = a2[37].bottom;
      }
      if ( (bottom & 0x1800000) == 0 && a2[7].left != 1 && (_DWORD)v9 != 68 )
        CAppArrangementBase::_AddToAnimatingMonitors(a1, a2 + 3);
    }
  }
  *a4 = 0;
  return 1;
}
