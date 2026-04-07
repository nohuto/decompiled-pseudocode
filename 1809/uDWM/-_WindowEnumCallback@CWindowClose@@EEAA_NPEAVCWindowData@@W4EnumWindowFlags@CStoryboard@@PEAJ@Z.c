/*
 * XREFs of ?_WindowEnumCallback@CWindowClose@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180006220
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180030484 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180032B04 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18003B5BC (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CWindowClose::_WindowEnumCallback(CStoryboard *a1, struct CWindowData *a2, char a3, int *a4)
{
  int v4; // edi
  int v8; // eax
  int v9; // eax
  CBaseObject *v10; // rbx
  __int64 v11; // rcx
  struct tagRECT v12; // xmm6
  CAnimatedTransitionVisual *v13; // rcx
  __int64 v14; // rcx
  char result; // al
  struct tagRECT v16; // [rsp+50h] [rbp-28h] BYREF
  CBaseObject *v17; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v17 = 0LL;
  if ( (a3 & 1) != 0 && (*((_DWORD *)a2 + 151) & 0xFFF) == 0x55 )
  {
    v8 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 112LL))(a1);
    v9 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(a1, a2, 1, v8, 0LL, 0LL, -1, 1, &v17);
    v10 = v17;
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v9, 0x136Au);
    }
    else
    {
      CAnimatedTransitionVisual::SetBeginAlpha(*((CAnimatedTransitionVisual **)v17 + 5), 1.0);
      v11 = *((_QWORD *)v10 + 5);
      *(_DWORD *)(v11 + 932) = 0;
      CVisual::SetDirtyFlags((CVisual *)(v11 + 8), 0x1000u);
      v13 = (CAnimatedTransitionVisual *)*((_QWORD *)v10 + 5);
      v16 = *(struct tagRECT *)((char *)v10 + 88);
      v12 = v16;
      CAnimatedTransitionVisual::SetBeginRect(v13, &v16);
      v14 = *((_QWORD *)v10 + 5);
      *(struct tagRECT *)(v14 + 872) = v12;
      CVisual::SetDirtyFlags((CVisual *)(v14 + 8), 0x1000u);
      if ( *((_DWORD *)v10 + 17) != 2 )
        *((_DWORD *)v10 + 17) = 1;
    }
    if ( v10 )
      CBaseObject::Release(v10);
  }
  result = 1;
  *a4 = v4;
  return result;
}
