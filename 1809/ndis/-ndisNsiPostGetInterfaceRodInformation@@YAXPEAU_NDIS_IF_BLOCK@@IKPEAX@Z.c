/*
 * XREFs of ?ndisNsiPostGetInterfaceRodInformation@@YAXPEAU_NDIS_IF_BLOCK@@IKPEAX@Z @ 0x1C00E2DB0
 * Callers:
 *     ?ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C00B7170 (-ndisNsiGetInterfaceRodInformation@@YAJPEAU_NDIS_IF_BLOCK@@0PEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     WPP_SF_qDqL @ 0x1C0041FBC (WPP_SF_qDqL.c)
 */

void __fastcall ndisNsiPostGetInterfaceRodInformation(struct _NDIS_IF_BLOCK *a1, int a2, unsigned int a3, _DWORD *a4)
{
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qDqL(0xC7u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (__int64)a1, a2);
  if ( a2 == 66183 && a3 >= 0xD8 && !a4[52] )
    a4[52] = a1->CompartmentId;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qDqL(0xC8u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (__int64)a1, a2);
}
