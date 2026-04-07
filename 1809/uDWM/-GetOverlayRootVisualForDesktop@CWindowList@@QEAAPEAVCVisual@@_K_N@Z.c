/*
 * XREFs of ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18001DF0C
 * Callers:
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18001CE40 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18002A4DC (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x18004571C (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x1800475EC (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x180081FF0 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800827BC (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 * Callees:
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18000B884 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180026E70 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800358A0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

struct CVisual *__fastcall CWindowList::GetOverlayRootVisualForDesktop(CWindowList *this, __int64 a2, char a3)
{
  volatile signed __int32 *v3; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  __int64 v7; // rdi
  int v9; // eax
  int v10; // edi
  int inserted; // eax
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  CBaseObject *v13; // rcx
  _QWORD Buffer[2]; // [rsp+30h] [rbp-19h] BYREF
  __int128 v15; // [rsp+40h] [rbp-9h]
  __int128 v16; // [rsp+50h] [rbp+7h]
  __int128 v17; // [rsp+60h] [rbp+17h]
  __int64 v18; // [rsp+70h] [rbp+27h]
  char v19; // [rsp+78h] [rbp+2Fh]
  struct CVisual *v20; // [rsp+B0h] [rbp+67h] BYREF

  v18 = -1LL;
  v3 = 0LL;
  Buffer[1] = 0LL;
  Buffer[0] = a2;
  v20 = 0LL;
  v15 = 0LL;
  v19 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v5 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  v6 = v5;
  if ( a3 )
  {
    if ( !v5 )
      goto LABEL_22;
    if ( !v5[5] )
    {
      v9 = CVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5), &v20);
      v10 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x77Eu);
      }
      else
      {
        v3 = (volatile signed __int32 *)v20;
        inserted = VisualCollection::InsertRelative((VisualCollection *)(v6[1] + 32LL), v20, 0LL, 0, 1);
        v10 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x77Fu);
LABEL_14:
          if ( v10 < 0 )
          {
            if ( v3 )
            {
              VisualCollection::RemoveAll((VisualCollection *)(v3 + 8));
              RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                                                  + 61));
              VisualCollection::Remove(
                (struct CVisual *)((char *)RenderTargetRootVisualForDesktop + 32),
                (struct CVisual *)v3);
            }
            v13 = (CBaseObject *)v6[5];
            if ( v13 )
            {
              CBaseObject::Release(v13);
              v6[5] = 0LL;
            }
          }
          goto LABEL_2;
        }
        v6[5] = v3;
        if ( !v3 )
          goto LABEL_14;
        _InterlockedIncrement(v3 + 2);
      }
      v3 = (volatile signed __int32 *)v20;
      goto LABEL_14;
    }
  }
LABEL_2:
  if ( v6 )
  {
    v7 = v6[5];
    goto LABEL_4;
  }
LABEL_22:
  v7 = 0LL;
LABEL_4:
  if ( v3 )
    CBaseObject::Release((CBaseObject *)v3);
  return (struct CVisual *)v7;
}
