/*
 * XREFs of ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800392B8
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180017D78 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x18008A484 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800182C0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800365C0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x180085DC4 (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x18008AB90 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18008AC20 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::ShowProjectionBorder(CWindowList *this, struct CWindowData *a2, char a3)
{
  unsigned int v6; // ebp
  CProjectionBorderVisual **v7; // rsi
  CProjectionBorderVisual *v8; // rdi
  int v10; // eax
  struct CVisual *v11; // rbx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  int inserted; // eax
  __int64 v14; // rcx
  void *v15; // [rsp+28h] [rbp-20h]

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v7 = (CProjectionBorderVisual **)((char *)a2 + 416);
  v8 = (CProjectionBorderVisual *)*((_QWORD *)a2 + 52);
  if ( a3 )
  {
    if ( !v8 )
    {
      v10 = CProjectionBorderVisual::Create((struct CProjectionBorderVisual **)a2 + 52);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1B94u, v15);
        goto LABEL_3;
      }
      v8 = *v7;
    }
    v11 = (struct CVisual *)*((_QWORD *)a2 + 50);
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    inserted = VisualCollection::InsertRelative(
                 (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                 v8,
                 v11,
                 1u,
                 1);
    v6 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x1B97u, v15);
    }
    else
    {
      CProjectionBorderVisual::Show(*v7, (unsigned __int8)~*((_BYTE *)a2 + 607) >> 7);
      CProjectionBorderVisual::UpdateRectFromWindow(*v7, a2);
    }
  }
  else if ( v8 )
  {
    v14 = *((_QWORD *)v8 + 3);
    if ( v14 )
    {
      VisualCollection::Remove((VisualCollection *)(v14 + 32), *((struct CVisual **)a2 + 52));
      v8 = *v7;
    }
    if ( v8 )
    {
      CBaseObject::Release(v8);
      *v7 = 0LL;
    }
  }
LABEL_3:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v6;
}
