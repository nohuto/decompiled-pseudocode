/*
 * XREFs of WmipInsertMofResource @ 0x140752D24
 * Callers:
 *     WmipAddMofResource @ 0x140752B6C (WmipAddMofResource.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WmipReferenceEntry @ 0x140613C30 (WmipReferenceEntry.c)
 */

__int64 __fastcall WmipInsertMofResource(__int64 a1, ULONG_PTR a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ecx
  int v10; // r15d
  __int64 v11; // r14
  unsigned int v12; // r12d
  SIZE_T v13; // rdx
  unsigned __int64 v14; // rax
  size_t v15; // rbp
  char *PoolWithTag; // rax
  char *v17; // rdi
  __int64 v18; // [rsp+50h] [rbp+8h]

  v3 = 0LL;
  v4 = *(unsigned int *)(a1 + 64);
  if ( (_DWORD)v4 )
  {
    v6 = *(_QWORD *)(a1 + 72);
    do
    {
      v7 = *(_QWORD *)(v6 + 8 * v3);
      if ( v7 == a2 )
        return 0;
      if ( !v7 )
      {
        *(_QWORD *)(v6 + 8 * v3) = a2;
        break;
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < (unsigned int)v4 );
  }
  if ( (_DWORD)v3 != (_DWORD)v4 )
  {
LABEL_7:
    WmipReferenceEntry(a2);
    return 0;
  }
  v10 = v4 + 4;
  v18 = *(_QWORD *)(a1 + 72);
  v11 = 8 * v4;
  v12 = -1;
  v13 = 0xFFFFFFFFLL;
  if ( (unsigned __int64)(8 * v4) <= 0xFFFFFFFF )
    v12 = 8 * v4;
  v14 = 8LL * (unsigned int)(v4 + 4);
  if ( v14 <= 0xFFFFFFFF )
    v13 = (unsigned int)v14;
  v8 = v14 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v14 <= 0xFFFFFFFF )
  {
    v15 = (unsigned int)v13;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v13, 0x70696D57u);
    v17 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, v15);
    memmove(v17, *(const void **)(a1 + 72), v12);
    if ( v18 != a1 + 80 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 72), 0);
    *(_QWORD *)(a1 + 72) = v17;
    *(_QWORD *)&v17[v11] = a2;
    *(_DWORD *)(a1 + 64) = v10;
    goto LABEL_7;
  }
  return v8;
}
