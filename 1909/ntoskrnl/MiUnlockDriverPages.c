/*
 * XREFs of MiUnlockDriverPages @ 0x1408876B0
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x140748A78 (MiMarkKernelImageCfgBits.c)
 *     MiApplyDriverHotPatch @ 0x14088CCD4 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140891598 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     MiUnlockCodePage @ 0x1400B9BA0 (MiUnlockCodePage.c)
 *     RtlFindSetBitsEx @ 0x140117C20 (RtlFindSetBitsEx.c)
 *     KeReservePrivilegedPages @ 0x1402A44C4 (KeReservePrivilegedPages.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockDriverPages(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 PteAddress; // rsi
  ULONG64 v4; // r8
  ULONG64 SetBits; // rax
  unsigned __int64 v6; // rdi

  if ( a1[4] )
  {
    v2 = *a1;
    if ( *((_DWORD *)a1 + 10) )
      KeReservePrivilegedPages();
    PteAddress = MiGetPteAddress(*(_QWORD *)(v2 + 48));
    v4 = 0LL;
    while ( 1 )
    {
      SetBits = RtlFindSetBitsEx((PRTL_BITMAP_EX)(a1 + 3), 1uLL, v4);
      v6 = SetBits;
      if ( SetBits == -1LL )
        break;
      MiUnlockCodePage(PteAddress + 8 * SetBits, PteAddress + 8 * SetBits);
      v4 = v6;
      _bittestandreset64((signed __int64 *)a1[4], v6);
    }
    ExFreePoolWithTag((PVOID)a1[4], 0);
    a1[4] = 0LL;
  }
}
