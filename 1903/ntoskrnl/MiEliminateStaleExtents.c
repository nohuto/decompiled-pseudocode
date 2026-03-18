/*
 * XREFs of MiEliminateStaleExtents @ 0x1402CB8E8
 * Callers:
 *     MiAllocateFileExtents @ 0x14088BE80 (MiAllocateFileExtents.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x140054D30 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiLockLeafPage @ 0x1400DC870 (MiLockLeafPage.c)
 */

void __fastcall MiEliminateStaleExtents(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // rdi
  ULONG_PTR v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int8 v11; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 )
  {
    v3 = 0;
    v11 = 17;
    v4 = 0LL;
    do
    {
      while ( 1 )
      {
        v8 = MiLockProtoPoolPage(BugCheckParameter1, &v11);
        if ( v8 )
          break;
        MmAccessFault(2uLL, BugCheckParameter1, 0, 0LL);
      }
      do
      {
        v9 = *(_QWORD *)(a2 + 8 * v4);
        if ( v9 != 0x8000000000000000uLL )
        {
          v10 = MiLockLeafPage((unsigned __int64 *)BugCheckParameter1, 0);
          if ( v10 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            *(_QWORD *)(a2 + 8 * v4) = v9 | 0x4000000000000000LL;
          }
        }
        ++v3;
        BugCheckParameter1 += 8LL;
        v4 = v3;
      }
      while ( v3 < a3 && (BugCheckParameter1 & 0xFFF) != 0 );
      MiUnlockProtoPoolPage(v8, v11);
    }
    while ( v3 < a3 );
  }
}
