/*
 * XREFs of ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCResource@@KM@Z @ 0x1800AC3D4
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180008EA0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x180086B6C (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000F790 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180013D04 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CThumbnailAnimatedVisual::AddSolidBrushInstruction(
        CThumbnailAnimatedVisual *this,
        struct CResource *a2,
        int a3,
        float a4)
{
  __int64 v4; // rax
  CBaseObject *v5; // rbx
  int v9; // eax
  __int64 v10; // r8
  CBaseObject *v11; // rdi
  unsigned int v12; // esi
  __int64 v13; // rdx
  int v14; // eax
  CBaseObject *v16; // [rsp+40h] [rbp-40h] BYREF
  CBaseObject *v17; // [rsp+48h] [rbp-38h] BYREF
  float v18[4]; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v4 = *((_QWORD *)this + 2);
  v5 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v9 = CResource::Create(0x22u, *(_QWORD *)(v4 + 16), &v17);
  v11 = v17;
  v12 = v9;
  if ( v9 < 0 )
  {
    v13 = 236LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"windows\\dwm\\udwm\\thumbnailtransition.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_11;
  }
  v18[3] = a4;
  v18[0] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a3] / 255.0;
  v18[1] = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)a3 >> 8] / 255.0;
  v18[2] = GammaLUT_sRGB_to_scRGB[BYTE2(a3)] / 255.0;
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, float *, _DWORD, _DWORD, _DWORD))(**((_QWORD **)v17 + 2)
                                                                                           + 1184LL))(
         *((_QWORD *)v17 + 2),
         *((unsigned int *)v17 + 6),
         v10,
         v18,
         0,
         0,
         0);
  v12 = v9;
  if ( v9 < 0 )
  {
    v13 = 250LL;
    goto LABEL_9;
  }
  v14 = CDrawGeometryInstruction::Create(v11, a2, &v16);
  v12 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFC,
      (__int64)"windows\\dwm\\udwm\\thumbnailtransition.cpp",
      (const char *)(unsigned int)v14);
    v5 = v16;
    goto LABEL_11;
  }
  v5 = v16;
  v9 = CRenderDataVisual::AddInstruction(this, v16);
  v12 = v9;
  if ( v9 < 0 )
  {
    v13 = 253LL;
    goto LABEL_9;
  }
  v12 = 0;
LABEL_11:
  if ( v11 )
    CBaseObject::Release(v11);
  if ( v5 )
    CBaseObject::Release(v5);
  return v12;
}
