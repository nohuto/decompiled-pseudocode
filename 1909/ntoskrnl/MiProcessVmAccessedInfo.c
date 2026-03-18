/*
 * XREFs of MiProcessVmAccessedInfo @ 0x1402C87FC
 * Callers:
 *     MiTrimWorkingSetTail @ 0x140089D80 (MiTrimWorkingSetTail.c)
 *     MiAgeWorkingSetTail @ 0x140099350 (MiAgeWorkingSetTail.c)
 *     MiResetAccessBitsTail @ 0x140179890 (MiResetAccessBitsTail.c)
 *     MiSimpleAgeWorkingSetTail @ 0x1402C8CE0 (MiSimpleAgeWorkingSetTail.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x1402C9330 (MiUpdateOldWorkingSetPagesTail.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetWsleContents @ 0x1400CAFE0 (MiGetWsleContents.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

char __fastcall MiProcessVmAccessedInfo(__int64 a1, _DWORD *a2, __int64 (__fastcall *a3)(__int64, _QWORD *))
{
  __int64 v3; // rax
  _QWORD *v4; // rbx
  unsigned __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // r8

  v3 = (unsigned int)*a2;
  v4 = a2 + 2;
  v8 = (unsigned __int64)&a2[2 * v3 + 2];
  while ( (unsigned __int64)v4 < v8 )
  {
    LOBYTE(v3) = MI_READ_PTE_LOCK_FREE((((*v4 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( (v3 & 1) != 0 )
    {
      LOBYTE(v3) = MiGetWsleContents(v9, v10);
      v12 = 0LL;
      LOBYTE(v3) = (v3 & 0xF) - 8;
      if ( (unsigned __int8)v3 > 2u )
        v12 = v11;
      if ( v12 )
      {
        LODWORD(v3) = a3(a1, v4);
        if ( (_DWORD)v3 )
          break;
      }
    }
    ++v4;
  }
  *a2 = 0;
  return v3;
}
