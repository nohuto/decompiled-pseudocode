/*
 * XREFs of MiInitializeHardFaultPfn @ 0x14002E550
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14002DEF0 (MiBuildMdlForMappedFileFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiChangePageAttribute @ 0x1400F218C (MiChangePageAttribute.c)
 */

__int64 __fastcall MiInitializeHardFaultPfn(__int64 a1, __int64 a2, unsigned __int64 a3, int a4, unsigned int a5)
{
  __int64 v9; // r10
  unsigned __int64 v10; // r11
  __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  char v13; // al
  int v14; // eax
  char v15; // cl
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 result; // rax
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF
  int v24; // [rsp+68h] [rbp+20h] BYREF

  if ( MiPteInShadowRange(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v21 = v9 | 0x20;
      v22 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v10 >> 3) & 0x1FF));
      if ( (v22 & 0x20) == 0 )
        v21 = v9;
      v9 = v21;
      if ( (v22 & 0x42) != 0 )
        v9 = v21 | 0x42;
    }
  }
  v23 = v9;
  v11 = 0LL;
  v12 = (unsigned __int64)MI_READ_PTE_LOCK_FREE(&v23) >> 12;
  v24 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v24);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  *(_QWORD *)(a1 + 24) &= 0xFFFFFFF000000000uLL;
  *(_QWORD *)(a1 + 40) |= 0x200000000000000uLL;
  v13 = *(_BYTE *)(a1 + 34) | 0x20;
  *(_WORD *)(a1 + 32) = 1;
  *(_BYTE *)(a1 + 34) = v13;
  if ( a2 )
    v11 = a2 + 32;
  *(_QWORD *)a1 = v11;
  v14 = *(_DWORD *)(a2 + 192) >> 9;
  v15 = *(_BYTE *)(a1 + 35) & 0xF8;
  v16 = *(_DWORD *)(a2 + 192) >> 12;
  *(_QWORD *)(a1 + 8) = a3;
  if ( a4 )
    LOBYTE(v16) = v14;
  v17 = (v12 ^ *(_QWORD *)(a1 + 40)) & 0xFFFFFFFFFLL;
  *(_BYTE *)(a1 + 35) = v15 | v16 & 7;
  *(_QWORD *)(a1 + 40) ^= v17;
  v18 = a5;
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 2;
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != (_DWORD)v18 )
    MiChangePageAttribute(a1, v18, 1LL);
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
