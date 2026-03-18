/*
 * XREFs of ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@5@@Z @ 0x180005EE0
 * Callers:
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x180005E84 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18007E420 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18007F9B8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800CE4A8 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::CalcSrcToDestVisualTransform(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int64 *a5)
{
  void *v7; // r8
  unsigned int v8; // ebx
  char v9; // r15
  unsigned __int64 v10; // rdi
  __int64 v11; // r14
  int WorldTransform; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  __int128 v15; // xmm1
  __int64 v16; // rcx
  int v17; // eax
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v21; // rcx
  unsigned int v22; // [rsp+28h] [rbp-E0h]
  void *v23[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v24; // [rsp+48h] [rbp-C0h]
  __int128 v25; // [rsp+58h] [rbp-B0h]
  __int128 v26; // [rsp+68h] [rbp-A0h]
  int v27; // [rsp+78h] [rbp-90h]
  _OWORD v28[4]; // [rsp+88h] [rbp-80h] BYREF
  int v29; // [rsp+C8h] [rbp-40h]
  _BYTE v30[64]; // [rsp+D8h] [rbp-30h] BYREF
  int v31; // [rsp+118h] [rbp+10h]
  __int64 v32; // [rsp+158h] [rbp+50h]

  v32 = a1;
  v7 = 0LL;
  v8 = 0;
  v31 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( *a3 <= 0 )
    return v8;
  while ( 1 )
  {
    if ( v10 >= *a3 )
    {
LABEL_20:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v11 = *(_QWORD *)(a3[1] + 8 * v10);
    if ( v11 != a4 )
      break;
    if ( v10 >= *a5 )
      goto LABEL_20;
    v21 = *(_QWORD *)(a5[1] + 8 * v10);
    *(_OWORD *)v21 = _xmm;
    *(_WORD *)(v21 + 64) = 32085;
    *(_OWORD *)(v21 + 16) = _xmm;
    *(_OWORD *)(v21 + 32) = _xmm;
    *(_OWORD *)(v21 + 48) = _xmm;
LABEL_11:
    if ( (__int64)++v10 >= *a3 )
      return v8;
    a1 = v32;
  }
  if ( !v9 )
  {
    WorldTransform = CVisual::GetWorldTransform(a4, a1, 3LL, v30, 0LL, 0LL);
    v8 = WorldTransform;
    if ( WorldTransform < 0 )
    {
      v22 = 1252;
      goto LABEL_19;
    }
    if ( !CMILMatrix::Invert((CMILMatrix *)v30) )
    {
      v8 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, (unsigned int)v7, -2003304441, 0x4E7u, v7);
      return v8;
    }
    a1 = v32;
    v9 = 1;
  }
  v29 = (int)v7;
  WorldTransform = CVisual::GetWorldTransform(v11, a1, 3LL, v28, v7, v7);
  v8 = WorldTransform;
  if ( WorldTransform >= 0 )
  {
    *(_OWORD *)v23 = v28[0];
    v27 = v29;
    v24 = v28[1];
    v25 = v28[2];
    v26 = v28[3];
    CMILMatrix::Multiply((CMILMatrix *)v23, (const struct CMILMatrix *)v30);
    if ( v10 >= *a5 )
      goto LABEL_20;
    v7 = 0LL;
    v15 = v24;
    v16 = *(_QWORD *)(a5[1] + 8 * v10);
    v17 = v27;
    *(_OWORD *)v16 = *(_OWORD *)v23;
    v18 = v25;
    *(_OWORD *)(v16 + 16) = v15;
    v19 = v26;
    *(_OWORD *)(v16 + 32) = v18;
    *(_OWORD *)(v16 + 48) = v19;
    *(_DWORD *)(v16 + 64) = v17;
    goto LABEL_11;
  }
  v22 = 1265;
LABEL_19:
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, WorldTransform, v22, 0LL);
  return v8;
}
