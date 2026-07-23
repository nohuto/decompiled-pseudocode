/*
 * XREFs of MiCrashdumpRemovePte @ 0x1402AE370
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiCrashdumpRemovePte(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int8 v3; // r10
  unsigned __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  if ( a3 < 1 )
  {
    v8 = MI_READ_PTE_LOCK_FREE(a2);
    if ( ((unsigned __int8)v8 & v3) != 0 )
    {
      v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v8) >> 12) & 0xFFFFFFFFFLL;
      if ( (*(_QWORD *)(48 * v4 - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL) == v6 )
        (*(void (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD))(*(_QWORD *)(v5 + 168) + 8LL))(
          *(_QWORD *)(v5 + 168),
          v4,
          (unsigned int)v6,
          (unsigned int)(v6 + 1));
    }
  }
  return 0LL;
}
