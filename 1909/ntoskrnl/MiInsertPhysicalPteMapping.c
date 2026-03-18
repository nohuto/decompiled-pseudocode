/*
 * XREFs of MiInsertPhysicalPteMapping @ 0x1400F727C
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x1400F7034 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x14019773C (MiInsertViewOfPhysicalSection.c)
 * Callees:
 *     MiIncreaseUsedPtesCount @ 0x14001F890 (MiIncreaseUsedPtesCount.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14002C1E0 (MiMakeProtectionPfnCompatible.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiGetUsedPtesHandle @ 0x14002DEA0 (MiGetUsedPtesHandle.c)
 *     MiProtectionToCacheAttribute @ 0x14009739C (MiProtectionToCacheAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLookupIoPageNode @ 0x1400F7460 (MiLookupIoPageNode.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiAssignInitialPageAttribute @ 0x140197040 (MiAssignInitialPageAttribute.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x1402BCB38 (MiShowBadMapper.c)
 */

__int64 __fastcall MiInsertPhysicalPteMapping(unsigned __int64 a1, ULONG_PTR a2, unsigned int a3)
{
  int ProtectionPfnCompatible; // ebx
  unsigned int v6; // r15d
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r8d
  unsigned __int64 UsedPtesHandle; // rax
  volatile signed __int32 *v13; // rbx
  __int64 result; // rax
  __int64 v15; // rbp
  unsigned __int8 v16; // cl
  bool v17; // zf
  int v18; // [rsp+78h] [rbp+20h] BYREF

  ProtectionPfnCompatible = a3;
  v6 = MiProtectionToCacheAttribute(a3);
  if ( a2 <= 0xFFFFFFFFFLL && ((*(_QWORD *)(48 * a2 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
  {
    v15 = 48 * a2 - 0x58000000000LL;
    if ( !*(_WORD *)(v15 + 32) )
      MiShowBadMapper(a2);
    v16 = *(_BYTE *)(v15 + 34);
    if ( (v16 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(v15, v6);
      v16 = *(_BYTE *)(v15 + 34);
    }
    if ( v16 >> 6 != v6 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, v15);
  }
  else
  {
    v7 = MiLookupIoPageNode(a2);
    if ( !v7 )
      KeBugCheckEx(0x1Au, 0x61949uLL, a2, 1uLL, 0LL);
    ProtectionPfnCompatible &= 7u;
    v8 = *(unsigned __int16 *)(*(_QWORD *)(v7 + 48) + 2 * ((a2 & 0xFFFFFFFFFLL) - *(_QWORD *)(v7 + 40))) >> 14;
    if ( v8 )
    {
      if ( v8 == 2 )
        ProtectionPfnCompatible |= 0x18u;
    }
    else
    {
      ProtectionPfnCompatible |= 8u;
    }
  }
  MiMakeValidPte(a1, a2, ProtectionPfnCompatible | 0x80000000);
  if ( MiPteInShadowRange(a1) )
  {
    if ( (unsigned int)MiPteHasShadow(v10) )
    {
      v11 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_8;
      v17 = (v9 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_8;
      v17 = (v9 & 1) == 0;
    }
    if ( !v17 )
      v9 |= 0x8000000000000000uLL;
  }
LABEL_8:
  *(_QWORD *)a1 = v9;
  if ( v11 )
    MiWritePteShadow(a1, v9);
  UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a1 << 25) >> 16);
  MiIncreaseUsedPtesCount(UsedPtesHandle, 1u);
  v18 = 0;
  v13 = (volatile signed __int32 *)(48
                                  * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                                  - 0x57FFFFFFFE8LL);
  while ( _interlockedbittestandset64(v13, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v18);
    while ( *(__int64 *)v13 < 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)v13 ^= (*(_QWORD *)v13 ^ (*(_QWORD *)v13 + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v13, 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
