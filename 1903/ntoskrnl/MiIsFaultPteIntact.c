/*
 * XREFs of MiIsFaultPteIntact @ 0x140102138
 * Callers:
 *     MiFinishHardFault @ 0x140090EC0 (MiFinishHardFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140100F44 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140101BD0 (MiPrivateFixup.c)
 *     MiIdealClusterPage @ 0x1402E0D7C (MiIdealClusterPage.c)
 * Callees:
 *     MiCheckVirtualAddress @ 0x14005DBF0 (MiCheckVirtualAddress.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFindActualFaultingPte @ 0x1401021F4 (MiFindActualFaultingPte.c)
 *     MiIsPrototypePteVadLookup @ 0x140102370 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiIsFaultPteIntact(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 ActualFaultingPte; // rax
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r9
  unsigned __int64 v12; // r9
  int v14; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-10h] BYREF

  ActualFaultingPte = MiFindActualFaultingPte();
  if ( ActualFaultingPte )
  {
    v8 = MI_READ_PTE_LOCK_FREE(ActualFaultingPte);
    v9 = v8;
    if ( v10 != a3 )
    {
      if ( (v8 & 0x400) == 0 )
        return 0LL;
      if ( (unsigned int)MiIsPrototypePteVadLookup(v8) )
      {
        v12 = MiCheckVirtualAddress(a2, &v14, &v15);
      }
      else
      {
        if ( qword_140465B00 )
        {
          if ( (v11 & 0x10) != 0 )
            v11 &= ~0x10uLL;
          else
            v11 &= ~qword_140465B00;
        }
        v12 = v11 >> 16;
      }
      if ( v12 != a3 )
        return 0LL;
      v9 = MI_READ_PTE_LOCK_FREE(v12);
    }
    if ( v9 == *a4 )
      return 1LL;
  }
  return 0LL;
}
