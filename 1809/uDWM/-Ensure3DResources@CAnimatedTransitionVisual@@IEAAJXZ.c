/*
 * XREFs of ?Ensure3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009B93C
 * Callers:
 *     ?EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180022E9C (-EnsureResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Ensure3DResources(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  v1 = 0;
  if ( *((_QWORD *)this + 36)
    || (v3 = CResource::Create(0x16u, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 36),
        v1 = v3,
        v3 >= 0) )
  {
    if ( *((_QWORD *)this + 37)
      || (v4 = CResource::Create(0x16u, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 37),
          v1 = v4,
          v4 >= 0) )
    {
      if ( *((_QWORD *)this + 38)
        || (v5 = CResource::Create(0x23u, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 38),
            v1 = v5,
            v5 >= 0) )
      {
        if ( *((_QWORD *)this + 39)
          || (v6 = CResource::Create(0xBu, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 39),
              v1 = v6,
              v6 >= 0) )
        {
          if ( !*((_QWORD *)this + 40) )
          {
            v7 = CResource::Create(0x20u, *(_QWORD *)(*((_QWORD *)this + 3) + 16LL), (CBaseObject **)this + 40);
            v1 = v7;
            if ( v7 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x626u);
          }
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x621u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x61Cu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x617u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x612u);
  }
  return v1;
}
