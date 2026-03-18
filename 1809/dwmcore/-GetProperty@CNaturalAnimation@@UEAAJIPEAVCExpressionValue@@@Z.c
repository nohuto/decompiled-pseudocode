/*
 * XREFs of ?GetProperty@CNaturalAnimation@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801A8F30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z @ 0x1801A88F4 (-EnsureAccelerator@CNaturalAnimation@@AEAAXW4Enum@NaturalMotionAnimationType@@@Z.c)
 *     ?ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@@@Z @ 0x1801A89C8 (-ExpressionValueFromInternalValue@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValue@.c)
 */

__int64 __fastcall CNaturalAnimation::GetProperty(CNaturalAnimation *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // esi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // xmm0_4
  float *v14; // rbx
  float v15; // xmm0_4
  __int64 v16; // xmm0_8
  int v17; // eax
  float v18; // xmm0_4
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  int v21; // [rsp+38h] [rbp-8h]

  v3 = 0;
  v6 = a2 - 15;
  if ( !v6 )
  {
    v18 = (float)*((int *)this + 92);
    *((_DWORD *)a3 + 18) = 42;
    *((_BYTE *)a3 + 76) = 1;
    *(float *)a3 = v18;
    return v3;
  }
  v7 = v6 - 22;
  if ( !v7 )
  {
    v16 = *((_QWORD *)this + 39);
    v17 = *((_DWORD *)this + 80);
    goto LABEL_21;
  }
  v8 = v7 - 4;
  if ( !v8 )
  {
    v16 = *((_QWORD *)this + 36);
    v17 = *((_DWORD *)this + 74);
    goto LABEL_21;
  }
  v9 = v8 - 4;
  if ( !v9 )
  {
    v16 = *(_QWORD *)((char *)this + 324);
    v17 = *((_DWORD *)this + 83);
LABEL_21:
    v20 = v16;
    v21 = v17;
    CNaturalAnimation::ExpressionValueFromInternalValue((__int64)this, &v20, (__int64)a3);
    return v3;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this, 2);
    v14 = (float *)*((_QWORD *)this + 50);
    if ( v14 )
      (**(void (__fastcall ***)(float *))v14)(v14);
    v15 = v14[9];
    goto LABEL_19;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this, 2);
    v14 = (float *)*((_QWORD *)this + 50);
    if ( v14 )
      (**(void (__fastcall ***)(float *))v14)(v14);
    v15 = 1.0 / v14[10];
LABEL_19:
    *(float *)a3 = v15;
    *((_DWORD *)a3 + 18) = 18;
    *((_BYTE *)a3 + 76) = 1;
    (*(void (__fastcall **)(float *))(*(_QWORD *)v14 + 8LL))(v14);
    return v3;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this, 1);
    v13 = *(_DWORD *)(*((_QWORD *)this + 50) + 28LL);
    goto LABEL_12;
  }
  if ( v12 == 1 )
  {
    CNaturalAnimation::EnsureAccelerator((__int64)this, 1);
    v13 = *(_DWORD *)(*((_QWORD *)this + 50) + 36LL);
LABEL_12:
    *(_DWORD *)a3 = v13;
    *((_DWORD *)a3 + 18) = 18;
    *((_BYTE *)a3 + 76) = 1;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x280u);
  return v3;
}
