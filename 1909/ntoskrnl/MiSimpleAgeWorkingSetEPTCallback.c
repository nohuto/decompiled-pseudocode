/*
 * XREFs of MiSimpleAgeWorkingSetEPTCallback @ 0x1402C8C40
 * Callers:
 *     <none>
 * Callees:
 *     MiAgePteWorker @ 0x14004D010 (MiAgePteWorker.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiSimpleAgeWorkingSetEPTCallback(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int *a5)
{
  __int64 v5; // rdi
  _QWORD *v7; // r10
  unsigned __int64 v8; // rax
  char v9; // r10
  int v10; // r11d
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 16);
  v12 = MI_READ_PTE_LOCK_FREE(a3);
  if ( (*v7 & 2) != 0 || (*v7 & 1) != 0 )
  {
    v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12);
    MiAgePteWorker(v5, v10, a4, 48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, a5, v9);
  }
  return 0LL;
}
