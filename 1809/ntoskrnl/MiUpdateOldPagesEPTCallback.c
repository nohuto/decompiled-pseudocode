/*
 * XREFs of MiUpdateOldPagesEPTCallback @ 0x1402B40E0
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUpdateOldPteWorker @ 0x1402B42D0 (MiUpdateOldPteWorker.c)
 */

__int64 __fastcall MiUpdateOldPagesEPTCallback(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 *v6; // r9
  __int64 v7; // rcx
  bool v8; // zf
  unsigned __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v5 = MI_READ_PTE_LOCK_FREE(a3);
  v7 = *v6;
  v13 = v5;
  if ( (v7 & 2) != 0 )
    v8 = (v5 & 0x20) == 0;
  else
    v8 = (v7 & 1) == 0;
  if ( v8 )
  {
    v9 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13);
    MiUpdateOldPteWorker(v11, v10, 48 * ((v9 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, a5);
  }
  return 0LL;
}
