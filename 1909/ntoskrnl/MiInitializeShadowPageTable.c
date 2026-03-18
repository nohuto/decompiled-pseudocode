/*
 * XREFs of MiInitializeShadowPageTable @ 0x14074EDEC
 * Callers:
 *     MiMakeShadowPageTableRange @ 0x14074ECFC (MiMakeShadowPageTableRange.c)
 * Callees:
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14005F020 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiInitializePfnForOtherProcess @ 0x1400966C4 (MiInitializePfnForOtherProcess.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVaToPfn @ 0x140124DA0 (MiVaToPfn.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x140124E48 (MiReadWriteAnyLevelShadowPte.c)
 *     MiReplicatePteChange @ 0x14017E930 (MiReplicatePteChange.c)
 *     MiMarkPxeAsShadowed @ 0x14018750C (MiMarkPxeAsShadowed.c)
 */

ULONG_PTR __fastcall MiInitializeShadowPageTable(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rsi
  int v8; // r14d
  int v9; // ebx
  unsigned __int64 v10; // rax
  int v11; // edx
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  ULONG_PTR result; // rax
  unsigned __int64 PteAddress; // rax
  int v16; // edx
  ULONG_PTR v17; // [rsp+68h] [rbp+20h] BYREF

  v4 = a1;
  if ( !a3 )
  {
    v5 = a1 << 25 >> 16;
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v5) )
    {
      PteAddress = v4;
      do
        PteAddress = MiGetPteAddress(PteAddress);
      while ( v16 != 1 );
      v6 = MI_READ_PTE_LOCK_FREE(PteAddress);
      v7 = MiVaToPfn(v5);
    }
    else
    {
      v17 = MI_READ_PTE_LOCK_FREE(v4);
      v6 = v17;
      v7 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFLL;
    }
    v8 = 3;
    v9 = ((v6 & 0x800) != 0 ? 4 : 1) | 2;
    if ( v6 < 0 )
      v9 = (v6 & 0x800) != 0 ? 4 : 1;
    goto LABEL_6;
  }
  *a2 = 0LL;
  v9 = 6;
  v8 = 3;
  v7 = (__int64)(a2 + 0xB000000000LL) / 48;
  if ( a3 != 3 )
  {
LABEL_6:
    v10 = MiGetPteAddress(v4);
    v17 = MiReadWriteAnyLevelShadowPte(v10, v11, 0, ZeroPte);
    v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFLL;
    goto LABEL_7;
  }
  v12 = -1LL;
LABEL_7:
  v13 = MiMakeValidPte(v4, v7, v9 | (a3 != 0 ? -1744830464 : -1879048192)) & 0xFFFFFFFFFFFFFEFFuLL;
  if ( a3 )
  {
    if ( a3 == 3 )
      v12 = PsInitialSystemProcess->DirectoryTableBase >> 12;
    MiInitializePfnForOtherProcess(v7, v4, v12, 2560);
  }
  result = MiReadWriteAnyLevelShadowPte(v4, a3, 1, v13);
  if ( a3 == 3 )
  {
    MiMarkPxeAsShadowed(v4);
    do
    {
      v4 = v4 << 25 >> 16;
      --v8;
    }
    while ( v8 );
    return MiReplicatePteChange(v4, v4);
  }
  return result;
}
