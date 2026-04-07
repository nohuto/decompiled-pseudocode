/*
 * XREFs of ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x18001FBE4
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18001F8B8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z @ 0x180023360 (-Initialize@CButton@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ??0CButton@@IEAA@XZ @ 0x1800259BC (--0CButton@@IEAA@XZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::EnsureNonClientAreaButton(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  int v4; // ecx
  struct CVisual **v5; // rsi
  __int64 v6; // r14
  struct CVisual *v7; // r8
  bool v9; // dl
  struct IDwmChannel *v10; // rbx
  CButton *v11; // rax
  CButton *v12; // rdi
  int v13; // eax
  int inserted; // eax
  unsigned int v15; // [rsp+20h] [rbp-28h]

  v3 = 0;
  v4 = *(_DWORD *)(a1 + 584);
  v5 = (struct CVisual **)(a1 + 8LL * a2 + 480);
  v6 = 3LL * a2;
  v7 = *v5;
  if ( (v4 & dword_1800BEB10[3 * a2]) != 0 )
  {
    if ( v7 )
    {
LABEL_5:
      v9 = (v4 & dword_1800BEB10[v6 + 1]) != 0;
      if ( (*((_BYTE *)v7 + 280) & 1) != v9 )
      {
        *((_BYTE *)v7 + 280) = v9 | *((_BYTE *)v7 + 280) & 0xFE;
        CVisual::SetDirtyFlags(v7, 0x8000u);
      }
      return v3;
    }
    v10 = *(struct IDwmChannel **)(*(_QWORD *)(a1 + 16) + 16LL);
    if ( v5 )
    {
      v11 = (CButton *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         416LL);
      if ( v11 )
        v12 = CButton::CButton(v11);
      else
        v12 = 0LL;
      if ( v12 )
      {
        v13 = CButton::Initialize(v12, v10);
        v3 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x10u);
        }
        else
        {
          *v5 = v12;
          v12 = 0LL;
        }
        if ( v12 )
          CBaseObject::Release(v12);
        if ( (v3 & 0x80000000) == 0 )
        {
          inserted = VisualCollection::InsertRelative(
                       (VisualCollection *)(*(_QWORD *)(a1 + 272) + 32LL),
                       *v5,
                       0LL,
                       0,
                       1);
          v3 = inserted;
          if ( inserted < 0 )
          {
            v15 = 2582;
LABEL_25:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v15);
            return v3;
          }
          *((_DWORD *)*v5 + 48) = dword_1800BEB10[v6 + 2];
          v4 = *(_DWORD *)(a1 + 584);
          v7 = *v5;
          goto LABEL_5;
        }
LABEL_22:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xA14u);
        return v3;
      }
      v3 = -2147024882;
    }
    else
    {
      v3 = -2147024809;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x10u);
    goto LABEL_22;
  }
  if ( !v7 )
    return v3;
  inserted = VisualCollection::Remove((VisualCollection *)(*(_QWORD *)(a1 + 272) + 32LL), *v5);
  v3 = inserted;
  if ( inserted < 0 )
  {
    v15 = 2593;
    goto LABEL_25;
  }
  if ( *v5 )
  {
    CBaseObject::Release(*v5);
    *v5 = 0LL;
  }
  return v3;
}
