/*
 * XREFs of IopRearrangeReqList @ 0x140758EF4
 * Callers:
 *     PnpGetResourceRequirementsForAssignTable @ 0x1406FC3D4 (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpRestoreResourcesInternal @ 0x14083C784 (PnpRestoreResourcesInternal.c)
 * Callees:
 *     qsort @ 0x140196420 (qsort.c)
 */

unsigned __int64 __fastcall IopRearrangeReqList(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // rdi
  unsigned __int64 *v4; // rsi
  unsigned __int64 v5; // rdx
  unsigned __int64 *j; // rcx
  unsigned int i; // edx
  unsigned int v8; // eax

  result = *(unsigned int *)(a1 + 32);
  v2 = 0LL;
  if ( (unsigned int)result > 1 )
  {
    for ( i = 0; i < v8; ++i )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8LL * i + 40) + 4LL) = i;
      v8 = *(_DWORD *)(a1 + 32);
    }
    v4 = (unsigned __int64 *)(a1 + 40);
    qsort((void *)(a1 + 40), v8, 8uLL, IopCompareReqAlternativePriority);
    result = *(unsigned int *)(a1 + 32);
  }
  else
  {
    v4 = (unsigned __int64 *)(a1 + 40);
  }
  v5 = (unsigned __int64)&v4[result];
  for ( j = v4; (unsigned __int64)j < v5; ++j )
  {
    result = *j;
    if ( *(_DWORD *)*j > 0x7FFFu )
      break;
  }
  if ( j != v4 )
    v2 = j;
  *(_QWORD *)(a1 + 24) = v2;
  return result;
}
