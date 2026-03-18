/*
 * XREFs of ?IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ @ 0x1801E8220
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsInMotion@CScalarForceEvaluator@@QEBA_NXZ @ 0x1801E79A0 (-IsInMotion@CScalarForceEvaluator@@QEBA_NXZ.c)
 *     ?GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z @ 0x1801E81D4 (-GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z.c)
 */

char __fastcall CNaturalAnimationScalarForceAdapater::IsInMotion(CNaturalAnimationScalarForceAdapater *this)
{
  char v2; // di
  __int64 v3; // rax
  CNaturalAnimation *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  struct CVector3Force *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v8);
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
    v4 = *(CNaturalAnimation **)(v3 + 16);
  else
    v4 = 0LL;
  CNaturalAnimation::GetVector3Force(v4, &v8);
  if ( CScalarForceEvaluator::IsInMotion((struct CVector3Force *)((char *)v8 + 16))
    || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v5 + 84))
    || CScalarForceEvaluator::IsInMotion((CScalarForceEvaluator *)(v6 + 152)) )
  {
    v2 = 1;
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v8);
  return v2;
}
