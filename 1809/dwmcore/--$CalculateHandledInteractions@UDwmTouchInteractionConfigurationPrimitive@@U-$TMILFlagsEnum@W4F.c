/*
 * XREFs of ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x1801EE360
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801EF390 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x180096374 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::AxisContainsMotion @ 0x1801EEE84 (_anonymous_namespace_--AxisContainsMotion.c)
 *     ?ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA?AUInteractionAxis@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x1801F00A8 (-ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA-AUInteractionAxis@@AEBUD2DVecto.c)
 *     ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UAxisWithType@@$0A@@@@Z @ 0x1801F061C (-ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA-AUD2DMatrix@@PEAV-$DynArray@UAxisWi.c)
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x1801F0894 (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5,
        _DWORD *a6,
        _BYTE *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  struct _D3DMATRIX *D3DMatrix; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  _OWORD *v17; // r8
  struct _D3DMATRIX *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  _OWORD *v22; // r9
  __m512 *v23; // r10
  unsigned int v24; // r13d
  __int64 v25; // rax
  char v26; // al
  char v27; // cl
  _QWORD v29[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v30; // [rsp+58h] [rbp-A8h] BYREF
  int v31; // [rsp+68h] [rbp-98h] BYREF
  __int64 v32; // [rsp+70h] [rbp-90h] BYREF
  int v33; // [rsp+78h] [rbp-88h]
  struct _D3DMATRIX v34; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v35[16]; // [rsp+F0h] [rbp-10h] BYREF

  v29[0] = a3;
  D3DMatrix = CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v34);
  v14 = *(_OWORD *)&D3DMatrix->_21;
  v15 = *(_OWORD *)&D3DMatrix->_31;
  v16 = *(_OWORD *)&D3DMatrix->_41;
  *v17 = *(_OWORD *)&D3DMatrix->_11;
  v17[1] = v14;
  v17[2] = v15;
  v17[3] = v16;
  v18 = CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v34);
  v19 = *(_OWORD *)&v18->_21;
  v20 = *(_OWORD *)&v18->_31;
  v21 = *(_OWORD *)&v18->_41;
  *v22 = *(_OWORD *)&v18->_11;
  v22[1] = v19;
  v22[2] = v20;
  v22[3] = v21;
  *v23 = zmmword_1802AEC90;
  v24 = *(_QWORD *)a2 == 0LL ? 0x8007139F : 0;
  if ( !*(_QWORD *)a2 )
    return v24;
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2, &v31);
  v25 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2, &v30);
  v32 = *(_QWORD *)v25;
  v33 = *(_DWORD *)(v25 + 8);
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a5 + 40LL))(a5, v35);
  v30 = *(_OWORD *)v29[0];
  if ( *(_QWORD *)a2 == a5 )
  {
    v26 = 0;
    v27 = 0;
  }
  else
  {
    v27 = BYTE1(v30);
    v26 = v30;
  }
  if ( v35[0] == 2 )
  {
    if ( !v26 )
    {
      if ( (a2[16] & 0x40) != 0 )
      {
        *a7 = 1;
        *a6 = 2;
        *(_BYTE *)(a1 + 1248) = 1;
      }
      return v24;
    }
    goto LABEL_13;
  }
  if ( v35[0] != 4 || v27 )
  {
LABEL_13:
    if ( v31 == 1 && !a4[1] && !*a4 )
    {
      CInteractionProcessor::ConstructLocalToGlobalTransform(a1, &v34, a4 + 8);
      CInteractionProcessor::ConvertGlobalMotionToLocalMotion(a1, v29, &v32, &v34, a8, a9);
      *(_OWORD *)a7 = *(_OWORD *)CInteractionProcessor::ComputeHandledInteractionsFromLocal(a1, &v30, v29, a10);
      if ( (unsigned __int8)anonymous_namespace_::AxisContainsMotion(a7) )
        *a6 = 2;
    }
    return v24;
  }
  if ( (char)a2[16] < 0 )
  {
    a7[1] = 1;
    *a6 = 2;
    *(_BYTE *)(a1 + 1249) = 1;
  }
  return v24;
}
