/*
 * XREFs of ?SetTransforms@CProjectedShadow@@QEAAXAEBVCMILMatrix@@00@Z @ 0x1801F0A38
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180006990 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     <none>
 */

void __fastcall CProjectedShadow::SetTransforms(
        CProjectedShadow *this,
        const struct CMILMatrix *a2,
        const struct CMILMatrix *a3,
        const struct CMILMatrix *a4)
{
  int v4; // xmm0_4
  int v5; // eax
  __int64 v6; // rax
  __int128 v7; // [rsp+20h] [rbp-30h]
  __int128 v8; // [rsp+30h] [rbp-20h]

  *((_OWORD *)this + 6) = *(_OWORD *)a2;
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 9) = *((_OWORD *)a2 + 3);
  *((_DWORD *)this + 40) = *((_DWORD *)a2 + 16);
  LODWORD(v7) = *(_DWORD *)a3;
  DWORD2(v7) = *((_DWORD *)a3 + 3);
  DWORD1(v7) = *((_DWORD *)a3 + 1);
  LODWORD(v8) = *((_DWORD *)a3 + 5);
  HIDWORD(v7) = *((_DWORD *)a3 + 4);
  DWORD1(v8) = *((_DWORD *)a3 + 7);
  DWORD2(v8) = *((_DWORD *)a3 + 12);
  v4 = *((_DWORD *)a3 + 15);
  HIDWORD(v8) = *((_DWORD *)a3 + 13);
  *(_OWORD *)((char *)this + 164) = v7;
  *(_OWORD *)((char *)this + 180) = v8;
  *((_DWORD *)this + 49) = v4;
  LODWORD(v7) = *(_DWORD *)a4;
  DWORD2(v7) = *((_DWORD *)a4 + 3);
  DWORD1(v7) = *((_DWORD *)a4 + 1);
  HIDWORD(v7) = *((_DWORD *)a4 + 4);
  LODWORD(v8) = *((_DWORD *)a4 + 5);
  DWORD1(v8) = *((_DWORD *)a4 + 7);
  *((_QWORD *)&v8 + 1) = *((_QWORD *)a4 + 6);
  v5 = *((_DWORD *)a4 + 15);
  *(_OWORD *)((char *)this + 200) = v7;
  *(_OWORD *)((char *)this + 216) = v8;
  *((_DWORD *)this + 58) = v5;
  v6 = *(_QWORD *)this;
  *((_QWORD *)this + 11) = *(_QWORD *)(*((_QWORD *)this + 2) + 384LL);
  (*(void (__fastcall **)(CProjectedShadow *, __int64, CProjectedShadow *))(v6 + 64))(this, 5LL, this);
}
