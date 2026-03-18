/*
 * XREFs of MiReturnReservedEnclavePages @ 0x14085A6E0
 * Callers:
 *     MiAddPagesToEnclave @ 0x1402BC7E4 (MiAddPagesToEnclave.c)
 *     MiDeleteEnclavePages @ 0x14085A0E8 (MiDeleteEnclavePages.c)
 *     MiInitializeEnclave @ 0x14085A260 (MiInitializeEnclave.c)
 * Callees:
 *     MiGetPfnLink @ 0x1400E1040 (MiGetPfnLink.c)
 *     MiReturnEnclavePage @ 0x1402BE7E0 (MiReturnEnclavePage.c)
 */

void __fastcall MiReturnReservedEnclavePages(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( a2 )
  {
    while ( 1 )
    {
      v3 = *(_QWORD *)(a1 + 96);
      if ( !v3 )
        break;
      *(_QWORD *)(a1 + 96) = MiGetPfnLink(v3);
      MiReturnEnclavePage((v4 + 0x58000000000LL) / 48);
    }
  }
  *(_QWORD *)(a1 + 104) = 0LL;
}
