/*
 * XREFs of SepCopyObjectTypeList @ 0x1402FEBEC
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepCopyObjectTypeList(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v6; // r14
  char *PoolWithTag; // rax
  char *v9; // rcx
  __int64 v10; // rdi
  __int128 v11; // xmm0

  *a3 = 0LL;
  if ( a2 )
  {
    v6 = a2;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 48LL * a2, 0x744F6553u);
    if ( !PoolWithTag )
      return 3221225626LL;
    if ( a2 )
    {
      v9 = PoolWithTag + 2;
      v10 = a1 - (_QWORD)PoolWithTag;
      do
      {
        *((_WORD *)v9 - 1) = *(_WORD *)&v9[v10 - 2];
        *(_WORD *)v9 = *(_WORD *)&v9[v10];
        *(_DWORD *)(v9 + 18) = *(_DWORD *)&v9[v10 + 18];
        v11 = *(_OWORD *)&v9[v10 + 2];
        *(_DWORD *)(v9 + 22) = 0;
        *(_DWORD *)(v9 + 26) = 0;
        *(_DWORD *)(v9 + 30) = 0;
        *(_QWORD *)(v9 + 38) = 0LL;
        *(_OWORD *)(v9 + 2) = v11;
        v9 += 48;
        --v6;
      }
      while ( v6 );
    }
    *a3 = PoolWithTag;
  }
  return 0LL;
}
