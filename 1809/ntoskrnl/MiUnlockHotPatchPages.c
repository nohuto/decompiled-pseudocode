/*
 * XREFs of MiUnlockHotPatchPages @ 0x14085839C
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140854080 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140858114 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     RtlFindSetBitsEx @ 0x140061C10 (RtlFindSetBitsEx.c)
 *     MiGetPteAddress @ 0x140065DE8 (MiGetPteAddress.c)
 *     MiUnlockCodePage @ 0x14009C770 (MiUnlockCodePage.c)
 *     KeReservePrivilegedPages @ 0x14028DC0C (KeReservePrivilegedPages.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockHotPatchPages(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 PteAddress; // rsi
  unsigned __int64 *v4; // rbx
  unsigned __int64 v5; // r8
  unsigned __int64 SetBits; // rax
  unsigned __int64 v7; // rdi

  if ( a1[3] )
  {
    v2 = *a1;
    KeReservePrivilegedPages();
    PteAddress = MiGetPteAddress(*(_QWORD *)(v2 + 48));
    v4 = a1 + 2;
    v5 = 0LL;
    while ( 1 )
    {
      SetBits = RtlFindSetBitsEx(v4, 1uLL, v5);
      v7 = SetBits;
      if ( SetBits == -1LL )
        break;
      MiUnlockCodePage(PteAddress + 8 * SetBits, PteAddress + 8 * SetBits);
      v5 = v7;
      _bittestandreset64((signed __int64 *)v4[1], v7);
    }
    ExFreePoolWithTag((PVOID)v4[1], 0);
    v4[1] = 0LL;
  }
}
