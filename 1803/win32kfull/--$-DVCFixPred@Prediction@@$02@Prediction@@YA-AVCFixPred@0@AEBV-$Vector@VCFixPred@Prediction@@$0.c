/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AVCFixPred@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C01B470C
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01B4FD8 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall Prediction::operator*<Prediction::CFixPred,3>(char *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 *v4; // rdi
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // rsi
  unsigned int v11; // r9d
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  char v19; // [rsp+20h] [rbp+8h] BYREF

  *(_QWORD *)a1 = 0LL;
  v3 = a3 - (_QWORD)a2;
  v4 = a2;
  v6 = 3LL;
  do
  {
    v7 = *v4;
    v8 = *(__int64 *)((char *)v4 + v3);
    v9 = *v4;
    v10 = (v8 ^ *v4) >> 63;
    if ( *v4 < 0 )
      v9 = -v9;
    v11 = *(__int64 *)((char *)v4 + v3);
    v12 = -v7;
    if ( v7 >= 0 )
      v12 = *v4;
    if ( v8 < 0 )
      v11 = -(int)v8;
    v13 = HIDWORD(v12);
    v14 = -v8;
    if ( v8 >= 0 )
      v14 = *(__int64 *)((char *)v4 + v3);
    v15 = v11 * (unsigned __int64)v9;
    v16 = (v10 ^ ((HIDWORD(v15) + v11 * (_DWORD)v13 + v9 * HIDWORD(v14)) | ((unsigned __int64)(unsigned int)(((HIDWORD(v15) + v11 * (unsigned int)v13 + v9 * HIDWORD(v14)) >> 32) + v13 * HIDWORD(v14) + ((HIDWORD(v15) + v11 * v13) >> 32)) << 32)))
        - v10;
    if ( (_DWORD)v15 )
      v16 = v10 ^ ((HIDWORD(v15) + v11 * (_DWORD)v13 + v9 * HIDWORD(v14)) | ((unsigned __int64)(unsigned int)(((HIDWORD(v15) + v11 * (unsigned int)v13 + v9 * HIDWORD(v14)) >> 32) + v13 * HIDWORD(v14) + ((HIDWORD(v15) + v11 * v13) >> 32)) << 32));
    v17 = *(_QWORD *)a1 + v16;
    if ( a1 != &v19 )
      *(_QWORD *)a1 = v17;
    ++v4;
    --v6;
  }
  while ( v6 );
  return a1;
}
