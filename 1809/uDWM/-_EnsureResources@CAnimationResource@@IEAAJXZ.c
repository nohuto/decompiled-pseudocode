/*
 * XREFs of ?_EnsureResources@CAnimationResource@@IEAAJXZ @ 0x180003C50
 * Callers:
 *     ?_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@IW4Enum@DwmResourceProperty@@@Z @ 0x180003BAC (-_BindIfPresent@CAnimatedTransitionVisual@@IEAAJW4TransformAnimationType@@IW4Enum@DwmResourcePro.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationResource::_EnsureResources(CAnimationResource *this)
{
  int v1; // ebx
  CBaseObject **v2; // rsi
  __int64 v4; // r8
  unsigned int v6; // eax

  v1 = 0;
  v2 = (CBaseObject **)((char *)this + 16);
  if ( *((_QWORD *)this + 2) )
    return (unsigned int)v1;
  v1 = CResource::Create(0LL, *((_QWORD *)this + 1), (char *)this + 16);
  if ( v1 < 0 )
  {
    v6 = 310;
  }
  else if ( *((_BYTE *)this + 81) )
  {
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)*v2 + 2) + 856LL))(
           *((_QWORD *)*v2 + 2),
           *((unsigned int *)*v2 + 6),
           *((_QWORD *)this + 9),
           0LL);
    if ( v1 >= 0 )
      goto LABEL_6;
    v6 = 317;
  }
  else
  {
    v4 = *((_QWORD *)this + 12);
    if ( !v4
      || (v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)*v2 + 2) + 880LL))(
                 *((_QWORD *)*v2 + 2),
                 *((unsigned int *)*v2 + 6),
                 *(unsigned int *)(v4 + 24)),
          v1 >= 0) )
    {
LABEL_6:
      if ( *((_QWORD *)this + 4)
        && (v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*v2 + 2) + 872LL))(
                   *((_QWORD *)*v2 + 2),
                   *((unsigned int *)*v2 + 6)),
            v1 < 0) )
      {
        v6 = 330;
      }
      else
      {
        v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)*v2 + 2) + 864LL))(
               *((_QWORD *)*v2 + 2),
               *((unsigned int *)*v2 + 6),
               *((_QWORD *)this + 5),
               *((unsigned int *)this + 16));
        if ( v1 >= 0 )
          return (unsigned int)v1;
        v6 = 337;
      }
      goto LABEL_16;
    }
    v6 = 323;
  }
LABEL_16:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v1, v6);
  if ( *v2 )
  {
    CBaseObject::Release(*v2);
    *v2 = 0LL;
  }
  return (unsigned int)v1;
}
