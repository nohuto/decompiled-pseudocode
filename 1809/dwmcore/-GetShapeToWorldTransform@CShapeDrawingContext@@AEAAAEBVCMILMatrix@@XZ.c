/*
 * XREFs of ?GetShapeToWorldTransform@CShapeDrawingContext@@AEAAAEBVCMILMatrix@@XZ @ 0x18022320C
 * Callers:
 *     ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x1802236D4 (-PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18003066C (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 */

const struct CMILMatrix *__fastcall CShapeDrawingContext::GetShapeToWorldTransform(CShapeDrawingContext *this)
{
  char *v1; // rdi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rax
  int v6; // xmm1_4
  int v7; // xmm0_4
  int v8; // xmm1_4
  int v9; // xmm0_4
  _DWORD v11[6]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v12; // [rsp+38h] [rbp-38h]
  __int64 v13; // [rsp+40h] [rbp-30h]
  int v14; // [rsp+48h] [rbp-28h]
  int v15; // [rsp+4Ch] [rbp-24h]
  int v16; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+54h] [rbp-1Ch]
  int v18; // [rsp+58h] [rbp-18h]
  int v19; // [rsp+5Ch] [rbp-14h]
  int v20; // [rsp+60h] [rbp-10h]

  v1 = (char *)this + 436;
  if ( *((_BYTE *)this + 537) )
  {
    v3 = *((_DWORD *)this + 22);
    v20 = 0;
    v11[2] = 0;
    v11[3] = 0;
    v12 = 0LL;
    v13 = 0LL;
    v4 = 3LL * (unsigned int)(v3 - 1);
    v5 = *((_QWORD *)this + 8);
    v15 = 0;
    v18 = 0;
    v14 = 1065353216;
    v6 = *(_DWORD *)(v5 + 8 * v4 + 4);
    v11[0] = *(_DWORD *)(v5 + 8 * v4);
    v7 = *(_DWORD *)(v5 + 8 * v4 + 12);
    v11[1] = v6;
    v11[4] = *(_DWORD *)(v5 + 8 * v4 + 8);
    v8 = *(_DWORD *)(v5 + 8 * v4 + 16);
    v11[5] = v7;
    v9 = *(_DWORD *)(v5 + 8 * v4 + 20);
    v16 = v8;
    v17 = v9;
    v19 = 1065353216;
    CMILMatrix::Multiply(
      (const struct CMILMatrix *)v11,
      (CShapeDrawingContext *)((char *)this + 368),
      (CShapeDrawingContext *)((char *)this + 436));
    *((_BYTE *)this + 537) = 0;
  }
  return (const struct CMILMatrix *)v1;
}
