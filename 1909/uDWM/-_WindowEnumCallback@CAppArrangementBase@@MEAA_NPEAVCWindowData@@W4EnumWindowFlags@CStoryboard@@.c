/*
 * XREFs of ?_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800AB000
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800AB0D0 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800ABBA0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?_AddToAnimatingMonitors@CAppArrangementBase@@IEAAXAEBUtagRECT@@@Z @ 0x1800A92C0 (-_AddToAnimatingMonitors@CAppArrangementBase@@IEAAXAEBUtagRECT@@@Z.c)
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800AD100 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 */

char __fastcall CAppArrangementBase::_WindowEnumCallback(CAppArrangementBase *a1, __int64 a2, char a3, _DWORD *a4)
{
  int v8; // edx
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx

  CGroupingStoryboard::_WindowEnumCallback();
  v8 = *(_DWORD *)(a2 + 612);
  v9 = v8 & 0xFFF;
  if ( (a3 & 4) != 0 )
  {
    if ( (unsigned int)v9 > 0x34 || (v10 = 0x10080000400000LL, !_bittest64(&v10, v9)) )
    {
      if ( (v8 & 0x1000000) != 0 )
      {
        CAppArrangementBase::_AddToAnimatingMonitors(a1, (const struct tagRECT *)(a2 + 632));
        v8 = *(_DWORD *)(a2 + 612);
      }
      if ( (v8 & 0x800000) != 0 )
      {
        CAppArrangementBase::_AddToAnimatingMonitors(a1, (const struct tagRECT *)(a2 + 664));
        v8 = *(_DWORD *)(a2 + 612);
      }
      if ( (v8 & 0x1800000) == 0 && *(_DWORD *)(a2 + 112) != 1 && (_DWORD)v9 != 68 )
        CAppArrangementBase::_AddToAnimatingMonitors(a1, (const struct tagRECT *)(a2 + 48));
    }
  }
  *a4 = 0;
  return 1;
}
