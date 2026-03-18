/*
 * XREFs of PspJobDeleteStorageArrays @ 0x140697098
 * Callers:
 *     PspJobDelete @ 0x1400E6790 (PspJobDelete.c)
 * Callees:
 *     PspFreeStorage @ 0x1408CD70C (PspFreeStorage.c)
 *     PspStorageEmptyArray @ 0x1408CD7E8 (PspStorageEmptyArray.c)
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
