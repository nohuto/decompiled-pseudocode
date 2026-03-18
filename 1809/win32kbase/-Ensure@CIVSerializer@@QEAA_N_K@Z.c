/*
 * XREFs of ?Ensure@CIVSerializer@@QEAA_N_K@Z @ 0x1C01541A0
 * Callers:
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@0_N@Z @ 0x1C0155974 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@0_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERINFONODE@@PEAUtagRIMPOINTERINFONODE@@K_K_N@Z @ 0x1C0155A10 (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERINFONODE@@PEAUtagRIMPOINTERINFONODE@@K_K_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEAUtagRIMPOINTERRAWDATA@@K_N@Z @ 0x1C0155B58 (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEAUtagRIMPOINTERRAWDATA@@K_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IV_HIDP_LINK_COLLECTION_NODE@@PEAU_HIDP_LINK_COLLECTION_NODE@@K_K_N@Z @ 0x1C0155C9C (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IV_HIDP_LINK_COLLECTION_NODE@@PEAU_HIDP_LINK_COLLECTION_N.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IV_HPD_CURSOR@@PEAUtagHPD_CURSOR@@K_K_N@Z @ 0x1C0155D88 (-Serialize@CIVSerializer@@QEAAJPEAPEAU_IV_HPD_CURSOR@@PEAUtagHPD_CURSOR@@K_K_N@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C0155E20 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CIVSerializer::Ensure(CIVSerializer *this, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax

  v2 = *((_QWORD *)this + 3);
  v3 = v2 + a2;
  if ( v2 + a2 < v2 || v3 > *((_QWORD *)this + 1) )
    return 0;
  *((_QWORD *)this + 3) = v3;
  return 1;
}
