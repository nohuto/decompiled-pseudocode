/*
 * XREFs of ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180022E9C
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180022C10 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z @ 0x180032BA0 (-SetVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@_NPEBUtagRECT@@@Z.c)
 *     ?OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z @ 0x180039EA0 (-OnStoryboardBegin@CAnimatedTransitionVisual@@UEAAJI@Z.c)
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x18003B6D0 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x18009B748 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x18009BD7C (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180003D18 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180033940 (-Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009B93C (-Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::EnsureResources(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // ebx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // [rsp+20h] [rbp-18h]

  v1 = 0;
  if ( *((_BYTE *)this + 975) )
    goto LABEL_8;
  if ( !*((_QWORD *)this + 73) )
  {
    v4 = CResource::Create(5u, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 73);
    v1 = v4;
    if ( v4 < 0 )
    {
      v6 = 993;
      goto LABEL_21;
    }
  }
  if ( !*((_QWORD *)this + 74) )
  {
    v4 = CCachedVisualImageBrushResource::Create(this, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (char *)this + 592);
    v1 = v4;
    if ( v4 < 0 )
    {
      v6 = 998;
      goto LABEL_21;
    }
  }
  if ( !*((_BYTE *)this + 976) )
  {
    if ( *((_BYTE *)this + 984) )
    {
      v4 = CAnimatedTransitionVisual::Ensure3DResources(this);
      v1 = v4;
      if ( v4 < 0 )
      {
        v6 = 1005;
        goto LABEL_21;
      }
    }
    else
    {
      v1 = 0;
      if ( !*((_QWORD *)this + 41) )
      {
        v5 = CResource::Create(0x15u, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 41);
        v1 = v5;
        if ( v5 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x431u);
      }
      if ( (v1 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, 0x3F1u);
        return v1;
      }
    }
LABEL_8:
    if ( !*((_BYTE *)this + 976) )
      return v1;
  }
  v4 = CAnimatedTransitionVisual::_EnsureDCompResources(this);
  v1 = v4;
  if ( v4 < 0 )
  {
    v6 = 1017;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v6);
  }
  return v1;
}
