/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@@Z @ 0x1C01B45D8
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01B4FD8 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01B4B10 (--0-$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

char *__fastcall Prediction::operator*<Prediction::CFixPred,3>(char *a1, __int64 a2, __int64 *a3)
{
  char *v4; // r14
  __int64 v5; // r13
  __int64 v6; // rdi
  __int64 *v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // rbp
  unsigned int v13; // r9d
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  char v23; // [rsp+78h] [rbp+20h] BYREF

  v4 = a1;
  Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>();
  v5 = 3LL;
  v6 = a2 - (_QWORD)a3;
  do
  {
    v7 = a3;
    v8 = 3LL;
    do
    {
      v9 = *(__int64 *)((char *)v7 + v6);
      v10 = *v7;
      v11 = v9;
      v12 = (v9 ^ *v7) >> 63;
      if ( v9 < 0 )
        v11 = -(int)v9;
      v13 = *v7;
      v14 = -v9;
      if ( v9 >= 0 )
        v14 = *(__int64 *)((char *)v7 + v6);
      if ( v10 < 0 )
        v13 = -(int)v10;
      v15 = HIDWORD(v14);
      v16 = -v10;
      if ( v10 >= 0 )
        v16 = *v7;
      v17 = v13 * (unsigned __int64)v11;
      v18 = (v12 ^ ((HIDWORD(v17) + v13 * (_DWORD)v15 + v11 * HIDWORD(v16)) | ((unsigned __int64)(unsigned int)(((HIDWORD(v17) + v13 * (unsigned int)v15 + v11 * HIDWORD(v16)) >> 32) + v15 * HIDWORD(v16) + ((HIDWORD(v17) + v13 * v15) >> 32)) << 32)))
          - v12;
      if ( (_DWORD)v17 )
        v18 = v12 ^ ((HIDWORD(v17) + v13 * (_DWORD)v15 + v11 * HIDWORD(v16)) | ((unsigned __int64)(unsigned int)(((HIDWORD(v17) + v13 * (unsigned int)v15 + v11 * HIDWORD(v16)) >> 32) + v15 * HIDWORD(v16) + ((HIDWORD(v17) + v13 * v15) >> 32)) << 32));
      v19 = *(_QWORD *)v4 + v18;
      if ( v4 != &v23 )
        *(_QWORD *)v4 = v19;
      ++v7;
      --v8;
    }
    while ( v8 );
    v4 += 8;
    v6 += 24LL;
    --v5;
  }
  while ( v5 );
  return a1;
}
