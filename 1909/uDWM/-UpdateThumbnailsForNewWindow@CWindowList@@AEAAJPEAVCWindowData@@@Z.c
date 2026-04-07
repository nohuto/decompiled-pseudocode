/*
 * XREFs of ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180038F10
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001850C (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180010580 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180010D80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x18008D9BC (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CWindowList::UpdateThumbnailsForNewWindow(CWindowList *this, struct CWindowData *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 i; // rsi
  __int64 v7; // r14
  int v8; // eax
  CVisual *v9; // rcx
  CThumbnailVisual *v10; // rcx
  int v11; // eax
  void *v12; // [rsp+28h] [rbp-10h]

  v2 = 0;
  v3 = 0LL;
  if ( *((_DWORD *)a2 + 128) )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(*((_QWORD *)a2 + 61) + 8 * v3);
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v2 = v8;
      if ( v8 < 0 )
        break;
      v9 = (CVisual *)*((_QWORD *)a2 + 50);
      if ( *(_BYTE *)(v7 + 42) )
      {
        CVisual::SetDirtyFlags(v9, 0x8000000);
      }
      else
      {
        v11 = CTopLevelWindow::OnThumbnailAdded(v9, *(struct CVisual **)(v7 + 96));
        v2 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x16D1u, v12);
          return v2;
        }
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)a2 + 128) )
        goto LABEL_2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x16C6u, v12);
  }
  else
  {
LABEL_2:
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 136); i = (unsigned int)(i + 1) )
    {
      v10 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 65) + 8 * i) + 96LL);
      if ( v10 )
        CThumbnailVisual::SetDirtyFlags(v10, 0x2000);
    }
  }
  return v2;
}
