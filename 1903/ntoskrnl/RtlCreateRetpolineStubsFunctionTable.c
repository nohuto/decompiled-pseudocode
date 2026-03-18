/*
 * XREFs of RtlCreateRetpolineStubsFunctionTable @ 0x1401973A0
 * Callers:
 *     MiInitializeRetpoline @ 0x140A19958 (MiInitializeRetpoline.c)
 * Callees:
 *     RtlCalculateUnwindInfoSizeForRetpoline @ 0x140197488 (RtlCalculateUnwindInfoSizeForRetpoline.c)
 *     RtlpGetRetpolineStubsFunctionTable @ 0x1401974C0 (RtlpGetRetpolineStubsFunctionTable.c)
 */

__int64 __fastcall RtlCreateRetpolineStubsFunctionTable(__int64 a1, _DWORD *a2, int a3)
{
  PVOID v3; // rdi
  _DWORD *RetpolineStubsFunctionTable; // rsi
  int v6; // r10d
  int v7; // r11d
  _DWORD *v8; // r14
  __int64 v9; // rbp
  int v10; // ecx
  int v11; // eax
  int v12; // r11d
  __int64 result; // rax
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = a1;
  v3 = PsNtosImageBase;
  RetpolineStubsFunctionTable = (_DWORD *)RtlpGetRetpolineStubsFunctionTable(
                                            (_DWORD)PsNtosImageBase,
                                            (_DWORD)PsNtosImageBase,
                                            (_DWORD)a2,
                                            a3,
                                            (__int64)&v14);
  if ( !RetpolineStubsFunctionTable )
    return 3221226021LL;
  v6 = v14;
  if ( (unsigned int)v14 > 0x32 )
    return 2147483653LL;
  v7 = (_DWORD)a2 + *a2;
  if ( (_DWORD)v14 )
  {
    v8 = &unk_14058A9E4;
    v9 = (unsigned int)v14;
    do
    {
      v10 = (_DWORD)v3 + RetpolineStubsFunctionTable[1];
      *(v8 - 1) = (_DWORD)v3 + *RetpolineStubsFunctionTable - (_DWORD)a2;
      *v8 = v10 - (_DWORD)a2;
      v8[1] = v7 - (_DWORD)a2;
      v11 = RtlCalculateUnwindInfoSizeForRetpoline(v3, RetpolineStubsFunctionTable, 0LL);
      v8 += 3;
      v7 = v11 + v12;
      RetpolineStubsFunctionTable += 3;
      --v9;
    }
    while ( v9 );
  }
  RtlRetpolineStubsFunctionTableSize = 12 * v6;
  dword_140424DF0 = 12 * v6;
  result = 0LL;
  qword_140424DE8 = (__int64)&RtlRetpolineStubsFunctionTable;
  return result;
}
