/*
 * XREFs of ?vInitPageToDevice@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@PEAVMATRIX@@@Z @ 0x1C0119804
 * Callers:
 *     GreGetTransform @ 0x1C013CD40 (GreGetTransform.c)
 * Callees:
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 *     ?vComputeWtoDAccelFlags@EXFORMOBJ@@QEAAXXZ @ 0x1C0119790 (-vComputeWtoDAccelFlags@EXFORMOBJ@@QEAAXXZ.c)
 */

void __fastcall EXFORMOBJ::vInitPageToDevice(EXFORMOBJ *this, struct XDCOBJ *a2, struct MATRIX *a3)
{
  _DWORD *v4; // r8
  __int64 v5; // rax
  char v6; // r8

  *(_QWORD *)this = a3;
  *(_DWORD *)a3 = *(_DWORD *)(*(_QWORD *)a2 + 436LL);
  v4 = *(_DWORD **)this;
  v5 = *(_QWORD *)a2;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = *(_DWORD *)(v5 + 440);
  *(_DWORD *)(*(_QWORD *)this + 16LL) = *(_DWORD *)(*(_QWORD *)a2 + 444LL);
  *(_DWORD *)(*(_QWORD *)this + 20LL) = *(_DWORD *)(*(_QWORD *)a2 + 448LL);
  bFToL(*(float *)(*(_QWORD *)this + 16LL), (int *)(*(_QWORD *)this + 24LL), 6);
  bFToL(*(float *)(*(_QWORD *)this + 20LL), (int *)(*(_QWORD *)this + 28LL), v6);
  EXFORMOBJ::vComputeWtoDAccelFlags(this);
}
