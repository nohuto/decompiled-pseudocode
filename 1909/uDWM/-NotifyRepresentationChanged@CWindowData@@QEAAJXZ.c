/*
 * XREFs of ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180014EB4
 * Callers:
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180003E40 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000E820 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180010E50 (-ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180010F28 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180012070 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180014254 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x1800145D8 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x180014E2C (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x180032A1C (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800399D0 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x18008D9BC (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008F250 (-ContentProtectionChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180013190 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800253B8 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowData::NotifyRepresentationChanged(CWindowData *this)
{
  unsigned int v1; // edi
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // r14
  int v7; // eax
  void *v8; // [rsp+28h] [rbp-30h]
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+44h] [rbp-14h]
  unsigned int v12; // [rsp+48h] [rbp-10h]

  v1 = 0;
  if ( *((_DWORD *)this + 118) )
  {
    v3 = *((_QWORD *)this + 56);
    v4 = *((unsigned int *)this + 118);
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v9 = 0LL;
    if ( (int)DynArrayImpl<0>::AddMultipleAndSet(&v9, 8LL, v4, v3) >= 0 )
    {
      v5 = 0LL;
      if ( v12 )
      {
        v6 = v9;
        while ( 1 )
        {
          v7 = CSecondaryWindowRepresentation::OnRepresentationUpdated(*(CSecondaryWindowRepresentation **)(v6 + 8 * v5));
          v1 = v7;
          if ( v7 < 0 )
            break;
          v5 = (unsigned int)(v5 + 1);
          if ( (unsigned int)v5 >= v12 )
            goto LABEL_8;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1F21u, v8);
      }
    }
LABEL_8:
    DynArrayImpl<0>::~DynArrayImpl<0>(&v9);
  }
  return v1;
}
