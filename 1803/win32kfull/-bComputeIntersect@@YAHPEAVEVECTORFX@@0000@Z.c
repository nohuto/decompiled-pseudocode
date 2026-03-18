/*
 * XREFs of ?bComputeIntersect@@YAHPEAVEVECTORFX@@0000@Z @ 0x1C012095C
 * Callers:
 *     ?vAddJoin@WIDENER@@IEAAXH@Z @ 0x1C012149C (-vAddJoin@WIDENER@@IEAAXH@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0096D1C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 */

_BOOL8 __fastcall bComputeIntersect(
        struct EVECTORFX *a1,
        struct EVECTORFX *a2,
        struct EVECTORFX *a3,
        struct EVECTORFX *a4,
        struct EVECTORFX *a5)
{
  float v6; // xmm6_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  _DWORD *v9; // r8
  float v10; // xmm4_4
  float v11; // xmm5_4
  float v12; // xmm3_4
  char v13; // r8
  struct EVECTORFX *v14; // rcx
  int v15; // edx
  int v16; // r9d
  _BOOL8 result; // rax
  float v18; // [rsp+40h] [rbp+8h] BYREF
  int v19; // [rsp+44h] [rbp+Ch] BYREF

  v6 = (float)*(int *)a4;
  v7 = (float)*((int *)a2 + 1);
  v8 = (float)(v6 * v7) + (float)((float)*(int *)a2 * (float)-*((_DWORD *)a4 + 1));
  v18 = v8;
  result = 0;
  if ( !EFLOAT::bIsZero((EFLOAT *)&v18) )
  {
    v12 = (float)((float)((float)(v9[1] - *((_DWORD *)a1 + 1)) * v6) + (float)((float)(*v9 - *(_DWORD *)a1) * v10)) / v8;
    if ( (unsigned int)bFToL(v12 * v11, (int *)&v18, 6) )
    {
      if ( (unsigned int)bFToL(v7 * v12, &v19, v13) )
      {
        if ( (unsigned int)(LODWORD(v18) + 0x3FFFFFFF) <= 0x7FFFFFFD && (unsigned int)(v19 + 0x3FFFFFFF) <= 0x7FFFFFFD )
        {
          v14 = a5;
          v15 = LODWORD(v18) + *(_DWORD *)a1;
          v16 = v19 + *((_DWORD *)a1 + 1);
          *(_DWORD *)a5 = v15;
          *((_DWORD *)v14 + 1) = v16;
          if ( (unsigned int)(v15 + 0x3FFFFFFF) <= 0x7FFFFFFD && (unsigned int)(v16 + 0x3FFFFFFF) <= 0x7FFFFFFD )
            return 1;
        }
      }
    }
  }
  return result;
}
