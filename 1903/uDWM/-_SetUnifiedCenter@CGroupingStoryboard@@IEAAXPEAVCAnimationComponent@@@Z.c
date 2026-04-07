/*
 * XREFs of ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800AACF4
 * Callers:
 *     _lambda_81f2de84cd03038fe2b12ca1386d224e_::operator() @ 0x1800A7498 (_lambda_81f2de84cd03038fe2b12ca1386d224e_--operator().c)
 *     _lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_::operator() @ 0x1800A74E8 (_lambda_8f1720e7b83b32fa64f3f3d4703bfb8d_--operator().c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800AA5A8 (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800AB430 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800ABF00 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?MapPointIntoRectangle@@YAXAEBUMilPoint2F@@AEBUtagRECT@@PEAUMilPoint3F@@@Z @ 0x1800A86FC (-MapPointIntoRectangle@@YAXAEBUMilPoint2F@@AEBUtagRECT@@PEAUMilPoint3F@@@Z.c)
 *     ?_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z @ 0x1800AA4C4 (-_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z.c)
 *     ?_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z @ 0x1800AA9AC (-_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z.c)
 */

void __fastcall CGroupingStoryboard::_SetUnifiedCenter(CGroupingStoryboard *this, struct CAnimationComponent *a2)
{
  unsigned int v3; // edi
  __int64 v5; // r11
  __int64 v6; // xmm0_8
  int v7; // ecx
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  int v11; // [rsp+28h] [rbp-18h]
  struct tagRECT v12; // [rsp+30h] [rbp-10h] BYREF
  float v13; // [rsp+50h] [rbp+10h] BYREF
  float v14; // [rsp+54h] [rbp+14h]

  v3 = *((_DWORD *)a2 + 6) & 0xFFF;
  if ( ((*(__int64 (__fastcall **)(CGroupingStoryboard *, _QWORD))(*(_QWORD *)this + 120LL))(this, v3) & 8) != 0 )
  {
    v10 = 0LL;
    v11 = 0;
    if ( (int)CGroupingStoryboard::_GetUnionRect((__int64)this, v3, &v12) >= 0 )
    {
      v5 = *((_QWORD *)a2 + 5);
      v13 = (float)(v12.right + v12.left) * 0.5;
      v14 = (float)(v12.bottom + v12.top) * 0.5;
      v12 = *(struct tagRECT *)(v5 + 856);
      MapPointIntoRectangle((const struct MilPoint2F *)&v13, &v12, (struct MilPoint3F *)&v10);
      v6 = v10;
      v7 = v11;
      *(_QWORD *)(v8 + 800) = v10;
      *(_DWORD *)(v8 + 808) = v7;
      *(_DWORD *)(v8 + 1020) = 2;
      *(_BYTE *)(v8 + 973) = 1;
      v9 = *((_QWORD *)a2 + 5);
      *(_QWORD *)(v9 + 776) = v6;
      *(_DWORD *)(v9 + 784) = v7;
      *(_BYTE *)(v9 + 974) = 1;
      if ( (unsigned int)CGroupingStoryboard::_NumberOfWindowsInUnionRect((__int64)this, v3) > 1 || v3 - 45 <= 1 )
      {
        if ( *((_DWORD *)a2 + 17) != 2 )
          *((_DWORD *)a2 + 17) = 3;
      }
      else if ( *((_DWORD *)a2 + 17) != 2 )
      {
        *((_DWORD *)a2 + 17) = 1;
      }
    }
  }
}
