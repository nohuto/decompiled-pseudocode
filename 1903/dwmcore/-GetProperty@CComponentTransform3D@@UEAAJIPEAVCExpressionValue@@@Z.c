/*
 * XREFs of ?GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800B63C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x1800B6414 (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CComponentTransform3D::GetProperty(CComponentTransform3D *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  void **v5; // rax
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
    v5 = (void **)&CComponentTransform3D::k_rgAnimDef;
    while ( 1 )
    {
      v6 = (const struct AnimationHelper::AnimatedProperty *)*v5;
      if ( a2 == *(_DWORD *)*v5 )
        break;
      if ( ++v5 == &CDrawListEntryBatch::`vftable'{for `CMILRefCountBase'} )
        goto LABEL_9;
    }
    if ( v6 )
    {
      CResource::GetPropertyImpl(this, v6, a3);
      return v3;
    }
LABEL_9:
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070057, 0x78u, 0LL);
  }
  return v3;
}
