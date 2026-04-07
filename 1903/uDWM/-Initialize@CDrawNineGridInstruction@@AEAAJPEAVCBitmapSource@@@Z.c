/*
 * XREFs of ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x180030888
 * Callers:
 *     ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x180030744 (-Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0IW4Enum@MilBrushMappingMode@@1IIW43MilStretch@@W43MilTileMode@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCBaseImageProxy@@@Z @ 0x180030BD4 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0IW4Enum@MilBrushMappingMode@@1IIW43MilSt.c)
 *     ?GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUMilPointAndSizeL@@PEAUNineGridLayout@@@Z @ 0x180030CA8 (-GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUMilPointAndSizeL@@PEAUNineGridLay.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003DA8C (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDrawNineGridInstruction::Initialize(struct _MARGINS *this, struct CBitmapSource *a2)
{
  struct _MARGINS v2; // xmm0
  unsigned int v3; // r14d
  unsigned int v5; // edi
  int v6; // ecx
  struct _MARGINS *i; // r15
  __int64 v8; // rdx
  int v9; // r12d
  __int64 v10; // rcx
  int v11; // r13d
  CDesktopManager *v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  void *v19; // [rsp+28h] [rbp-81h]
  int v20; // [rsp+70h] [rbp-39h]
  int v21; // [rsp+74h] [rbp-35h]
  unsigned __int64 v22; // [rsp+78h] [rbp-31h] BYREF
  float v23; // [rsp+80h] [rbp-29h]
  float v24; // [rsp+84h] [rbp-25h]
  struct _MARGINS v25; // [rsp+90h] [rbp-19h] BYREF
  _DWORD v26[8]; // [rsp+A0h] [rbp-9h] BYREF

  v2 = (struct _MARGINS)*((_OWORD *)a2 + 2);
  v3 = 0;
  v22 = 0LL;
  this[1] = v2;
  v5 = 0;
  this[2] = *((struct _MARGINS *)a2 + 3);
  v6 = *((_DWORD *)a2 + 20);
  v23 = *((float *)a2 + 6);
  v24 = *((float *)a2 + 7);
  if ( v6 > 0 && *((int *)a2 + 22) > 0 )
  {
    v18 = *((_DWORD *)a2 + 21);
    if ( v18 > 0 && *((int *)a2 + 23) > 0 )
      v22 = __PAIR64__(v18, v6);
  }
  v25 = v2;
  CDrawNineGridInstruction::GetNineGridLayout(&v25, (const struct MilPointAndSizeL *)&v22, (struct NineGridLayout *)v26);
  this[7].cyTopHeight = 0;
  for ( i = this + 3; ; i = (struct _MARGINS *)((char *)i + 8) )
  {
    v8 = v3 / 3;
    v9 = v26[v8 + 4];
    v10 = v3 % 3;
    v11 = v26[(unsigned int)(v8 + 1) + 4];
    v20 = v26[v10];
    v21 = v26[(unsigned int)(v10 + 1)];
    if ( v21 - v20 <= 0 || v11 - v9 <= 0 )
    {
      *(_QWORD *)&i->cxLeftWidth = 0LL;
      goto LABEL_5;
    }
    v13 = CDesktopManager::s_pDesktopManagerInstance;
    ++this[7].cyTopHeight;
    v14 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(*((_QWORD *)v13 + 5));
    v5 = v14;
    if ( v14 < 0 )
      break;
    v25 = (struct _MARGINS)_xmm;
    LODWORD(v19) = 1;
    v16 = *(_QWORD *)&i->cxLeftWidth;
    *(float *)&v22 = (float)v20;
    *((float *)&v22 + 1) = (float)v9;
    v24 = (float)v11;
    v23 = (float)v21;
    v17 = CImageLegacyMilBrushProxy::Update(v16, v15, &v25, &v22, 0);
    v5 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x8Cu, v19);
      return v5;
    }
LABEL_5:
    if ( ++v3 >= 9 )
      return v5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x70u, v19);
  return v5;
}
