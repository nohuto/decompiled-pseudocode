/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AVCFixPred@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C01D7014
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01D78D8 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall Prediction::operator*<Prediction::CFixPred,3>(char *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 *v3; // rdi
  __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  char v13; // [rsp+20h] [rbp+8h] BYREF

  *(_QWORD *)a1 = 0LL;
  v3 = a2;
  v5 = 3LL;
  do
  {
    v6 = *v3;
    v7 = *(unsigned __int64 *)((char *)v3 + a3 - (_QWORD)a2);
    v8 = (__int64)(v7 ^ *v3) >> 63;
    if ( (*v3 & 0x8000000000000000uLL) != 0LL )
      v6 = -(__int64)v6;
    if ( v7 < 0 )
      v7 = -v7;
    v9 = (unsigned int)v7 * (unsigned __int64)(unsigned int)v6;
    v10 = (v8 ^ ((unsigned int)(HIDWORD(v9) + v7 * HIDWORD(v6) + v6 * HIDWORD(v7)) | ((unsigned __int64)(unsigned int)((((unsigned int)(HIDWORD(v9) + v7 * HIDWORD(v6)) + (unsigned int)v6 * HIDWORD(v7)) >> 32) + HIDWORD(v6) * HIDWORD(v7) + ((HIDWORD(v9) + (unsigned int)v7 * HIDWORD(v6)) >> 32)) << 32)))
        - v8;
    if ( (_DWORD)v9 )
      v10 = v8 ^ ((unsigned int)(HIDWORD(v9) + v7 * HIDWORD(v6) + v6 * HIDWORD(v7)) | ((unsigned __int64)(unsigned int)((((unsigned int)(HIDWORD(v9) + v7 * HIDWORD(v6)) + (unsigned int)v6 * HIDWORD(v7)) >> 32) + HIDWORD(v6) * HIDWORD(v7) + ((HIDWORD(v9) + (unsigned int)v7 * HIDWORD(v6)) >> 32)) << 32));
    v11 = *(_QWORD *)a1 + v10;
    if ( a1 != &v13 )
      *(_QWORD *)a1 = v11;
    ++v3;
    --v5;
  }
  while ( v5 );
  return a1;
}
