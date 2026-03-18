/*
 * XREFs of ?bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z @ 0x1C026F1A0
 * Callers:
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C0145A64 (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 * Callees:
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 *     ?lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C01461EC (-lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 */

__int64 __fastcall bSplitTriangle(
        struct _TRIVERTEX *a1,
        unsigned int *a2,
        struct _GRADIENT_TRIANGLE *a3,
        unsigned int *a4,
        unsigned __int8 *a5)
{
  __int64 v7; // r12
  __int64 Vertex1; // rax
  ULONG Vertex2; // r8d
  ULONG Vertex3; // ecx
  __int64 v11; // rsi
  struct _TRIVERTEX *v12; // rdx
  __int64 v13; // rax
  LONG x; // r8d
  LONG y; // edx
  struct _TRIVERTEX *v16; // r9
  LONG v17; // r11d
  struct _TRIVERTEX *v18; // r14
  LONG v19; // r10d
  LONG v20; // r9d
  int v21; // eax
  int v22; // eax
  LONG v23; // ecx
  __int64 v24; // rdi
  int v25; // eax
  LONG v26; // r8d
  int v27; // ecx
  __int64 v28; // r13
  int v29; // eax
  __int64 v30; // r14
  int v31; // eax
  int v32; // r9d
  int v33; // eax
  int v34; // r8d
  __int64 v35; // rbx
  __int64 v36; // rdi
  __int64 v37; // r14
  __int64 v38; // rbx
  ULONG v39; // r13d
  ULONG v40; // r14d
  __int64 v41; // rsi
  ULONG v42; // edi
  unsigned __int64 v43; // rbx
  struct _TRIVERTEX *v44; // r12
  unsigned int v45; // r8d
  float v46; // xmm1_4
  int v47; // eax
  int v48; // eax
  float v49; // xmm1_4
  unsigned int v50; // r8d
  ULONG *v51; // r11
  unsigned int *v52; // r10
  ULONG v53; // r9d
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned __int8 *v57; // rax
  ULONG v59; // [rsp+28h] [rbp-51h]
  struct _TRIVERTEX v60; // [rsp+30h] [rbp-49h] BYREF
  __int64 v61; // [rsp+48h] [rbp-31h]
  __int64 v62; // [rsp+50h] [rbp-29h]
  unsigned __int64 v63; // [rsp+58h] [rbp-21h]
  struct _TRIVERTEX *v64; // [rsp+60h] [rbp-19h]
  struct _TRIVERTEX *v65; // [rsp+68h] [rbp-11h]
  struct _TRIVERTEX *v66; // [rsp+70h] [rbp-9h]
  __int64 v67; // [rsp+78h] [rbp-1h]
  __int64 v68; // [rsp+80h] [rbp+7h]
  struct _TRIVERTEX *v69; // [rsp+D8h] [rbp+5Fh] BYREF
  ULONG *v70; // [rsp+E0h] [rbp+67h]
  ULONG v71; // [rsp+E8h] [rbp+6Fh]
  unsigned int *v72; // [rsp+F0h] [rbp+77h]

  v72 = a4;
  v70 = a2;
  v69 = a1;
  v7 = *a4 - 1;
  Vertex1 = a3[*a4 - 1].Vertex1;
  Vertex2 = a3[*a4 - 1].Vertex2;
  Vertex3 = a3[*a4 - 1].Vertex3;
  v71 = Vertex1;
  v11 = Vertex3;
  v68 = Vertex1;
  *(_QWORD *)&v60.x = 16 * Vertex1;
  v59 = Vertex2;
  v12 = &a1[Vertex1];
  v13 = Vertex2;
  x = v12->x;
  v62 = 16 * v13;
  v66 = v12;
  y = v12->y;
  v16 = &a1[v13];
  v17 = v16->x;
  v63 = 16LL * Vertex3;
  v65 = v16;
  v18 = &a1[v63 / 0x10];
  v19 = v16->y;
  v20 = v18->x;
  v21 = v17 - x;
  v64 = v18;
  if ( x - v17 >= 0 )
    v21 = x - v17;
  v61 = v21;
  v22 = v19 - y;
  if ( y - v19 >= 0 )
    v22 = y - v19;
  v23 = x;
  v24 = v22;
  v25 = v20 - x;
  v26 = v18->y;
  v27 = v23 - v20;
  if ( v27 >= 0 )
    v25 = v27;
  v28 = v25;
  v29 = v26 - y;
  if ( y - v26 >= 0 )
    v29 = y - v26;
  v30 = v29;
  v31 = v17 - v20;
  v32 = v20 - v17;
  if ( v31 >= 0 )
    v32 = v31;
  v33 = v19 - v26;
  v34 = v26 - v19;
  v67 = v32;
  if ( v33 >= 0 )
    v34 = v33;
  v35 = v34;
  if ( (v61 > 0x4000 || v24 > 0x4000 || v28 > 0x4000 || v30 > 0x4000 || v32 > 0x4000LL || v34 > 0x4000LL)
    && (unsigned int)lCalculateTriangleArea(v66, v65, v64, 0LL) )
  {
    v36 = v61 * v61 + v24 * v24;
    v37 = v28 * v28 + v30 * v30;
    v38 = v67 * v67 + v35 * v35;
    if ( v36 <= v37 )
    {
      if ( v37 > v38 )
      {
        v40 = a3[v7].Vertex2;
        v42 = a3[v7].Vertex3;
        v43 = v63;
        v41 = *(_QWORD *)&v60.x;
        v39 = v71;
LABEL_31:
        v44 = v69;
        bFToL(
          (float)((float)((float)*(int *)((char *)&v69->x + v43) - (float)*(int *)((char *)&v69->x + v41)) * 0.5)
        + (float)*(int *)((char *)&v69->x + v41),
          &v60.x,
          6u);
        bFToL(
          (float)((float)((float)*(int *)((char *)&v44->y + v43) - (float)*(int *)((char *)&v44->y + v41)) * 0.5)
        + (float)*(int *)((char *)&v44->y + v41),
          &v60.y,
          v45);
        v46 = (float)*(unsigned __int16 *)((char *)&v44->Red + v41);
        bFToL(
          (float)((float)((float)*(unsigned __int16 *)((char *)&v44->Red + v43) - v46) * 0.5) + v46,
          (int *)&v69,
          6u);
        v47 = *(unsigned __int16 *)((char *)&v44->Green + v41);
        v60.Red = (unsigned __int16)v69;
        bFToL(
          (float)((float)((float)*(unsigned __int16 *)((char *)&v44->Green + v43) - (float)v47) * 0.5) + (float)v47,
          (int *)&v69,
          6u);
        v48 = *(unsigned __int16 *)((char *)&v44->Blue + v41);
        v60.Green = (unsigned __int16)v69;
        bFToL(
          (float)((float)((float)*(unsigned __int16 *)((char *)&v44->Blue + v43) - (float)v48) * 0.5) + (float)v48,
          (int *)&v69,
          6u);
        v60.Blue = (unsigned __int16)v69;
        v49 = (float)*(unsigned __int16 *)((char *)&v44->Alpha + v41);
        bFToL(
          (float)((float)((float)*(unsigned __int16 *)((char *)&v44->Alpha + v43) - v49) * 0.5) + v49,
          (int *)&v69,
          v50);
        v51 = v70;
        v52 = v72;
        v60.Alpha = (unsigned __int16)v69;
        v53 = *v70;
        v54 = *v72;
        v44[*v70] = v60;
        v55 = v54;
        a3[v55].Vertex1 = v39;
        a3[v55].Vertex2 = v40;
        a3[v55].Vertex3 = v53;
        v56 = (unsigned int)(v54 + 1);
        a3[v56].Vertex1 = v42;
        a3[v56].Vertex2 = v40;
        a3[v56].Vertex3 = v53;
        v57 = a5;
        a5[v54] = 1;
        v57[(unsigned int)(v54 + 1)] = 0;
        *v52 = v54 + 2;
        *v51 = v53 + 1;
        return 1LL;
      }
      v40 = a3[v7].Vertex1;
      v39 = a3[v7].Vertex3;
      v41 = v63;
    }
    else
    {
      if ( v36 > v38 )
      {
        v39 = v71;
        v40 = v11;
      }
      else
      {
        v39 = a3[v7].Vertex3;
        v40 = a3[v7].Vertex1;
      }
      if ( v36 > v38 )
        v11 = v68;
      v41 = 16 * v11;
    }
    v42 = v59;
    v43 = v62;
    goto LABEL_31;
  }
  return 0LL;
}
