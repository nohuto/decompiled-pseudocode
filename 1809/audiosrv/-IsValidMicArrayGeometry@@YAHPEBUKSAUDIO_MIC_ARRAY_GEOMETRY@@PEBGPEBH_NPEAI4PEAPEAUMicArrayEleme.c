/*
 * XREFs of ?IsValidMicArrayGeometry@@YAHPEBUKSAUDIO_MIC_ARRAY_GEOMETRY@@PEBGPEBH_NPEAI4PEAPEAUMicArrayElementErrorDetails@@@Z @ 0x1801357E8
 * Callers:
 *     ?IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1801122DC (-IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ?DumpTraceWin32@@YAXPEBD00H@Z @ 0x180135B68 (-DumpTraceWin32@@YAXPEBD00H@Z.c)
 */

__int64 __fastcall IsValidMicArrayGeometry(
        const struct KSAUDIO_MIC_ARRAY_GEOMETRY *a1,
        const unsigned __int16 *a2,
        const int *a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int v5; // ebx
  const char *v7; // r8
  USHORT usNumberOfMicrophones; // r10
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  SHORT wVerticalAngleEnd; // r8
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  USHORT usFrequencyBandLo; // ax
  int v22; // edx
  char v23; // si
  char v24; // r12
  char v25; // r13
  SHORT *p_wHorizontalAngle; // r8
  unsigned __int16 v27; // di
  unsigned __int16 v28; // ax
  SHORT v29; // bp
  __int16 v30; // r14
  __int16 v31; // r15
  SHORT *p_wYCoord; // r9
  __int64 v33; // rcx
  __int16 v34; // ax
  int v35; // ecx
  __int64 v37; // [rsp+60h] [rbp+8h]

  v5 = 0;
  if ( !a1 )
  {
    v7 = "209";
LABEL_3:
    v5 = -2147024809;
    DumpTraceWin32((const char *)a1, "IsValidMicArrayGeometry", v7, -2147024809);
    return v5;
  }
  if ( !a5 )
  {
    v7 = "210";
    goto LABEL_3;
  }
  usNumberOfMicrophones = a1->usNumberOfMicrophones;
  v9 = 4096;
  if ( usNumberOfMicrophones )
    v9 = 0;
  v10 = v9;
  if ( a2 && *a2 != usNumberOfMicrophones )
    v10 = v9 | 1;
  if ( a3 && usNumberOfMicrophones > *a3 )
    v10 |= 2u;
  v11 = v10 | 8;
  if ( a1->usVersion == 256 )
    v11 = v10;
  v12 = v11 | 0x10;
  if ( a1->usMicArrayType <= 2u )
    v12 = v11;
  v13 = v12 | 0x100;
  wVerticalAngleEnd = a1->wVerticalAngleEnd;
  if ( a1->wHorizontalAngleBegin >= 0x8548u || a1->wHorizontalAngleBegin == 0 )
    v13 = v12;
  v15 = v13 | 0x200;
  if ( a1->wHorizontalAngleEnd <= 0x7AB8u )
    v15 = v13;
  v16 = v15 | 0x20;
  if ( (unsigned __int16)(a1->wVerticalAngleBegin + 15708) <= 0x7AB8u )
    v16 = v15;
  v17 = v16 | 0x40;
  if ( (unsigned __int16)(wVerticalAngleEnd + 15708) <= 0x7AB8u )
    v17 = v16;
  if ( a1->wHorizontalAngleBegin > 0 || (v18 = 1, a1->wHorizontalAngleEnd < 0) )
    v18 = 0;
  v19 = v17 | 0x400;
  if ( v18 )
    v19 = v17;
  v20 = v19 | 0x80;
  if ( a1->wVerticalAngleBegin <= wVerticalAngleEnd )
    v20 = v19;
  usFrequencyBandLo = a1->usFrequencyBandLo;
  v22 = v20 | 0x800;
  if ( usFrequencyBandLo < a1->usFrequencyBandHi )
    v22 = v20;
  if ( a1->usFrequencyBandHi < 0x14u || usFrequencyBandLo > 0x4E20u )
    v22 |= 0x20000u;
  v23 = 0;
  v24 = 1;
  v25 = 1;
  if ( !usNumberOfMicrophones )
    goto LABEL_73;
  p_wHorizontalAngle = &a1->KsMicCoord[0].wHorizontalAngle;
  v37 = usNumberOfMicrophones;
  v27 = 1;
  do
  {
    v28 = *(p_wHorizontalAngle - 5);
    if ( v28 > 5u )
    {
      if ( (v28 & 0xF) == 0xF )
        v22 |= 4u;
      else
        v22 |= 0x2000u;
    }
    v29 = *p_wHorizontalAngle;
    v30 = *(p_wHorizontalAngle - 1);
    if ( (unsigned __int16)(*p_wHorizontalAngle + 31416) > 0xF570u )
      v22 |= 0x8000u;
    if ( (unsigned __int16)(v30 + 15708) > 0x7AB8u )
      v22 |= 0x4000u;
    if ( (v30 == -15708 || v30 == 15708) && v29 )
      v22 |= 0x100000u;
    if ( (unsigned __int16)(v29 + 15707) <= 0x7AB6u )
      v23 = 1;
    if ( v29 || v30 )
      v24 = 0;
    v31 = *(p_wHorizontalAngle - 3);
    if ( v31 || *(p_wHorizontalAngle - 2) )
      v25 = 0;
    if ( v27 < usNumberOfMicrophones )
    {
      p_wYCoord = &a1->KsMicCoord[v27].wYCoord;
      v33 = (unsigned __int16)(usNumberOfMicrophones - v27);
      v34 = *(p_wHorizontalAngle - 4);
      do
      {
        if ( v34 == *(p_wYCoord - 1) && v31 == *p_wYCoord )
        {
          if ( *(p_wHorizontalAngle - 2) == p_wYCoord[1] && v29 == p_wYCoord[3] )
          {
            v34 = *(p_wHorizontalAngle - 4);
            if ( v30 == p_wYCoord[2] )
              v22 |= 0x10000u;
          }
          else
          {
            v34 = *(p_wHorizontalAngle - 4);
          }
        }
        p_wYCoord += 6;
        --v33;
      }
      while ( v33 );
    }
    p_wHorizontalAngle += 6;
    ++v27;
    --v37;
  }
  while ( v37 );
  if ( v25 && v24 )
LABEL_73:
    v22 |= 0x40000u;
  v35 = v22 | 0x80000;
  if ( v23 )
    v35 = v22;
  *a5 = v35;
  return v5;
}
