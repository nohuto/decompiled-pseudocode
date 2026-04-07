/*
 * XREFs of ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x18007CA70
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x18007B0BC (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowState@@@Z @ 0x18007C9B0 (-_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowStat.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z @ 0x18007C224 (-_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z.c)
 *     ?_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowState@@@Z @ 0x18007C9B0 (-_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowStat.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x18008D100 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 */

__int64 __fastcall CLivePreview::_SetupWindowPreview(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        struct CVisual *a6,
        char a7)
{
  int v7; // ebx
  volatile signed __int32 *LivePreviewWindow; // rax
  struct CVisual *v12; // rsi
  int LivePreviewVisual; // eax
  CBaseObject *v14; // r12
  __int64 v15; // rax
  unsigned int v16; // edx
  _OWORD *v17; // rcx
  __int64 v18; // rax
  VisualCollection *v19; // rcx
  int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-50h]
  CBaseObject *v23; // [rsp+30h] [rbp-40h] BYREF
  CBaseObject *v24; // [rsp+38h] [rbp-38h] BYREF
  __int128 v25; // [rsp+40h] [rbp-30h] BYREF
  __int128 v26; // [rsp+50h] [rbp-20h]
  __int128 v27; // [rsp+60h] [rbp-10h]

  v7 = 0;
  v23 = 0LL;
  v24 = 0LL;
  if ( a4 )
  {
    LivePreviewWindow = (volatile signed __int32 *)CLivePreview::_FindLivePreviewWindow(
                                                     (CLivePreview *)a1,
                                                     *(HWND *)(a2 + 40));
    v23 = (CBaseObject *)LivePreviewWindow;
    if ( LivePreviewWindow )
    {
      _InterlockedIncrement(LivePreviewWindow + 2);
      v12 = v23;
      goto LABEL_26;
    }
  }
  LivePreviewVisual = CTopLevelWindow::GetLivePreviewVisual((struct CWindowData *)a2, &v23, &v24);
  v12 = v23;
  v7 = LivePreviewVisual;
  v14 = v24;
  if ( LivePreviewVisual >= 0 )
  {
    *((_QWORD *)&v26 + 1) = *(_QWORD *)(a2 + 40);
    DWORD2(v27) = a5;
    v15 = *(unsigned int *)(a1 + 360);
    *(_QWORD *)&v25 = v23;
    *((_QWORD *)&v25 + 1) = a2;
    *(_QWORD *)&v26 = v24;
    v16 = v15 + 1;
    *(_QWORD *)&v27 = a3;
    if ( (int)v15 + 1 < (unsigned int)v15 )
    {
      v7 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_18:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1A0u);
      goto LABEL_24;
    }
    if ( v16 > *(_DWORD *)(a1 + 356) )
    {
      v20 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 336, 48, 1, &v25);
      v7 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0xC0u);
      if ( v7 < 0 )
        goto LABEL_18;
    }
    else
    {
      v17 = (_OWORD *)(*(_QWORD *)(a1 + 336) + 48 * v15);
      *v17 = v25;
      v17[1] = v26;
      v17[2] = v27;
      *(_DWORD *)(a1 + 360) = v16;
    }
    v18 = a1;
    if ( *(_DWORD *)(a2 + 112) != 1 )
      v18 = *(_QWORD *)(a1 + 504);
    v19 = (VisualCollection *)(v18 + 32);
    if ( a7 )
    {
      LivePreviewVisual = VisualCollection::InsertRelative(v19, v12, a6, 0, 1);
      v7 = LivePreviewVisual;
      if ( LivePreviewVisual < 0 )
      {
        v22 = 434;
        goto LABEL_23;
      }
    }
    else
    {
      LivePreviewVisual = VisualCollection::InsertRelative(v19, v12, a6, 1u, 1);
      v7 = LivePreviewVisual;
      if ( LivePreviewVisual < 0 )
      {
        v22 = 438;
        goto LABEL_23;
      }
    }
    LivePreviewVisual = CLivePreview::_SetupOwneePreview(a1, a2, a3, a5);
    v7 = LivePreviewVisual;
    if ( LivePreviewVisual >= 0 )
      goto LABEL_26;
    v22 = 441;
    goto LABEL_23;
  }
  v22 = 402;
LABEL_23:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, LivePreviewVisual, v22);
LABEL_24:
  if ( v14 )
    CBaseObject::Release(v14);
LABEL_26:
  if ( v12 )
    CBaseObject::Release(v12);
  return (unsigned int)v7;
}
