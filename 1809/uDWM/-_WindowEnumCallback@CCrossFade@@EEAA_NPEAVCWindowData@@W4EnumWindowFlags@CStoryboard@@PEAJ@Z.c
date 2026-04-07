/*
 * XREFs of ?_WindowEnumCallback@CCrossFade@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A8BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180032B04 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x180036448 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18003B5BC (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCrossFade::_WindowEnumCallback(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v4; // edi
  char v8; // si
  int v9; // ebx
  float v10; // xmm7_4
  struct tagRECT v11; // xmm6
  struct tagPOINT *v12; // rcx
  __int64 v13; // rcx
  char result; // al
  int v15; // eax
  __int64 v16; // r8
  int v17; // eax
  struct tagRECT v18; // [rsp+30h] [rbp-48h] BYREF
  CBaseObject *v19; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v19 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_18;
  v8 = 0;
  v9 = *(_DWORD *)(a2 + 604) & 0xFFF;
  if ( v9 != 18 )
  {
    switch ( *(_DWORD *)(a2 + 604) & 0xFFF )
    {
      case 19:
        goto LABEL_21;
      case 61:
        LOBYTE(a3) = 1;
        v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, CBaseObject **))(*(_QWORD *)a1 + 144LL))(
                a1,
                a2,
                a3,
                &v19);
        v4 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, 0x686u);
          goto LABEL_16;
        }
LABEL_9:
        if ( *(_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1) == 75 )
        {
          if ( v9 != 62 && v9 != 64 )
            goto LABEL_12;
        }
        else if ( !v8 )
        {
LABEL_12:
          v10 = FLOAT_1_0;
LABEL_13:
          if ( !v19 )
            goto LABEL_18;
          v12 = (struct tagPOINT *)*((_QWORD *)v19 + 5);
          v18 = *(struct tagRECT *)((char *)v19 + 88);
          v11 = v18;
          CAnimatedTransitionVisual::SetBeginRect(v12, &v18);
          v13 = *((_QWORD *)v19 + 5);
          *(struct tagRECT *)(v13 + 872) = v11;
          CVisual::SetDirtyFlags((CVisual *)(v13 + 8), 4096);
          CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v19 + 5), v10);
          if ( *((_DWORD *)v19 + 17) != 2 )
            *((_DWORD *)v19 + 17) = 1;
          goto LABEL_16;
        }
        v10 = 0.0;
        goto LABEL_13;
      case 62:
        goto LABEL_21;
      case 63:
        goto LABEL_22;
      case 64:
LABEL_21:
        v8 = 1;
        goto LABEL_22;
    }
    if ( (*(_DWORD *)(a2 + 604) & 0xFFF) != 0x41 )
      goto LABEL_9;
  }
LABEL_22:
  if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
          (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
          *(HWND *)(a2 + 40),
          v8 ^ 1) )
    goto LABEL_9;
  LOBYTE(v16) = v8;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, CBaseObject **))(*(_QWORD *)a1 + 144LL))(
          a1,
          a2,
          v16,
          &v19);
  v4 = v17;
  if ( v17 >= 0 )
    goto LABEL_9;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v17, 0x67Eu);
LABEL_16:
  if ( v19 )
    CBaseObject::Release(v19);
LABEL_18:
  result = 1;
  *a4 = v4;
  return result;
}
