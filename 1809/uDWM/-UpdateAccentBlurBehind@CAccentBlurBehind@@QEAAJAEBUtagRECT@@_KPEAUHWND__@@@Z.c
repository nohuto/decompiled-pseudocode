/*
 * XREFs of ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18008550C
 * Callers:
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180085DFC (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000F790 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x180013A04 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180013D04 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180020378 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180028BF0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18002B19C (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180033EA0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800358A0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180038288 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18003B690 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x180084BD4 (-EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800870D8 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
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
  _QWORD *v11; // r12
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // dl
  struct _LIST_ENTRY *Blink; // rbp
  HWND v17; // rax
  CBaseObject *v18; // r14
  struct _LIST_ENTRY **p_Blink; // r15
  HWND v20; // rcx
  struct _LIST_ENTRY *Flink; // rax
  CTopLevelWindow *v22; // r14
  char v23; // al
  int RectangleGeometry; // eax
  __int64 v25; // rcx
  unsigned int v26; // edx
  unsigned int v27; // eax
  int v28; // eax
  CTopLevelWindow *v29; // rcx
  __int64 v30; // rcx
  unsigned int v31; // edx
  unsigned int v32; // eax
  int v33; // eax
  int v34; // ecx
  __int64 v35; // r9
  int v36; // eax
  __int64 v37; // r8
  int v38; // eax
  CBaseObject *v39; // rbp
  int v40; // eax
  unsigned int v42; // [rsp+20h] [rbp-A8h]
  char v43; // [rsp+30h] [rbp-98h]
  unsigned int v45; // [rsp+40h] [rbp-88h]
  CBaseObject *v46; // [rsp+48h] [rbp-80h] BYREF
  unsigned int v47; // [rsp+50h] [rbp-78h]
  HWND ShellWindowForDesktop; // [rsp+58h] [rbp-70h]
  CBaseObject *v49; // [rsp+60h] [rbp-68h] BYREF
  struct _LIST_ENTRY *v50; // [rsp+68h] [rbp-60h]
  struct tagRECT rcDst; // [rsp+70h] [rbp-58h] BYREF

  v49 = 0LL;
  CVisual::SetInterpolationMode((unsigned int *)this, 1u);
  inserted = CRenderDataVisual::ClearInstructions(this);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v42 = 1532;
    goto LABEL_3;
  }
  inserted = CAccentBlurBehind::EnsureCVIResource((struct CVisual **)this, a2);
  v9 = inserted;
  if ( inserted < 0 )
  {
    v42 = 1533;
    goto LABEL_3;
  }
  if ( !a4 )
    goto LABEL_89;
  inserted = VisualCollection::RemoveAll((CAccentBlurBehind *)((char *)this + 32));
  v9 = inserted;
  if ( inserted < 0 )
  {
    v42 = 1548;
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
    v42 = 1549;
    goto LABEL_3;
  }
  inserted = CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 47));
  v9 = inserted;
  if ( inserted < 0 )
  {
    v42 = 1550;
    goto LABEL_3;
  }
  inserted = VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 46) + 32LL));
  v9 = inserted;
  if ( inserted < 0 )
  {
    v42 = 1551;
LABEL_3:
    v10 = inserted;
LABEL_4:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, v42);
    goto LABEL_89;
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
  v50 = WindowListForDesktop;
  v43 = 0;
  Blink = WindowListForDesktop->Blink;
  if ( Blink == WindowListForDesktop )
    goto LABEL_89;
  v17 = a4;
  while ( 1 )
  {
    v18 = 0LL;
    p_Blink = &Blink[2].Blink;
    v20 = (HWND)Blink[2].Blink;
    v46 = 0LL;
    if ( v20 != v17 )
      break;
    v15 = 1;
    v43 = 1;
LABEL_64:
    Blink = Blink->Blink;
    if ( Blink == v50 )
      goto LABEL_89;
  }
  if ( !v15 )
    goto LABEL_64;
  if ( v20 != ShellWindowForDesktop )
  {
    Flink = Blink[34].Flink;
    if ( !Flink || (HWND)Flink[2].Blink != ShellWindowForDesktop )
    {
      if ( *((_DWORD *)this + 78) >= 0xAu )
        goto LABEL_63;
      v22 = (CTopLevelWindow *)Blink[24].Blink;
      if ( !v22 )
        goto LABEL_63;
      v23 = BYTE4(Blink[37].Flink);
      if ( (v23 & 1) == 0 )
        goto LABEL_63;
      if ( SHIBYTE(Blink[37].Flink) < 0 )
        goto LABEL_63;
      if ( (v23 & 4) != 0 )
        goto LABEL_63;
      if ( (HIDWORD(Blink[6].Flink) & 0x20000000) != 0 )
        goto LABEL_63;
      if ( !v20 )
        goto LABEL_63;
      if ( v20 == *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 84) )
        goto LABEL_63;
      CTopLevelWindow::GetActualWindowRect(v22, &rcDst, 0, 1, 0);
      if ( !IntersectRect(&rcDst, &rcDst, a2) )
        goto LABEL_63;
      RectangleGeometry = CTopLevelWindow::CloneVisualTreeForLivePreview(v22, 0, v13, v14, &v46);
      v9 = RectangleGeometry;
      if ( RectangleGeometry < 0 )
      {
        v42 = 1614;
      }
      else
      {
        v18 = v46;
        RectangleGeometry = VisualCollection::InsertRelative(
                              (VisualCollection *)(*((_QWORD *)this + 46) + 32LL),
                              v46,
                              0LL,
                              1u,
                              1);
        v9 = RectangleGeometry;
        if ( RectangleGeometry >= 0 )
        {
          v25 = *((unsigned int *)this + 78);
          v26 = v47;
          v27 = v25 + 1;
          if ( (int)v25 + 1 >= (unsigned int)v25 )
            v26 = v25 + 1;
          v9 = v27 < (unsigned int)v25 ? 0x80070216 : 0;
          v47 = v26;
          if ( v27 >= (unsigned int)v25 )
          {
            if ( v26 > *((_DWORD *)this + 77) )
            {
              v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 288, 8u, 1, &Blink[2].Blink);
              v9 = v28;
              if ( v28 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0xC0u);
            }
            else
            {
              *(_QWORD *)(*v11 + 8 * v25) = *p_Blink;
              *((_DWORD *)this + 78) = v26;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xB5u);
          }
          if ( v9 < 0 )
          {
            v42 = 1617;
LABEL_45:
            v10 = v9;
            goto LABEL_4;
          }
LABEL_61:
          if ( v18 )
            CBaseObject::Release(v18);
LABEL_63:
          v17 = a4;
          v15 = v43;
          goto LABEL_64;
        }
        v42 = 1616;
      }
LABEL_68:
      v10 = RectangleGeometry;
      goto LABEL_4;
    }
  }
  v29 = (CTopLevelWindow *)Blink[24].Blink;
  if ( v29 )
  {
    RectangleGeometry = CTopLevelWindow::CloneVisualTreeForLivePreview(v29, 0, v13, v14, &v46);
    v9 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      v42 = 1585;
      goto LABEL_68;
    }
    v18 = v46;
    RectangleGeometry = VisualCollection::InsertRelative(
                          (VisualCollection *)(*((_QWORD *)this + 46) + 32LL),
                          v46,
                          0LL,
                          1u,
                          1);
    v9 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      v42 = 1587;
      goto LABEL_68;
    }
    v30 = *((unsigned int *)this + 78);
    v31 = v45;
    v32 = v30 + 1;
    if ( (int)v30 + 1 >= (unsigned int)v30 )
      v31 = v30 + 1;
    v9 = v32 < (unsigned int)v30 ? 0x80070216 : 0;
    v45 = v31;
    if ( v32 >= (unsigned int)v30 )
    {
      if ( v31 > *((_DWORD *)this + 77) )
      {
        v33 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 288, 8u, 1, &Blink[2].Blink);
        v9 = v33;
        if ( v33 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v33, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*v11 + 8 * v30) = *p_Blink;
        *((_DWORD *)this + 78) = v31;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xB5u);
    }
    if ( v9 < 0 )
    {
      v42 = 1588;
      goto LABEL_45;
    }
    if ( v18 )
    {
      CBaseObject::Release(v18);
      v18 = 0LL;
    }
  }
  if ( *p_Blink != (struct _LIST_ENTRY *)ShellWindowForDesktop )
    goto LABEL_61;
  if ( (BYTE4(Blink[37].Flink) & 1) != 0 && Blink[23].Blink && *((_DWORD *)this + 78) )
  {
    RectangleGeometry = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 46) + 64LL))(*((_QWORD *)this + 46));
    v9 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      v42 = 1625;
      goto LABEL_68;
    }
    v34 = a2->right - a2->left;
    v35 = 0LL;
    v36 = a2->bottom - a2->top;
    if ( v36 >= 0 )
      v35 = (unsigned int)v36;
    v37 = 0LL;
    if ( v34 >= 0 )
      v37 = (unsigned int)v34;
    RectangleGeometry = ResourceHelper::CreateRectangleGeometry(0LL, 0LL, v37, v35, (struct CResource **)this + 44);
    v9 = RectangleGeometry;
    if ( RectangleGeometry < 0 )
    {
      v42 = 1633;
      goto LABEL_68;
    }
    v38 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 42), *((struct CResource **)this + 44), &v49);
    v39 = v49;
    v9 = v38;
    if ( v38 >= 0 )
    {
      v40 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 47), v49);
      v9 = v40;
      if ( v40 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v40, 0x669u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v38, 0x667u);
    }
    if ( v39 )
      CBaseObject::Release(v39);
  }
LABEL_89:
  if ( v9 < 0 )
  {
    VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 46) + 32LL));
    *((_DWORD *)this + 78) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 288, 8u);
  }
  return (unsigned int)v9;
}
