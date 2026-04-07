/*
 * XREFs of ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800A0D44
 * Callers:
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x1800A0F24 (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 * Callees:
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001CDE0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18002FCB0 (-Create@CAnimatedTransitionVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180032B04 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180032BA0 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18003B5BC (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18003B690 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x1800A1858 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

__int64 __fastcall CScreenRotation::CreateLiveDesktopVisual(CScreenRotation *this)
{
  struct CResource ***v2; // rsi
  struct CVisual *RootVisualForDesktop; // rbx
  __int64 v4; // rax
  int v5; // r8d
  int v6; // r9d
  struct IDwmChannel *v7; // rcx
  int v8; // eax
  int v9; // edi
  int v10; // eax
  struct CResource *v11; // rbx
  struct CResource **v12; // rcx
  struct CResource *v14; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT v16; // [rsp+40h] [rbp-20h] BYREF

  GetDesktopID(1LL, &v15);
  v2 = (struct CResource ***)((char *)this + 320);
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           v15);
  v4 = *((_QWORD *)this + 2);
  v16.left = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 111);
  v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 113);
  v16.right = v5 + v16.left;
  v16.top = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 112);
  v6 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 114);
  v16.bottom = v6 + v16.top;
  v7 = *(struct IDwmChannel **)(v4 + 16);
  if ( v5 < 0 )
    v5 = 0;
  LODWORD(v14) = v5;
  if ( v6 < 0 )
    v6 = 0;
  HIDWORD(v14) = v6;
  v8 = CAnimatedTransitionVisual::Create(v7, (struct CAnimatedTransitionVisual **)this + 40);
  v9 = v8;
  if ( v8 >= 0 )
  {
    VisualCollection::InsertRelative(
      (CScreenRotation *)((char *)this + 32),
      (struct CVisual *)((unsigned __int64)(*v2 + 1) & -(__int64)(*v2 != 0LL)),
      (struct CVisual *)((*((_QWORD *)this + 39) + 8LL) & -(__int64)(*((_QWORD *)this + 39) != 0LL)),
      1u,
      1);
    v10 = CAnimatedTransitionVisual::SetVisual(*v2, RootVisualForDesktop, 0, &v16);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v11 = v14;
      (*((void (__fastcall **)(struct CResource **, struct CResource **))(*v2)[1] + 12))(*v2 + 1, &v14);
      (*v2)[119] = v11;
      CAnimatedTransitionVisual::SetBeginRect((struct tagPOINT *)*v2, &v16);
      v12 = *v2;
      *(struct tagRECT *)(v12 + 109) = v16;
      CVisual::SetDirtyFlags((CVisual *)(v12 + 1), 4096);
      CAnimatedTransitionVisual::SetBeginAlpha((CAnimatedTransitionVisual *)*v2, 0.0);
      CVisual::SetInterpolationMode((unsigned int *)*v2 + 2, 1u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x22Fu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x22Du);
  }
  if ( v9 < 0 )
    CScreenRotation::Stop(this, 0);
  return (unsigned int)v9;
}
