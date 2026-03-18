/*
 * XREFs of ?SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180069540
 * Callers:
 *     <none>
 * Callees:
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1800695BC (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x1800A5A4C (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A5BF8 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CComponentTransform3D::SetRotationAxis(
        CComponentTransform3D *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const struct D2DVector3 *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  unsigned __int64 v6; // rcx
  int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-20h]

  v4 = 0;
  D3DXVec3Normalize((struct D2DVector3 *)&v10, a3);
  v5 = v11;
  v6 = *((_QWORD *)this + 23) - v10;
  if ( !v6 )
    v6 = *((unsigned int *)this + 48) - (unsigned __int64)v11;
  if ( v6 )
  {
    *((_QWORD *)this + 23) = v10;
    *((_DWORD *)this + 48) = v5;
    CResource::InvalidateAnimationSources(this, 0x19u);
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    v8 = CPropertyChangeResource::NotifyVector3PropertyChanged(
           this,
           0x19u,
           (CComponentTransform3D *)((char *)this + 184));
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x150u);
  }
  return v4;
}
