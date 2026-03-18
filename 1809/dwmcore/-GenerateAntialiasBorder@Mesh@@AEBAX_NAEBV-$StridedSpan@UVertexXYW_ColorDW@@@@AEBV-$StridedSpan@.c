/*
 * XREFs of ?GenerateAntialiasBorder@Mesh@@AEBAX_NAEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHPEAGH3@Z @ 0x180066B34
 * Callers:
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHGPEAG3@Z @ 0x18003B8B8 (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedSpan@UVerte.c)
 * Callees:
 *     ?GenerateGridAntialiasBorder@Mesh@@AEBAX_NAEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHPEAGH3@Z @ 0x180038360 (-GenerateGridAntialiasBorder@Mesh@@AEBAX_NAEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedS.c)
 *     sqrtf_0 @ 0x1800F004B (sqrtf_0.c)
 */

_DWORD *__fastcall Mesh::GenerateAntialiasBorder(
        __int64 a1,
        char a2,
        __int64 *a3,
        _QWORD *a4,
        int *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  _QWORD *v8; // rsi
  __int64 *v9; // rbp
  __int64 v10; // r13
  int v11; // r11d
  int v12; // r12d
  char v13; // al
  int v14; // eax
  _DWORD *result; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  float v18; // xmm11_4
  char v19; // cl
  float v20; // xmm12_4
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  bool v25; // zf
  float v26; // xmm4_4
  int v27; // r8d
  float v28; // xmm3_4
  int v29; // r9d
  float v30; // xmm9_4
  float v31; // xmm10_4
  __int64 v32; // r10
  __int64 v33; // rbp
  __int64 v34; // r14
  __int64 v35; // rsi
  __int128 v36; // xmm0
  float v37; // xmm7_4
  float v38; // xmm6_4
  int v39; // eax
  float v40; // xmm5_4
  float v41; // xmm2_4
  float v42; // xmm1_4
  int v43; // eax
  float v44; // xmm2_4
  float v45; // xmm0_4
  float v46; // xmm1_4
  int v47; // ecx
  float v48; // xmm2_4
  float v49; // xmm1_4
  float v50; // xmm6_4
  float v51; // xmm7_4
  float v52; // xmm1_4
  float v53; // xmm2_4
  __int64 v54; // rdi
  int v55; // ebp
  int v56; // esi
  __int16 *v57; // rbx
  int v58; // r14d
  __int16 **v59; // rcx
  __int16 v60; // r11
  __int16 v61; // r10
  __int16 *v62; // rax
  __int64 v63; // rcx
  __int16 v64; // r9
  __int64 v65; // rax
  __int16 v66; // [rsp+30h] [rbp-E8h]
  int v67; // [rsp+40h] [rbp-D8h]
  int v68; // [rsp+44h] [rbp-D4h] BYREF
  int v69; // [rsp+48h] [rbp-D0h]
  __int64 v70; // [rsp+50h] [rbp-C8h]
  char v72; // [rsp+128h] [rbp+10h]

  v72 = a2;
  v8 = a4;
  v9 = a3;
  v10 = a1;
  v11 = *a5;
  v67 = *a5;
  a7 = *a5;
  v12 = *a8;
  v13 = *(_BYTE *)(a1 + 76) & 0x30;
  v69 = v12;
  v68 = v12;
  if ( v13 != 32 )
  {
    v16 = *(_QWORD *)(a1 + 16);
    v68 = 0;
    v17 = *(_QWORD *)(v16 + 64);
    if ( v17 )
    {
      do
      {
        if ( (*(_BYTE *)(v17 + 28) & 0xC) != 0 )
        {
          v18 = *(float *)(v17 + 16);
          v19 = 0;
          v25 = (*(_BYTE *)(v17 + 28) & 2) == 0;
          v20 = *(float *)(v17 + 20);
          LOBYTE(a7) = 0;
          if ( v25 )
          {
            v21 = *(_QWORD *)(v17 + 48);
            v22 = *(_QWORD *)(v17 + 56);
          }
          else
          {
            LODWORD(v18) ^= _xmm;
            v19 = 1;
            LODWORD(v20) ^= _xmm;
            v21 = *(_QWORD *)(v17 + 56);
            v22 = *(_QWORD *)(v17 + 48);
            LOBYTE(a7) = 1;
          }
          v70 = v22;
          v23 = v21;
          if ( v21 )
          {
            while ( 1 )
            {
              v24 = 0LL;
              if ( v23 == v21 )
                break;
              if ( v23 != v22 || (v24 = *(_QWORD *)(v17 + 80), (*(_BYTE *)(v24 + 28) & 0xC) != 0xC) )
              {
LABEL_19:
                v26 = 0.0;
                v27 = *((_DWORD *)v9 + 2);
                v28 = 0.0;
                v29 = *((_DWORD *)v8 + 2);
                v30 = 0.0;
                v31 = 0.0;
                v32 = *v9 + v27 * **(_DWORD **)v23;
                v33 = 0LL;
                v34 = *v8 + **(_DWORD **)v23 * v29;
                v35 = 0LL;
                if ( v72 && (*(_BYTE *)(v17 + 28) & 0xC) == 0xC )
                {
                  v36 = *(_OWORD *)v32;
                  ++v68;
                  v67 = v11 + 1;
                  v35 = *a3 + v11 * v27;
                  v33 = *a4 + v11 * v29;
                  *(_OWORD *)v35 = v36;
                  *(_OWORD *)v33 = *(_OWORD *)v34;
                  *(_DWORD *)(v33 + 12) = 0;
                  if ( *(char *)(v10 + 76) >= 0 )
                    *(_DWORD *)(v35 + 12) = 0;
                  else
                    *(_BYTE *)(v35 + 15) = 0;
                }
                v37 = v20 * 0.5;
                v38 = v18 * -0.5;
                if ( v24 )
                {
                  v39 = *(_DWORD *)(v24 + 28);
                  v40 = *(float *)(v24 + 16);
                  v41 = *(float *)(v24 + 20);
                  if ( (v39 & 2) != 0 )
                  {
                    LODWORD(v40) ^= _xmm;
                    LODWORD(v41) ^= _xmm;
                  }
                  v42 = (float)(v40 * v37) + (float)(v41 * v38);
                  v37 = v40 * v42;
                  v38 = v41 * v42;
                  if ( (v39 & 0xC) != 0 )
                  {
                    v43 = *(_DWORD *)(v24 + 28) & 8;
                    v44 = (float)((float)(v41 * v18) - (float)(v40 * v20)) * 0.5;
                    v45 = v18 * v44;
                    v46 = v20 * v44;
                    v47 = *(_DWORD *)(v24 + 28) & 4;
                    if ( v47 )
                    {
                      v26 = 0.0 - v45;
                      v28 = 0.0 - v46;
                    }
                    else if ( v43 )
                    {
                      v26 = v45 + 0.0;
                      v28 = v46 + 0.0;
                    }
                    if ( v35 )
                    {
                      if ( v43 )
                      {
                        v30 = v45 + 0.0;
                        v31 = v46 + 0.0;
                      }
                      else if ( v47 )
                      {
                        v30 = 0.0 - v45;
                        v31 = 0.0 - v46;
                      }
                    }
                  }
                }
                if ( (*(_BYTE *)(v17 + 28) & 4) != 0 )
                {
                  v26 = v26 - v37;
                  v28 = v28 - v38;
                }
                else if ( (*(_BYTE *)(v17 + 28) & 8) != 0 )
                {
                  v26 = v26 + v37;
                  v28 = v28 + v38;
                }
                v48 = v26 + *(float *)v34;
                v49 = v28 + *(float *)(v34 + 4);
                *(_DWORD *)(v32 + 8) = 1065353216;
                *(float *)v32 = v48;
                *(float *)(v32 + 4) = v49;
                *(float *)(v34 + 8) = sqrtf_0((float)(v28 * v28) + (float)(v26 * v26));
                if ( v35 )
                {
                  v50 = v38 + v31;
                  v51 = v37 + v30;
                  v52 = v50 + *(float *)(v33 + 4);
                  v53 = v51 + *(float *)v33;
                  *(_DWORD *)(v35 + 8) = 1065353216;
                  *(float *)(v35 + 4) = v52;
                  *(float *)v35 = v53;
                  *(float *)(v33 + 8) = sqrtf_0((float)(v50 * v50) + (float)(v51 * v51));
                }
                v19 = a7;
                v9 = a3;
                v8 = a4;
                v11 = v67;
                goto LABEL_44;
              }
              if ( v24 != *(_QWORD *)(*(_QWORD *)(v10 + 16) + 64LL) )
              {
                v25 = (*(_BYTE *)(v17 + 28) & 0xC) == 12;
LABEL_18:
                if ( v25 )
                  goto LABEL_19;
              }
LABEL_44:
              if ( v19 )
                v23 = *(_QWORD *)(v23 + 56);
              else
                v23 = *(_QWORD *)(v23 + 64);
              v22 = v70;
              if ( !v23 )
                goto LABEL_48;
            }
            v24 = *(_QWORD *)(v17 + 72);
            if ( (*(_BYTE *)(v24 + 28) & 0xC) != 0xC )
              goto LABEL_19;
            if ( (*(_BYTE *)(v17 + 28) & 0xC) != 0xC )
              goto LABEL_44;
            v25 = v17 == *(_QWORD *)(*(_QWORD *)(v10 + 16) + 64LL);
            goto LABEL_18;
          }
        }
LABEL_48:
        v16 = *(_QWORD *)(v10 + 16);
        v17 = *(_QWORD *)(v17 + 80);
      }
      while ( v17 != *(_QWORD *)(v16 + 64) && v17 );
      v12 = v69;
      a2 = v72;
    }
    if ( !a2 || (v54 = *(_QWORD *)(v16 + 64), v55 = 0, !v54) )
    {
LABEL_73:
      v14 = v67;
      goto LABEL_3;
    }
    while ( 1 )
    {
      if ( (*(_BYTE *)(v54 + 28) & 0xC) == 0xC )
      {
        v56 = *(_DWORD *)(v54 + 28) & 2;
        v57 = v56 ? *(__int16 **)(v54 + 56) : *(__int16 **)(v54 + 48);
        if ( v57 )
          break;
      }
LABEL_71:
      v54 = *(_QWORD *)(v54 + 80);
      if ( v54 == *(_QWORD *)(*(_QWORD *)(v10 + 16) + 64LL) || !v54 )
        goto LABEL_73;
    }
    v58 = v55 + 1;
    while ( 1 )
    {
      v59 = (__int16 **)(v56 ? *((_QWORD *)v57 + 7) : *((_QWORD *)v57 + 8));
      if ( v59 )
        break;
      if ( (*(_BYTE *)(*(_QWORD *)(v54 + 80) + 28LL) & 0xC) != 0xC )
        goto LABEL_65;
LABEL_66:
      if ( v56 )
        v57 = (__int16 *)*((_QWORD *)v57 + 7);
      else
        v57 = (__int16 *)*((_QWORD *)v57 + 8);
      if ( !v57 )
      {
        v10 = a1;
        goto LABEL_71;
      }
    }
    v60 = v55 + *(_WORD *)a5;
    v61 = **(_WORD **)v57;
    v62 = *v59;
    v63 = v12 + 1;
    v64 = *v62;
    v65 = v12;
    v12 += 6;
    *(_WORD *)(a6 + 2 * v65) = v60;
    *(_WORD *)(a6 + 2 * v63) = *(_WORD *)a5 + v58 % v68;
    *(_WORD *)(a6 + 2 * v63 + 2) = v64;
    *(_WORD *)(a6 + 2 * v63 + 4) = v60;
    *(_WORD *)(a6 + 2 * v63 + 6) = v64;
    *(_WORD *)(a6 + 2 * v63 + 8) = v61;
LABEL_65:
    ++v55;
    ++v58;
    goto LABEL_66;
  }
  Mesh::GenerateGridAntialiasBorder(a1, a2, a3, (__int64)a4, &a7, a6, v66, &v68);
  v14 = a7;
  v12 = v68;
LABEL_3:
  *a5 = v14;
  result = a8;
  *a8 = v12;
  return result;
}
