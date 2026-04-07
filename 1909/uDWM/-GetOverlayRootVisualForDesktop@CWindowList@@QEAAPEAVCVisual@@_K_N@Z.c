/*
 * XREFs of ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18002D210
 * Callers:
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180029F64 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180045784 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047CE4 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x180088990 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800891EC (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x180018E44 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x1800269D8 (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002D1E8 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180036620 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180036AD8 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

struct CVisual *__fastcall CWindowList::GetOverlayRootVisualForDesktop(CWindowList *this, __int64 a2, char a3)
{
  volatile signed __int32 *v3; // rbx
  _QWORD *Element; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rdi
  int v10; // eax
  int v11; // edi
  int inserted; // eax
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  CBaseObject *v14; // rcx
  void *v15; // [rsp+28h] [rbp-10h]
  struct CVisual *v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v16 = 0LL;
  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (struct _RTL_GENERIC_TABLE *)((char *)this + 8),
              a2);
  v7 = Element;
  if ( a3 )
  {
    if ( !Element )
      goto LABEL_16;
    if ( !Element[5] )
    {
      v10 = CVisual::Create(&v16);
      v11 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x789u, v15);
      }
      else
      {
        v3 = (volatile signed __int32 *)v16;
        inserted = VisualCollection::InsertRelative((VisualCollection *)(v7[1] + 32LL), v16, 0LL, 0, 1);
        v11 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x78Au, v15);
LABEL_14:
          if ( v11 < 0 )
          {
            if ( v3 )
            {
              VisualCollection::RemoveAll((VisualCollection *)(v3 + 8));
              RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(
                                                   *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                                   a2);
              VisualCollection::Remove(
                (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                (struct CVisual *)v3);
            }
            v14 = (CBaseObject *)v7[5];
            if ( v14 )
            {
              CBaseObject::Release(v14);
              v7[5] = 0LL;
            }
          }
          goto LABEL_2;
        }
        v7[5] = v3;
        if ( !v3 )
          goto LABEL_14;
        _InterlockedIncrement(v3 + 2);
      }
      v3 = (volatile signed __int32 *)v16;
      goto LABEL_14;
    }
  }
LABEL_2:
  if ( v7 )
  {
    v8 = v7[5];
    goto LABEL_4;
  }
LABEL_16:
  v8 = 0LL;
LABEL_4:
  if ( v3 )
    CBaseObject::Release((CBaseObject *)v3);
  return (struct CVisual *)v8;
}
