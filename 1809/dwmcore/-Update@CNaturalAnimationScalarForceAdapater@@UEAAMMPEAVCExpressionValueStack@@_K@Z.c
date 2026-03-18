/*
 * XREFs of ?Update@CNaturalAnimationScalarForceAdapater@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x1801E82B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1800E72C0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1800EF1C0 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?GetOwner@CNaturalAnimationScalarForceAdapater@@AEBAPEAVCNaturalAnimation@@XZ @ 0x1801E81BC (-GetOwner@CNaturalAnimationScalarForceAdapater@@AEBAPEAVCNaturalAnimation@@XZ.c)
 */

float __fastcall CNaturalAnimationScalarForceAdapater::Update(
        CNaturalAnimationScalarForceAdapater *this,
        float a2,
        struct CExpressionValueStack *a3,
        __int64 a4)
{
  float v7; // xmm6_4
  struct CNaturalAnimation *Owner; // rcx
  __int64 (__fastcall *v9)(struct CNaturalAnimation *, struct CExpressionValueStack *, __int64, _BYTE *); // rax
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  struct CExpressionValue *v15; // rax
  _BYTE v17[16]; // [rsp+30h] [rbp-28h] BYREF
  const void *retaddr; // [rsp+58h] [rbp+0h]

  v7 = 0.0;
  EvaluateCurrentState((int **)&g_Feature_283413818_58681306_FeatureDescriptorDetails);
  Owner = CNaturalAnimationScalarForceAdapater::GetOwner(this);
  v9 = *(__int64 (__fastcall **)(struct CNaturalAnimation *, struct CExpressionValueStack *, __int64, _BYTE *))(*(_QWORD *)Owner + 208LL);
  if ( !v10 )
  {
    v13 = v9(Owner, a3, a4, v17);
    if ( v13 < 0 )
      ModuleFailFastForHRESULT(v13, retaddr);
    v14 = *((_DWORD *)CNaturalAnimationScalarForceAdapater::GetOwner(this) + 36);
    if ( v14 != 18 )
    {
      if ( v14 != 35 )
        ModuleFailFastForHRESULT(-2147467259, retaddr);
      goto LABEL_10;
    }
LABEL_12:
    v7 = *(float *)CExpressionValueStack::PeekStackValue(a3, 0);
LABEL_13:
    --*((_DWORD *)a3 + 4);
    return v7;
  }
  v11 = v9(Owner, a3, a4, v17);
  if ( v11 < 0 )
    ModuleFailFastForHRESULT(v11, retaddr);
  if ( v11 != 1 )
  {
    v12 = *((_DWORD *)CNaturalAnimationScalarForceAdapater::GetOwner(this) + 36);
    if ( v12 != 18 )
    {
      if ( v12 != 35 )
        ModuleFailFastForHRESULT(-2147467259, retaddr);
LABEL_10:
      v15 = CExpressionValueStack::PeekStackValue(a3, 0);
      v7 = *(float *)v15;
      if ( *((_DWORD *)this + 6) )
        v7 = *((float *)v15 + 1);
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  return v7;
}
