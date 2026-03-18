/*
 * XREFs of ?GenerateAntialiasBorder@Mesh@@AEBAX_NAEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHPEAGH3@Z @ 0x1800B9D10
 * Callers:
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHGPEAG3@Z @ 0x18008D034 (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedSpan@UVerte.c)
 * Callees:
 *     ?GenerateGridAntialiasBorder@Mesh@@AEBAX_NAEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHPEAGH3@Z @ 0x1800B9E2C (-GenerateGridAntialiasBorder@Mesh@@AEBAX_NAEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedS.c)
 *     sqrtf_0 @ 0x1800F01DB (sqrtf_0.c)
 */

_DWORD *__fastcall Mesh::GenerateAntialiasBorder(
        __int64 a1,
        char a2,
        _QWORD *a3,
        _QWORD *a4,
        int *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  _QWORD *v8; // rsi
  _QWORD *v9; // rbp
  __int64 v10; // r13
  int v11; // r11d
  int v12; // r12d
  int v13; // eax
  _DWORD *result; // rax
  __int64 v15; // rdi
  __int64 v16; // rbx
  float v17; // xmm11_4
  char v18; // cl
  float v19; // xmm12_4
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rdx
  bool v24; // zf
  float v25; // xmm4_4
  int v26; // r8d
  float v27; // xmm3_4
  int v28; // r9d
  float v29; // xmm9_4
  float v30; // xmm10_4
  __int64 v31; // r10
  __int64 v32; // rbp
  __int64 v33; // r14
  __int64 v34; // rsi
  float v35; // xmm7_4
  float v36; // xmm6_4
  int v37; // eax
  float v38; // xmm5_4
  float v39; // xmm2_4
  float v40; // xmm1_4
  int v41; // eax
  float v42; // xmm2_4
  float v43; // xmm0_4
  float v44; // xmm1_4
  int v45; // ecx
  float v46; // xmm2_4
  float v47; // xmm1_4
  float v48; // xmm6_4
  float v49; // xmm7_4
  float v50; // xmm1_4
  float v51; // xmm2_4
  __int64 v52; // rdi
  int v53; // esi
  __int16 *v54; // rbx
  char v55; // r15
  int v56; // ebp
  __int16 **v57; // rcx
  __int16 v58; // r11
  __int16 v59; // r10
  __int16 *v60; // rax
  __int64 v61; // rcx
  __int16 v62; // r9
  __int64 v63; // rax
  int v64; // [rsp+40h] [rbp-D8h]
  int v65; // [rsp+44h] [rbp-D4h]
  int v66; // [rsp+44h] [rbp-D4h]
  int v67; // [rsp+48h] [rbp-D0h]
  __int64 v68; // [rsp+50h] [rbp-C8h]
  char v70; // [rsp+128h] [rbp+10h]

  v70 = a2;
  v8 = a4;
  v9 = a3;
  v10 = a1;
  v11 = *a5;
  v64 = *a5;
  a7 = *a5;
  v12 = *a8;
  v67 = *a8;
  v65 = *a8;
  if ( (*(_BYTE *)(a1 + 76) & 0x30) != 0x20 )
  {
    v15 = *(_QWORD *)(a1 + 16);
    v66 = 0;
    v16 = *(_QWORD *)(v15 + 64);
    if ( v16 )
    {
      do
      {
        if ( (*(_BYTE *)(v16 + 28) & 0xC) != 0 )
        {
          v17 = *(float *)(v16 + 16);
          v18 = 0;
          v24 = (*(_BYTE *)(v16 + 28) & 2) == 0;
          v19 = *(float *)(v16 + 20);
          LOBYTE(a7) = 0;
          if ( v24 )
          {
            v20 = *(_QWORD *)(v16 + 48);
            v21 = *(_QWORD *)(v16 + 56);
          }
          else
          {
            LODWORD(v17) ^= _xmm;
            v18 = 1;
            LODWORD(v19) ^= _xmm;
            v20 = *(_QWORD *)(v16 + 56);
            v21 = *(_QWORD *)(v16 + 48);
            LOBYTE(a7) = 1;
          }
          v68 = v21;
          v22 = v20;
          if ( v20 )
          {
            while ( 1 )
            {
              v23 = 0LL;
              if ( v22 == v20 )
                break;
              if ( v22 != v21 || (v23 = *(_QWORD *)(v16 + 80), (*(_BYTE *)(v23 + 28) & 0xC) != 0xC) )
              {
LABEL_19:
                v25 = 0.0;
                v26 = *((_DWORD *)v9 + 2);
                v27 = 0.0;
                v28 = *((_DWORD *)v8 + 2);
                v29 = 0.0;
                v30 = 0.0;
                v31 = *v9 + v26 * **(_DWORD **)v22;
                v32 = 0LL;
                v33 = *v8 + **(_DWORD **)v22 * v28;
                v34 = 0LL;
                if ( v70 && (*(_BYTE *)(v16 + 28) & 0xC) == 0xC )
                {
                  ++v66;
                  v64 = v11 + 1;
                  v34 = *a3 + v11 * v26;
                  v32 = *a4 + v11 * v28;
                  *(_OWORD *)v34 = *(_OWORD *)v31;
                  *(_OWORD *)v32 = *(_OWORD *)v33;
                  *(_DWORD *)(v32 + 12) = 0;
                  if ( *(char *)(v10 + 76) >= 0 )
                    *(_DWORD *)(v34 + 12) = 0;
                  else
                    *(_BYTE *)(v34 + 15) = 0;
                }
                v35 = v19 * 0.5;
                v36 = v17 * -0.5;
                if ( v23 )
                {
                  v37 = *(_DWORD *)(v23 + 28);
                  v38 = *(float *)(v23 + 16);
                  v39 = *(float *)(v23 + 20);
                  if ( (v37 & 2) != 0 )
                  {
                    LODWORD(v38) ^= _xmm;
                    LODWORD(v39) ^= _xmm;
                  }
                  v40 = (float)(v39 * v36) + (float)(v38 * v35);
                  v35 = v38 * v40;
                  v36 = v39 * v40;
                  if ( (v37 & 0xC) != 0 )
                  {
                    v41 = *(_DWORD *)(v23 + 28) & 8;
                    v42 = (float)((float)(v39 * v17) - (float)(v38 * v19)) * 0.5;
                    v43 = v17 * v42;
                    v44 = v19 * v42;
                    v45 = *(_DWORD *)(v23 + 28) & 4;
                    if ( v45 )
                    {
                      v25 = 0.0 - v43;
                      v27 = 0.0 - v44;
                    }
                    else if ( v41 )
                    {
                      v25 = v43 + 0.0;
                      v27 = v44 + 0.0;
                    }
                    if ( v34 )
                    {
                      if ( v41 )
                      {
                        v29 = v43 + 0.0;
                        v30 = v44 + 0.0;
                      }
                      else if ( v45 )
                      {
                        v29 = 0.0 - v43;
                        v30 = 0.0 - v44;
                      }
                    }
                  }
                }
                if ( (*(_BYTE *)(v16 + 28) & 4) != 0 )
                {
                  v25 = v25 - v35;
                  v27 = v27 - v36;
                }
                else if ( (*(_BYTE *)(v16 + 28) & 8) != 0 )
                {
                  v25 = v25 + v35;
                  v27 = v27 + v36;
                }
                v46 = v25 + *(float *)v33;
                v47 = v27 + *(float *)(v33 + 4);
                *(_DWORD *)(v31 + 8) = 1065353216;
                *(float *)v31 = v46;
                *(float *)(v31 + 4) = v47;
                *(float *)(v33 + 8) = sqrtf_0((float)(v27 * v27) + (float)(v25 * v25));
                if ( v34 )
                {
                  v48 = v36 + v30;
                  v49 = v35 + v29;
                  v50 = v48 + *(float *)(v32 + 4);
                  v51 = v49 + *(float *)v32;
                  *(_DWORD *)(v34 + 8) = 1065353216;
                  *(float *)(v34 + 4) = v50;
                  *(float *)v34 = v51;
                  *(float *)(v32 + 8) = sqrtf_0((float)(v48 * v48) + (float)(v49 * v49));
                }
                v18 = a7;
                v9 = a3;
                v8 = a4;
                v11 = v64;
                goto LABEL_44;
              }
              if ( v23 != *(_QWORD *)(*(_QWORD *)(v10 + 16) + 64LL) )
              {
                v24 = (*(_BYTE *)(v16 + 28) & 0xC) == 12;
LABEL_18:
                if ( v24 )
                  goto LABEL_19;
              }
LABEL_44:
              if ( v18 )
                v22 = *(_QWORD *)(v22 + 56);
              else
                v22 = *(_QWORD *)(v22 + 64);
              v21 = v68;
              if ( !v22 )
                goto LABEL_48;
            }
            v23 = *(_QWORD *)(v16 + 72);
            if ( (*(_BYTE *)(v23 + 28) & 0xC) != 0xC )
              goto LABEL_19;
            if ( (*(_BYTE *)(v16 + 28) & 0xC) != 0xC )
              goto LABEL_44;
            v24 = v16 == *(_QWORD *)(*(_QWORD *)(v10 + 16) + 64LL);
            goto LABEL_18;
          }
        }
LABEL_48:
        v15 = *(_QWORD *)(v10 + 16);
        v16 = *(_QWORD *)(v16 + 80);
      }
      while ( v16 != *(_QWORD *)(v15 + 64) && v16 );
      v12 = v67;
      a2 = v70;
    }
    if ( !a2 || (v52 = *(_QWORD *)(v15 + 64), v53 = 0, !v52) )
    {
LABEL_73:
      v13 = v64;
      goto LABEL_3;
    }
    while ( 1 )
    {
      if ( (*(_BYTE *)(v52 + 28) & 0xC) == 0xC )
      {
        if ( (*(_BYTE *)(v52 + 28) & 2) != 0 )
        {
          v54 = *(__int16 **)(v52 + 56);
          v55 = 1;
        }
        else
        {
          v54 = *(__int16 **)(v52 + 48);
          v55 = 0;
        }
        if ( v54 )
          break;
      }
LABEL_71:
      v52 = *(_QWORD *)(v52 + 80);
      if ( v52 == *(_QWORD *)(*(_QWORD *)(v10 + 16) + 64LL) || !v52 )
        goto LABEL_73;
    }
    v56 = v53 + 1;
    while ( 1 )
    {
      v57 = (__int16 **)(v55 ? *((_QWORD *)v54 + 7) : *((_QWORD *)v54 + 8));
      if ( v57 )
        break;
      if ( (*(_BYTE *)(*(_QWORD *)(v52 + 80) + 28LL) & 0xC) != 0xC )
        goto LABEL_65;
LABEL_66:
      if ( v55 )
        v54 = (__int16 *)*((_QWORD *)v54 + 7);
      else
        v54 = (__int16 *)*((_QWORD *)v54 + 8);
      if ( !v54 )
      {
        v10 = a1;
        goto LABEL_71;
      }
    }
    v58 = v53 + *(_WORD *)a5;
    v59 = **(_WORD **)v54;
    v60 = *v57;
    v61 = v12 + 1;
    v62 = *v60;
    v63 = v12;
    v12 += 6;
    *(_WORD *)(a6 + 2 * v63) = v58;
    *(_WORD *)(a6 + 2 * v61) = *(_WORD *)a5 + v56 % v66;
    *(_WORD *)(a6 + 2 * v61 + 2) = v62;
    *(_WORD *)(a6 + 2 * v61 + 4) = v58;
    *(_WORD *)(a6 + 2 * v61 + 6) = v62;
    *(_WORD *)(a6 + 2 * v61 + 8) = v59;
LABEL_65:
    ++v53;
    ++v56;
    goto LABEL_66;
  }
  Mesh::GenerateGridAntialiasBorder(a1, a2, (_DWORD)a3, (_DWORD)a4, (__int64)&a7, a6);
  v13 = a7;
  v12 = v65;
LABEL_3:
  *a5 = v13;
  result = a8;
  *a8 = v12;
  return result;
}
