/*
 * XREFs of ?GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800577C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x180057834 (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CComponentTransform3D::GetProperty(CComponentTransform3D *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  void **i; // rax
  const struct AnimationHelper::AnimatedProperty *v6; // rdx
  float v8; // xmm0_4

  v3 = 0;
  if ( a2 == 16 )
  {
    v8 = *((float *)this + 56) * 57.295776;
    *((_DWORD *)a3 + 18) = 18;
    *((_BYTE *)a3 + 76) = 1;
    *(float *)a3 = v8;
  }
  else
  {
    for ( i = (void **)&CComponentTransform3D::k_rgAnimDef; i != &CHWDrawListEntry::`vftable'; ++i )
    {
      v6 = (const struct AnimationHelper::AnimatedProperty *)*i;
      if ( a2 == *(_DWORD *)*i )
      {
        if ( v6 )
        {
          CResource::GetPropertyImpl(this, v6, a3);
          return v3;
        }
        break;
      }
      if ( (__int64)&CComponentTransform3D::k_rgAnimDef > (__int64)i )
      {
        gsl::details::terminate(this);
        JUMPOUT(0x18005782ALL);
      }
    }
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x7Cu);
  }
  return v3;
}
