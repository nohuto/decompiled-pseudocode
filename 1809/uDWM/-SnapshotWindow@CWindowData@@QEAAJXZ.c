/*
 * XREFs of ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180024950
 * Callers:
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180003710 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180010BB0 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180024950 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003AF20 (-WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x180004EE4 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x1800078F4 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18000F484 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180021410 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x180021ECC (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180023DEC (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180024950 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x180027724 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x18003B65C (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowData::SnapshotWindow(CWindowData *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  CWindowData *v5; // rdi
  int IdealWindowRepresentationType; // eax
  struct CTopLevelWindow *v7; // rcx
  int v8; // eax
  char v9; // dl
  CWindowSnapshot *v10; // r9
  bool v11; // r8
  unsigned int v13; // edi
  CWindowData *v14; // rbp
  unsigned int v15; // ebp
  CWindowData *v16; // r14
  _DWORD *v17; // rcx
  int v18; // eax
  int v19; // eax

  v4 = 0;
  if ( (*((_BYTE *)this + 596) & 0x40) != 0 )
    return v4;
  CWindowData::ClearSnapshot(this, 0, a3, 0);
  v5 = 0LL;
  IdealWindowRepresentationType = CWindowData::GetIdealWindowRepresentationType(this);
  if ( IdealWindowRepresentationType == 1 )
  {
    v5 = this;
  }
  else
  {
    if ( IdealWindowRepresentationType )
      goto LABEL_10;
    if ( (*((_BYTE *)this + 600) & 4) != 0 )
      goto LABEL_10;
    v15 = 0;
    if ( !*((_DWORD *)this + 144) )
      goto LABEL_10;
    while ( 1 )
    {
      v16 = *(CWindowData **)(*((_QWORD *)this + 69) + 8LL * v15);
      if ( (unsigned int)CWindowData::GetIdealWindowRepresentationType(v16) == 1 )
        break;
      if ( ++v15 >= *((_DWORD *)this + 144) )
        goto LABEL_10;
    }
    v5 = v16;
  }
  if ( v5 )
  {
    if ( !CWindowData::IsImmersiveWindow(v5) && CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
      v5 = 0LL;
    if ( v5 )
    {
      v7 = (struct CTopLevelWindow *)*((_QWORD *)v5 + 49);
      if ( v7 )
      {
        v8 = CWindowSnapshot::Create(v7, (struct CWindowSnapshot **)this + 53);
        v4 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1F3Au);
          return v4;
        }
        *((_BYTE *)this + 600) &= ~8u;
      }
    }
  }
LABEL_10:
  CWindowData::NotifyRepresentationChanged(this);
  v9 = *((_BYTE *)this + 600);
  if ( (v9 & 4) != 0 )
  {
    v10 = (CWindowSnapshot *)*((_QWORD *)this + 53);
    if ( !v10 )
    {
LABEL_14:
      *((_BYTE *)this + 600) = v9 | 8;
      return v4;
    }
    v11 = (*((_DWORD *)v5 + 39) & 0x400) == 0;
    if ( (*((_DWORD *)v5 + 39) & 0x400) == 0 && CAccent::s_IsPolicyActive((CWindowData *)((char *)v5 + 152)) )
    {
      if ( *v17 == 5 )
      {
LABEL_31:
        v18 = CWindowSnapshot::ProcessFreezeSnapshotAndRelease(v10, v5);
        v4 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x1F44u);
        return v4;
      }
      v11 = 0;
    }
    if ( !v11 )
      goto LABEL_14;
    goto LABEL_31;
  }
  v13 = 0;
  if ( *((_DWORD *)this + 144) )
  {
    while ( 1 )
    {
      v14 = *(CWindowData **)(*((_QWORD *)this + 69) + 8LL * v13);
      if ( (unsigned int)CWindowData::GetIdealWindowRepresentationType(v14) == 1 )
      {
        v19 = CWindowData::SnapshotWindow(v14);
        v4 = v19;
        if ( v19 < 0 )
          break;
      }
      if ( ++v13 >= *((_DWORD *)this + 144) )
        return v4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x1F54u);
  }
  return v4;
}
