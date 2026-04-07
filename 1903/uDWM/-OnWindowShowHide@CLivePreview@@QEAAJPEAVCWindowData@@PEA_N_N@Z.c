/*
 * XREFs of ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001468C
 * Callers:
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18000FFA0 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180012BE4 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180017D78 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180009654 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180028F30 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800365C0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x18003BC78 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InsertAt@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z @ 0x18007AB98 (-InsertAt@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x18007ACF0 (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?RemoveAt@?$DynArray@ULivePreviewWindow@@$0A@@@QEAAJI@Z @ 0x18007AD8C (-RemoveAt@-$DynArray@ULivePreviewWindow@@$0A@@@QEAAJI@Z.c)
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18007C864 (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18007C9EC (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18007CA24 (-_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x18007D914 (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 */

__int64 __fastcall CLivePreview::OnWindowShowHide(CLivePreview *this, struct CWindowData *a2, bool *a3, char a4)
{
  int v4; // esi
  unsigned int v5; // ebx
  int v6; // r13d
  char v10; // r12
  CLivePreview *v11; // rcx
  CTopLevelWindow *v12; // rsi
  bool IsTrulyMaximized; // r14
  int v14; // eax
  HMONITOR v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  struct CVisual *v19; // rdx
  int v20; // eax
  CBaseObject *v21; // rcx
  struct CVisual *v22; // rdx
  int v23; // eax
  CBaseObject *v24; // rcx
  __int64 v25; // rcx
  char *v26; // r14
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // r9
  char v30; // dl
  char v31; // cl
  unsigned int v32; // eax
  char v33; // cl
  int v34; // eax
  struct CTopLevelWindow *v35; // rsi
  int v36; // eax
  int inserted; // eax
  int v38; // eax
  struct CTopLevelWindow *v39; // rsi
  int v40; // eax
  int v41; // eax
  __int64 v42; // rsi
  _QWORD *v43; // r14
  __int64 v44; // rdx
  __int64 v45; // r12
  __int64 *v46; // r14
  __int64 v47; // rcx
  CTopLevelWindow *v48; // rbx
  int v49; // eax
  CBaseObject *v50; // rcx
  int v51; // eax
  struct CVisual *v52; // rdx
  int v53; // eax
  struct CVisual *v54; // rdx
  int v55; // eax
  CBaseObject *v56; // rcx
  CTopLevelWindow *v57; // rcx
  int v58; // eax
  int v59; // esi
  __int64 v60; // r14
  __int64 v61; // r8
  struct CWindowData **v62; // r12
  unsigned int v63; // ecx
  unsigned int i; // r9d
  __int64 v65; // rax
  __int64 v66; // rcx
  int updated; // eax
  void *v68; // [rsp+28h] [rbp-D8h]
  char v69; // [rsp+31h] [rbp-CFh]
  struct CTopLevelWindow *v70; // [rsp+38h] [rbp-C8h] BYREF
  CTopLevelWindow *v71; // [rsp+40h] [rbp-C0h]
  bool *v72; // [rsp+48h] [rbp-B8h]
  struct CWindowData *v73; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v74; // [rsp+58h] [rbp-A8h]
  bool v75; // [rsp+68h] [rbp-98h]
  HMONITOR v76; // [rsp+70h] [rbp-90h]
  WCHAR ClassName[264]; // [rsp+80h] [rbp-80h] BYREF

  v4 = *((_DWORD *)this + 90);
  v5 = 0;
  v6 = *((_DWORD *)this + 82);
  v72 = a3;
  if ( v4 <= 0 && v6 <= 0 )
    return v5;
  v10 = 0;
  v69 = 0;
  if ( a4 || !CLivePreview::_IsEligibleForLivePreview(this, a2) )
  {
    v42 = (unsigned int)(v4 - 1);
    if ( (int)v42 >= 0 )
    {
      v43 = (_QWORD *)((char *)this + 336);
      v44 = *((_QWORD *)this + 42);
      while ( *(struct CWindowData **)(v44 + 48 * v42 + 8) != a2 )
      {
        v42 = (unsigned int)(v42 - 1);
        if ( (int)v42 < 0 )
          goto LABEL_60;
      }
      v48 = *(CTopLevelWindow **)(v44 + 48 * v42);
      CTopLevelWindow::StopLivePreviewAnimation(v48);
      v49 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v48 + 3) + 32LL), v48);
      v5 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x72Au, v68);
        return v5;
      }
      v50 = *(CBaseObject **)(*v43 + 48 * v42 + 16);
      if ( v50 )
      {
        CBaseObject::Release(v50);
        *(_QWORD *)(*v43 + 48 * v42 + 16) = 0LL;
      }
      v51 = DynArray<LivePreviewWindow,0>::RemoveAt((char *)this + 336, (unsigned int)v42);
      v5 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x72Du, v68);
        return v5;
      }
    }
