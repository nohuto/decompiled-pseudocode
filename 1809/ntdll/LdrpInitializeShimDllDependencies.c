/*
 * XREFs of LdrpInitializeShimDllDependencies @ 0x180070688
 * Callers:
 *     LdrpLoadShimEngine @ 0x1800703EC (LdrpLoadShimEngine.c)
 * Callees:
 *     LdrpInitializeGraphRecurse @ 0x1800287D4 (LdrpInitializeGraphRecurse.c)
 *     ZwTerminateProcess @ 0x1800A0860 (ZwTerminateProcess.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 *     LdrpInitializationFailure @ 0x1800D2AE4 (LdrpInitializationFailure.c)
 */

__int64 *LdrpInitializeShimDllDependencies()
{
  __int64 *v0; // rcx
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 *v5; // rsi
  __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 *result; // rax
  char v9; // al
  int v10; // [rsp+30h] [rbp-99h]
  _QWORD v11[24]; // [rsp+40h] [rbp-89h] BYREF
  char v12; // [rsp+130h] [rbp+67h] BYREF
  unsigned int v13; // [rsp+138h] [rbp+6Fh] BYREF

  memset(v11, 0, sizeof(v11));
  v0 = (__int64 *)qword_1801653D0;
  v11[5] = &v13;
  LODWORD(v11[4]) = 0x80000;
  while ( v0 != &qword_1801653D0 )
  {
    if ( *(_DWORD *)(v0[19] + 56) == 7 && !v0[22] )
      v0[22] = (__int64)v11;
    v0 = (__int64 *)*v0;
  }
  v1 = qword_1801653D0;
  v2 = 0LL;
  v13 = 0;
  v3 = 0LL;
  while ( 1 )
  {
    if ( (__int64 *)v1 == &qword_1801653D0 )
      goto LABEL_18;
    v3 = v1;
    if ( (*(_DWORD *)(v1 + 104) & 0x100) != 0 )
    {
      v4 = *(_QWORD *)(v1 + 152);
      v5 = *(__int64 **)(v4 + 40);
      if ( v5 )
        break;
    }
LABEL_10:
    v1 = *(_QWORD *)v1;
  }
  v6 = *(__int64 **)(v4 + 40);
  while ( 1 )
  {
    v6 = (__int64 *)*v6;
    if ( (v6[3] & 1) == 0 )
    {
      v7 = v6[1];
      if ( *(_DWORD *)(v7 + 56) == 7 )
      {
        v12 = 0;
        v13 = LdrpInitializeGraphRecurse(v7, (__int64)&v13, &v12);
        v2 = v13;
        if ( (v13 & 0x80000000) != 0 )
          goto LABEL_18;
        goto LABEL_16;
      }
      if ( *(_DWORD *)(v7 + 56) == -4 )
        break;
    }
LABEL_16:
    if ( v6 == v5 )
      goto LABEL_10;
  }
  v2 = 3221225794LL;
  v13 = -1073741502;
LABEL_18:
  result = (__int64 *)qword_1801653D0;
  if ( (__int64 *)qword_1801653D0 != &qword_1801653D0 )
  {
    do
    {
      v3 = (__int64)result;
      if ( (_QWORD *)result[22] == v11 )
        result[22] = 0LL;
      result = (__int64 *)*result;
    }
    while ( result != &qword_1801653D0 );
    v2 = v13;
  }
  if ( (int)v2 < 0 )
  {
    v9 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      v10 = v2;
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        2546,
        (unsigned int)"LdrpInitializeShimDllDependencies",
        0,
        "Initializing a shim dependency \"%wZ\" failed with status 0x%08lx\n",
        v3 + 72,
        v10);
      v2 = v13;
      v9 = LdrpDebugFlags;
    }
    if ( (v9 & 0x10) != 0 )
      __debugbreak();
    LdrpInitializationFailure(v2);
    return (__int64 *)ZwTerminateProcess(-1LL, v13);
  }
  return result;
}
