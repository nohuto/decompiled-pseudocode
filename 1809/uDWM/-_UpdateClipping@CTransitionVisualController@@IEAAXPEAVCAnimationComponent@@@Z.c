/*
 * XREFs of ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x180031C70
 * Callers:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x1800311B4 (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180031AA0 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800060F0 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z @ 0x180031DA4 (-_SetAnimationClipRegion@CTransitionVisualController@@IEAAJPEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     McTemplateU0pddddq @ 0x1800A0168 (McTemplateU0pddddq.c)
 */

void __fastcall CTransitionVisualController::_UpdateClipping(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2)
{
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx
  struct tagRECT rcMonitor; // xmm6
  HMONITOR v7; // rax
  HMONITOR v8; // rbx
  __int64 v9; // rcx
  char v10; // al
  int v11; // edx
  int v12; // ecx
  struct tagRECT v13; // xmm0
  struct tagRECT v14; // [rsp+48h] [rbp-9h] BYREF
  struct tagRECT v15; // [rsp+58h] [rbp+7h] BYREF
  struct tagMONITORINFO mi; // [rsp+68h] [rbp+17h] BYREF

  v2 = *((_DWORD *)a2 + 17);
  *(_QWORD *)&v14.left = 0LL;
  *(_QWORD *)&v14.right = 0LL;
  if ( !v2 )
  {
    v7 = MonitorFromWindow(*((HWND *)a2 + 2), 1u);
    mi.cbSize = 40;
    v8 = v7;
    memset_0(&mi.rcMonitor, 0, 0x24uLL);
    if ( GetMonitorInfoW(v8, &mi) )
    {
      rcMonitor = mi.rcMonitor;
      goto LABEL_7;
    }
    v13 = *(struct tagRECT *)((char *)a2 + 88);
    goto LABEL_15;
  }
  v4 = v2 - 1;
  if ( !v4 )
  {
    rcMonitor = *(struct tagRECT *)((char *)a2 + 88);
    goto LABEL_7;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
    {
LABEL_16:
      rcMonitor = v14;
      goto LABEL_8;
    }
    v13 = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 856LL);
LABEL_15:
    v15 = v13;
    CTransitionVisualController::GetMonitorRectFromRectImpl(&v15, &v14);
    goto LABEL_16;
  }
  rcMonitor = *(struct tagRECT *)((char *)a2 + 104);
LABEL_7:
  v14 = rcMonitor;
LABEL_8:
  v9 = *((_QWORD *)a2 + 5);
  if ( !*(_BYTE *)(v9 + 986) )
  {
    v10 = CTransitionVisualController::_SetAnimationClipRegion(
            (CTransitionVisualController *)-v9,
            (struct CVisual *)((v9 + 8) & -(__int64)(v9 != 0)),
            &v14);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0pddddq(
        v12,
        v11,
        *((_QWORD *)a2 + 2),
        v14.left,
        _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcMonitor, 4)),
        v14.right,
        _mm_cvtsi128_si32(_mm_srli_si128((__m128i)rcMonitor, 12)),
        v10);
  }
  *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 840LL) = rcMonitor;
}
