/*
 * XREFs of PspJobDeleteStorageArrays @ 0x1406077C8
 * Callers:
 *     PspJobDelete @ 0x14008FD50 (PspJobDelete.c)
 * Callees:
 *     PspFreeStorage @ 0x140890598 (PspFreeStorage.c)
 *     PspStorageEmptyArray @ 0x140890674 (PspStorageEmptyArray.c)
 */

__int64 __fastcall PspJobDeleteStorageArrays(__int64 a1)
{
  __int64 v1; // rdi
  ULONG_PTR v3; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1288);
  if ( v1 )
  {
    PspStorageEmptyArray(*(_QWORD *)(a1 + 1288));
    v3 = *(_QWORD *)(v1 + 512);
    if ( v3 )
      PspStorageEmptyArray(v3);
    result = PspFreeStorage(*(PVOID *)(a1 + 1288));
    *(_QWORD *)(a1 + 1288) = 0LL;
  }
  return result;
}
