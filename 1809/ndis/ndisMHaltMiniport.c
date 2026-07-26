/*
 * XREFs of ndisMHaltMiniport @ 0x1C00EC4FC
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C0118F00 (ndisPnPRemoveDevice.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisCloseULongRef @ 0x1C005FA08 (ndisCloseULongRef.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C00F2D4C (ndisMDeregisterBugCheckHandler.c)
 *     ndisMCommonHaltMiniport @ 0x1C0115B88 (ndisMCommonHaltMiniport.c)
 */

void __fastcall ndisMHaltMiniport(ULONG_PTR BugCheckParameter2)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Eu, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, BugCheckParameter2);
  if ( ndisCloseULongRef((PKSPIN_LOCK)(BugCheckParameter2 + 4472)) )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 124) & 0x4000) == 0 )
    {
      ndisMCommonHaltMiniport(BugCheckParameter2);
      ndisMDeregisterBugCheckHandler(BugCheckParameter2);
    }
    ndisDereferenceMiniport(BugCheckParameter2, 0x18u);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Fu, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, BugCheckParameter2);
}
