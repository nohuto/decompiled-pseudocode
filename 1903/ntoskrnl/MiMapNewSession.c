/*
 * XREFs of MiMapNewSession @ 0x14074080C
 * Callers:
 *     MiSessionCreateInternal @ 0x14074050C (MiSessionCreateInternal.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x140057698 (MiGetPteAddress.c)
 *     MiFillPteHierarchy @ 0x14005F010 (MiFillPteHierarchy.c)
 *     MiGetSystemPage @ 0x1400A2AB8 (MiGetSystemPage.c)
 *     MiInitializePfnForOtherProcess @ 0x1400A3894 (MiInitializePfnForOtherProcess.c)
 *     MiInitializePageColorBase @ 0x1400A60A8 (MiInitializePageColorBase.c)
 *     MiSetPfnLink @ 0x1400D8E38 (MiSetPfnLink.c)
 *     MiGetNextPageColor @ 0x1400DAF0C (MiGetNextPageColor.c)
 *     MiSetPageTablePfnBuddy @ 0x1400E3C7C (MiSetPageTablePfnBuddy.c)
 *     MiInitializePfn @ 0x1400F00E0 (MiInitializePfn.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiPartitionIdToPointer @ 0x1401367DC (MiPartitionIdToPointer.c)
 *     MiGetPfnLink @ 0x14013C7B0 (MiGetPfnLink.c)
 *     MiWriteTopLevelPxe @ 0x14017A110 (MiWriteTopLevelPxe.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiMapNewSession(unsigned __int64 a1, unsigned __int16 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rbx
  _QWORD *SystemPage; // rax
  __int64 v8; // rax
  __int16 v9; // bp
  __int64 v10; // rdi
  __int64 v11; // r15
  _QWORD *v12; // rsi
  __int64 v13; // rbx
  __int64 PfnLink; // rax
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rbx
  __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  int v20; // r8d
  char ValidPte; // di
  unsigned int v22; // ebp
  _QWORD *v23; // rsi
  unsigned __int64 v24; // r12
  __int64 v25; // r15
  unsigned __int64 v26; // rbx
  __int64 v28; // rdx
  _QWORD *v29; // r8
  int v30; // r9d
  bool v31; // zf
  bool v32; // zf
  __int64 v33; // [rsp+20h] [rbp-58h] BYREF
  __int64 v34; // [rsp+28h] [rbp-50h]
  unsigned __int64 v35[4]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 PteAddress; // [rsp+90h] [rbp+18h]

  v33 = 0LL;
  v34 = 0LL;
  memset(v35, 0, sizeof(v35));
  v4 = MiPartitionIdToPointer(a2);
  v5 = 0LL;
  PteAddress = MiGetPteAddress(a1);
  MiInitializePageColorBase(0LL, 0, (__int64)&v33);
  v6 = 8LL;
  do
  {
    SystemPage = (_QWORD *)MiGetSystemPage(v4, (__int64)&v33);
    MiSetPfnLink(SystemPage, v5);
    v5 = v8;
    --v6;
  }
  while ( v6 );
  MiFillPteHierarchy(qword_1404659D8, v35);
  v9 = 2560;
  v10 = 4LL;
  v11 = 0xFFFFFFFFFLL;
  do
  {
    v12 = (_QWORD *)v35[--v10];
    v13 = v5;
    PfnLink = MiGetPfnLink(v5);
    *v15 = 0LL;
    v5 = PfnLink;
    if ( v10 == 3 )
    {
      *(_QWORD *)(v13 + 8) = MiGetPteAddress(qword_1404659D8);
      MiSetPageTablePfnBuddy(v13, a1, 0);
    }
    v16 = (__int64)((unsigned __int128)((v13 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
    v17 = (v16 >> 63) + v16;
    v18 = MiMakeValidPte(0LL, v17, -1879048186) & 0xFFFFFFFFFFFFFEFFuLL;
    if ( v10 == 3 )
    {
      MiWriteTopLevelPxe(v12, v18);
      goto LABEL_10;
    }
    if ( MiPteInShadowRange((unsigned __int64)v12) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v20 = 1;
        if ( HIBYTE(word_140465BEC) )
          goto LABEL_8;
        v31 = (v19 & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
          goto LABEL_8;
        v31 = (v19 & 1) == 0;
      }
      if ( !v31 )
        v19 |= 0x8000000000000000uLL;
    }
LABEL_8:
    *v12 = v19;
    if ( v20 )
      MiWritePteShadow((__int64)v12);
LABEL_10:
    MiInitializePfnForOtherProcess(v17, (__int64)v12, v11, v9);
    v9 &= ~0x800u;
    v11 = v17;
  }
  while ( v10 != 1 );
  ValidPte = MiMakeValidPte(PteAddress, 0LL, -1610612732);
  v22 = 0;
  v23 = (_QWORD *)MiGetPteAddress(qword_1404659D8);
  v24 = PteAddress - (_QWORD)v23;
  while ( 2 )
  {
    v25 = v5;
    v5 = MiGetPfnLink(v5);
    if ( v22 )
      goto LABEL_13;
    *(_QWORD *)(v25 + 8) = MiGetPteAddress(qword_1404659D8);
    MiSetPageTablePfnBuddy(v25, a1, 0);
    if ( MiPteInShadowRange((unsigned __int64)v23 + v24) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v30 = 1;
        if ( HIBYTE(word_140465BEC) )
          goto LABEL_19;
        v32 = (ValidPte & 1) == 0;
      }
      else
      {
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
          goto LABEL_19;
        v32 = (ValidPte & 1) == 0;
      }
      if ( !v32 )
        v28 |= 0x8000000000000000uLL;
    }
LABEL_19:
    *v29 = v28;
    if ( v30 )
      MiWritePteShadow((__int64)v29);
LABEL_13:
    v26 = MiMakeValidPte(0LL, (v25 + 0x58000000000LL) / 48, -2147483644) & 0xFFFFFFFFFFFFFEFFuLL;
    MiInitializePfn(v25, (unsigned __int64)v23, 4u, 4);
    if ( !MiPteInShadowRange((unsigned __int64)v23) )
      goto LABEL_14;
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
        && (v26 & 1) != 0 )
      {
        v26 |= 0x8000000000000000uLL;
      }
LABEL_14:
      *v23 = v26;
      goto LABEL_15;
    }
    if ( !HIBYTE(word_140465BEC) && (v26 & 1) != 0 )
      v26 |= 0x8000000000000000uLL;
    *v23 = v26;
    MiWritePteShadow((__int64)v23);
LABEL_15:
    ++v22;
    ++v23;
    if ( v22 < 5 )
      continue;
    return MiGetNextPageColor((__int64)&v33);
  }
}
