/*
 * XREFs of MmMapMdl @ 0x1402C51C0
 * Callers:
 *     <none>
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14002AC80 (MiGetUltraMapping.c)
 *     MiFillSystemPtes @ 0x140030060 (MiFillSystemPtes.c)
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     MiMakeProtectionMask @ 0x1400504A0 (MiMakeProtectionMask.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     MiProtectionToCacheAttribute @ 0x14009739C (MiProtectionToCacheAttribute.c)
 *     MiZeroAndFlushPtes @ 0x1400F52B8 (MiZeroAndFlushPtes.c)
 *     MiMappingHasIoReferences @ 0x1400F6E30 (MiMappingHasIoReferences.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     MiInsertPteTracker @ 0x1402E7A3C (MiInsertPteTracker.c)
 *     MiFreeUltraMdlContext @ 0x1402E7EF0 (MiFreeUltraMdlContext.c)
 *     MiGetUltraMdlContext @ 0x1402E7F84 (MiGetUltraMdlContext.c)
 */

__int64 __fastcall MmMapMdl(__int64 a1, unsigned int a2, void (__fastcall *a3)(__int64, unsigned __int64), __int64 a4)
{
  _SLIST_ENTRY *v5; // r13
  void (__fastcall *v6)(__int64, _QWORD); // r8
  __int64 v7; // r9
  unsigned int ProtectionMask; // r14d
  unsigned __int64 v10; // r12
  unsigned int v11; // esi
  __int64 UltraMdlContext; // rax
  unsigned __int64 UltraMapping; // rax
  ULONG_PTR v14; // rbx
  unsigned __int64 v15; // r15
  int v16; // ebp
  int v17; // ebp
  unsigned int v18; // eax
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // r8d
  __int64 v22; // r11
  bool v23; // zf
  _DWORD v24[17]; // [rsp+34h] [rbp-44h] BYREF

  v5 = 0LL;
  ProtectionMask = MiMakeProtectionMask(a2);
  if ( ProtectionMask == -1
    || ProtectionMask == 24
    || (ProtectionMask & 7) == 5
    || (ProtectionMask & 2) != 0
    || (ProtectionMask & 0xFFFFFFF8) == 0x10 )
  {
    return 3221225541LL;
  }
  if ( (*(_BYTE *)(a1 + 10) & 5) != 0 )
  {
    v6(v7, *(_QWORD *)(a1 + 24));
    return 0LL;
  }
  v10 = (((*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 32)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
  v11 = v10;
  if ( MmProtectFreedNonPagedPool == 1 )
    v11 = v10 + 1;
  if ( v11 > 0x200
    || (UltraMdlContext = MiGetUltraMdlContext(), (v5 = (_SLIST_ENTRY *)UltraMdlContext) == 0LL)
    || (UltraMapping = MiGetUltraMapping((unsigned __int64 *)(UltraMdlContext + 8), 3u, v11, 0),
        v14 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) == 0x98000000000LL) )
  {
    v14 = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)v11);
    if ( !v14 )
      return 3221225626LL;
  }
  v15 = *(unsigned int *)(a1 + 44) + ((__int64)(v14 << 25) >> 16);
  v16 = MiFillSystemPtes(v14, v10, a1 + 48, ProtectionMask, 0, v24);
  if ( v16 >= 0 )
  {
    v17 = v24[0] & 1;
    if ( (v24[0] & 1) != 0 )
    {
      MiMappingHasIoReferences(v15);
      *(_WORD *)(a1 + 10) |= 0x800u;
    }
    if ( (dword_14057118C & 1) != 0 )
    {
      v18 = MiProtectionToCacheAttribute(ProtectionMask);
      MiInsertPteTracker(a1, 0LL, v19, v18);
    }
    a3(a4, v15);
    if ( v17 )
      MiZeroAndFlushPtes(v15, v10);
    v16 = 0;
  }
  if ( v5 )
  {
    if ( v11 )
    {
      do
      {
        if ( MiPteInShadowRange(v14) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v21 = 1;
            if ( !HIBYTE(word_1404658EC) )
            {
              v23 = (v20 & 1) == 0;
              goto LABEL_31;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
          {
            v23 = (v20 & 1) == 0;
LABEL_31:
            if ( !v23 )
              v20 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v14 = v20;
        if ( v21 )
          MiWritePteShadow(v14);
        v14 += 8LL;
      }
      while ( v22 != 1 );
    }
    MiFreeUltraMdlContext(v5);
    v14 = 0LL;
  }
  if ( v14 )
    MiReleasePtes((__int64)&qword_1404666C0, v14, v11);
  return (unsigned int)v16;
}
