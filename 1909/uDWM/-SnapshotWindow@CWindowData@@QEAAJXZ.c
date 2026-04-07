/*
 * XREFs of ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180010F28
 * Callers:
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000F6F0 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180010F28 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800399D0 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003A6C0 (-WindowMinimizing@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z @ 0x18000B9C8 (-s_IsPolicyActive@CAccent@@SA_NPEBUACCENT_POLICY@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180010F28 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?GetIdealWindowRepresentationType@CWindowData@@QEBA?AW4WindowRepresentationType@@XZ @ 0x1800135B0 (-GetIdealWindowRepresentationType@CWindowData@@QEBA-AW4WindowRepresentationType@@XZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180014254 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x1800147A0 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180014EB4 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x180027364 (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180031DF0 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ @ 0x18003C35C (-IsDesktopThumbnailInSnapshot@CDesktopThumbnail@@SA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowData::SnapshotWindow(CWindowData *this, __int64 a2, bool a3)
{
  unsigned int v4; // esi
  CWindowData *v5; // rdi
  int IdealWindowRepresentationType; // eax
  struct CTopLevelWindow *v7; // rcx
  int v8; // eax
  char v9; // dl
  unsigned int v10; // edi
  CWindowData *v11; // rbp
  unsigned int v13; // ebp
  CWindowData *v14; // r14
  int v15; // eax
  _DWORD *v16; // rcx
  CWindowSnapshot *v17; // r8
  int v18; // eax
  void *v19; // [rsp+28h] [rbp-20h]

  v4 = 0;
  if ( (*((_BYTE *)this + 604) & 0x40) != 0 )
    return v4;
  CWindowData::ClearSnapshot(this, 0, a3, 0);
  v5 = 0LL;
  IdealWindowRepresentationType = CWindowData::GetIdealWindowRepresentationType(this);
  if ( IdealWindowRepresentationType == 1 )
  {
    v5 = this;
    goto LABEL_4;
  }
  if ( !IdealWindowRepresentationType && (*((_BYTE *)this + 608) & 4) == 0 )
  {
    v13 = 0;
    if ( *((_DWORD *)this + 146) )
    {
      while ( 1 )
      {
        v14 = *(CWindowData **)(*((_QWORD *)this + 70) + 8LL * v13);
        if ( (unsigned int)CWindowData::GetIdealWindowRepresentationType(v14) == 1 )
          break;
        if ( ++v13 >= *((_DWORD *)this + 146) )
          goto LABEL_12;
      }
      v5 = v14;
LABEL_4:
      if ( v5 )
      {
        if ( !CWindowData::IsImmersiveWindow(v5) && CDesktopThumbnail::IsDesktopThumbnailInSnapshot() )
          v5 = 0LL;
        if ( v5 )
        {
          v7 = (struct CTopLevelWindow *)*((_QWORD *)v5 + 50);
          if ( v7 )
          {
            v8 = CWindowSnapshot::Create(v7, (struct CWindowSnapshot **)this + 54);
            v4 = v8;
            if ( v8 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1FE0u, v19);
              return v4;
            }
            *((_BYTE *)this + 608) &= ~8u;
          }
        }
      }
    }
  }
LABEL_12:
  CWindowData::NotifyRepresentationChanged(this);
  v9 = *((_BYTE *)this + 608);
  if ( (v9 & 4) != 0 )
  {
    if ( !*((_QWORD *)this + 54)
      || (*((_DWORD *)v5 + 39) & 0x400) != 0
      || CAccent::s_IsPolicyActive((CWindowData *)((char *)v5 + 152)) && *v16 != 5 )
    {
      *((_BYTE *)this + 608) = v9 | 8;
    }
    else
    {
      v18 = CWindowSnapshot::ProcessFreezeSnapshotAndRelease(v17, v5);
      v4 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x1FEAu, v19);
    }
  }
  else
  {
    v10 = 0;
    if ( *((_DWORD *)this + 146) )
    {
      while ( 1 )
      {
        v11 = *(CWindowData **)(*((_QWORD *)this + 70) + 8LL * v10);
        if ( (unsigned int)CWindowData::GetIdealWindowRepresentationType(v11) == 1 )
        {
          v15 = CWindowData::SnapshotWindow(v11);
          v4 = v15;
          if ( v15 < 0 )
            break;
        }
        if ( ++v10 >= *((_DWORD *)this + 146) )
          return v4;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x1FFAu, v19);
    }
  }
  return v4;
}
