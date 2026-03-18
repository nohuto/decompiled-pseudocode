/*
 * XREFs of RtlCopyRetpolineStubsUnwindInfo @ 0x140314E14
 * Callers:
 *     MiApplyRetpolineFixupsToKernelAndHal @ 0x1409F00AC (MiApplyRetpolineFixupsToKernelAndHal.c)
 * Callees:
 *     RtlCalculateUnwindInfoSizeForRetpoline @ 0x140197AF0 (RtlCalculateUnwindInfoSizeForRetpoline.c)
 *     RtlpGetRetpolineStubsFunctionTable @ 0x140197B28 (RtlpGetRetpolineStubsFunctionTable.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 */

__int64 __fastcall RtlCopyRetpolineStubsUnwindInfo(unsigned __int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  int v5; // r13d
  __int64 RetpolineStubsFunctionTable; // rdi
  unsigned int v9; // r14d
  char *v10; // rbx
  int v11; // esi
  unsigned int v12; // eax
  __int64 v13; // r15
  _DWORD v14[4]; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+78h] [rbp+10h]
  unsigned int v16; // [rsp+80h] [rbp+18h] BYREF

  v15 = a2;
  v5 = a4;
  RetpolineStubsFunctionTable = RtlpGetRetpolineStubsFunctionTable(a1, a2, a4, *a3, (int *)&v16);
  if ( !RetpolineStubsFunctionTable )
    return 3221226021LL;
  v9 = 0;
  v10 = (char *)a3 + *a3;
  v11 = 0;
  if ( !v16 )
    return 0LL;
  while ( 1 )
  {
    v12 = RtlCalculateUnwindInfoSizeForRetpoline(a1, RetpolineStubsFunctionTable, v14);
    v9 += v12;
    if ( v9 > 0x1F4 )
      break;
    v13 = v12;
    memmove(v10, (const void *)(a1 + *(unsigned int *)(RetpolineStubsFunctionTable + 8)), v12);
    if ( v14[0] )
      *(_DWORD *)&v10[v14[0]] += v15 - v5;
    v10 += v13;
    RetpolineStubsFunctionTable += 12LL;
    if ( ++v11 >= v16 )
      return 0LL;
  }
  return 2147483653LL;
}
