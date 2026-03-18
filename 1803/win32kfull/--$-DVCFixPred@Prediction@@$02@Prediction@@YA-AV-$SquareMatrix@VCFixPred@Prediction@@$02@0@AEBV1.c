/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C01B421C
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01B4FD8 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01B4AB4 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

__int64 __fastcall Prediction::operator*<Prediction::CFixPred,3>(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v5; // r15
  __int64 v6; // rsi
  __int64 *v7; // rbp
  __int64 *v8; // r12
  __int64 *v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // r14
  unsigned int v14; // r9d
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // r11d
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rcx
  char *v23; // r8
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+28h] [rbp-50h]
  char v29; // [rsp+30h] [rbp-48h] BYREF
  __int64 v32; // [rsp+98h] [rbp+20h]

  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>();
  v5 = a3;
  v6 = a1 - (_QWORD)a2 - (_QWORD)a3;
  v28 = 3LL;
  do
  {
    v7 = v5;
    v27 = 3LL;
    do
    {
      v8 = a2;
      v32 = 3LL;
      v9 = v7;
      do
      {
        v10 = *v8;
        v11 = *v9;
        v12 = *v8;
        v13 = (*v9 ^ *v8) >> 63;
        if ( *v8 < 0 )
          v12 = -v12;
        v14 = *v9;
        v15 = -v10;
        if ( v10 >= 0 )
          v15 = *v8;
        if ( v11 < 0 )
          v14 = -(int)v11;
        v16 = HIDWORD(v15);
        v17 = -v11;
        v18 = v14;
        v19 = v12;
        v20 = v16;
        if ( v11 >= 0 )
          v17 = *v9;
        v21 = v18 * v12;
        v22 = HIDWORD(v21) + v18 * v16;
        v23 = (char *)v7 + (_QWORD)a2 + v6;
        v24 = (v13 ^ ((unsigned int)(v22 + v19 * HIDWORD(v17)) | ((unsigned __int64)(unsigned int)(((unsigned __int64)((unsigned int)v22 + v19 * HIDWORD(v17)) >> 32)
                                                                                                 + v20 * HIDWORD(v17)
                                                                                                 + HIDWORD(v22)) << 32)))
            - v13;
        if ( (_DWORD)v21 )
          v24 = v13 ^ ((unsigned int)(v22 + v19 * HIDWORD(v17)) | ((unsigned __int64)(unsigned int)(((unsigned __int64)((unsigned int)v22 + v19 * HIDWORD(v17)) >> 32)
                                                                                                  + v20 * HIDWORD(v17)
                                                                                                  + HIDWORD(v22)) << 32));
        v25 = *(_QWORD *)v23 + v24;
        if ( v23 != &v29 )
          *(_QWORD *)v23 = v25;
        ++v8;
        v9 += 3;
        --v32;
      }
      while ( v32 );
      ++v7;
      --v27;
    }
    while ( v27 );
    v5 = a3;
    a2 += 3;
    --v28;
  }
  while ( v28 );
  return a1;
}