LABEL_60:
    v45 = (unsigned int)(v6 - 1);
    if ( (int)v45 >= 0 )
    {
      v46 = (__int64 *)((char *)this + 304);
      v47 = *((_QWORD *)this + 38);
      while ( *(struct CWindowData **)(v47 + 40 * v45) != a2 )
      {
        v45 = (unsigned int)(v45 - 1);
        if ( (int)v45 < 0 )
          goto LABEL_88;
      }
      v52 = *(struct CVisual **)(v47 + 40 * v45 + 8);
      if ( v52 )
      {
        v53 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v52 + 3) + 32LL), v52);
        v5 = v53;
        if ( v53 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x739u, v68);
          return v5;
        }
        v47 = *v46;
        if ( *(_QWORD *)(*v46 + 40 * v45 + 8) )
        {
          CBaseObject::Release(*(CBaseObject **)(*v46 + 40 * v45 + 8));
          *(_QWORD *)(*v46 + 40 * v45 + 8) = 0LL;
          v47 = *((_QWORD *)this + 38);
        }
      }
      v54 = *(struct CVisual **)(v47 + 40 * v45 + 16);
      if ( v54 )
      {
        v55 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v54 + 3) + 32LL), v54);
        v5 = v55;
        if ( v55 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0x73Fu, v68);
          return v5;
        }
        v56 = *(CBaseObject **)(*v46 + 40 * v45 + 16);
        if ( v56 )
        {
          CBaseObject::Release(v56);
          *(_QWORD *)(*v46 + 40 * v45 + 16) = 0LL;
        }
      }
      v57 = (CTopLevelWindow *)*((_QWORD *)a2 + 50);
      if ( v57 )
        CTopLevelWindow::StopLivePreviewAnimation(v57);
      v58 = DynArray<CPenContact,0>::RemoveAt((char *)this + 304, (unsigned int)v45);
      v5 = v58;
      if ( v58 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x748u, v68);
        return v5;
      }
      v69 = 1;
    }
LABEL_88:
    v59 = *((_DWORD *)this + 106) - 1;
    if ( v59 >= 0 )
    {
      v60 = 16LL * v59;
      do
      {
        v61 = *((_QWORD *)this + 50);
        v62 = *(struct CWindowData ***)(v61 + v60);
        if ( v62[90] == a2 )
        {
          v63 = *((_DWORD *)this + 106);
          if ( v59 < v63 )
          {
            for ( i = v59; i < v63 - 1; v63 = *((_DWORD *)this + 106) )
            {
              v65 = 2LL * i;
              v66 = 2LL * ++i;
              *(_OWORD *)(v61 + 8 * v65) = *(_OWORD *)(v61 + 8 * v66);
            }
            *((_DWORD *)this + 106) = v63 - 1;
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x194u, v68);
          }
          VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 63) + 32LL), (struct CVisual *)v62);
        }
        v60 -= 16LL;
        --v59;
      }
      while ( v59 >= 0 );
    }
    v10 = 0;
  }
  else
  {
    if ( !*((_BYTE *)this + 280)
      || CLivePreview::_IsInLivePreview(this, a2)
      || GetClassNameW(*((HWND *)a2 + 5), ClassName, 260) && !_wcsicmp(ClassName, L"SysShadow") )
    {
      goto LABEL_101;
    }
    v71 = (CTopLevelWindow *)*((_QWORD *)a2 + 50);
    v12 = v71;
    IsTrulyMaximized = CLivePreview::_IsTrulyMaximized(v11, a2);
    v14 = CVisual::RenderRecursive(v71);
    v5 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x76Au, v68);
      return v5;
    }
    v15 = MonitorFromWindow(*((HWND *)a2 + 5), 1u);
    if ( IsTrulyMaximized )
    {
      v16 = 0LL;
      if ( v6 > 0 )
      {
        v17 = *((_QWORD *)this + 38);
        while ( !*(_BYTE *)(v17 + 40 * v16 + 24) || *(HMONITOR *)(v17 + 40 * v16 + 32) != v15 )
        {
          v16 = (unsigned int)(v16 + 1);
          if ( (int)v16 >= v6 )
            goto LABEL_30;
        }
        v18 = 5 * v16;
        v19 = *(struct CVisual **)(v17 + 40 * v16 + 8);
        if ( v19 )
        {
          v20 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 64) + 32LL), v19);
          v5 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x777u, v68);
            return v5;
          }
          v17 = *((_QWORD *)this + 38);
          v21 = *(CBaseObject **)(v17 + 8 * v18 + 8);
          if ( v21 )
          {
            CBaseObject::Release(v21);
            *(_QWORD *)(*((_QWORD *)this + 38) + 8 * v18 + 8) = 0LL;
            v17 = *((_QWORD *)this + 38);
          }
        }
        v22 = *(struct CVisual **)(v17 + 8 * v18 + 16);
        if ( v22 )
        {
          v23 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 66) + 32LL), v22);
          v5 = v23;
          if ( v23 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x77Du, v68);
            return v5;
          }
          v17 = *((_QWORD *)this + 38);
          v24 = *(CBaseObject **)(v17 + 8 * v18 + 16);
          if ( v24 )
          {
            CBaseObject::Release(v24);
            *(_QWORD *)(*((_QWORD *)this + 38) + 8 * v18 + 16) = 0LL;
            v17 = *((_QWORD *)this + 38);
          }
        }
        *(_BYTE *)(*(_QWORD *)(v17 + 8 * v18) + 606LL) |= 0x80u;
        v25 = *(_QWORD *)(*((_QWORD *)this + 38) + 8 * v18);
        v12 = v71;
        *(_BYTE *)(v25 + 606) |= 0x40u;
      }
    }
