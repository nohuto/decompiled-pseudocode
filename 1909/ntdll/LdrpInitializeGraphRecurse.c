/*
 * XREFs of LdrpInitializeGraphRecurse @ 0x1800699C8
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpPrepareModuleForExecution @ 0x18002A958 (LdrpPrepareModuleForExecution.c)
 *     LdrpInitializeShimDllDependencies @ 0x180069520 (LdrpInitializeShimDllDependencies.c)
 *     LdrpInitializeGraphRecurse @ 0x1800699C8 (LdrpInitializeGraphRecurse.c)
 *     LdrpInitializeImportRedirection @ 0x180080C84 (LdrpInitializeImportRedirection.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     AVrfInitializeVerifier @ 0x1800D8C38 (AVrfInitializeVerifier.c)
 * Callees:
 *     LdrpInitializeGraphRecurse @ 0x1800699C8 (LdrpInitializeGraphRecurse.c)
 *     LdrpInitializeNode @ 0x180069AA4 (LdrpInitializeNode.c)
 */

__int64 __fastcall LdrpInitializeGraphRecurse(__int64 *a1, __int64 a2, _BYTE *a3)
{
  __int64 **v6; // rsi
  char v7; // al
  __int64 **v8; // rdi
  __int64 *v9; // rcx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)a1 + 14) == -4 )
    return 3221225794LL;
  v6 = (__int64 **)a1[5];
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
            goto LABEL_19;
          v7 = v13;
        }
        else
        {
          if ( *((_DWORD *)v9 + 14) == -4 )
          {
            result = 3221225794LL;
            goto LABEL_19;
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
      v11 = *a1;
      *a3 = 1;
      v12 = *(_QWORD *)(v11 + 16);
      if ( v12 )
      {
        if ( a2 != *(_QWORD *)(v12 + 40) )
          return 0LL;
      }
    }
  }
  result = LdrpInitializeNode(a1);
  if ( (int)result < 0 )
LABEL_19:
    *((_DWORD *)a1 + 14) = -4;
  return result;
}
