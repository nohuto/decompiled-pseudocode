/*
 * XREFs of ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003CE40
 * Callers:
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180012398 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x1800250E8 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 * Callees:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800108E8 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180011A28 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x18008B394 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(
        CSecondaryWindowRepresentation *this,
        struct CWindowData *a2,
        char a3)
{
  unsigned int v3; // edi
  unsigned int v6; // r8d
  __int64 v7; // rdx
  int inserted; // eax
  int v10; // r9d
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // eax
  void *v14; // [rsp+20h] [rbp-18h]
  unsigned int v15; // [rsp+20h] [rbp-18h]
  void *v16; // [rsp+28h] [rbp-10h]
  CBaseObject *v17; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v17 = 0LL;
  if ( !*((_QWORD *)this + 4) )
    return v3;
  if ( !a3 )
  {
    v6 = *((_DWORD *)this + 38);
    v7 = 0LL;
    if ( !v6 )
      return v3;
    while ( *(struct CWindowData **)(*(_QWORD *)(*((_QWORD *)this + 16) + 8 * v7) + 32LL) != a2 )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= v6 )
        return v3;
    }
    CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(this, v7);
    goto LABEL_25;
  }
  LODWORD(v14) = 100;
  inserted = CSecondaryWindowRepresentation::Create(1LL, (__int64)this + 16, (__int64)a2, 0, v14, &v17);
  v3 = inserted;
  if ( inserted < 0 )
  {
    v15 = 607;
LABEL_7:
    v10 = inserted;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v15, v16);
    goto LABEL_25;
  }
  v11 = *((_DWORD *)this + 38);
  v12 = v11 + 1;
  if ( v11 + 1 < v11 )
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v16);
    goto LABEL_9;
  }
  if ( v12 <= *((_DWORD *)this + 37) )
  {
    *(_QWORD *)(*((_QWORD *)this + 16) + 8LL * v11) = v17;
    *((_DWORD *)this + 38) = v12;
    goto LABEL_17;
  }
  v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 128, 8, 1, &v17);
  v3 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xC0u, v16);
  if ( (v3 & 0x80000000) != 0 )
  {
LABEL_9:
    v15 = 609;
    v10 = v3;
    goto LABEL_10;
  }
LABEL_17:
  _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
  inserted = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
  v3 = inserted;
  if ( inserted < 0 )
  {
    v15 = 612;
    goto LABEL_7;
  }
  inserted = VisualCollection::InsertRelative(
               (VisualCollection *)(*((_QWORD *)this + 6) + 32LL),
               *((struct CVisual **)v17 + 6),
               0LL,
               0,
               1);
  v3 = inserted;
  if ( inserted < 0 )
  {
    v15 = 615;
    goto LABEL_7;
  }
LABEL_25:
  if ( v17 )
    CBaseObject::Release(v17);
  return v3;
}
