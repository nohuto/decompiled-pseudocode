/*
 * XREFs of ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z @ 0x1801825D8
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B4690 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1801D4B18 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 * Callees:
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x18000C9DC (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x18005A028 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::ComputeLocalToSourceTransform(
        CSurfaceDrawListBrush *this,
        struct Matrix3x3 *a2)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // rdx
  float *v7; // rax
  float *v8; // rax
  int v10; // [rsp+20h] [rbp-29h] BYREF
  int v11; // [rsp+24h] [rbp-25h]
  float v12[8]; // [rsp+28h] [rbp-21h] BYREF
  float v13; // [rsp+48h] [rbp-1h]
  float v14[9]; // [rsp+50h] [rbp+7h] BYREF
  float v15[11]; // [rsp+74h] [rbp+2Bh] BYREF

  *(_DWORD *)a2 = *((_DWORD *)this + 2);
  v4 = *((_DWORD *)this + 3);
  *((_DWORD *)a2 + 2) = 0;
  *((_DWORD *)a2 + 1) = v4;
  *((_DWORD *)a2 + 3) = *((_DWORD *)this + 4);
  v5 = *((_DWORD *)this + 5);
  *((_DWORD *)a2 + 5) = 0;
  *((_DWORD *)a2 + 4) = v5;
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 6);
  *((_DWORD *)a2 + 7) = *((_DWORD *)this + 7);
  *((_DWORD *)a2 + 8) = 1065353216;
  if ( Matrix3x3::TryInvert(a2, a2) )
  {
    (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 8) + 40LL))(*((_QWORD *)this + 8), &v10);
    if ( !*((_BYTE *)this + 136) )
    {
      v12[1] = 0.0;
      v12[2] = 0.0;
      v12[3] = 0.0;
      v12[5] = 0.0;
      v12[0] = (float)v10;
      v12[4] = (float)v11;
      v12[6] = 0.0 - (float)((float)v10 * 0.0);
      v13 = FLOAT_1_0;
      v12[7] = 0.0 - (float)((float)v11 * 0.0);
      v7 = Matrix3x3::operator*((float *)a2, v14, (float *)this + 21);
      v8 = Matrix3x3::operator*(v7, v15, v12);
      *(_OWORD *)a2 = *(_OWORD *)v8;
      *((_OWORD *)a2 + 1) = *((_OWORD *)v8 + 1);
      *((float *)a2 + 8) = v8[8];
    }
  }
  else
  {
    *(_OWORD *)v6 = _xmm;
    v13 = FLOAT_1_0;
    *(_OWORD *)(v6 + 16) = _xmm;
    *(float *)(v6 + 32) = FLOAT_1_0;
  }
  return 0LL;
}
