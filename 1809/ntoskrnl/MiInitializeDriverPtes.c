/*
 * XREFs of MiInitializeDriverPtes @ 0x1409B9AAC
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1409B8C6C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlSetAllBits @ 0x14002BDF0 (RtlSetAllBits.c)
 *     MiIsImportOptimizationEnabled @ 0x1400DA590 (MiIsImportOptimizationEnabled.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

char *__fastcall MiInitializeDriverPtes(__int64 a1)
{
  __int64 *v1; // r8
  unsigned __int64 v2; // rsi
  __int64 *v3; // rdx
  unsigned __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  size_t v10; // r14
  char *result; // rax
  __int64 v12; // r15
  char *v13; // rbx
  unsigned int v14; // ecx

  v1 = (__int64 *)(a1 + 16);
  v2 = -1LL;
  v3 = *(__int64 **)(a1 + 16);
  v4 = 0LL;
  if ( v3 != (__int64 *)(a1 + 16) )
  {
    do
    {
      v5 = v3[6];
      v6 = v5 & 0xFFFFFFFFFFE00000uLL;
      if ( v2 <= (v5 & 0xFFFFFFFFFFE00000uLL) )
        v6 = v2;
      v2 = v6;
      v7 = *((unsigned int *)v3 + 16);
      v3 = (__int64 *)*v3;
      v8 = (v7 + v5 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
      if ( v4 >= v8 )
        v8 = v4;
      v4 = v8;
    }
    while ( v3 != v1 );
  }
  v9 = (v4 - v2) >> 16;
  v10 = (unsigned __int64)(unsigned int)v9 >> 3;
  result = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v10 + 40, 0x70446D4Du);
  v12 = (__int64)result;
  if ( result )
  {
    v13 = result + 40;
    memset(result + 40, 0, v10);
    *(_DWORD *)(v12 + 16) = v9;
    *(_QWORD *)(v12 + 24) = v13;
    RtlSetAllBits((PRTL_BITMAP)(v12 + 16));
    *(_DWORD *)(v12 + 32) = 0;
    *(_QWORD *)v12 = 0LL;
    *(_QWORD *)(v12 + 8) = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_DWORD *)(v12 + 36) = 1;
    qword_140439FC8[0] = v12;
    if ( MiIsImportOptimizationEnabled() )
      qword_14043B338 = (v4 - qword_14043B340) >> 21;
    return (char *)v14;
  }
  return result;
}
