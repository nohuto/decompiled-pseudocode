/*
 * XREFs of PnpSetInterruptInformation @ 0x14075A4C4
 * Callers:
 *     PnpSetDevicePropertyData @ 0x140708478 (PnpSetDevicePropertyData.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpSetInterruptInformation(__int64 a1, const void *a2, unsigned int a3)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rax
  void *v9; // rcx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a3 + 4, 0x47706E50u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = a3;
  memmove(PoolWithTag + 1, a2, a3);
  v8 = *(_QWORD *)(a1 + 312);
  v9 = *(void **)(v8 + 88);
  *(_QWORD *)(v8 + 88) = v7;
  if ( v9 )
    ExFreePoolWithTag(v9, 0x47706E50u);
  return 0LL;
}
