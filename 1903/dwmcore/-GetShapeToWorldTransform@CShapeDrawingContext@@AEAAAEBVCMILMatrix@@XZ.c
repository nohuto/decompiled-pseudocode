/*
 * XREFs of ?GetShapeToWorldTransform@CShapeDrawingContext@@AEAAAEBVCMILMatrix@@XZ @ 0x180253414
 * Callers:
 *     ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x180253928 (-PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180071850 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 */

const struct CMILMatrix *__fastcall CShapeDrawingContext::GetShapeToWorldTransform(CShapeDrawingContext *this)
{
  struct CMILMatrix *v1; // rdi
  __int64 v3; // rax
  int v4; // xmm0_4
  int v5; // xmm1_4
  int v6; // xmm0_4
  int v7; // xmm1_4
  int v8; // xmm0_4
  _DWORD v10[6]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+38h] [rbp-38h]
  __int64 v12; // [rsp+40h] [rbp-30h]
  int v13; // [rsp+48h] [rbp-28h]
  int v14; // [rsp+4Ch] [rbp-24h]
  int v15; // [rsp+50h] [rbp-20h]
  int v16; // [rsp+54h] [rbp-1Ch]
  int v17; // [rsp+58h] [rbp-18h]
  int v18; // [rsp+5Ch] [rbp-14h]
  int v19; // [rsp+60h] [rbp-10h]

  v1 = (CShapeDrawingContext *)((char *)this + 428);
  if ( *((_BYTE *)this + 529) )
  {
    v3 = *((_QWORD *)this + 9);
    v19 = 0;
    v10[2] = 0;
    v10[3] = 0;
    v4 = *(_DWORD *)(v3 - 24);
    v5 = *(_DWORD *)(v3 - 20);
    v11 = 0LL;
    v12 = 0LL;
    v14 = 0;
    v17 = 0;
    v10[0] = v4;
    v6 = *(_DWORD *)(v3 - 12);
    v10[1] = v5;
    v10[4] = *(_DWORD *)(v3 - 16);
    v7 = *(_DWORD *)(v3 - 8);
    v10[5] = v6;
    v8 = *(_DWORD *)(v3 - 4);
    v15 = v7;
    v16 = v8;
    v13 = 1065353216;
    v18 = 1065353216;
    CMILMatrix::Multiply((const struct CMILMatrix *)v10, (CShapeDrawingContext *)((char *)this + 360), v1);
    *((_BYTE *)this + 529) = 0;
  }
  return v1;
}
