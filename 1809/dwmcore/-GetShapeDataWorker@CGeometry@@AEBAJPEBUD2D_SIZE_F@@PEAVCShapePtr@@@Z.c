/*
 * XREFs of ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18007022C
 * Callers:
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800368E0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B6E30 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGeometry::GetShapeDataWorker(CGeometry *this, unsigned __int64 a2, CShape **a3)
{
  unsigned __int64 v5; // r14
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edi
  CShape *v10; // rcx
  int v11; // eax
  unsigned int v12; // ecx
  struct CShape *v13; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v14[6]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v15; // [rsp+58h] [rbp-21h]
  __int64 v16; // [rsp+60h] [rbp-19h]
  int v17; // [rsp+68h] [rbp-11h]
  int v18; // [rsp+6Ch] [rbp-Dh]
  int v19; // [rsp+70h] [rbp-9h]
  int v20; // [rsp+74h] [rbp-5h]
  int v21; // [rsp+78h] [rbp-1h]
  int v22; // [rsp+7Ch] [rbp+3h]
  int v23; // [rsp+80h] [rbp+7h]
  _DWORD v24[6]; // [rsp+90h] [rbp+17h] BYREF

  v5 = a2 & -(__int64)(*((_BYTE *)this + 128) != 0);
  v6 = (*(__int64 (__fastcall **)(CGeometry *, unsigned __int64))(*(_QWORD *)this + 176LL))(this, v5);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xFAu);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(CGeometry *))(*(_QWORD *)this + 192LL))(this) && *a3 )
  {
    (*(void (__fastcall **)(CGeometry *, unsigned __int64, _DWORD *))(*(_QWORD *)this + 184LL))(this, v5, v24);
    v10 = *a3;
    v23 = 0;
    v14[2] = 0;
    v14[3] = 0;
    v15 = 0LL;
    v16 = 0LL;
    v18 = 0;
    v21 = 0;
    v14[0] = v24[0];
    v14[1] = v24[1];
    v14[4] = v24[2];
    v14[5] = v24[3];
    v19 = v24[4];
    v20 = v24[5];
    v17 = 1065353216;
    v22 = 1065353216;
    v11 = CShape::CopyShape(v10, (const struct CMILMatrix *)v14, &v13);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x108u);
    }
    else
    {
      CShapePtr::Release((CShapePtr *)a3);
      *a3 = v13;
      *((_BYTE *)a3 + 8) = 1;
    }
  }
  return v8;
}
