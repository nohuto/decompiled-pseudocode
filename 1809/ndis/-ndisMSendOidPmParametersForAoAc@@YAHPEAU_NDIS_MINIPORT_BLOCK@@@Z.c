/*
 * XREFs of ?ndisMSendOidPmParametersForAoAc@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FCD38
 * Callers:
 *     ?ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0079AA8 (-ndisWdfRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00FD784 (-ndisRequestNicQuiet@@YAJPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000AC20 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_dq @ 0x1C0041A40 (WPP_SF_dq.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C0076AB4 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

__int64 __fastcall ndisMSendOidPmParametersForAoAc(struct _NDIS_MINIPORT_BLOCK *a1)
{
  __int128 v1; // xmm0
  unsigned int SupportedWakeUpEvents; // eax
  int v4; // ecx
  int SetMiniport; // eax
  unsigned int v6; // ebx
  _BYTE v8[248]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v9; // [rsp+138h] [rbp+30h] BYREF
  unsigned int MediaSpecificWakeUpEvents; // [rsp+148h] [rbp+40h]

  v1 = *(_OWORD *)&a1->PMCurrentParameters.Header.Type;
  MediaSpecificWakeUpEvents = a1->PMCurrentParameters.MediaSpecificWakeUpEvents;
  SupportedWakeUpEvents = a1->PMAdvertisedCapabilities.SupportedWakeUpEvents;
  v4 = 0;
  v9 = v1;
  if ( (SupportedWakeUpEvents & 2) != 0 )
    v4 = 2;
  LODWORD(v9) = 1311360;
  HIDWORD(v9) = v4;
  if ( (SupportedWakeUpEvents & 1) != 0 )
    HIDWORD(v9) = v4 | 1;
  memset(v8, 0, sizeof(v8));
  *(_DWORD *)&v8[88] |= 8u;
  *(_DWORD *)&v8[8] = 0;
  *(_QWORD *)&v8[104] = &ndisIntReqGeneric;
  *(_DWORD *)v8 = 15466902;
  *(_QWORD *)&v8[40] = &v9;
  *(_DWORD *)&v8[32] = -50265847;
  *(_DWORD *)&v8[4] = 1;
  *(_DWORD *)&v8[48] = 20;
  SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v8, 0LL, 0LL);
  v6 = SetMiniport;
  if ( SetMiniport )
  {
    NdisUnexpectedAoAcError(a1, 0x6CDu, SetMiniport);
    if ( (unsigned __int8)byte_1C00A025D >= 2u )
      WPP_SF_dq(0x1Cu, &WPP_68d7649c6d7b36189a1e4a9b4cf52062_Traceguids, v6, a1);
  }
  return v6;
}
