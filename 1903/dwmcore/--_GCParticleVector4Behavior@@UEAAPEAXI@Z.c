/*
 * XREFs of ??_GCParticleVector4Behavior@@UEAAPEAXI@Z @ 0x18019F690
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x18008AB10 (--1CResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CParticleVector4Behavior *__fastcall CParticleVector4Behavior::`scalar deleting destructor'(
        CParticleVector4Behavior *this,
        char a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 11);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, 24 * ((*((_QWORD *)this + 13) - (_QWORD)v4) / 24LL));
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
