/*
 * XREFs of MiZeroLargePage @ 0x140129B2C
 * Callers:
 *     MiZeroAndConvertLargePage @ 0x140097F8C (MiZeroAndConvertLargePage.c)
 *     MiAllocatePartitionPhysicalPages @ 0x14089B9D0 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14002AC80 (MiGetUltraMapping.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14002C1E0 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     MiZeroPhysicalPage @ 0x14006F000 (MiZeroPhysicalPage.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiCreateUltraThreadContext @ 0x1400F8D40 (MiCreateUltraThreadContext.c)
 *     MiDeleteUltraThreadContext @ 0x1400F92EC (MiDeleteUltraThreadContext.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeZeroPages @ 0x1401C8590 (KeZeroPages.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

unsigned __int64 __fastcall MiZeroLargePage(__int64 a1, unsigned int a2, int a3)
{
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 *v7; // r13
  unsigned __int64 v8; // r14
  int ProtectionPfnCompatible; // ebp
  unsigned __int64 v10; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v12; // r15
  _QWORD *v13; // rdi
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r13
  __int64 v16; // rdx
  unsigned __int64 UltraMapping; // r13
  unsigned __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rdx
  BOOL v21; // esi
  int v22; // r8d
  bool v23; // zf
  __int64 v24; // rdx
  int v25; // r8d
  bool v26; // zf
  char v27; // r11
  unsigned __int64 v28[16]; // [rsp+30h] [rbp-C8h] BYREF

  v5 = a2;
  v6 = (a1 + 0x58000000000LL) / 48;
  v7 = &MiLargePageSizes[a2];
  v8 = *v7;
  if ( v6 <= 0xFFFFFFFFFLL && ((*(_QWORD *)(48 * v6 - 0x57FFFFFFFD8LL) >> 53) & 1) != 0 )
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, a1);
  else
    ProtectionPfnCompatible = 4;
  v10 = 0LL;
  if ( a2 <= 1 )
  {
    memset(v28, 0, sizeof(v28));
    if ( (unsigned int)MiCreateUltraThreadContext((__int64)v28, 0, 2 - (unsigned int)(a2 == 0)) )
    {
      UltraMapping = MiGetUltraMapping(&v28[4 * v5], a2, *v7, 0);
      v18 = ((UltraMapping >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      if ( !a2 )
      {
        v19 = 1LL;
        do
        {
          v18 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v19;
        }
        while ( v19 );
      }
      MiMakeValidPte(v18, v6, ProtectionPfnCompatible | 0xA4000000);
      v21 = MiPteInShadowRange(v18);
      if ( v21 )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v22 = 1;
          if ( HIBYTE(word_1404658EC) )
            goto LABEL_26;
          v23 = (v20 & 1) == 0;
        }
        else
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
            goto LABEL_26;
          v23 = (v20 & 1) == 0;
        }
        if ( !v23 )
          v20 |= 0x8000000000000000uLL;
      }
LABEL_26:
      *(_QWORD *)v18 = v20;
      if ( v22 )
        MiWritePteShadow(v18);
      KeZeroPages(UltraMapping, v8 << 12);
      v24 = ZeroPte;
      v25 = 0;
      if ( !v21 )
        goto LABEL_36;
      if ( (unsigned int)MiPteHasShadow() )
      {
        v25 = 1;
        if ( !HIBYTE(word_1404658EC) )
        {
          v26 = (v24 & 1) == 0;
          goto LABEL_34;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
      {
        v26 = (v24 & 1) == 0;
LABEL_34:
        if ( !v26 )
          v24 |= 0x8000000000000000uLL;
      }
LABEL_36:
      *(_QWORD *)v18 = v24;
      if ( v25 )
        MiWritePteShadow(v18);
      return MiDeleteUltraThreadContext((__int64)v28);
    }
  }
  result = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)(unsigned int)v8);
  v12 = result;
  if ( result )
  {
    MiMakeValidPte(result, v6, ProtectionPfnCompatible | 0xA0000000);
    if ( !v8 )
    {
LABEL_11:
      KeZeroPages((__int64)(v12 << 25) >> 16, v8 << 12);
      return MiReleasePtes((__int64)&qword_1404666C0, v12, v8);
    }
    v13 = (_QWORD *)v12;
    v14 = v6 << 12;
    v15 = v8;
    while ( 1 )
    {
      if ( MiPteInShadowRange((unsigned __int64)v13) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_1404658EC) && (v27 & 1) != 0 )
            v16 |= 0x8000000000000000uLL;
          *v13 = v16;
          MiWritePteShadow((__int64)v13);
          goto LABEL_10;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
          && (v27 & 1) != 0 )
        {
          v16 |= 0x8000000000000000uLL;
        }
      }
      *v13 = v16;
LABEL_10:
      v14 += 4096LL;
      ++v13;
      if ( !--v15 )
        goto LABEL_11;
    }
  }
  if ( v8 )
  {
    do
    {
      result = MiZeroPhysicalPage(v10 + v6, 2, a3);
      ++v10;
    }
    while ( v10 < v8 );
  }
  return result;
}
