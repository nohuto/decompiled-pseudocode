/*
 * XREFs of ?_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z @ 0x1800A5EE8
 * Callers:
 *     ?_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z @ 0x1800A5E84 (-_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z.c)
 *     ?_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z @ 0x1800A6464 (-_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800A64DC (-_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A78B0 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGroupingStoryboard::_GroupingIndexByTarget(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // r8d
  __int64 v8; // rdx

  *a3 = *(_DWORD *)(a1 + 144);
  v5 = -2147024809;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 144LL))(a1);
  if ( v6 != 4095 )
  {
    v7 = *(_DWORD *)(a1 + 144);
    v8 = 0LL;
    if ( v7 )
    {
      while ( **(_DWORD **)(*(_QWORD *)(a1 + 120) + 8 * v8) != v6 )
      {
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v7 )
          return v5;
      }
      *a3 = v8;
      return 0;
    }
  }
  return v5;
}
