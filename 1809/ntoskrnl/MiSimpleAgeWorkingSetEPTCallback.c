/*
 * XREFs of MiSimpleAgeWorkingSetEPTCallback @ 0x1402B3C70
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAgePteWorker @ 0x14006B2B0 (MiAgePteWorker.c)
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

  v5 = *(_QWORD *)(a1 + 24);
  v12 = MI_READ_PTE_LOCK_FREE(a3);
  if ( (*v7 & 2) != 0 || (*v7 & 1) != 0 )
  {
    v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12);
    MiAgePteWorker(v5, v10, a4, 48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, a5, v9);
  }
  return 0LL;
}
