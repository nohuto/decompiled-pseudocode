/*
 * XREFs of LdrpCondenseGraphRecurse @ 0x180029398
 * Callers:
 *     LdrpCondenseGraph @ 0x180028FB0 (LdrpCondenseGraph.c)
 *     LdrpCondenseGraphRecurse @ 0x180029398 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpCondenseGraphRecurse @ 0x180029398 (LdrpCondenseGraphRecurse.c)
 *     LdrpMergeNodes @ 0x18007ACF4 (LdrpMergeNodes.c)
 *     LdrpDestroyNode @ 0x180080A3C (LdrpDestroyNode.c)
 */

signed __int64 __fastcall LdrpCondenseGraphRecurse(__int64 a1, int *a2, unsigned __int64 **a3, __int64 a4)
{
  unsigned __int64 *v4; // r15
  int v5; // eax
  _QWORD *v9; // r14
  __int64 v10; // rsi
  signed __int64 result; // rax
  unsigned __int64 *v12; // rdx
  unsigned int v13; // eax
  unsigned __int64 *v14; // r8
  unsigned __int64 *v15; // rcx
  _QWORD *v16; // rbx
  _QWORD *v17; // rcx
  _QWORD *v18; // [rsp+40h] [rbp+8h] BYREF

  ++*a2;
  v4 = (unsigned __int64 *)(a1 + 64);
  v5 = *a2;
  *(_DWORD *)(a1 + 72) = *a2;
  *(_DWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 64) = *a3;
  v9 = *(_QWORD **)(a1 + 40);
  *a3 = (unsigned __int64 *)(a1 + 64);
  if ( v9 )
  {
    while ( 1 )
    {
      v9 = (_QWORD *)*v9;
      v10 = v9[1];
      if ( *(int *)(v10 + 56) <= 5 )
        break;
LABEL_3:
      if ( v9 == *(_QWORD **)(a1 + 40) )
        goto LABEL_4;
    }
    v13 = *(_DWORD *)(v10 + 72);
    if ( v13 )
    {
      if ( !*(_QWORD *)(v10 + 64) )
      {
LABEL_15:
        if ( *(_DWORD *)(v10 + 56) == -3 )
          *(_DWORD *)(a1 + 56) = -3;
        goto LABEL_3;
      }
    }
    else
    {
      LdrpCondenseGraphRecurse(v9[1], a2, a3);
      v13 = *(_DWORD *)(v10 + 32);
    }
    if ( *(_DWORD *)(a1 + 32) > v13 )
      *(_DWORD *)(a1 + 32) = v13;
    goto LABEL_15;
  }
LABEL_4:
  result = *(unsigned int *)(a1 + 72);
  if ( *(_DWORD *)(a1 + 32) == (_DWORD)result )
  {
    v12 = *a3;
    if ( *a3 )
      *a3 = (unsigned __int64 *)*v12;
    result = 0LL;
    if ( v4 != v12 )
    {
      do
      {
        v14 = *a3;
        *v12 = result;
        result = (signed __int64)v12;
        if ( v14 )
          *a3 = (unsigned __int64 *)*v14;
        v15 = v12;
        v12 = v14;
      }
      while ( v4 != v14 );
      v18 = (_QWORD *)result;
      if ( v15 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, (unsigned __int64)v14, v14, a4);
        LdrpMergeNodes(a1, &v18);
        result = RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
        v16 = v18;
        while ( v16 )
        {
          v17 = v16;
          v16 = (_QWORD *)*v16;
          result = LdrpDestroyNode(v17 - 8);
        }
      }
    }
    *v4 = 0LL;
    if ( *(_DWORD *)(a1 + 56) == 5 )
      *(_DWORD *)(a1 + 56) = 6;
  }
  return result;
}
