/*
 * XREFs of HUBDTX_GetMsOsFeatureDescriptor @ 0x1C0026910
 * Callers:
 *     HUBDSM_GettingMSOSContainerIdDescriptor @ 0x1C001E080 (HUBDSM_GettingMSOSContainerIdDescriptor.c)
 *     HUBDSM_GettingMSOSContainerIdHeaderDescriptor @ 0x1C001E120 (HUBDSM_GettingMSOSContainerIdHeaderDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptor @ 0x1C001E260 (HUBDSM_GettingMSOSExtendedDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedDescriptorHeader @ 0x1C001E360 (HUBDSM_GettingMSOSExtendedDescriptorHeader.c)
 *     HUBDSM_GetMsOs20DescriptorSet @ 0x1C001EF10 (HUBDSM_GetMsOs20DescriptorSet.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptor @ 0x1C0021050 (HUBDSM_GettingMSOSExtendedPropertyDescriptor.c)
 *     HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader @ 0x1C00210F0 (HUBDSM_GettingMSOSExtendedPropertyDescriptorHeader.c)
 * Callees:
 *     HUBMISC_ControlTransfer @ 0x1C002E39C (HUBMISC_ControlTransfer.c)
 */

__int64 __fastcall HUBDTX_GetMsOsFeatureDescriptor(__int64 a1, char a2, __int64 a3, __int16 a4, __int64 a5, __int64 a6)
{
  char v6; // al

  *(_BYTE *)(a1 + 400) = a2 & 3 | 0xC0;
  v6 = *(_BYTE *)(a1 + 2052);
  *(_WORD *)(a1 + 402) = 0;
  *(_BYTE *)(a1 + 401) = v6;
  *(_WORD *)(a1 + 406) = a6;
  *(_WORD *)(a1 + 404) = a4;
  return HUBMISC_ControlTransfer(
           *(_QWORD *)a1,
           *(_QWORD *)(a1 + 24),
           a1,
           (int)a1 + 248,
           (__int64)HUBDTX_ControlTransferComplete,
           a5,
           a6,
           1,
           *(_BYTE *)(a1 + 1512));
}
