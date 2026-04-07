/*
 * XREFs of ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180003D18
 * Callers:
 *     ?EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ @ 0x1800038C0 (-EmitBindingCommands@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180022E9C (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180026DD8 (-Create@CRenderDataVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x1800347E0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_EnsureDCompResources(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // ebx
  volatile signed __int32 *v2; // rsi
  struct CVisual **v4; // r14
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int inserted; // eax
  int v15; // eax

  v1 = 0;
  v2 = 0LL;
  if ( !*((_QWORD *)this + 84) )
  {
    v6 = CResource::Create(11LL, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (char *)this + 672);
    v1 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x5BBu);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 85) )
  {
    v7 = CResource::Create(32LL, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (char *)this + 680);
    v1 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x5C0u);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 86) )
  {
    v8 = CResource::Create(37LL, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (char *)this + 688);
    v1 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x5C5u);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 87) )
  {
    v9 = CResource::Create(31LL, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (char *)this + 696);
    v1 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x5CAu);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 88) )
  {
    v10 = CResource::Create(36LL, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (char *)this + 704);
    v1 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x5CFu);
      return v1;
    }
  }
  if ( !*((_QWORD *)this + 89) )
  {
    v11 = CResource::Create(26LL, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (char *)this + 712);
    v1 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x5D4u);
      return v1;
    }
  }
  v4 = (struct CVisual **)((char *)this + 728);
  if ( !*((_QWORD *)this + 91) )
  {
    v12 = CRenderDataVisual::Create(
            *(struct IDwmChannel **)(*((_QWORD *)this + 3) + 16LL),
            (struct CRenderDataVisual **)this + 91);
    v1 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x5D9u);
      return v1;
    }
    if ( !*((_BYTE *)this + 975) )
      goto LABEL_26;
    v2 = (volatile signed __int32 *)**((_QWORD **)this + 7);
    if ( !v2 )
      goto LABEL_26;
    _InterlockedIncrement(v2 + 2);
    v13 = VisualCollection::Remove((CAnimatedTransitionVisual *)((char *)this + 40), (struct CVisual *)v2);
    v1 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x5E1u);
    }
    else
    {
      inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)*v4 + 32), (struct CVisual *)v2, 0LL, 0, 1);
      v1 = inserted;
      if ( inserted >= 0 )
      {
LABEL_26:
        v15 = VisualCollection::InsertRelative((CAnimatedTransitionVisual *)((char *)this + 40), *v4, 0LL, 0, 1);
        v1 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x5E6u);
        goto LABEL_27;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x5E2u);
    }
LABEL_27:
    if ( v2 )
      CBaseObject::Release((CBaseObject *)v2);
  }
  return v1;
}
