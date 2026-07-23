/*
 * XREFs of MiMarkKernelPageTablePte @ 0x1402AA980
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     PoSetHiberRange @ 0x1401448D0 (PoSetHiberRange.c)
 */

__int64 __fastcall MiMarkKernelPageTablePte(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  ULONG_PTR v4; // r9
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE(a2);
  v6 = v2;
  if ( (v2 & 1) != 0 && (v2 & 0x80u) == 0LL )
  {
    v3 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v6);
    PoSetHiberRange(0LL, 0x14000u, (PVOID)((v3 >> 12) & 0xFFFFFFFFFLL), v4, 0x706B6D4Du);
  }
  return 0LL;
}
