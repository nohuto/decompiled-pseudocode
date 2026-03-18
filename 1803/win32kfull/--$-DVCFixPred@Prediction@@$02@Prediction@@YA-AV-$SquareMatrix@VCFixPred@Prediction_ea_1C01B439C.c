/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1C01B439C
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01B4FD8 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01B4AB4 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

char *__fastcall Prediction::operator*<Prediction::CFixPred,3>(char *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // r14
  char *v7; // rdi
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rbp
  unsigned int v14; // r9d
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rax
  char v21; // [rsp+50h] [rbp+8h] BYREF

  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>();
  v6 = a2 - (_QWORD)a1;
  v7 = a1;
  v8 = 3LL;
  do
  {
    v9 = 3LL;
    do
    {
      v10 = *(_QWORD *)&v7[v6];
      v11 = *a3;
      v12 = v10;
      v13 = (*a3 ^ v10) >> 63;
      if ( v10 < 0 )
        v12 = -(int)v10;
      v14 = *a3;
      v15 = -v10;
      if ( v10 >= 0 )
        v15 = *(_QWORD *)&v7[v6];
      if ( v11 < 0 )
        v14 = -(int)v11;
      v16 = HIDWORD(v15);
      v17 = -v11;
      if ( v11 >= 0 )
        v17 = *a3;
      v18 = v14 * (unsigned __int64)v12;
      v19 = (v13 ^ ((HIDWORD(v18) + v14 * (_DWORD)v16 + v12 * HIDWORD(v17)) | ((unsigned __int64)(unsigned int)(((HIDWORD(v18) + v14 * (unsigned int)v16 + v12 * HIDWORD(v17)) >> 32) + v16 * HIDWORD(v17) + ((HIDWORD(v18) + v14 * v16) >> 32)) << 32)))
          - v13;
      if ( (_DWORD)v18 )
        v19 = v13 ^ ((HIDWORD(v18) + v14 * (_DWORD)v16 + v12 * HIDWORD(v17)) | ((unsigned __int64)(unsigned int)(((HIDWORD(v18) + v14 * (unsigned int)v16 + v12 * HIDWORD(v17)) >> 32) + v16 * HIDWORD(v17) + ((HIDWORD(v18) + v14 * v16) >> 32)) << 32));
      if ( v7 != &v21 )
        *(_QWORD *)v7 = v19;
      v7 += 8;
      --v9;
    }
    while ( v9 );
    --v8;
  }
  while ( v8 );
  return a1;
}
