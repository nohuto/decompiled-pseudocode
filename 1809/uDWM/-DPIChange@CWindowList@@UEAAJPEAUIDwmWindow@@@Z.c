/*
 * XREFs of ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180015A80
 * Callers:
 *     <none>
 * Callees:
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18000FA78 (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180011E50 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180012688 (--0CWindowData@@QEAA@XZ.c)
 *     ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x180012790 (-OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800142F0 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowSizeUpdated@CWindowData@@QEAAJXZ @ 0x180014580 (-OnWindowSizeUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800245E8 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x180025CB4 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x1800363F4 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x18004E25A (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180087D00 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     PixelAligningFactor @ 0x18008B6D4 (PixelAligningFactor.c)
 *     McTemplateU0pddddd @ 0x18008D66C (McTemplateU0pddddd.c)
 */

__int64 __fastcall CWindowList::DPIChange(CWindowList *this, struct IDwmWindow *a2)
{
  int v4; // edi
  struct CWindowData *v5; // rbx
  int v6; // r14d
  struct CWindowData *v7; // rbp
  int v8; // ebp
  __int64 v9; // rax
  bool v10; // r8
  BOOL v11; // r14d
  CTopLevelWindow *v12; // rcx
  double v13; // xmm6_8
  char v14; // r15
  double v15; // xmm10_8
  float v16; // xmm2_4
  int v17; // esi
  float v18; // xmm8_4
  CWindowList *v19; // rcx
  int v21; // eax
  CWindowData *v22; // rax
  CWindowData *v23; // rax
  int v24; // eax
  int v25; // esi
  int v26; // r12d
  int v27; // esi
  int v28; // r12d
  double v29; // xmm11_8
  __int64 v30; // rcx
  double v31; // xmm0_8
  double v32; // xmm1_8
  float v33; // xmm4_4
  float v34; // xmm3_4
  float v35; // xmm2_4
  float v36; // xmm2_4
  CWindowList *v37; // rcx
  CTopLevelWindow *v38; // rcx
  HWND v39; // rdx
  double v40[2]; // [rsp+40h] [rbp-A8h] BYREF
  double v41; // [rsp+F8h] [rbp+10h] BYREF
  struct tagPOINT v42; // [rsp+100h] [rbp+18h] BYREF
  double v43; // [rsp+108h] [rbp+20h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v7 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v22 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v22 || (v23 = CWindowData::CWindowData(v22), (v7 = v23) == 0LL) )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x887u);
    v8 = -2147024882;
    goto LABEL_43;
  }
  *((_QWORD *)v23 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v23);
  *((_QWORD *)v7 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v24 = CWindowList::SyncWindowData(this, a2, v7);
  v6 = v24;
  if ( v24 >= 0 )
LABEL_2:
    v5 = v7;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x88Bu);
  v8 = v6;
  if ( v6 < 0 )
  {
LABEL_43:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x149Bu);
    goto LABEL_32;
  }
  if ( v5 )
  {
    v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 136LL))(a2);
    v10 = *((double *)v5 + 39) != *(double *)v9
       || *((_DWORD *)v5 + 80) != *(_DWORD *)(v9 + 8)
       || *((_DWORD *)v5 + 81) != *(_DWORD *)(v9 + 12);
    v11 = *((_DWORD *)v5 + 82) != *(_DWORD *)(v9 + 16)
       || *((_DWORD *)v5 + 83) != *(_DWORD *)(v9 + 20)
       || *((_DWORD *)v5 + 84) != *(_DWORD *)(v9 + 24)
       || *((_DWORD *)v5 + 85) != *(_DWORD *)(v9 + 28);
    v12 = (CTopLevelWindow *)*((_QWORD *)v5 + 49);
    *(_OWORD *)((char *)v5 + 312) = *(_OWORD *)v9;
    *(_OWORD *)((char *)v5 + 328) = *(_OWORD *)(v9 + 16);
    v13 = *(double *)v9;
    *((_QWORD *)v5 + 37) = *(_QWORD *)v9;
    if ( v12 && v10 )
    {
      CTopLevelWindow::OnSettingsUpdated(v12, 1);
      v13 = *((double *)v5 + 37);
    }
    v14 = 0;
    v8 = 0;
    v15 = v13;
    v16 = v13;
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)v5 + 76) - v16)) & _xmm) > 0.0000011920929 )
    {
      *((float *)v5 + 76) = v16;
      v14 = 1;
    }
    if ( v13 == 1.0 )
    {
      if ( *((float *)v5 + 43) != 1.0 || *((float *)v5 + 44) != 1.0 )
      {
        *((_DWORD *)v5 + 44) = 1065353216;
        v14 = 1;
        *((_DWORD *)v5 + 43) = 1065353216;
      }
    }
    else
    {
      v25 = 0;
      v26 = 0;
      if ( *((_DWORD *)v5 + 47) - *((_DWORD *)v5 + 45) >= 0 )
        v25 = *((_DWORD *)v5 + 47) - *((_DWORD *)v5 + 45);
      v27 = v25 - *((_DWORD *)v5 + 62) - *((_DWORD *)v5 + 61);
      if ( *((_DWORD *)v5 + 48) - *((_DWORD *)v5 + 46) >= 0 )
        v26 = *((_DWORD *)v5 + 48) - *((_DWORD *)v5 + 46);
      v28 = v26 - *((_DWORD *)v5 + 64) - *((_DWORD *)v5 + 63);
      if ( v28 && v27 )
      {
        v29 = PixelAligningFactor(v12, (unsigned int)v27, &v43, &v41);
        v31 = PixelAligningFactor(v30, (unsigned int)v28, v40, &v42);
        if ( v41 <= 0.02 && *(double *)&v42 <= 0.02 )
        {
          v32 = ((double)v27 / (double)v28 - v43 / v40[0]) / ((double)v27 / (double)v28);
          if ( v32 < 0.0 )
            *(_QWORD *)&v32 ^= _xmm;
          if ( v32 <= 0.02 )
          {
            v13 = v29;
            v15 = v31;
          }
        }
        v33 = v13;
        v34 = v15;
        v35 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)v5 + 43) - v33)) & _xmm);
        if ( v35 > 0.0000011920929
          || (v36 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)v5 + 44) - v34)) & _xmm),
              v36 > 0.0000011920929) )
        {
          *((float *)v5 + 43) = v33;
          v14 = 1;
          *((float *)v5 + 44) = v34;
        }
      }
    }
    v17 = *((_DWORD *)v5 + 47) - *((_DWORD *)v5 + 45);
    if ( v17 < 0 )
      v17 = 0;
    if ( *((_DWORD *)v5 + 48) - *((_DWORD *)v5 + 46) >= 0 )
      v4 = *((_DWORD *)v5 + 48) - *((_DWORD *)v5 + 46);
    v18 = *((float *)v5 + 76);
    if ( v18 != 1.0 )
    {
      v17 = (int)floor_0((float)((float)v17 * v18) + 0.5);
      v4 = (int)floor_0((float)((float)v4 * v18) + 0.5);
    }
    *((_DWORD *)v5 + 14) = v17 + *((_DWORD *)v5 + 12);
    v19 = (CWindowList *)(unsigned int)(v4 + *((_DWORD *)v5 + 13));
    *((_DWORD *)v5 + 15) = (_DWORD)v19;
    if ( *((_QWORD *)v5 + 49) && (v21 = CWindowData::OnWindowSizeUpdated(v5), v8 = v21, v21 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xD05u);
    }
    else if ( v14 || v11 )
    {
      CWindowList::OnClientMarginsChange(v19, v5);
      CWindowList::OnClientGlassChange(v37, v5);
      v38 = (CTopLevelWindow *)*((_QWORD *)v5 + 49);
      if ( v38 )
        CTopLevelWindow::OnWindowScaleUpdated(v38);
      v39 = (HWND)*((_QWORD *)v5 + 5);
      v42 = *(struct tagPOINT *)((char *)v5 + 48);
      LOBYTE(v41) = 0;
      CWindowPropertyTracker::GetWindowEndPosition(
        (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
        v39,
        &v42);
      CAnimationScheduler::OnWindowPositionChange(
        *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 30),
        v5,
        v42,
        (bool *)&v41);
      if ( !LOBYTE(v41) )
        CWindowList::OnPositionChange(this, v5, 1);
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x14B5u);
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      McTemplateU0pddddd(
        (_DWORD)v19,
        *((_DWORD *)v5 + 82),
        *((_QWORD *)v5 + 5),
        *((_DWORD *)v5 + 80),
        *((_DWORD *)v5 + 82),
        *((_DWORD *)v5 + 83),
        *((_DWORD *)v5 + 84),
        *((_DWORD *)v5 + 85));
    }
  }
LABEL_32:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v8;
}
