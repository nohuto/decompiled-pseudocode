/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_GETPROCESSLIST_PER_PROCESS@@$0EA@@@QEAAPEAU_D3DKMT_GETPROCESSLIST_PER_PROCESS@@I@Z @ 0x1C01D21E8
 * Callers:
 *     NtDxgkGetProcessList @ 0x1C01D7CC0 (NtDxgkGetProcessList.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 */

PVOID __fastcall PagedPoolZeroedArray<_D3DKMT_GETPROCESSLIST_PER_PROCESS,64>::AllocateElements(
        _DWORD *a1,
        unsigned int a2)
{
  __int64 v4; // rdi
  PVOID result; // rax

  v4 = a2;
  if ( a2 <= 0x40 )
  {
    result = a1 + 2;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
      return 0LL;
    result = ExAllocatePoolWithTag(PagedPool, 8LL * a2, 0x4B677844u);
  }
  *(_QWORD *)a1 = result;
  a1[130] = a2;
  if ( result )
  {
    memset(result, 0, 8 * v4);
    return *(PVOID *)a1;
  }
  return result;
}
