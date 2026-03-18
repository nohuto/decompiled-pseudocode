/*
 * XREFs of ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x180014770
 * Callers:
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x180014668 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z @ 0x180014714 (-PopDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18003066C (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800306CC (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18003E2E0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x180045FF0 (-SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::UpdateDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2, bool *a3)
{
  char *v6; // rbx
  char v7; // al
  bool v8; // zf
  __int64 v9; // rbx
  int v10; // eax
  unsigned int v11; // ecx
  _BYTE v13[64]; // [rsp+30h] [rbp-58h] BYREF
  int v14; // [rsp+70h] [rbp-18h]

  if ( a3 )
    *a3 = 0;
  v6 = (char *)this + 6064;
  CMILMatrix::Multiply((CDrawingContext *)((char *)this + 6064), a2);
  v7 = CMILMatrix::IsIdentity<0>(v6);
  v8 = *((_BYTE *)this + 6347) == 0;
  *((_BYTE *)this + 6132) = v7 != 0;
  if ( !v8 )
  {
    v9 = *((_QWORD *)this + 784);
    v14 = 0;
    CMILMatrix::Multiply((const struct CMILMatrix *)(v9 + 820), a2, (struct CMILMatrix *)v13);
    v10 = COcclusionContext::SetDeviceTransform((COcclusionContext *)v9, (const struct CMILMatrix *)v13);
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x69u);
    }
    else if ( a3 )
    {
      *a3 = 1;
    }
  }
  return 0LL;
}
