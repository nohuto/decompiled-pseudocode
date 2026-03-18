/*
 * XREFs of MiAgeWorkingSetEPTCallback @ 0x1402C7E70
 * Callers:
 *     <none>
 * Callees:
 *     MiAgePteWorker @ 0x14004CF70 (MiAgePteWorker.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiAgeWorkingSetEPTCallback(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rsi
  int v6; // ebx
  unsigned __int64 v7; // rax
  unsigned int *v8; // r10
  char v9; // r11
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v6 = a3;
  v11 = MI_READ_PTE_LOCK_FREE(a3);
  v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11);
  MiAgePteWorker(v4, v6, a4, 48 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, v8, v9);
  return 0LL;
}
