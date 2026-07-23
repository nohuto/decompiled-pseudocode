/*
 * XREFs of MiReleaseHotPatchResources @ 0x14085916C
 * Callers:
 *     MiPerformImageHotPatch @ 0x140857EE0 (MiPerformImageHotPatch.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 *     MiFinishHoldingDirtyFaults @ 0x1402B97DC (MiFinishHoldingDirtyFaults.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseHotPatchResources(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int64 PteAddress; // rax
  unsigned int v4; // r8d
  struct _MDL *i; // rcx
  struct _MDL *v6; // rax
  struct _MDL *v7; // rdi
  void *v8; // rcx
  void *v9; // rcx

  if ( (*(_DWORD *)(a1 + 136) & 2) != 0 )
    MiFinishHoldingDirtyFaults((_QWORD *)(a1 + 88));
  v2 = *(_QWORD *)(a1 + 64);
  if ( !v2 )
    goto LABEL_7;
  PteAddress = MiGetPteAddress(*(_QWORD *)(v2 + 24));
  MiReleasePtes((__int64)&qword_14043C060, PteAddress, v4);
  *(_WORD *)(*(_QWORD *)(a1 + 64) + 10LL) &= ~1u;
  for ( i = *(struct _MDL **)(a1 + 64); ; i = v7 )
  {
    IoFreeMdl(i);
LABEL_7:
    v6 = *(struct _MDL **)(a1 + 56);
    v7 = v6;
    if ( !v6 )
      break;
    *(_QWORD *)(a1 + 56) = v6->Next;
    MmUnlockPages(v6);
  }
  v8 = *(void **)(a1 + 40);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v9 = *(void **)(a1 + 48);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
}
