/*
 * XREFs of ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18008C054
 * Callers:
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18008C6B0 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180009654 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18001617C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001EEF4 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021984 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002204C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x180023738 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002662C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180031374 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180033FB0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180036A78 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x18008B85C (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x18008D1E4 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 */

__int64 __fastcall CAccentBlurBehind::UpdateAccentBlurBehind(
        CAccentBlurBehind *this,
        const struct tagRECT *a2,
        __int64 a3,
        HWND a4)
{
  int inserted; // eax
  int v9; // ebx
  int v10; // r9d
  _QWORD *v11; // r15
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // dl
  struct _LIST_ENTRY *Blink; // rbp
  HWND v17; // rax
  CBaseObject *v18; // r14
  struct _LIST_ENTRY **p_Blink; // r12
  HWND v20; // rcx
  struct _LIST_ENTRY *v21; // rax
  CTopLevelWindow *Flink; // r14
  char v23; // al
  int RectangleGeometry; // eax
  unsigned int v25; // eax
  unsigned int v26; // edx
  int v27; // eax
  CTopLevelWindow *v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // edx
  int v31; // eax
  int v32; // r9d
  int v33; // r8d
  int v34; // eax
  CBaseObject *v35; // rbp
  int v36; // eax
  unsigned int v38; // [rsp+20h] [rbp-98h]
  char v39; // [rsp+30h] [rbp-88h]
  CBaseObject *v41; // [rsp+40h] [rbp-78h] BYREF
  HWND ShellWindowForDesktop; // [rsp+48h] [rbp-70h]
  CBaseObject *v43; // [rsp+50h] [rbp-68h] BYREF
  struct _LIST_ENTRY *v44; // [rsp+58h] [rbp-60h]
  struct tagRECT rcDst; // [rsp+60h] [rbp-58h] BYREF

  v43 = 0LL;
  CVisual::SetInterpolationMode((unsigned int *)this, 1u);
  inserted = CRenderDataVisual::ClearInstructions(this);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v38 = 1528;
    goto LABEL_3;
  }
  inserted = CAccentBlurBehind::EnsureCVIResource(this, a2);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v38 = 1529;
    goto LABEL_3;
  }
  if ( !a4 )
    goto LABEL_86;
  inserted = VisualCollection::RemoveAll((CAccentBlurBehind *)((char *)this + 32));
  v9 = inserted;
  if ( inserted < 0 )
  {
    v38 = 1544;
    goto LABEL_3;
  }
  inserted = VisualCollection::InsertRelative(
               (CAccentBlurBehind *)((char *)this + 32),
               *((struct CVisual **)this + 47),
               0LL,
               0,
               1);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v38 = 1545;
    goto LABEL_3;
  }
  inserted = CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 47));
  v9 = inserted;
  if ( inserted < 0 )
  {
    v38 = 1546;
    goto LABEL_3;
  }
  inserted = VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 46) + 32LL));
  v9 = inserted;
  if ( inserted < 0 )
  {
    v38 = 1547;
LABEL_3:
    v10 = inserted;
LABEL_4:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, v38);
    goto LABEL_86;
  }
  v11 = (_QWORD *)((char *)this + 288);
  *((_DWORD *)this + 78) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 288, 8u);
  ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                            a3);
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           a3);
  v15 = 0;
  v44 = WindowListForDesktop;
  v39 = 0;
  Blink = WindowListForDesktop->Blink;
  if ( Blink == WindowListForDesktop )
    goto LABEL_86;
  v17 = a4;
  while ( 1 )
  {
    v18 = 0LL;
    p_Blink = &Blink[2].Blink;
    v20 = (HWND)Blink[2].Blink;
    v41 = 0LL;
    if ( v20 != v17 )
      break;
    v15 = 1;
    v39 = 1;
LABEL_57:
    Blink = Blink->Blink;
    if ( Blink == v44 )
      goto LABEL_86;
  }
  if ( !v15 )
    goto LABEL_57;
  if ( v20 != ShellWindowForDesktop )
  {
    v21 = Blink[34].Blink;
    if ( !v21 || (HWND)v21[2].Blink != ShellWindowForDesktop )
    {
      if ( *((_DWORD *)this + 78) >= 0xAu )
        goto LABEL_56;
      Flink = (CTopLevelWindow *)Blink[25].Flink;
      if ( !Flink )
        goto LABEL_56;
      v23 = BYTE4(Blink[37].Blink);
      if ( (v23 & 1) == 0 )
        goto LABEL_56;
      if ( SHIBYTE(Blink[37].Blink) < 0 )
        goto LABEL_56;
      if ( (v23 & 4) != 0 )
        goto LABEL_56;
      if ( (HIDWORD(Blink[6].Flink) & 0x20000000) != 0 )
        goto LABEL_56;
      if ( !v20 )
        goto LABEL_56;
      if ( v20 == *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 84) )
        goto LABEL_56;
      CTopLevelWindow::GetActualWindowRect(Flink, &rcDst, 0, 1, 0);
      if ( !IntersectRect(&rcDst, &rcDst, a2) )
        goto LABEL_56;
      RectangleGeometry = CTopLevelWindow::CloneVisualTreeForLivePreview(Flink, 0, v13, v14, &v41);
      v9 = RectangleGeometry;
      if ( RectangleGeometry >= 0 )
      {
        v18 = v41;
        RectangleGeometry = VisualCollection::InsertRelative(
                              (VisualCollection *)(*((_QWORD *)this + 46) + 32LL),
                              v41,
                              0LL,
                              1u,
                              1);
        v9 = RectangleGeometry;
        if ( RectangleGeometry < 0 )
        {
          v38 = 1612;
          goto LABEL_64;
        }
        v25 = *((_DWORD *)this + 78);
        v26 = v25 + 1;
        if ( v25 + 1 < v25 )
        {
          v9 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_60:
          v38 = 1613;
          goto LABEL_61;
        }
        if ( v26 > *((_DWORD *)this + 77) )
        {
          v27 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 288, 8, 1, &Blink[2].Blink);
          v9 = v27;
          if ( v27 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0xC0u);
          if ( v9 < 0 )
            goto LABEL_60;
        }
        else
        {
          v9 = 0;
          *(_QWORD *)(*v11 + 8LL * v25) = *p_Blink;
          *((_DWORD *)this + 78) = v26;
        }
LABEL_54:
        if ( v18 )
          CBaseObject::Release(v18);
LABEL_56:
        v17 = a4;
        v15 = v39;
        goto LABEL_57;
      }
      v38 = 1610;
