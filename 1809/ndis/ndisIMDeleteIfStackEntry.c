/*
 * XREFs of ndisIMDeleteIfStackEntry @ 0x1C0061B70
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C0118F00 (ndisPnPRemoveDevice.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisIfDeleteStackEntries @ 0x1C0042508 (ndisIfDeleteStackEntries.c)
 *     ndisDereferenceMiniportRef @ 0x1C005FA54 (ndisDereferenceMiniportRef.c)
 *     ndisReferenceMiniportByName @ 0x1C010A008 (ndisReferenceMiniportByName.c)
 */

__int64 __fastcall ndisIMDeleteIfStackEntry(__int64 a1)
{
  _DWORD *v2; // rdx
  unsigned int v3; // edi

  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0xD1u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
  v2 = *(_DWORD **)(a1 + 3800);
  if ( *v2 > 1u )
  {
    ndisReferenceMiniportByName((PCUNICODE_STRING)&v2[4 * (*v2 - 2) + 2]);
    v3 = -1073741772;
  }
  else
  {
    v3 = -1073741811;
  }
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0xD2u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
  return v3;
}
