/*
 * XREFs of ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180016790
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Geometry@@@Z @ 0x180016844 (--4-$ComPtr@UID2D1Geometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1Geometry@@@Z.c)
 *     ?BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18001689C (-BuildRoundedRectangleShape@CRoundedRectangleShape@@AEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRoundedRectangleShape::GetD2DGeometry(
        CRoundedRectangleShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  unsigned int v3; // edi
  struct ID2D1Geometry *v7; // rax
  int v9; // eax
  unsigned int v10; // ecx
  struct ID2D1Geometry *v11; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v11 = 0LL;
  if ( !a2 && *((_QWORD *)this + 9) )
  {
LABEL_3:
    Microsoft::WRL::ComPtr<ID2D1Geometry>::operator=(&v11);
    goto LABEL_4;
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v11);
  v9 = CRoundedRectangleShape::BuildRoundedRectangleShape(this, a2, &v11);
  v3 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x36u, 0LL);
    goto LABEL_5;
  }
  if ( !a2 )
  {
    if ( !_InterlockedCompareExchange64((volatile signed __int64 *)this + 9, (signed __int64)v11, 0LL) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 8LL))(*((_QWORD *)this + 9));
      goto LABEL_4;
    }
    goto LABEL_3;
  }
LABEL_4:
  v7 = v11;
  v11 = 0LL;
  *a3 = v7;
LABEL_5:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v11);
  return v3;
}
