/*
 * XREFs of ?AlphaMultiply_64bppABGRFloat@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x180224E70
 * Callers:
 *     <none>
 * Callees:
 *     ??BCFloat16@@QEAAMXZ @ 0x180223EC4 (--BCFloat16@@QEAAMXZ.c)
 */

void __fastcall AlphaMultiply_64bppABGRFloat(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  int v2; // ebx
  unsigned __int16 *v3; // r11
  float v4; // xmm1_4
  float v5; // xmm1_4
  unsigned __int16 *v6; // r10
  unsigned int v7; // edx
  int v8; // r8d
  __int16 v9; // r8
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  float v14; // xmm1_4
  unsigned __int16 *v15; // r11
  _WORD *v16; // r9
  __int64 v17; // r10
  float v18; // edx
  int v19; // r8d
  __int16 v20; // r8
  float v21; // eax
  int v22; // ecx
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned int v25; // edx
  int v26; // r8d
  __int16 v27; // r8
  unsigned int v28; // eax
  int v29; // ecx
  unsigned int v30; // edx
  unsigned int v31; // ecx
  float v32; // xmm1_4
  unsigned __int16 *v33; // r11
  __int64 v34; // r9
  __int64 v35; // r10
  float v36; // edx
  int v37; // r8d
  __int16 v38; // r8
  float v39; // eax
  int v40; // ecx
  unsigned int v41; // edx
  unsigned int v42; // ecx
  unsigned int v43; // edx
  int v44; // r8d
  __int16 v45; // r8
  unsigned int v46; // eax
  int v47; // ecx
  unsigned int v48; // edx
  unsigned int v49; // ecx
  float v50; // xmm1_4
  unsigned __int16 *v51; // r11
  __int64 v52; // r9
  __int64 v53; // r11
  float v54; // edx
  int v55; // r8d
  __int16 v56; // r8
  float v57; // eax
  int v58; // ecx
  unsigned int v59; // edx
  unsigned int v60; // ecx
  float v61; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)a1 + 2);
  if ( v2 )
  {
    v3 = (unsigned __int16 *)(*((_QWORD *)a2 + 1) + 6LL);
    do
    {
      --v2;
      v4 = CFloat16::operator float(v3);
      if ( v4 != CFloat16::operator float((unsigned __int16 *)&word_180338EA4) )
      {
        v5 = CFloat16::operator float(v3);
        if ( v5 != CFloat16::operator float(word_18033D12C) )
        {
          v61 = (float)*v6;
          v7 = LODWORD(v61) & 0x7FFFFFFF;
          v8 = HIWORD(LODWORD(v61)) & 0x8000;
          if ( (LODWORD(v61) & 0x7FFFFFFFu) <= 0x47FFEFFF )
          {
            v10 = LODWORD(v61) & 0x7FFFFFFF;
            if ( v7 >= 0x38800000 )
            {
              v13 = v7 - 939520001;
            }
            else
            {
              v11 = 113 - (v7 >> 23);
              if ( v11 >= 24 )
                v12 = 0;
              else
                v12 = (LODWORD(v61) & 0x7FFFFF | 0x800000u) >> v11;
              v10 = v12;
              v13 = v12 + 4095;
            }
            v9 = ((((v10 >> 13) & 1) + v13) >> 13) | v8;
          }
          else
          {
            v9 = v8 | 0x7FFF;
          }
          LOWORD(v61) = v9;
          v14 = CFloat16::operator float((unsigned __int16 *)&v61);
          v61 = CFloat16::operator float(v15) * v14;
          v18 = fabs(v61);
          v19 = HIWORD(LODWORD(v61)) & 0x8000;
          if ( LODWORD(v18) <= 0x47FFEFFF )
          {
            v21 = v18;
            if ( LODWORD(v18) >= 0x38800000 )
            {
              v24 = LODWORD(v18) - 939520001;
            }
            else
            {
              v22 = 113 - (LODWORD(v18) >> 23);
              if ( v22 >= 24 )
                v23 = 0;
              else
                v23 = (LODWORD(v18) & 0x7FFFFF | 0x800000u) >> v22;
              v21 = *(float *)&v23;
              v24 = v23 + 4095;
            }
            v20 = ((((LODWORD(v21) >> 13) & 1) + v24) >> 13) | v19;
          }
          else
          {
            v20 = v19 | 0x7FFF;
          }
          *v16 = v20;
          v61 = (float)*(unsigned __int16 *)(v17 + 2);
          v25 = LODWORD(v61) & 0x7FFFFFFF;
          v26 = HIWORD(LODWORD(v61)) & 0x8000;
          if ( (LODWORD(v61) & 0x7FFFFFFFu) <= 0x47FFEFFF )
          {
            v28 = LODWORD(v61) & 0x7FFFFFFF;
            if ( v25 >= 0x38800000 )
            {
              v31 = v25 - 939520001;
            }
            else
            {
              v29 = 113 - (v25 >> 23);
              if ( v29 >= 24 )
                v30 = 0;
              else
                v30 = (LODWORD(v61) & 0x7FFFFF | 0x800000u) >> v29;
              v28 = v30;
              v31 = v30 + 4095;
            }
            v27 = ((((v28 >> 13) & 1) + v31) >> 13) | v26;
          }
          else
          {
            v27 = v26 | 0x7FFF;
          }
          LOWORD(v61) = v27;
          v32 = CFloat16::operator float((unsigned __int16 *)&v61);
          v61 = CFloat16::operator float(v33) * v32;
          v36 = fabs(v61);
          v37 = HIWORD(LODWORD(v61)) & 0x8000;
          if ( LODWORD(v36) <= 0x47FFEFFF )
          {
            v39 = v36;
            if ( LODWORD(v36) >= 0x38800000 )
            {
              v42 = LODWORD(v36) - 939520001;
            }
            else
            {
              v40 = 113 - (LODWORD(v36) >> 23);
              if ( v40 >= 24 )
                v41 = 0;
              else
                v41 = (LODWORD(v36) & 0x7FFFFF | 0x800000u) >> v40;
              v39 = *(float *)&v41;
              v42 = v41 + 4095;
            }
            v38 = ((((LODWORD(v39) >> 13) & 1) + v42) >> 13) | v37;
          }
          else
          {
            v38 = v37 | 0x7FFF;
          }
          *(_WORD *)(v34 + 2) = v38;
          v61 = (float)*(unsigned __int16 *)(v35 + 4);
          v43 = LODWORD(v61) & 0x7FFFFFFF;
          v44 = HIWORD(LODWORD(v61)) & 0x8000;
          if ( (LODWORD(v61) & 0x7FFFFFFFu) <= 0x47FFEFFF )
          {
            v46 = LODWORD(v61) & 0x7FFFFFFF;
            if ( v43 >= 0x38800000 )
            {
              v49 = v43 - 939520001;
            }
            else
            {
              v47 = 113 - (v43 >> 23);
              if ( v47 >= 24 )
                v48 = 0;
              else
                v48 = (LODWORD(v61) & 0x7FFFFF | 0x800000u) >> v47;
              v46 = v48;
              v49 = v48 + 4095;
            }
            v45 = ((((v46 >> 13) & 1) + v49) >> 13) | v44;
          }
          else
          {
            v45 = v44 | 0x7FFF;
          }
          LOWORD(v61) = v45;
          v50 = CFloat16::operator float((unsigned __int16 *)&v61);
          v61 = CFloat16::operator float(v51) * v50;
          v54 = fabs(v61);
          v55 = HIWORD(LODWORD(v61)) & 0x8000;
          if ( LODWORD(v54) <= 0x47FFEFFF )
          {
            v57 = v54;
            if ( LODWORD(v54) >= 0x38800000 )
            {
              v60 = LODWORD(v54) - 939520001;
            }
            else
            {
              v58 = 113 - (LODWORD(v54) >> 23);
              if ( v58 >= 24 )
                v59 = 0;
              else
                v59 = (LODWORD(v54) & 0x7FFFFF | 0x800000u) >> v58;
              v57 = *(float *)&v59;
              v60 = v59 + 4095;
            }
            v56 = ((((LODWORD(v57) >> 13) & 1) + v60) >> 13) | v55;
          }
          else
          {
            v56 = v55 | 0x7FFF;
          }
          *(_WORD *)(v52 + 4) = v56;
          v3 = (unsigned __int16 *)(v53 + 8);
        }
      }
    }
    while ( v2 );
  }
}
