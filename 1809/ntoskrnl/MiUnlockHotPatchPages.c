/*
 * XREFs of MiUnlockHotPatchPages @ 0x1408595FC
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1408552E0 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140859374 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     RtlFindSetBitsEx @ 0x140061C10 (RtlFindSetBitsEx.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiUnlockCodePage @ 0x14009C6B0 (MiUnlockCodePage.c)
 *     KeReservePrivilegedPages @ 0x14028DDFC (KeReservePrivilegedPages.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockHotPatchPages(_RTL_BITMAP_EX *a1)
{
  unsigned __int64 SizeOfBitMap; // rbx
  __int64 PteAddress; // rsi
  _RTL_BITMAP_EX *v4; // rbx
  ULONG64 v5; // r8
  ULONG64 SetBits; // rax
  unsigned __int64 v7; // rdi

  if ( a1[1].Buffer )
  {
    SizeOfBitMap = a1->SizeOfBitMap;
    KeReservePrivilegedPages();
    PteAddress = MiGetPteAddress(*(_QWORD *)(SizeOfBitMap + 48));
    v4 = a1 + 1;
    v5 = 0LL;
    while ( 1 )
    {
      SetBits = RtlFindSetBitsEx(v4, 1uLL, v5);
      v7 = SetBits;
      if ( SetBits == -1LL )
        break;
      MiUnlockCodePage(PteAddress + 8 * SetBits, PteAddress + 8 * SetBits);
      v5 = v7;
      _bittestandreset64((signed __int64 *)v4->Buffer, v7);
    }
    ExFreePoolWithTag(v4->Buffer, 0);
    v4->Buffer = 0LL;
  }
}
