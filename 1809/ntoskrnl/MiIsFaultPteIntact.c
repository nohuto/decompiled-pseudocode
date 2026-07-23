/*
 * XREFs of MiIsFaultPteIntact @ 0x14002D02C
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140003F00 (MiWaitForCollidedFaultComplete.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiPrivateFixup @ 0x140125F10 (MiPrivateFixup.c)
 *     MiMakeImagePageOk @ 0x1402C47EC (MiMakeImagePageOk.c)
 *     MiIdealClusterPage @ 0x1402C6E04 (MiIdealClusterPage.c)
 * Callees:
 *     MiFindActualFaultingPte @ 0x14002D0E8 (MiFindActualFaultingPte.c)
 *     MiIsPrototypePteVadLookup @ 0x14002D250 (MiIsPrototypePteVadLookup.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckVirtualAddress @ 0x140098C30 (MiCheckVirtualAddress.c)
 */

__int64 __fastcall MiIsFaultPteIntact(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 ActualFaultingPte; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // r9
  _BYTE v16[8]; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v17[16]; // [rsp+28h] [rbp-10h] BYREF

  ActualFaultingPte = MiFindActualFaultingPte();
  if ( ActualFaultingPte )
  {
    v8 = MI_READ_PTE_LOCK_FREE(ActualFaultingPte);
    v11 = v8;
    if ( v12 != a3 )
    {
      if ( (v8 & 0x400) == 0 )
        return 0LL;
      if ( (unsigned int)MiIsPrototypePteVadLookup(v8, v9, v10, v8) )
      {
        v14 = MiCheckVirtualAddress(a2, v16, v17);
      }
      else
      {
        if ( qword_14043B180 )
        {
          if ( (v13 & 0x10) != 0 )
            v13 &= ~0x10uLL;
          else
            v13 &= ~qword_14043B180;
        }
        v14 = v13 >> 16;
      }
      if ( v14 != a3 )
        return 0LL;
      v11 = MI_READ_PTE_LOCK_FREE(v14);
    }
    if ( v11 == *a4 )
      return 1LL;
  }
  return 0LL;
}
