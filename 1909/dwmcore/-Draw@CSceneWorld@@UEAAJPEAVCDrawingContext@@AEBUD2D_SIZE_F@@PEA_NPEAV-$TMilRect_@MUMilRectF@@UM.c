/*
 * XREFs of ?Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180204200
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180017D30 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18003F594 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800CF3D4 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18016CB64 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 */

__int64 __fastcall CSceneWorld::Draw(__int64 a1, CDrawingContext *a2)
{
  __int64 v3; // r8
  __int64 v4; // r10
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  signed int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r10
  signed int v11; // eax
  __int64 v12; // rcx
  _BYTE v14[64]; // [rsp+40h] [rbp-78h] BYREF
  int v15; // [rsp+80h] [rbp-38h]
  struct D2D_RECT_F v16; // [rsp+90h] [rbp-28h] BYREF

  if ( !CDrawingContext::IsBounding(a2) )
  {
    v15 = 0;
    CMILMatrix::SetScale((CMILMatrix *)v14, 1.0, -1.0, 1.0, 0.0, 0.0, 0.0);
    v11 = CDrawingContext::DrawScene3D(
            a2,
            *(struct ISpectreWorld **)(v10 + 64),
            *(struct CCompositionEnvironmentLight **)(v10 + 80),
            (const struct CMILMatrix *)v14);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xA2u, 0LL);
      return v7;
    }
    return 0;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct D2D_RECT_F *))(*(_QWORD *)v4 + 208LL))(
         v4,
         0LL,
         v3,
         &v16);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x96u, 0LL);
    return v7;
  }
  v8 = CDrawingContext::DrawSolidRectangle(a2, &v16, &xmmword_180310550);
  v7 = v8;
  if ( v8 >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x9Au, 0LL);
  return v7;
}
