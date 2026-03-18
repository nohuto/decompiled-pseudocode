/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01EC3B4
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01ED108 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01ECBA8 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

__int64 __fastcall Prediction::operator*<Prediction::CFixPred,3>(__int64 a1, unsigned __int64 *a2, __int64 *a3)
{
  __int64 *v5; // r15
  __int64 v6; // rsi
  __int64 *v7; // rbp
  unsigned __int64 *v8; // r12
  __int64 *v9; // r13
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  unsigned __int64 v13; // rbx
  __int64 v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  int v17; // edx
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  char *v21; // r8
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+28h] [rbp-50h]
  char v28; // [rsp+30h] [rbp-48h] BYREF
  __int64 v31; // [rsp+98h] [rbp+20h]

  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>();
  v5 = a3;
  v6 = a1 - (_QWORD)a2 - (_QWORD)a3;
  v27 = 3LL;
  do
  {
    v7 = v5;
    v26 = 3LL;
    do
    {
      v8 = a2;
      v31 = 3LL;
      v9 = v7;
      do
      {
        v10 = *v8;
        v11 = *v9;
        v12 = (__int64)(*v9 ^ *v8) >> 63;
        if ( (*v8 & 0x8000000000000000uLL) != 0LL )
          v10 = -(__int64)v10;
        if ( v11 < 0 )
          v11 = -v11;
        v13 = (unsigned int)v11 * (unsigned __int64)(unsigned int)v10;
        v14 = (unsigned int)v10;
        v15 = HIDWORD(v11);
        v16 = HIDWORD(v13) + (unsigned int)v11 * HIDWORD(v10);
        v17 = HIDWORD(v10) * v15 + HIDWORD(v16);
        v18 = (unsigned int)v16 + v14 * v15;
        v19 = (unsigned int)v18;
        v20 = HIDWORD(v18);
        v21 = (char *)v7 + (_QWORD)a2 + v6;
        v22 = v12 ^ (v19 | ((unsigned __int64)(unsigned int)(v20 + v17) << 32));
        v23 = v22 - v12;
        if ( (_DWORD)v13 )
          v23 = v22;
        v24 = *(_QWORD *)v21 + v23;
        if ( v21 != &v28 )
          *(_QWORD *)v21 = v24;
        ++v8;
        v9 += 3;
        --v31;
      }
      while ( v31 );
      ++v7;
      --v26;
    }
    while ( v26 );
    v5 = a3;
    a2 += 3;
    --v27;
  }
  while ( v27 );
  return a1;
}
