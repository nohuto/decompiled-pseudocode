/*
 * XREFs of ?GetFinalValue@CNaturalAnimationScalarForceAdapater@@UEBAMM@Z @ 0x1801E8130
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z @ 0x1801E81D4 (-GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z.c)
 */

float __fastcall CNaturalAnimationScalarForceAdapater::GetFinalValue(
        CNaturalAnimationScalarForceAdapater *this,
        float a2)
{
  CNaturalAnimation *v3; // rcx
  int v4; // ecx
  float v5; // xmm6_4
  const void *retaddr; // [rsp+38h] [rbp+0h]
  struct CVector3Force *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v8);
  v3 = (CNaturalAnimation *)*((_QWORD *)this + 5);
  if ( v3 )
    v3 = (CNaturalAnimation *)*((_QWORD *)v3 + 2);
  CNaturalAnimation::GetVector3Force(v3, &v8);
  v4 = *((_DWORD *)this + 6);
  if ( v4 )
  {
    if ( v4 != 1 )
      ModuleFailFastForHRESULT(-2147467259, retaddr);
    v5 = *((float *)v8 + 86);
  }
  else
  {
    v5 = *((float *)v8 + 85);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v8);
  return v5;
}
