/*
 * XREFs of WmipCachePtrs @ 0x140707F28
 * Callers:
 *     WmipGenerateRegistrationNotification @ 0x140707E48 (WmipGenerateRegistrationNotification.c)
 *     WmipUpdateDataSource @ 0x1408B4848 (WmipUpdateDataSource.c)
 * Callees:
 *     memmove @ 0x1401D1540 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall WmipCachePtrs(__int64 a1, __int64 a2, unsigned int *a3, int *a4, const void **a5)
{
  unsigned int v5; // r10d
  _QWORD *v10; // rdi
  __int64 v11; // rax
  unsigned __int64 result; // rax
  int v13; // ebx
  void *v14; // rbp

  v5 = *a3;
  if ( *a3 != *a4 )
  {
    v10 = *a5;
LABEL_3:
    v11 = 2LL * v5;
    v10[v11] = a1;
    v10[v11 + 1] = a2;
    result = v5 + 1;
    *a3 = result;
    return result;
  }
  result = (unsigned __int64)ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned int)(*a4 + 64), 0x70696D57u);
  v10 = (_QWORD *)result;
  if ( result )
  {
    v13 = *a4;
    v14 = (void *)*a5;
    memmove((void *)result, *a5, 16LL * (unsigned int)*a4);
    *a4 = v13 + 64;
    if ( v14 )
      ExFreePoolWithTag(v14, 0);
    v5 = *a3;
    *a5 = v10;
    goto LABEL_3;
  }
  return result;
}
