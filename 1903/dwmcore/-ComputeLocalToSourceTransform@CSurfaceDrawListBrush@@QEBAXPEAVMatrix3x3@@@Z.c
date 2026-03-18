/*
 * XREFs of ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z @ 0x1801B08D0
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800690F0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x180206068 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 * Callees:
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800B9560 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800BA038 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSurfaceDrawListBrush::ComputeLocalToSourceTransform(CSurfaceDrawListBrush *this, struct Matrix3x3 *a2)
{
  __int64 v4; // rdx
  char v5; // r8
  float *v6; // rax
  float *v7; // rax
  int v8; // [rsp+20h] [rbp-29h] BYREF
  int v9; // [rsp+24h] [rbp-25h]
  float v10[8]; // [rsp+28h] [rbp-21h] BYREF
  int v11; // [rsp+48h] [rbp-1h]
  float v12[9]; // [rsp+50h] [rbp+7h] BYREF
  float v13[11]; // [rsp+74h] [rbp+2Bh] BYREF

  *(_DWORD *)a2 = *((_DWORD *)this + 2);
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 3);
  *((_DWORD *)a2 + 2) = 0;
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 4);
  *((_DWORD *)a2 + 4) = *((_DWORD *)this + 5);
  *((_DWORD *)a2 + 5) = 0;
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 6);
  *((_DWORD *)a2 + 7) = *((_DWORD *)this + 7);
  *((_DWORD *)a2 + 8) = 1065353216;
  if ( Matrix3x3::TryInvert(a2, a2) )
  {
    if ( *((_BYTE *)this + 144) == v5 )
    {
      (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 8) + 40LL))(*((_QWORD *)this + 8), &v8);
      v10[1] = 0.0;
      v10[2] = 0.0;
      v10[3] = 0.0;
      v10[5] = 0.0;
      v10[0] = (float)v8;
      v10[4] = (float)v9;
      v10[6] = 0.0 - (float)((float)v8 * 0.0);
      v11 = (int)FLOAT_1_0;
      v10[7] = 0.0 - (float)((float)v9 * 0.0);
      v6 = Matrix3x3::operator*((float *)a2, v12, (float *)this + 21);
      v7 = Matrix3x3::operator*(v6, v13, v10);
      *(_OWORD *)a2 = *(_OWORD *)v7;
      *((_OWORD *)a2 + 1) = *((_OWORD *)v7 + 1);
      *((float *)a2 + 8) = v7[8];
    }
  }
  else
  {
    *(_OWORD *)v4 = _xmm;
    v11 = (int)FLOAT_1_0;
    *(_OWORD *)(v4 + 16) = _xmm;
    *(_DWORD *)(v4 + 32) = (_DWORD)FLOAT_1_0;
  }
}
