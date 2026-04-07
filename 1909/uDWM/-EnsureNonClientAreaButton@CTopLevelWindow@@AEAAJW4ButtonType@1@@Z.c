/*
 * XREFs of ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x1800152C4
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180014FA8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180010D80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CButton@@SAJPEAPEAV1@@Z @ 0x18002686C (-Create@CButton@@SAJPEAPEAV1@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180036620 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::EnsureNonClientAreaButton(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  int v4; // ecx
  __int64 v5; // rbp
  struct CVisual **v6; // rdi
  struct CVisual *v7; // r8
  bool v9; // dl
  int v10; // eax
  int inserted; // eax
  int v12; // eax
  void *v13; // [rsp+28h] [rbp-10h]

  v3 = 0;
  v4 = *(_DWORD *)(a1 + 584);
  v5 = 3LL * a2;
  v6 = (struct CVisual **)(a1 + 8 * (a2 + 60LL));
  v7 = *v6;
  if ( (v4 & dword_1800C46F8[3 * a2]) != 0 )
  {
    if ( !v7 )
    {
      v10 = CButton::Create((struct CButton **)(a1 + 8 * (a2 + 60LL)));
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x9FBu, v13);
        return v3;
      }
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)(a1 + 272) + 32LL), *v6, 0LL, 0, 1);
      v3 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x9FDu, v13);
        return v3;
      }
      *((_DWORD *)*v6 + 48) = dword_1800C46F8[v5 + 2];
      v4 = *(_DWORD *)(a1 + 584);
      v7 = *v6;
    }
    v9 = (v4 & dword_1800C46F8[v5 + 1]) != 0;
    if ( (*((_BYTE *)v7 + 280) & 1) != v9 )
    {
      *((_BYTE *)v7 + 280) = v9 | *((_BYTE *)v7 + 280) & 0xFE;
      CVisual::SetDirtyFlags(v7, 0x8000);
    }
  }
  else if ( v7 )
  {
    v12 = VisualCollection::Remove((VisualCollection *)(*(_QWORD *)(a1 + 272) + 32LL), *v6);
    v3 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xA08u, v13);
    }
    else if ( *v6 )
    {
      CBaseObject::Release(*v6);
      *v6 = 0LL;
    }
  }
  return v3;
}
