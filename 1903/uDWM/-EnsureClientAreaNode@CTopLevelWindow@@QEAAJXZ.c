/*
 * XREFs of ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180014E34
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180017100 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003D310 (-ForceConnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180024F58 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CClientArea@@KAJIPEAPEAV1@@Z @ 0x180037CD0 (-Create@CClientArea@@KAJIPEAPEAV1@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x180038A2C (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::EnsureClientAreaNode(CTopLevelWindow *this)
{
  int v1; // ebx
  struct CClientArea **v2; // rsi
  __int64 v5; // rbp
  unsigned int v6; // ecx
  int v7; // eax
  int inserted; // eax
  CVisual *v9; // rcx
  unsigned int v10; // [rsp+20h] [rbp-28h]
  void *v11; // [rsp+28h] [rbp-20h]
  struct _MARGINS v12; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  v2 = (struct CClientArea **)((char *)this + 472);
  if ( !*((_QWORD *)this + 59) )
  {
    v5 = *((_QWORD *)this + 90);
    v6 = *(_DWORD *)(v5 + 128);
    if ( v6 )
    {
      v7 = CClientArea::Create(v6, v2);
      v1 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x48u, v11);
      else
        *((_QWORD *)*v2 + 30) = v5;
      if ( v1 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x7B2u, v11);
      }
      else
      {
        inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 66) + 32LL), *v2, 0LL, 1, 1);
        v1 = inserted;
        if ( inserted < 0 )
        {
          v10 = 1972;
          goto LABEL_14;
        }
        v9 = *v2;
        *(_QWORD *)&v12.cxLeftWidth = 0LL;
        *(_QWORD *)&v12.cyTopHeight = 0LL;
        CVisual::SetInsetFromParent(v9, &v12);
        if ( (*((_BYTE *)this + 240) & 4) != 0 )
        {
          inserted = CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
          v1 = inserted;
          if ( inserted < 0 )
          {
            v10 = 1979;
LABEL_14:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v10, v11);
          }
        }
      }
    }
  }
  return (unsigned int)v1;
}
