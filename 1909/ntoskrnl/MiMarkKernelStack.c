/*
 * XREFs of MiMarkKernelStack @ 0x14002DF50
 * Callers:
 *     MiAllocateKernelStackPages @ 0x14002CE10 (MiAllocateKernelStackPages.c)
 *     MiMarkBootKernelStack @ 0x1409EE190 (MiMarkBootKernelStack.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMarkKernelStack(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v3; // r8
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  char v7; // al
  __int64 result; // rax
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  if ( MiPteInShadowRange(a1)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v10 = v3 | 0x20;
      v11 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v4 >> 3) & 0x1FF));
      if ( (v11 & 0x20) == 0 )
        v10 = v3;
      v3 = v10;
      if ( (v11 & 0x42) != 0 )
        v3 = v10 | 0x42;
    }
  }
  v13 = v3;
  v5 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v13) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v12);
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  *(_QWORD *)(v5 + 40) = *(_QWORD *)(v5 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x80000000000000LL;
  v6 = *(_QWORD *)v5 ^ (*(_QWORD *)v5 ^ (a2 >> 3)) & 0xFFFFFFFFFFELL;
  *(_QWORD *)v5 = v6;
  if ( a2 && (v6 & 1) == 0 )
    *(_QWORD *)v5 = v6 | 1;
  v7 = *(_BYTE *)(v5 + 35);
  *(_QWORD *)(v5 + 16) |= 0x3E0uLL;
  *(_BYTE *)(v5 + 35) = v7 & 0xF8 | 5;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
