/*
 * XREFs of MiMarkKernelStack @ 0x14017E8C0
 * Callers:
 *     MiMarkBootKernelStack @ 0x1409B7464 (MiMarkBootKernelStack.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiSetPfnKernelStack @ 0x14013DA00 (MiSetPfnKernelStack.c)
 */

__int64 __fastcall MiMarkKernelStack(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // al
  __int64 result; // rax
  int v9; // [rsp+40h] [rbp+18h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v10) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v9, v3, v5);
    while ( *(__int64 *)(v4 + 24) < 0 );
  }
  *(_QWORD *)(v4 + 40) = *(_QWORD *)(v4 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
  MiSetPfnKernelStack((__int64 *)v4, a2, v5, v6);
  v7 = *(_BYTE *)(v4 + 35);
  *(_QWORD *)(v4 + 16) |= 0x3E0uLL;
  *(_BYTE *)(v4 + 35) = v7 & 0xF8 | 5;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
