/*
 * XREFs of ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800ADD70
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800AE210 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180004DDC (-Create@CSolidRectangleInstruction@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z @ 0x18000F790 (-Create@CDrawGeometryInstruction@@SAJPEAVCResource@@0PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180013D04 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z @ 0x1800AD8A0 (-GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CIconicAnimatedVisual::SetupInstructions(CIconicAnimatedVisual *this)
{
  int *v1; // rbx
  CBaseObject *v3; // rdi
  struct IDwmChannel *v4; // rcx
  float v5; // xmm1_4
  __m128i v6; // xmm0
  float v7; // xmm1_4
  int v8; // eax
  unsigned int v9; // ebx
  CBaseObject *v10; // rdx
  __int128 v11; // xmm1
  int v12; // eax
  int v13; // eax
  int v14; // eax
  CBaseObject *v16; // [rsp+30h] [rbp-40h] BYREF
  CBaseObject *v17; // [rsp+38h] [rbp-38h] BYREF
  struct _D3DCOLORVALUE v18; // [rsp+40h] [rbp-30h] BYREF
  __int128 v19; // [rsp+50h] [rbp-20h]

  v16 = 0LL;
  v1 = (int *)((char *)this + 368);
  v3 = 0LL;
  v17 = 0LL;
  if ( IsRectEmpty((const RECT *)this + 23) )
    goto LABEL_6;
  CImmersiveState::GetPillarBoxColor(&v18);
  v4 = (struct IDwmChannel *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5);
  v5 = (float)*((int *)this + 94);
  *(float *)&v19 = (float)*v1;
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 93));
  *((float *)&v19 + 2) = v5;
  v7 = (float)*((int *)this + 95);
  DWORD1(v19) = _mm_cvtepi32_ps(v6).m128_u32[0];
  *((float *)&v19 + 3) = v7;
  v8 = CSolidRectangleInstruction::Create(v4, &v17);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xC6u);
    v3 = v17;
    goto LABEL_12;
  }
  v3 = v17;
  v10 = v17;
  v11 = *(__int128 *)&v18.r;
  *((_OWORD *)v17 + 2) = v19;
  *((_OWORD *)v10 + 1) = v11;
  v12 = CRenderDataVisual::AddInstruction(this, v10);
  v9 = v12;
  if ( v12 >= 0 )
  {
LABEL_6:
    v13 = CDrawGeometryInstruction::Create(*((struct CResource **)this + 38), *((struct CResource **)this + 43), &v16);
    v9 = v13;
    if ( v13 >= 0 )
    {
      v14 = CRenderDataVisual::AddInstruction(this, v16);
      v9 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0xD1u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0xD0u);
    }
    if ( v16 )
      CBaseObject::Release(v16);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xC9u);
  }
LABEL_12:
  if ( v3 )
    CBaseObject::Release(v3);
  return v9;
}
