/*
 * XREFs of LdrpInitializeGraphRecurse @ 0x1800287D4
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x1800094D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpInitializeGraphRecurse @ 0x1800287D4 (LdrpInitializeGraphRecurse.c)
 *     LdrpPrepareModuleForExecution @ 0x1800294E4 (LdrpPrepareModuleForExecution.c)
 *     LdrpInitializeShimDllDependencies @ 0x180070688 (LdrpInitializeShimDllDependencies.c)
 *     LdrpInitializeImportRedirection @ 0x180084E4C (LdrpInitializeImportRedirection.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     AVrfInitializeVerifier @ 0x1800DACE8 (AVrfInitializeVerifier.c)
 * Callees:
 *     LdrpInitializeNode @ 0x180028428 (LdrpInitializeNode.c)
 *     LdrpInitializeGraphRecurse @ 0x1800287D4 (LdrpInitializeGraphRecurse.c)
 */

__int64 __fastcall LdrpInitializeGraphRecurse(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 **v6; // rsi
  char v7; // al
  __int64 **v8; // rdi
  __int64 *v9; // rcx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 56) == -4 )
    return 3221225794LL;
  v6 = *(__int64 ***)(a1 + 40);
  v7 = 0;
  v13 = 0;
  if ( v6 )
  {
    v8 = v6;
    do
    {
      v8 = (__int64 **)*v8;
      if ( ((_BYTE)v8[3] & 1) == 0 )
      {
        v9 = v8[1];
        if ( *((_DWORD *)v9 + 14) == 7 )
        {
          result = LdrpInitializeGraphRecurse(v9, a2, &v13);
          if ( (int)result < 0 )
            goto LABEL_20;
          v7 = v13;
        }
        else
        {
          if ( *((_DWORD *)v9 + 14) == -4 )
          {
            result = 3221225794LL;
            goto LABEL_13;
          }
          if ( *((_DWORD *)v9 + 14) == 8 )
            v7 = 1;
          v13 = v7;
        }
      }
    }
    while ( v8 != v6 );
    if ( v7 )
    {
      v11 = *(_QWORD *)a1;
      *a3 = 1;
      v12 = *(_QWORD *)(v11 + 16);
      if ( v12 )
      {
        if ( a2 != *(_QWORD *)(v12 + 40) )
        {
          result = 0LL;
          goto LABEL_13;
        }
      }
    }
  }
  result = LdrpInitializeNode(a1);
LABEL_13:
  if ( (int)result < 0 )
LABEL_20:
    *(_DWORD *)(a1 + 56) = -4;
  return result;
}
