/*
 * XREFs of ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800065AC
 * Callers:
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18000F590 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18002601C (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180023F94 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x18002682C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x180084734 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
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
  unsigned int v14; // [rsp+20h] [rbp-18h]
  CBaseObject *v15; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v15 = 0LL;
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
  inserted = CSecondaryWindowRepresentation::Create(1LL, (char *)this + 16, a2);
  v3 = inserted;
  if ( inserted < 0 )
  {
    v14 = 608;
LABEL_7:
    v10 = inserted;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v14);
    goto LABEL_25;
  }
  v11 = *((_DWORD *)this + 38);
  v12 = v11 + 1;
  v3 = v11 + 1 < v11 ? 0x80070216 : 0;
  if ( v11 + 1 >= v11 )
  {
    if ( v12 > *((_DWORD *)this + 37) )
    {
      v13 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 128, 8LL, 1LL, &v15);
      v3 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 16) + 8LL * *((unsigned int *)this + 38)) = v15;
      *((_DWORD *)this + 38) = v12;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
  }
  if ( (v3 & 0x80000000) != 0 )
  {
    v14 = 610;
    v10 = v3;
    goto LABEL_9;
  }
  _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
  inserted = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
  v3 = inserted;
  if ( inserted < 0 )
  {
    v14 = 613;
    goto LABEL_7;
  }
  inserted = VisualCollection::InsertRelative(
               (VisualCollection *)(*((_QWORD *)this + 6) + 32LL),
               *((struct CVisual **)v15 + 6),
               0LL,
               0,
               1);
  v3 = inserted;
  if ( inserted < 0 )
  {
    v14 = 616;
    goto LABEL_7;
  }
LABEL_25:
  if ( v15 )
    CBaseObject::Release(v15);
  return v3;
}
