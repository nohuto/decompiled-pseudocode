/*
 * XREFs of MiEliminateStaleExtents @ 0x1402B5DE0
 * Callers:
 *     MiAllocateFileExtents @ 0x140853410 (MiAllocateFileExtents.c)
 * Callees:
 *     MiLockProtoPoolPage @ 0x14002F030 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiLockLeafPage @ 0x140080EC0 (MiLockLeafPage.c)
 */

void __fastcall MiEliminateStaleExtents(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v8; // r15
  __int64 v9; // r14
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
        v8 = MiLockProtoPoolPage(a1, &v11);
        if ( v8 )
          break;
        MmAccessFault(2uLL, a1, 0LL, 0LL);
      }
      do
      {
        v9 = *(_QWORD *)(a2 + 8 * v4);
        v10 = MiLockLeafPage((__int64 *)a1, 0);
        if ( v10 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          *(_QWORD *)(a2 + 8 * v4) = v9 | 0x8000000000000000uLL;
        }
        ++v3;
        a1 += 8LL;
        v4 = v3;
      }
      while ( v3 < a3 && (a1 & 0xFFF) != 0 );
      MiUnlockProtoPoolPage(v8, v11);
    }
    while ( v3 < a3 );
  }
}