LABEL_30:
    v75 = IsTrulyMaximized;
    v73 = a2;
    v26 = (char *)this + 304;
    v76 = v15;
    v74 = 0LL;
    v27 = DynArray<LivePreviewVisual,0>::InsertAt((char *)this + 304, &v73);
    v5 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x78Au, v68);
      return v5;
    }
    v10 = 1;
    v30 = *((_BYTE *)a2 + 606);
    if ( *((_DWORD *)this + 142) < 0x1Eu )
    {
      v31 = v30 & 0xBF | (*((_QWORD *)a2 + 46) != 0LL ? 0x40 : 0);
      *((_BYTE *)a2 + 606) = v31;
      v32 = *((_DWORD *)this + 143);
      if ( v32 >= 0xA )
      {
        v33 = v31 | 0x80;
        *((_BYTE *)a2 + 606) = v33;
      }
      else
      {
        *((_DWORD *)this + 143) = v32 + 1;
        v33 = *((_BYTE *)a2 + 606);
      }
      if ( (v33 & 0x40) == 0 || v33 >= 0 )
      {
        if ( v33 >= 0 )
        {
          v70 = 0LL;
          v34 = CTopLevelWindow::CloneVisualTreeForLivePreview(v12, 0, v28, v29, &v70);
          v5 = v34;
          if ( v34 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x7A0u, v68);
            return v5;
          }
          v35 = v70;
          v36 = CVisual::RenderRecursive(v70);
          v5 = v36;
          if ( v36 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x7A1u, v68);
            return v5;
          }
          inserted = VisualCollection::InsertRelative(
                       (VisualCollection *)(*((_QWORD *)this + 64) + 32LL),
                       v35,
                       0LL,
                       0,
                       1);
          v5 = inserted;
          if ( inserted < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x7A2u, v68);
            return v5;
          }
          *(_QWORD *)(*(_QWORD *)v26 + 8LL) = v35;
          v33 = *((_BYTE *)a2 + 606);
        }
        if ( (v33 & 0x40) == 0 )
        {
          v70 = 0LL;
          v38 = CTopLevelWindow::CloneVisualTreeForLivePreview(v71, 1, v28, v29, &v70);
          v5 = v38;
          if ( v38 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x7AAu, v68);
            return v5;
          }
          v39 = v70;
          v40 = CVisual::RenderRecursive(v70);
          v5 = v40;
          if ( v40 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x7ABu, v68);
            return v5;
          }
          v41 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 66) + 32LL), v39, 0LL, 0, 1);
          v5 = v41;
          if ( v41 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x7ACu, v68);
            return v5;
          }
          *(_QWORD *)(*(_QWORD *)v26 + 16LL) = v39;
        }
        ++*((_DWORD *)this + 142);
      }
      goto LABEL_100;
    }
    *((_BYTE *)a2 + 606) = v30 | 0xC0;
  }
  if ( v69 )
  {
LABEL_100:
    updated = CLivePreview::_UpdateResources(this);
    v5 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x7C0u, v68);
      return v5;
    }
  }
LABEL_101:
  if ( v72 )
    *v72 = v10;
  return v5;
}
