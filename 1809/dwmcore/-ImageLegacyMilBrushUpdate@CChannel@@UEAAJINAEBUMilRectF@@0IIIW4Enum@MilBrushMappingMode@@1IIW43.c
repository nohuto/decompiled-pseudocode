/*
 * XREFs of ?ImageLegacyMilBrushUpdate@CChannel@@UEAAJINAEBUMilRectF@@0IIIW4Enum@MilBrushMappingMode@@1IIW43MilStretch@@W43MilTileMode@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@I@Z @ 0x180075A40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18009ABB0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CChannel::ImageLegacyMilBrushUpdate(
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
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17)
{
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  unsigned int v22; // ebx
  int v24; // [rsp+28h] [rbp-89h] BYREF
  int v25; // [rsp+2Ch] [rbp-85h] BYREF
  double v26; // [rsp+30h] [rbp-81h]
  int v27; // [rsp+38h] [rbp-79h]
  int v28; // [rsp+3Ch] [rbp-75h]
  int v29; // [rsp+40h] [rbp-71h]
  int v30; // [rsp+44h] [rbp-6Dh]
  int v31; // [rsp+48h] [rbp-69h]
  __int128 v32; // [rsp+4Ch] [rbp-65h]
  int v33; // [rsp+5Ch] [rbp-55h]
  __int128 v34; // [rsp+60h] [rbp-51h]
  int v35; // [rsp+70h] [rbp-41h]
  int v36; // [rsp+74h] [rbp-3Dh]
  int v37; // [rsp+78h] [rbp-39h]
  int v38; // [rsp+7Ch] [rbp-35h]
  int v39; // [rsp+80h] [rbp-31h]
  int v40; // [rsp+98h] [rbp-19h]
  __int64 v41; // [rsp+C8h] [rbp+17h] BYREF

  v41 = a1 + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v24 = 485;
  memset_0(&v25, 0, 0x70uLL);
  v20 = *a4;
  v26 = a3;
  v21 = *a5;
  v27 = a6;
  v28 = a7;
  v29 = a8;
  v30 = a9;
  v31 = a10;
  v33 = a11;
  v35 = a12;
  v36 = a13;
  v37 = a14;
  v38 = a15;
  v39 = a16;
  v40 = a17;
  v25 = a2;
  v32 = v20;
  v34 = v21;
  v22 = CChannel::SendCommand((CChannel *)a1, &v24, 0x74u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v41);
  return v22;
}
