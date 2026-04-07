/*
 * XREFs of ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800B0FDC
 * Callers:
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800B0AA4 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800B0C4C (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800B0DD8 (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x1800B15C0 (-UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001AAC0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800212F4 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021F8C (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x180028D0C (-SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z.c)
 *     ?Create@CRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x180028E54 (-Create@CRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTouchPressHoldVisual::UpdateOpacityAndLocation(CTouchPressHoldVisual *this)
{
  float v1; // xmm1_4
  int v3; // ebx
  int v4; // edx
  float v5; // xmm8_4
  int v6; // r8d
  int v7; // eax
  int v8; // r8d
  float v9; // xmm7_4
  float v10; // xmm12_4
  float v11; // xmm10_4
  int v12; // eax
  unsigned int v13; // ebx
  CBaseObject *v14; // rdi
  int v15; // eax
  int v16; // eax
  float v17; // xmm13_4
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  CBaseObject *v34; // [rsp+38h] [rbp-D0h] BYREF
  double v35; // [rsp+40h] [rbp-C8h]
  __int128 v36; // [rsp+48h] [rbp-C0h]
  struct _D3DCOLORVALUE v37; // [rsp+58h] [rbp-B0h] BYREF
  struct _D3DCOLORVALUE v38; // [rsp+68h] [rbp-A0h] BYREF

  v1 = *((float *)this + 82);
  v34 = 0LL;
  CVisual::SetOpacity(this, v1);
  if ( *((int *)this + 79) < 10 )
    *((_DWORD *)this + 79) = 10;
  if ( *((int *)this + 80) < 10 )
    *((_DWORD *)this + 80) = 10;
  CRenderDataVisual::ClearInstructions(this);
  v3 = *((_DWORD *)this + 79);
  v4 = *((_DWORD *)this + 83);
  v5 = (float)(*((_DWORD *)this + 75) - v3 / 2);
  *(float *)&v36 = v5;
  v6 = MulDiv(-5, v4, 100);
  v7 = *((_DWORD *)this + 80);
  v8 = *((_DWORD *)this + 76) - *((_DWORD *)this + 81) - v3 / 2 + v6;
  *(_QWORD *)&v38.r = 0x3F8000003F800000LL;
  *(_QWORD *)&v38.b = 0x3F8000003F800000LL;
  v9 = (float)v8;
  *((float *)&v36 + 1) = (float)v8;
  *((float *)&v36 + 2) = (float)v3 + v5;
  *(struct _D3DCOLORVALUE *)&v37.r = (struct _D3DCOLORVALUE)_xmm;
  *((float *)&v36 + 3) = (float)v7 + (float)v8;
  if ( v3 <= 4 || v7 <= 4 )
  {
    v30 = CRectangleInstruction::Create(&v34);
    v13 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v30, 0x137u);
      goto LABEL_39;
    }
    v14 = v34;
    v31 = CRectangleInstruction::SetSolidFill(v34, &v37, 0.949999988079071);
    v13 = v31;
    if ( v31 >= 0 )
    {
      *((_OWORD *)v14 + 2) = v36;
      v32 = CRenderDataVisual::AddInstruction(this, v14);
      v13 = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0x13Au);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v31, 0x138u);
    }
  }
  else
  {
    v10 = (float)((float)v3 + v5) - v5;
    *(float *)&v36 = v5;
    *((float *)&v36 + 1) = (float)v8;
    v11 = (float)((float)v7 + v9) - v9;
    *((float *)&v36 + 3) = v9 + v11;
    *((float *)&v36 + 2) = v5 + 2.0;
    v35 = (float)(v9 + 2.0);
    v12 = CRectangleInstruction::Create(&v34);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x156u);
LABEL_39:
      v14 = v34;
      goto LABEL_44;
    }
    v14 = v34;
    v15 = CRectangleInstruction::SetSolidFill(v34, &v37, 0.949999988079071);
    v13 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x157u);
      goto LABEL_44;
    }
    *((_OWORD *)v14 + 2) = v36;
    v16 = CRenderDataVisual::AddInstruction(this, v14);
    v13 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x159u);
      goto LABEL_44;
    }
    CBaseObject::Release(v14);
    v34 = 0LL;
    v17 = v5 + 2.0;
    *((float *)&v36 + 3) = v9 + 2.0;
    *(float *)&v36 = v17;
    *((float *)&v36 + 2) = (float)(v17 + v10) - 4.0;
    v18 = CRectangleInstruction::Create(&v34);
    v13 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x161u);
      goto LABEL_39;
    }
    v14 = v34;
    v19 = CRectangleInstruction::SetSolidFill(v34, &v37, 0.949999988079071);
    v13 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x162u);
      goto LABEL_44;
    }
    *((_OWORD *)v14 + 2) = v36;
    v20 = CRenderDataVisual::AddInstruction(this, v14);
    v13 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v20, 0x164u);
      goto LABEL_44;
    }
    CBaseObject::Release(v14);
    v34 = 0LL;
    *((float *)&v36 + 3) = v9 + v11;
    *(float *)&v36 = (float)(v5 + v10) - 2.0;
    *((float *)&v36 + 2) = *(float *)&v36 + 2.0;
    v21 = CRectangleInstruction::Create(&v34);
    v13 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x16Cu);
      goto LABEL_39;
    }
    v14 = v34;
    v22 = CRectangleInstruction::SetSolidFill(v34, &v37, 0.949999988079071);
    v13 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v22, 0x16Du);
      goto LABEL_44;
    }
    *((_OWORD *)v14 + 2) = v36;
    v23 = CRenderDataVisual::AddInstruction(this, v14);
    v13 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x16Fu);
      goto LABEL_44;
    }
    CBaseObject::Release(v14);
    v34 = 0LL;
    *(float *)&v36 = v5 + 2.0;
    *((float *)&v36 + 1) = (float)(v9 + v11) - 2.0;
    *((float *)&v36 + 2) = (float)(v17 + v10) - 4.0;
    *((float *)&v36 + 3) = *((float *)&v36 + 1) + 2.0;
    v24 = CRectangleInstruction::Create(&v34);
    v13 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x177u);
      goto LABEL_39;
    }
    v14 = v34;
    v25 = CRectangleInstruction::SetSolidFill(v34, &v37, 0.949999988079071);
    v13 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v25, 0x178u);
      goto LABEL_44;
    }
    *((_OWORD *)v14 + 2) = v36;
    v26 = CRenderDataVisual::AddInstruction(this, v14);
    v13 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x17Au);
      goto LABEL_44;
    }
    CBaseObject::Release(v14);
    v34 = 0LL;
    *((float *)&v36 + 1) = v35;
    *((float *)&v36 + 3) = (float)(*((float *)&v36 + 1) + v11) - 4.0;
    v27 = CRectangleInstruction::Create(&v34);
    v13 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x182u);
      goto LABEL_39;
    }
    v14 = v34;
    v28 = CRectangleInstruction::SetSolidFill(v34, &v38, 0.300000011920929);
    v13 = v28;
    if ( v28 >= 0 )
    {
      *((_OWORD *)v14 + 2) = v36;
      v29 = CRenderDataVisual::AddInstruction(this, v14);
      v13 = v29;
      if ( v29 >= 0 )
      {
LABEL_45:
        CBaseObject::Release(v14);
        return v13;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0x185u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, 0x183u);
    }
  }
LABEL_44:
  if ( v14 )
    goto LABEL_45;
  return v13;
}
