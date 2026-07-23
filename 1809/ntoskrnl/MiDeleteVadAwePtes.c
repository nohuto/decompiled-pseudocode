/*
 * XREFs of MiDeleteVadAwePtes @ 0x1402B0708
 * Callers:
 *     MiDeleteVa @ 0x1400696F0 (MiDeleteVa.c)
 *     MiDeleteLargeUserPde @ 0x1402C76B0 (MiDeleteLargeUserPde.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteAwePtes @ 0x1402B2468 (MiWriteAwePtes.c)
 */

__int64 __fastcall MiDeleteVadAwePtes(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v4; // rbx
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx

  v4 = 0LL;
  if ( (MI_READ_PTE_LOCK_FREE(a2) & 1) != 0 )
  {
    v4 = 1LL;
    if ( *(_QWORD *)(v6 + 8) != 512LL )
      v4 = *(_QWORD *)(v6 + 8);
  }
  v7 = MiWriteAwePtes(v6, 0, 1, 0, (__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12], 0LL, v5);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 16);
    v9 = v7;
    while ( v8 )
    {
      v9 = v8;
      v8 = *(_QWORD *)(v8 + 16);
    }
    *(_QWORD *)(v9 + 16) = *a3;
    *a3 = v7;
  }
  return v4;
}
