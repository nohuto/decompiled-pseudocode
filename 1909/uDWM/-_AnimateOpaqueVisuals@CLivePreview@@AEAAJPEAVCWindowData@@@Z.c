/*
 * XREFs of ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x18007B0BC
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180039EBC (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800253B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x18007A93C (-OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x18007B614 (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     ?_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z @ 0x18007C224 (-_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z.c)
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x18007CA70 (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x18007CDE4 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 *     ?_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ @ 0x18007D020 (-_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x18008E040 (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x1800909C8 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall CLivePreview::_AnimateOpaqueVisuals(CLivePreview *this, struct CWindowData *a2)
{
  unsigned int v2; // r15d
  int v4; // eax
  int v5; // ebx
  __int64 v6; // rax
  int v7; // eax
  int updated; // eax
  __int64 v9; // r13
  char v10; // r12
  __int64 v11; // r14
  __int64 v12; // rdx
  CTopLevelWindow *v13; // rbx
  __int64 v14; // r9
  struct CWindowData *MDIOwner; // r13
  int v16; // eax
  CTopLevelWindow *LivePreviewWindow; // rax
  int v18; // eax
  int started; // eax
  int v21; // [rsp+30h] [rbp-48h]
  int v22; // [rsp+40h] [rbp-38h]
  __int128 v23; // [rsp+48h] [rbp-30h] BYREF
  int v24; // [rsp+58h] [rbp-20h]
  int v25; // [rsp+5Ch] [rbp-1Ch]
  unsigned int v26; // [rsp+60h] [rbp-18h]
  char v27; // [rsp+C0h] [rbp+48h]
  struct CWindowData *v28; // [rsp+C8h] [rbp+50h] BYREF
  int v29; // [rsp+D0h] [rbp+58h]
  BOOL v30; // [rsp+D8h] [rbp+60h]

  v28 = a2;
  v24 = 0;
  v25 = 0;
  v2 = 0;
  v27 = 1;
  v22 = *((_DWORD *)this + 90);
  v26 = 0;
  v23 = 0LL;
  if ( a2 )
  {
    v4 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v23, 8, 1, &v28);
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xC0u);
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x2DAu);
      goto LABEL_39;
    }
    v2 = v26;
  }
  v6 = *((_QWORD *)this + 67);
  if ( (!v6 || *(_DWORD *)(v6 + 112) == 1) && *((_DWORD *)this + 140) != 4 )
  {
    v7 = CLivePreview::_CollectExcludedImmersiveWindows(this, &v23);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x2DFu);
      goto LABEL_39;
    }
    v2 = v26;
  }
  updated = CLivePreview::_UpdateAddedImmersiveBackground(this);
  v5 = updated;
  if ( updated >= 0 )
  {
    v9 = 0LL;
    v29 = 0;
    if ( v2 )
    {
      while ( 1 )
      {
        v10 = 0;
        v11 = *(_QWORD *)(v23 + 8 * v9);
        v30 = v22
           || *(char *)(v11 + 607) < 0
           || *(_DWORD *)(v11 + 112) != 1 && *(_BYTE *)(*((_QWORD *)this + 69) + 56LL);
        v12 = (unsigned int)(*((_DWORD *)this + 90) - 1);
        if ( (int)v12 >= 0 )
        {
          while ( *(_QWORD *)(*((_QWORD *)this + 42) + 48 * v12 + 24) != *(_QWORD *)(v11 + 40) )
          {
            v12 = (unsigned int)(v12 - 1);
            if ( (int)v12 < 0 )
              goto LABEL_27;
          }
          v10 = 1;
        }
LABEL_27:
        v13 = 0LL;
        v27 = v10 != 0 ? v27 : 0;
        if ( (*(_BYTE *)(v11 + 605) & 1) != 0 )
        {
          MDIOwner = CWindowData::GetMDIOwner((CWindowData *)v11);
          if ( MDIOwner )
          {
            if ( !v10 )
            {
              LOBYTE(v14) = 1;
              LOBYTE(v21) = 1;
              v16 = CLivePreview::_SetupWindowPreview(this, MDIOwner, *((_QWORD *)MDIOwner + 5), v14, v30, 0LL, v21);
              v5 = v16;
              if ( v16 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x308u);
                goto LABEL_39;
              }
            }
            LivePreviewWindow = CLivePreview::_FindLivePreviewWindow(this, *((HWND *)MDIOwner + 5));
            v13 = LivePreviewWindow;
            if ( LivePreviewWindow )
              CTopLevelWindow::UpdateTitle(LivePreviewWindow, *(unsigned __int16 **)(v11 + 16));
          }
          LODWORD(v9) = v29;
        }
        if ( !v10 )
        {
          LOBYTE(v21) = v13 == 0LL;
          v18 = CLivePreview::_SetupWindowPreview(this, v11, *(_QWORD *)(v11 + 40), 0LL, v30, v13, v21);
          v5 = v18;
          if ( v18 < 0 )
            break;
        }
        CLivePreview::OnWindowTitleChange(this, (unsigned __int16 **)v11);
        v9 = (unsigned int)(v9 + 1);
        v29 = v9;
        if ( (unsigned int)v9 >= v2 )
          goto LABEL_37;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x316u);
    }
    else
    {
LABEL_37:
      started = CLivePreview::_StartAnimateOpaqueVisuals(this);
      v5 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x31Cu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x2E2u);
  }
LABEL_39:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v23);
  return (unsigned int)v5;
}
