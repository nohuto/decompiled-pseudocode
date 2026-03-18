/*
 * XREFs of ?bSplitTriangle@@YAHPEAU_TRIVERTEX@@PEAKPEAU_GRADIENT_TRIANGLE@@1PEAE@Z @ 0x1C0287AD0
 * Callers:
 *     ?bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_RECTL@@4PEAU_POINTL@@@Z @ 0x1C01449EC (-bTriangleMesh@@YAHPEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAU_GRADIENT_TRIANGLE@@KKPEAU_R.c)
 * Callees:
 *     bFToL @ 0x1C01014BC (bFToL.c)
 *     ?lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z @ 0x1C014517C (-lCalculateTriangleArea@@YAJPEAU_TRIVERTEX@@00PEAU_TRIANGLEDATA@@@Z.c)
 */

__int64 __fastcall bSplitTriangle(
        struct _TRIVERTEX *a1,
        unsigned int *a2,
        struct _GRADIENT_TRIANGLE *a3,
        unsigned int *a4,
        unsigned __int8 *a5)
{
  __int64 v6; // rax
  __int64 v8; // r12
  __int64 Vertex1; // rax
  ULONG Vertex2; // r8d
  ULONG Vertex3; // ecx
  __int64 v12; // rsi
  struct _TRIVERTEX *v13; // rdx
  __int64 v14; // rax
  LONG x; // r8d
  LONG y; // edx
  struct _TRIVERTEX *v17; // r9
  LONG v18; // r11d
  struct _TRIVERTEX *v19; // r14
  LONG v20; // r10d
  LONG v21; // r9d
  int v22; // eax
  int v23; // eax
  LONG v24; // ecx
  __int64 v25; // rdi
  int v26; // eax
  LONG v27; // r8d
  int v28; // ecx
  __int64 v29; // r13
  int v30; // eax
  __int64 v31; // r14
  int v32; // eax
  int v33; // r9d
  int v34; // eax
  int v35; // r8d
  __int64 v36; // rbx
  __int64 v37; // rdi
  __int64 v38; // r14
  __int64 v39; // rbx
  ULONG v40; // r13d
  ULONG v41; // r14d
  __int64 v42; // rsi
  ULONG v43; // edi
  unsigned __int64 v44; // rbx
  struct _TRIVERTEX *v45; // r12
  unsigned int v46; // r8d
  float v47; // xmm1_4
  int v48; // eax
  int v49; // eax
  float v50; // xmm1_4
  unsigned int v51; // r8d
  ULONG *v52; // r11
  unsigned int *v53; // r10
  ULONG v54; // r9d
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned __int8 *v58; // rax
  ULONG v60; // [rsp+28h] [rbp-51h]
  struct _TRIVERTEX v61; // [rsp+30h] [rbp-49h] BYREF
  __int64 v62; // [rsp+40h] [rbp-39h]
  __int64 v63; // [rsp+48h] [rbp-31h]
  unsigned __int64 v64; // [rsp+50h] [rbp-29h]
  struct _TRIVERTEX *v65; // [rsp+58h] [rbp-21h]
  struct _TRIVERTEX *v66; // [rsp+60h] [rbp-19h]
  struct _TRIVERTEX *v67; // [rsp+68h] [rbp-11h]
  __int64 v68; // [rsp+70h] [rbp-9h]
  __int64 v69; // [rsp+78h] [rbp-1h]
  __int64 v70; // [rsp+80h] [rbp+7h]
  struct _TRIVERTEX *v71; // [rsp+D8h] [rbp+5Fh] BYREF
  ULONG *v72; // [rsp+E0h] [rbp+67h]
  ULONG v73; // [rsp+E8h] [rbp+6Fh]
  unsigned int *v74; // [rsp+F0h] [rbp+77h]

  v74 = a4;
  v72 = a2;
  v71 = a1;
  v6 = *a4 - 1;
  *(_QWORD *)&v61.x = 0LL;
  v8 = v6;
  Vertex1 = a3[v6].Vertex1;
  Vertex2 = a3[v8].Vertex2;
  Vertex3 = a3[v8].Vertex3;
  v73 = Vertex1;
  v12 = Vertex3;
  v69 = Vertex1;
  v70 = 16 * Vertex1;
  v60 = Vertex2;
  v13 = &a1[Vertex1];
  v14 = Vertex2;
  x = v13->x;
  v63 = 16 * v14;
  v67 = v13;
  y = v13->y;
  v17 = &a1[v14];
  v18 = v17->x;
  v64 = 16LL * Vertex3;
  v66 = v17;
  v19 = &a1[v64 / 0x10];
  v20 = v17->y;
  v21 = v19->x;
  v22 = v18 - x;
  v65 = v19;
  if ( x - v18 >= 0 )
    v22 = x - v18;
  v62 = v22;
  v23 = v20 - y;
  if ( y - v20 >= 0 )
    v23 = y - v20;
  v24 = x;
  v25 = v23;
  v26 = v21 - x;
  v27 = v19->y;
  v28 = v24 - v21;
  if ( v28 >= 0 )
    v26 = v28;
  v29 = v26;
  v30 = v27 - y;
  if ( y - v27 >= 0 )
    v30 = y - v27;
  v31 = v30;
  v32 = v18 - v21;
  v33 = v21 - v18;
  if ( v32 >= 0 )
    v33 = v32;
  v34 = v20 - v27;
  v35 = v27 - v20;
  v68 = v33;
  if ( v34 >= 0 )
    v35 = v34;
  v36 = v35;
  if ( (v62 > 0x4000 || v25 > 0x4000 || v29 > 0x4000 || v31 > 0x4000 || v33 > 0x4000LL || v35 > 0x4000LL)
    && (unsigned int)lCalculateTriangleArea(v67, v66, v65, 0LL) )
  {
    v37 = v62 * v62 + v25 * v25;
    v38 = v29 * v29 + v31 * v31;
    v39 = v68 * v68 + v36 * v36;
    if ( v37 <= v38 )
    {
      if ( v38 > v39 )
      {
        v41 = a3[v8].Vertex2;
        v43 = a3[v8].Vertex3;
        v44 = v64;
        v42 = v70;
        v40 = v73;
LABEL_31:
        v45 = v71;
        bFToL(
          (float)((float)((float)*(int *)((char *)&v71->x + v44) - (float)*(int *)((char *)&v71->x + v42)) * 0.5)
        + (float)*(int *)((char *)&v71->x + v42),
          &v61.x,
          6u);
        bFToL(
          (float)((float)((float)*(int *)((char *)&v45->y + v44) - (float)*(int *)((char *)&v45->y + v42)) * 0.5)
        + (float)*(int *)((char *)&v45->y + v42),
          &v61.y,
          v46);
        v47 = (float)*(unsigned __int16 *)((char *)&v45->Red + v42);
        bFToL(
          (float)((float)((float)*(unsigned __int16 *)((char *)&v45->Red + v44) - v47) * 0.5) + v47,
          (int *)&v71,
          6u);
        v48 = *(unsigned __int16 *)((char *)&v45->Green + v42);
        v61.Red = (unsigned __int16)v71;
        bFToL(
          (float)((float)((float)*(unsigned __int16 *)((char *)&v45->Green + v44) - (float)v48) * 0.5) + (float)v48,
          (int *)&v71,
          6u);
        v49 = *(unsigned __int16 *)((char *)&v45->Blue + v42);
        v61.Green = (unsigned __int16)v71;
        bFToL(
          (float)((float)((float)*(unsigned __int16 *)((char *)&v45->Blue + v44) - (float)v49) * 0.5) + (float)v49,
          (int *)&v71,
          6u);
        v61.Blue = (unsigned __int16)v71;
        v50 = (float)*(unsigned __int16 *)((char *)&v45->Alpha + v42);
        bFToL(
          (float)((float)((float)*(unsigned __int16 *)((char *)&v45->Alpha + v44) - v50) * 0.5) + v50,
          (int *)&v71,
          v51);
        v52 = v72;
        v53 = v74;
        v61.Alpha = (unsigned __int16)v71;
        v54 = *v72;
        v55 = *v74;
        v45[*v72] = v61;
        v56 = v55;
        a3[v56].Vertex1 = v40;
        a3[v56].Vertex2 = v41;
        a3[v56].Vertex3 = v54;
        v57 = (unsigned int)(v55 + 1);
        a3[v57].Vertex1 = v43;
        a3[v57].Vertex2 = v41;
        a3[v57].Vertex3 = v54;
        v58 = a5;
        a5[v55] = 1;
        v58[(unsigned int)(v55 + 1)] = 0;
        *v53 = v55 + 2;
        *v52 = v54 + 1;
        return 1LL;
      }
      v41 = a3[v8].Vertex1;
      v40 = a3[v8].Vertex3;
      v42 = v64;
    }
    else
    {
      if ( v37 > v39 )
      {
        v40 = v73;
        v41 = v12;
      }
      else
      {
        v40 = a3[v8].Vertex3;
        v41 = a3[v8].Vertex1;
      }
      if ( v37 > v39 )
        v12 = v69;
      v42 = 16 * v12;
    }
    v43 = v60;
    v44 = v63;
    goto LABEL_31;
  }
  return 0LL;
}
