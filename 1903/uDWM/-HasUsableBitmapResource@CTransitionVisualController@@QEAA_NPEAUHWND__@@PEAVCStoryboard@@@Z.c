/*
 * XREFs of ?HasUsableBitmapResource@CTransitionVisualController@@QEAA_NPEAUHWND__@@PEAVCStoryboard@@@Z @ 0x1800A4124
 * Callers:
 *     ?_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z @ 0x180031D9C (-_InvokeWindowEnumCallback@CStoryboard@@IEAA_NPEAVCWindowData@@W4EnumWindowFlags@1@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800AB430 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800ABF00 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800AD460 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z @ 0x1800A4768 (-_GetTransitionBitmapIndex@CTransitionVisualController@@IEAAHPEAUHWND__@@@Z.c)
 */

char __fastcall CTransitionVisualController::HasUsableBitmapResource(
        CTransitionVisualController *this,
        HWND a2,
        struct CStoryboard *a3)
{
  int TransitionBitmapIndex; // eax
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax

  TransitionBitmapIndex = CTransitionVisualController::_GetTransitionBitmapIndex(this, a2);
  v6 = 0LL;
  v7 = (unsigned int)TransitionBitmapIndex;
  if ( TransitionBitmapIndex < 0 )
    return 0;
  v8 = (*(__int64 (__fastcall **)(struct CStoryboard *))(*(_QWORD *)a3 + 16LL))(a3);
  if ( !*(_DWORD *)(v8 + 4) )
    return 0;
  while ( (*(_DWORD *)(*(_QWORD *)(v8 + 8) + 4 * v6) & 0xFFF) != (*(_DWORD *)(56 * v7 + *((_QWORD *)this + 19) + 8) & 0xFFF) )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= *(_DWORD *)(v8 + 4) )
      return 0;
  }
  return 1;
}
