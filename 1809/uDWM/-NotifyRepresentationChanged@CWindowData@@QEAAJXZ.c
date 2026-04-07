/*
 * XREFs of ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18000F484
 * Callers:
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180003710 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180005F10 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x18000A1BC (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000D380 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18000F09C (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18000F120 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800115D0 (-ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001AE30 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001BC50 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001D830 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001EC50 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180020E38 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180023DEC (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180024950 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x180087C6C (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180089140 (-ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002379C (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180025E70 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowData::NotifyRepresentationChanged(CWindowData *this)
{
  unsigned int v1; // edi
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // r14
  int v7; // eax
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+44h] [rbp-14h]
  unsigned int v11; // [rsp+48h] [rbp-10h]

  v1 = 0;
  if ( *((_DWORD *)this + 116) )
  {
    v3 = *((_QWORD *)this + 55);
    v4 = *((unsigned int *)this + 116);
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v8 = 0LL;
    if ( (int)DynArrayImpl<0>::AddMultipleAndSet(&v8, 8LL, v4, v3) >= 0 )
    {
      v5 = 0LL;
      if ( v11 )
      {
        v6 = v8;
        while ( 1 )
        {
          v7 = CSecondaryWindowRepresentation::OnRepresentationUpdated(*(CSecondaryWindowRepresentation **)(v6 + 8 * v5));
          v1 = v7;
          if ( v7 < 0 )
            break;
          v5 = (unsigned int)(v5 + 1);
          if ( (unsigned int)v5 >= v11 )
            goto LABEL_8;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1E7Bu);
      }
    }
LABEL_8:
    DynArrayImpl<0>::~DynArrayImpl<0>(&v8);
  }
  return v1;
}
