/*
 * XREFs of ?LinearGradientLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilPoint2D@@0IIIW4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x180146510
 * Callers:
 *     <none>
 * Callees:
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180057B70 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x1800583E0 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18009A7C8 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CChannel::LinearGradientLegacyMilBrushUpdate(
        __int64 a1,
        int a2,
        double a3,
        __int128 *a4,
        __int128 *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        void *a12,
        unsigned int a13)
{
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  unsigned __int64 v18; // rcx
  int v19; // r9d
  unsigned int v20; // ebx
  int v21; // eax
  __int64 v22; // rcx
  int v24; // [rsp+38h] [rbp-51h] BYREF
  int v25; // [rsp+3Ch] [rbp-4Dh] BYREF
  double v26; // [rsp+40h] [rbp-49h]
  int v27; // [rsp+48h] [rbp-41h]
  int v28; // [rsp+4Ch] [rbp-3Dh]
  int v29; // [rsp+50h] [rbp-39h]
  int v30; // [rsp+54h] [rbp-35h]
  int v31; // [rsp+58h] [rbp-31h]
  int v32; // [rsp+5Ch] [rbp-2Dh]
  unsigned int v33; // [rsp+60h] [rbp-29h]
  __int128 v34; // [rsp+64h] [rbp-25h]
  __int128 v35; // [rsp+74h] [rbp-15h]
  struct _RTL_CRITICAL_SECTION *v36; // [rsp+A8h] [rbp+1Fh] BYREF

  v36 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v24 = 486;
  memset_0(&v25, 0, 0x48uLL);
  v16 = *a4;
  v25 = a2;
  v26 = a3;
  v17 = *a5;
  v27 = a6;
  v28 = a7;
  v29 = a8;
  v30 = a9;
  v31 = a10;
  v32 = a11;
  v34 = v16;
  v35 = v17;
  v18 = 24LL * a13;
  v19 = -1;
  if ( v18 <= 0xFFFFFFFF )
    v19 = 24 * a13;
  v33 = v19;
  v20 = v18 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v18 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v20, 0xB61u);
  }
  else
  {
    v21 = CChannel::BeginCommand((struct CCommandBatch **)a1, &v24, 0x4Cu, v19);
    v20 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0xB62u);
    }
    else
    {
      CDataStreamWriter::AddItemData(*(CDataStreamWriter **)(a1 + 160), a12, v33);
      CDataStreamWriter::EndItem(*(CDataStreamWriter **)(a1 + 160));
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v36);
  return v20;
}
