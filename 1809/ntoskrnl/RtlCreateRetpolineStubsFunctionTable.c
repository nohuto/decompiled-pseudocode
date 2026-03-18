/*
 * XREFs of RtlCreateRetpolineStubsFunctionTable @ 0x1402F6810
 * Callers:
 *     MiInitializeRetpoline @ 0x1409DEFC8 (MiInitializeRetpoline.c)
 * Callees:
 *     RtlCalculateUnwindInfoSizeForRetpoline @ 0x1402F66F8 (RtlCalculateUnwindInfoSizeForRetpoline.c)
 *     RtlpGetRetpolineStubsFunctionTable @ 0x1402F6900 (RtlpGetRetpolineStubsFunctionTable.c)
 */

__int64 __fastcall RtlCreateRetpolineStubsFunctionTable(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v3; // rdi
  _DWORD *RetpolineStubsFunctionTable; // rsi
  __int64 result; // rax
  int v7; // r10d
  int v8; // r11d
  _DWORD *v9; // r14
  __int64 v10; // rbp
  int v11; // ecx
  int v12; // eax
  int v13; // r11d
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = a1;
  v3 = PsNtosImageBase;
  RetpolineStubsFunctionTable = (_DWORD *)RtlpGetRetpolineStubsFunctionTable(
                                            PsNtosImageBase,
                                            PsNtosImageBase,
                                            (_DWORD)a2,
                                            a3,
                                            (__int64)&v14);
  if ( !RetpolineStubsFunctionTable )
    return 3221226021LL;
  v7 = v14;
  if ( (unsigned int)v14 > 0x32 )
    return 2147483653LL;
  v8 = (_DWORD)a2 + *a2;
  if ( (_DWORD)v14 )
  {
    v9 = &unk_1405599E4;
    v10 = (unsigned int)v14;
    do
    {
      v11 = v3 + RetpolineStubsFunctionTable[1];
      *(v9 - 1) = v3 + *RetpolineStubsFunctionTable - (_DWORD)a2;
      *v9 = v11 - (_DWORD)a2;
      v9[1] = v8 - (_DWORD)a2;
      v12 = RtlCalculateUnwindInfoSizeForRetpoline(v3, (__int64)RetpolineStubsFunctionTable, 0LL);
      v9 += 3;
      v8 = v12 + v13;
      RetpolineStubsFunctionTable += 3;
      --v10;
    }
    while ( v10 );
  }
  RtlRetpolineStubsFunctionTableSize = 12 * v7;
  dword_1403FEDF0 = 12 * v7;
  result = 0LL;
  qword_1403FEDE8 = (__int64)&RtlRetpolineStubsFunctionTable;
  return result;
}
