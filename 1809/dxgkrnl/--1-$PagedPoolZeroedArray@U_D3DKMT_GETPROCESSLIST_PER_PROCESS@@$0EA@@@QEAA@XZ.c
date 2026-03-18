/*
 * XREFs of ??1?$PagedPoolZeroedArray@U_D3DKMT_GETPROCESSLIST_PER_PROCESS@@$0EA@@@QEAA@XZ @ 0x1C01D21A8
 * Callers:
 *     NtDxgkGetProcessList @ 0x1C01D7CC0 (NtDxgkGetProcessList.c)
 * Callees:
 *     <none>
 */

void __fastcall PagedPoolZeroedArray<_D3DKMT_GETPROCESSLIST_PER_PROCESS,64>::~PagedPoolZeroedArray<_D3DKMT_GETPROCESSLIST_PER_PROCESS,64>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 != (void *)(a1 + 8) && v2 )
    ExFreePoolWithTag(v2, 0);
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 520) = 0;
}
