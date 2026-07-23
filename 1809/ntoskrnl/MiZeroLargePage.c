/*
 * XREFs of MiZeroLargePage @ 0x140118DEC
 * Callers:
 *     MiZeroAndConvertLargePage @ 0x140118D38 (MiZeroAndConvertLargePage.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14002DDB4 (MiMakeProtectionPfnCompatible.c)
 *     MiZeroPhysicalPage @ 0x140032010 (MiZeroPhysicalPage.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiGetUltraMapping @ 0x14003A740 (MiGetUltraMapping.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiDeleteUltraThreadContext @ 0x1400E188C (MiDeleteUltraThreadContext.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiCreateUltraThreadContext @ 0x14013CBE4 (MiCreateUltraThreadContext.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeZeroPages @ 0x1401C0A90 (KeZeroPages.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

unsigned __int64 __fastcall MiZeroLargePage(__int64 a1, unsigned int a2, int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 *v7; // r13
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  int ProtectionPfnCompatible; // r14d
  unsigned __int64 result; // rax
  unsigned __int64 v12; // r15
  _QWORD *v13; // rdi
  __int64 v14; // rbp
  unsigned __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 UltraMapping; // r13
  unsigned __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  BOOL v23; // ebp
  int v24; // r8d
  bool v25; // zf
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // r8d
  bool v29; // zf
  char v30; // r11
  unsigned __int64 v31[16]; // [rsp+20h] [rbp-C8h] BYREF

  v5 = a2;
  v6 = (a1 + 0x58000000000LL) / 48;
  v7 = &MiLargePageSizes[a2];
  v8 = *v7;
  v9 = 0LL;
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, a1);
  if ( a2 <= 1 )
  {
    memset(v31, 0, sizeof(v31));
    if ( (unsigned int)MiCreateUltraThreadContext(v31, 0LL, 2 - (unsigned int)(a2 == 0)) )
    {
      UltraMapping = MiGetUltraMapping(&v31[4 * v5], a2, *v7, 0);
      v19 = ((UltraMapping >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      if ( !a2 )
      {
        v20 = 1LL;
        do
        {
          v19 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v20;
        }
        while ( v20 );
      }
      MiMakeValidPte(v19, v6, ProtectionPfnCompatible | 0xA4000000);
      v23 = MiPteInShadowRange(v19);
      if ( v23 )
      {
        if ( (unsigned int)MiPteHasShadow(v22, v21) )
        {
          v24 = 1;
          if ( HIBYTE(word_14043B26C) )
            goto LABEL_22;
          v25 = (v21 & 1) == 0;
        }
        else
        {
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
            goto LABEL_22;
          v25 = (v21 & 1) == 0;
        }
        if ( !v25 )
          v21 |= 0x8000000000000000uLL;
      }
LABEL_22:
      *(_QWORD *)v19 = v21;
      if ( v24 )
        MiWritePteShadow(v19);
      KeZeroPages(UltraMapping, v8 << 12);
      v27 = ZeroPte;
      v28 = 0;
      if ( !v23 )
        goto LABEL_32;
      if ( (unsigned int)MiPteHasShadow(v26, ZeroPte) )
      {
        v28 = 1;
        if ( !HIBYTE(word_14043B26C) )
        {
          v29 = (v27 & 1) == 0;
          goto LABEL_30;
        }
      }
      else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      {
        v29 = (v27 & 1) == 0;
LABEL_30:
        if ( !v29 )
          v27 |= 0x8000000000000000uLL;
      }
LABEL_32:
      *(_QWORD *)v19 = v27;
      if ( v28 )
        MiWritePteShadow(v19);
      return MiDeleteUltraThreadContext((__int64)v31);
    }
  }
  result = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)(unsigned int)v8);
  v12 = result;
  if ( result )
  {
    MiMakeValidPte(result, v6, ProtectionPfnCompatible | 0xA0000000);
    if ( !v8 )
    {
LABEL_8:
      KeZeroPages((__int64)(v12 << 25) >> 16, v8 << 12);
      return MiReleasePtes((__int64)&qword_14043C060, v12, v8);
    }
    v13 = (_QWORD *)v12;
    v14 = v6 << 12;
    v15 = v8;
    while ( 1 )
    {
      if ( MiPteInShadowRange((unsigned __int64)v13) )
      {
        if ( (unsigned int)MiPteHasShadow(v17, v16) )
        {
          if ( !HIBYTE(word_14043B26C) && (v30 & 1) != 0 )
            v16 |= 0x8000000000000000uLL;
          *v13 = v16;
          MiWritePteShadow(v13);
          goto LABEL_7;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
          && (v30 & 1) != 0 )
        {
          v16 |= 0x8000000000000000uLL;
        }
      }
      *v13 = v16;
LABEL_7:
      v14 += 4096LL;
      ++v13;
      if ( !--v15 )
        goto LABEL_8;
    }
  }
  if ( v8 )
  {
    do
    {
      result = MiZeroPhysicalPage(v9 + v6, 2, a3);
      ++v9;
    }
    while ( v9 < v8 );
  }
  return result;
}
