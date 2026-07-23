/*
 * XREFs of MiMapNewSession @ 0x1407171D8
 * Callers:
 *     MiSessionCreateInternal @ 0x140716F08 (MiSessionCreateInternal.c)
 * Callees:
 *     MiInitializePfnForOtherProcess @ 0x140026C2C (MiInitializePfnForOtherProcess.c)
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiGetNextPageColor @ 0x140031260 (MiGetNextPageColor.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiSetPfnLink @ 0x140065C94 (MiSetPfnLink.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiGetSystemPage @ 0x140093524 (MiGetSystemPage.c)
 *     MiFillPteHierarchy @ 0x140099020 (MiFillPteHierarchy.c)
 *     MiGetPfnLink @ 0x1400E10E0 (MiGetPfnLink.c)
 *     MiInitializePfn @ 0x1401094B0 (MiInitializePfn.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiPartitionIdToPointer @ 0x140134DB8 (MiPartitionIdToPointer.c)
 *     MiSetPageTablePfnBuddy @ 0x14013DAA8 (MiSetPageTablePfnBuddy.c)
 *     MiWriteTopLevelPxe @ 0x140170A50 (MiWriteTopLevelPxe.c)
 */

__int64 __fastcall MiMapNewSession(unsigned __int64 a1, unsigned __int16 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rbx
  _QWORD *SystemPage; // rax
  __int64 v7; // rax
  __int16 v8; // bp
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 *v11; // rsi
  __int64 v12; // rbx
  __int64 PfnLink; // rax
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 v16; // rbx
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // r8d
  char ValidPte; // di
  unsigned int v21; // ebp
  _QWORD *v22; // rsi
  unsigned __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 *v26; // r8
  int v27; // r9d
  unsigned __int64 v28; // rbx
  bool v30; // zf
  bool v31; // zf
  _BYTE v32[16]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v33[4]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 PteAddress; // [rsp+90h] [rbp+18h]

  v3 = MiPartitionIdToPointer(a2);
  v4 = 0LL;
  PteAddress = MiGetPteAddress(a1);
  MiInitializePageColorBase(0LL, 0, (__int64)v32);
  v5 = 8LL;
  do
  {
    SystemPage = (_QWORD *)MiGetSystemPage(v3, (__int64)v32);
    MiSetPfnLink(SystemPage, v4);
    v4 = v7;
    --v5;
  }
  while ( v5 );
  MiFillPteHierarchy(qword_14043B080, v33);
  v8 = 2560;
  v9 = 4LL;
  v10 = 0xFFFFFFFFFLL;
  do
  {
    v11 = *(__int64 **)&v32[8 * v9-- + 8];
    v12 = v4;
    PfnLink = MiGetPfnLink(v4);
    *v14 = 0LL;
    v4 = PfnLink;
    if ( v9 == 3 )
    {
      *(_QWORD *)(v12 + 8) = MiGetPteAddress(qword_14043B080);
      MiSetPageTablePfnBuddy(v12, a1, 0);
    }
    v15 = (__int64)((unsigned __int128)((v12 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    v16 = (v15 >> 63) + v15;
    v17 = MiMakeValidPte(0LL, v16, -1879048186) & 0xFFFFFFFFFFFFFEFFuLL;
    if ( v9 == 3 )
    {
      MiWriteTopLevelPxe(v11, v17);
      goto LABEL_10;
    }
    if ( MiPteInShadowRange((unsigned __int64)v11) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v19 = 1;
        if ( HIBYTE(word_14043B26C) )
          goto LABEL_8;
        v30 = (v18 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
          goto LABEL_8;
        v30 = (v18 & 1) == 0;
      }
      if ( !v30 )
        v18 |= 0x8000000000000000uLL;
    }
LABEL_8:
    *v11 = v18;
    if ( v19 )
      MiWritePteShadow((__int64)v11, v18);
LABEL_10:
    MiInitializePfnForOtherProcess(v16, (__int64)v11, v10, v8);
    v8 &= ~0x800u;
    v10 = v16;
  }
  while ( v9 != 1 );
  ValidPte = MiMakeValidPte(PteAddress, 0LL, -1610612732);
  v21 = 0;
  v22 = (_QWORD *)MiGetPteAddress(qword_14043B080);
  v23 = PteAddress - (_QWORD)v22;
  while ( 2 )
  {
    v24 = v4;
    v4 = MiGetPfnLink(v4);
    if ( v21 >= 3 )
      goto LABEL_16;
    *(_QWORD *)(v24 + 8) = MiGetPteAddress(qword_14043B080);
    MiSetPageTablePfnBuddy(v24, a1, 0);
    if ( MiPteInShadowRange((unsigned __int64)v22 + v23) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v27 = 1;
        if ( HIBYTE(word_14043B26C) )
          goto LABEL_14;
        v31 = (ValidPte & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
          goto LABEL_14;
        v31 = (ValidPte & 1) == 0;
      }
      if ( !v31 )
        v25 |= 0x8000000000000000uLL;
    }
LABEL_14:
    *v26 = v25;
    if ( v27 )
      MiWritePteShadow((__int64)v26, v25);
LABEL_16:
    v28 = MiMakeValidPte(0LL, (v24 + 0x58000000000LL) / 48, -2147483644) & 0xFFFFFFFFFFFFFEFFuLL;
    MiInitializePfn(v24, (unsigned __int64)v22, 4u, 4);
    if ( !MiPteInShadowRange((unsigned __int64)v22) )
      goto LABEL_17;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
        && (v28 & 1) != 0 )
      {
        v28 |= 0x8000000000000000uLL;
      }
LABEL_17:
      *v22 = v28;
      goto LABEL_18;
    }
    if ( !HIBYTE(word_14043B26C) && (v28 & 1) != 0 )
      v28 |= 0x8000000000000000uLL;
    *v22 = v28;
    MiWritePteShadow((__int64)v22, v28);
LABEL_18:
    ++v21;
    ++v22;
    if ( v21 < 5 )
      continue;
    return MiGetNextPageColor((__int64)v32);
  }
}