LABEL_64:
      v10 = RectangleGeometry;
      goto LABEL_4;
    }
  }
  v28 = (CTopLevelWindow *)Blink[25].Flink;
  if ( v28 )
  {
    RectangleGeometry = CTopLevelWindow::CloneVisualTreeForLivePreview(v28, 0, v13, v14, &v41);
    v9 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      v38 = 1581;
      goto LABEL_64;
    }
    v18 = v41;
    RectangleGeometry = VisualCollection::InsertRelative(
                          (VisualCollection *)(*((_QWORD *)this + 46) + 32LL),
                          v41,
                          0LL,
                          1u,
                          1);
    v9 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      v38 = 1583;
      goto LABEL_64;
    }
    v29 = *((_DWORD *)this + 78);
    v30 = v29 + 1;
    if ( v29 + 1 < v29 )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_66:
      v38 = 1584;
LABEL_61:
      v10 = v9;
      goto LABEL_4;
    }
    if ( v30 > *((_DWORD *)this + 77) )
    {
      v31 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 288, 8, 1, &Blink[2].Blink);
      v9 = v31;
      if ( v31 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0xC0u);
      if ( v9 < 0 )
        goto LABEL_66;
    }
    else
    {
      v9 = 0;
      *(_QWORD *)(*v11 + 8LL * v29) = *p_Blink;
      *((_DWORD *)this + 78) = v30;
    }
    if ( v18 )
    {
      CBaseObject::Release(v18);
      v18 = 0LL;
    }
  }
  if ( *p_Blink != (struct _LIST_ENTRY *)ShellWindowForDesktop )
    goto LABEL_54;
  if ( (BYTE4(Blink[37].Blink) & 1) != 0 && Blink[24].Flink && *((_DWORD *)this + 78) )
  {
    RectangleGeometry = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 46) + 64LL))(*((_QWORD *)this + 46));
    v9 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      v38 = 1621;
      goto LABEL_64;
    }
    v32 = 0;
    if ( a2->bottom - a2->top >= 0 )
      v32 = a2->bottom - a2->top;
    v33 = 0;
    if ( a2->right - a2->left >= 0 )
      v33 = a2->right - a2->left;
    RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                          0,
                          0,
                          v33,
                          v32,
                          (struct CRectangleGeometryProxy **)this + 44);
    v9 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      v38 = 1626;
      goto LABEL_64;
    }
    v34 = CDrawGeometryInstruction::Create(
            *((struct CBaseLegacyMilBrushProxy **)this + 42),
            *((struct CBaseGeometryProxy **)this + 44),
            &v43);
    v35 = v43;
    v9 = v34;
    if ( v34 >= 0 )
    {
      v36 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 47), v43);
      v9 = v36;
      if ( v36 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x662u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v34, 0x660u);
    }
    if ( v35 )
      CBaseObject::Release(v35);
  }
LABEL_86:
  if ( v9 < 0 )
  {
    VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 46) + 32LL));
    *((_DWORD *)this + 78) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 288, 8u);
  }
  return (unsigned int)v9;
}
