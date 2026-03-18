/*
 * XREFs of ?bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z @ 0x1C025B980
 * Callers:
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C0123F9C (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 * Callees:
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 *     ?lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C0124710 (-lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 */

__int64 __fastcall bSplitTriangle(
        struct _TRIVERTEX *a1,
        unsigned int *a2,
        struct _GRADIENT_TRIANGLE *a3,
        unsigned int *a4,
        unsigned __int8 *a5)
{
  __int64 v7; // r12
  ULONG Vertex2; // edx
  ULONG Vertex3; // ecx
  __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // edx
  struct _TRIVERTEX *v13; // r10
  LONG x; // r11d
  LONG y; // r10d
  struct _TRIVERTEX *v16; // r14
  int v17; // r8d
  LONG v18; // r9d
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  __int64 v22; // rdi
  int v23; // eax
  LONG v24; // edx
  int v25; // ecx
  __int64 v26; // r13
  int v27; // eax
  __int64 v28; // r14
  int v29; // eax
  int v30; // r9d
  int v31; // eax
  int v32; // edx
  __int64 v33; // rbx
  __int64 v34; // rdi
  __int64 v35; // r14
  __int64 v36; // rbx
  ULONG v37; // r13d
  ULONG v38; // r14d
  __int64 v39; // rsi
  unsigned __int64 v40; // rbx
  struct _TRIVERTEX *v41; // rdi
  char v42; // r8
  float v43; // xmm1_4
  int v44; // eax
  int v45; // eax
  float v46; // xmm1_4
  char v47; // r8
  unsigned int *v48; // r11
  ULONG *v49; // rbx
  __int64 v50; // r8
  ULONG v51; // r9d
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int8 *v54; // rax
  ULONG v56; // [rsp+28h] [rbp-51h]
  struct _TRIVERTEX v57; // [rsp+30h] [rbp-49h] BYREF
  __int64 v58; // [rsp+48h] [rbp-31h]
  __int64 v59; // [rsp+50h] [rbp-29h]
  unsigned __int64 v60; // [rsp+58h] [rbp-21h]
  struct _TRIVERTEX *v61; // [rsp+60h] [rbp-19h]
  struct _TRIVERTEX *v62; // [rsp+68h] [rbp-11h]
  struct _TRIVERTEX *v63; // [rsp+70h] [rbp-9h]
  __int64 v64; // [rsp+78h] [rbp-1h]
  __int64 v65; // [rsp+80h] [rbp+7h]
  struct _TRIVERTEX *v66; // [rsp+D8h] [rbp+5Fh] BYREF
  ULONG *v67; // [rsp+E0h] [rbp+67h]
  ULONG Vertex1; // [rsp+E8h] [rbp+6Fh]
  unsigned int *v69; // [rsp+F0h] [rbp+77h]

  v69 = a4;
  v67 = a2;
  v66 = a1;
  v7 = *a4 - 1;
  Vertex2 = a3[*a4 - 1].Vertex2;
  Vertex3 = a3[*a4 - 1].Vertex3;
  Vertex1 = a3[*a4 - 1].Vertex1;
  v10 = Vertex3;
  v65 = Vertex1;
  *(_QWORD *)&v57.x = 16LL * Vertex1;
  v56 = Vertex2;
  v11 = Vertex2;
  v12 = *(LONG *)((char *)&a1->x + *(_QWORD *)&v57.x);
  v59 = 16 * v11;
  v63 = (struct _TRIVERTEX *)((char *)a1 + *(_QWORD *)&v57.x);
  v13 = &a1[v11];
  x = v13->x;
  v60 = 16LL * Vertex3;
  v62 = v13;
  y = v13->y;
  v16 = &a1[v60 / 0x10];
  v17 = *(LONG *)((char *)&a1->y + *(_QWORD *)&v57.x);
  v18 = v16->x;
  v19 = x - v12;
  v61 = v16;
  if ( v12 - x >= 0 )
    v19 = v12 - x;
  v58 = v19;
  v20 = y - v17;
  if ( v17 - y >= 0 )
    v20 = v17 - y;
  v21 = v12;
  v22 = v20;
  v23 = v18 - v12;
  v24 = v16->y;
  v25 = v21 - v18;
  if ( v25 >= 0 )
    v23 = v25;
  v26 = v23;
  v27 = v24 - v17;
  if ( v17 - v24 >= 0 )
    v27 = v17 - v24;
  v28 = v27;
  v29 = x - v18;
  v30 = v18 - x;
  if ( v29 >= 0 )
    v30 = v29;
  v31 = y - v24;
  v32 = v24 - y;
  v64 = v30;
  if ( v31 >= 0 )
    v32 = v31;
  v33 = v32;
  if ( (v58 > 0x4000 || v22 > 0x4000 || v26 > 0x4000 || v28 > 0x4000 || v30 > 0x4000LL || v32 > 0x4000LL)
    && (unsigned int)lCalculateTriangleArea(v63, v62, v61, 0LL) )
  {
    v34 = v58 * v58 + v22 * v22;
    v35 = v26 * v26 + v28 * v28;
    v36 = v64 * v64 + v33 * v33;
    if ( v34 <= v35 )
    {
      if ( v35 > v36 )
      {
        v38 = a3[v7].Vertex2;
        v40 = v60;
        v39 = *(_QWORD *)&v57.x;
        v37 = Vertex1;
        v56 = a3[v7].Vertex3;
LABEL_31:
        v41 = v66;
        bFToL(
          (float)((float)((float)*(int *)((char *)&v66->x + v40) - (float)*(int *)((char *)&v66->x + v39)) * 0.5)
        + (float)*(int *)((char *)&v66->x + v39),
          &v57.x,
          6);
        bFToL(
          (float)((float)((float)*(int *)((char *)&v41->y + v40) - (float)*(int *)((char *)&v41->y + v39)) * 0.5)
        + (float)*(int *)((char *)&v41->y + v39),
          &v57.y,
          v42);
        v43 = (float)*(unsigned __int16 *)((char *)&v41->Red + v39);
        bFToL((float)((float)((float)*(unsigned __int16 *)((char *)&v41->Red + v40) - v43) * 0.5) + v43, (int *)&v66, 6);
        v44 = *(unsigned __int16 *)((char *)&v41->Green + v39);
        v57.Red = (unsigned __int16)v66;
        bFToL(
          (float)((float)((float)*(unsigned __int16 *)((char *)&v41->Green + v40) - (float)v44) * 0.5) + (float)v44,
          (int *)&v66,
          6);
        v45 = *(unsigned __int16 *)((char *)&v41->Blue + v39);
        v57.Green = (unsigned __int16)v66;
        bFToL(
          (float)((float)((float)*(unsigned __int16 *)((char *)&v41->Blue + v40) - (float)v45) * 0.5) + (float)v45,
          (int *)&v66,
          6);
        v57.Blue = (unsigned __int16)v66;
        v46 = (float)*(unsigned __int16 *)((char *)&v41->Alpha + v39);
        bFToL(
          (float)((float)((float)*(unsigned __int16 *)((char *)&v41->Alpha + v40) - v46) * 0.5) + v46,
          (int *)&v66,
          v47);
        v48 = v69;
        v49 = v67;
        v57.Alpha = (unsigned __int16)v66;
        v50 = *v69;
        v51 = *v67;
        v41[*v67] = v57;
        v52 = v50;
        a3[v52].Vertex1 = v37;
        a3[v52].Vertex2 = v38;
        a3[v52].Vertex3 = v51;
        v53 = (unsigned int)(v50 + 1);
        a3[v53].Vertex1 = v56;
        a3[v53].Vertex2 = v38;
        a3[v53].Vertex3 = v51;
        v54 = a5;
        a5[v50] = 1;
        v54[(unsigned int)(v50 + 1)] = 0;
        *v48 = v50 + 2;
        *v49 = v51 + 1;
        return 1LL;
      }
      v38 = a3[v7].Vertex1;
      v37 = a3[v7].Vertex3;
      v39 = v60;
    }
    else
    {
      if ( v34 > v36 )
      {
        v37 = Vertex1;
        v38 = v10;
      }
      else
      {
        v37 = a3[v7].Vertex3;
        v38 = a3[v7].Vertex1;
      }
      if ( v34 > v36 )
        v10 = v65;
      v39 = 16 * v10;
    }
    v40 = v59;
    goto LABEL_31;
  }
  return 0LL;
}
