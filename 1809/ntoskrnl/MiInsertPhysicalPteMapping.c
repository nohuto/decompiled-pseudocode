/*
 * XREFs of MiInsertPhysicalPteMapping @ 0x14010FF00
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010FCB8 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x14018CDD4 (MiInsertViewOfPhysicalSection.c)
 * Callees:
 *     MiProtectionToCacheAttribute @ 0x14002BD80 (MiProtectionToCacheAttribute.c)
 *     MiMakeProtectionPfnCompatible @ 0x14002DDB4 (MiMakeProtectionPfnCompatible.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiGetUsedPtesHandle @ 0x140098640 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1401100E4 (MiIncreaseUsedPtesCount.c)
 *     MiLookupIoPageNode @ 0x140110160 (MiLookupIoPageNode.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiAssignInitialPageAttribute @ 0x14018D314 (MiAssignInitialPageAttribute.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiShowBadMapper @ 0x1402A5C34 (MiShowBadMapper.c)
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
  __int64 UsedPtesHandle; // rax
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rbx
  __int64 v15; // r8
  __int64 result; // rax
  __int64 v17; // rbp
  unsigned __int8 v18; // cl
  bool v19; // zf
  int v20; // [rsp+78h] [rbp+20h] BYREF

  ProtectionPfnCompatible = a3;
  v6 = MiProtectionToCacheAttribute(a3);
  if ( a2 <= 0xFFFFFFFFFLL && ((*(_QWORD *)(48 * a2 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
  {
    v17 = 48 * a2 - 0x58000000000LL;
    if ( !*(_WORD *)(v17 + 32) )
      MiShowBadMapper(a2);
    v18 = *(_BYTE *)(v17 + 34);
    if ( (v18 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(v17, v6);
      v18 = *(_BYTE *)(v17 + 34);
    }
    if ( v18 >> 6 != v6 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, v17);
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
    if ( (unsigned int)MiPteHasShadow(v10, v9) )
    {
      v11 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_8;
      v19 = (v9 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_8;
      v19 = (v9 & 1) == 0;
    }
    if ( !v19 )
      v9 |= 0x8000000000000000uLL;
  }
LABEL_8:
  *(_QWORD *)a1 = v9;
  if ( v11 )
    MiWritePteShadow(a1);
  UsedPtesHandle = MiGetUsedPtesHandle((__int64)(a1 << 25) >> 16);
  MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
  v20 = 0;
  v14 = (volatile signed __int32 *)(48
                                  * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                                  - 0x57FFFFFFFE8LL);
  while ( _interlockedbittestandset64(v14, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v20, v13, v15);
    while ( *(__int64 *)v14 < 0 );
  }
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)v14 ^= (*(_QWORD *)v14 ^ (*(_QWORD *)v14 + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)v14, 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
