/*
 * XREFs of ?ndisSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C00728D0
 * Callers:
 *     ndisSetPowerSuspend @ 0x1C00FC938 (ndisSetPowerSuspend.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_dq @ 0x1C0041A40 (WPP_SF_dq.c)
 *     ?ndisAoAcIsDataPathPdcActivatorPresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007715C (-ndisAoAcIsDataPathPdcActivatorPresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C007E93C (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ndisMInvokeOidRequest @ 0x1C00B7B80 (ndisMInvokeOidRequest.c)
 *     ndisAddWoLDirectedMAC @ 0x1C00E62FC (ndisAddWoLDirectedMAC.c)
 */

__int64 __fastcall ndisSendPmOidsForSuspend(struct _NDIS_MINIPORT_BLOCK *a1, enum _DEVICE_POWER_STATE a2)
{
  __m128i v3; // xmm0
  __int128 v4; // xmm0
  unsigned int v5; // esi
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  unsigned __int16 v7; // cx
  _NDIS_SELECTIVE_SUSPEND *v8; // rbx
  enum _DEVICE_POWER_STATE v10; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v11[16]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[20]; // [rsp+140h] [rbp+40h] BYREF

  v10 = a2;
  memset(v11, 0, 0xF8uLL);
  memset(&v12[1], 0, 19);
  if ( !a1->AoAc || (a1->PnPFlags & 0x60) != 0x60 )
    goto LABEL_13;
  if ( (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2 && (a1->PMHardwareCapabilities.Flags & 4) != 0 )
  {
    v3 = *(__m128i *)&a1->PMCurrentParameters.Header.Type;
    *(_DWORD *)&v12[16] = a1->PMCurrentParameters.MediaSpecificWakeUpEvents;
    *(__m128i *)v12 = v3;
    *(_DWORD *)&v12[12] = _mm_srli_si128(v3, 8).m128i_i32[1] | 0x20;
    goto LABEL_11;
  }
  if ( (unsigned int)(a1->DeviceCaps.DeviceWake - 2) > 2
    || (a1->PMHardwareCapabilities.Flags & 2) == 0
    || !ndisLowPowerEpoch && !ndisConnectedStandby )
  {
LABEL_13:
    *(_DWORD *)v12 = 1311360;
    *(_DWORD *)&v12[12] = 16;
    goto LABEL_14;
  }
  v4 = *(_OWORD *)&a1->PMCurrentParameters.Header.Type;
  *(_DWORD *)&v12[16] = a1->PMCurrentParameters.MediaSpecificWakeUpEvents;
  *(_OWORD *)v12 = v4;
LABEL_11:
  if ( ndisAoAcIsDataPathPdcActivatorPresent(a1) )
    ndisAddWoLDirectedMAC(a1);
LABEL_14:
  memset(v11, 0, 0xF8uLL);
  DWORD2(v11[5]) |= 0x408u;
  *((_QWORD *)&v11[6] + 1) = &ndisIntReqGeneric;
  LODWORD(v11[0]) = 15466902;
  *((_QWORD *)&v11[2] + 1) = v12;
  LODWORD(v11[2]) = -50265847;
  *(_QWORD *)((char *)v11 + 4) = 1LL;
  LODWORD(v11[3]) = 20;
  KeInitializeEvent((PRKEVENT)&v11[7], NotificationEvent, 0);
  v5 = ndisMInvokeOidRequest(a1, v11);
  if ( v5 == 259 )
  {
    KeWaitForSingleObject(&v11[7], Executive, 0, 0, 0LL);
    v5 = v11[5];
  }
  if ( v5 )
  {
    SelectiveSuspend = a1->SelectiveSuspend;
    NdisTraceLoggingUnexpectedSelectiveSuspendError(a1, 0x3AFu, v5);
    SelectiveSuspend->LastUnexpectedFailureLine[1] = SelectiveSuspend->LastUnexpectedFailureLine[0];
    SelectiveSuspend->LastUnexpectedFailureLine[0] = 943;
    if ( (unsigned __int8)byte_1C00A025E >= 2u )
    {
      v7 = 19;
LABEL_24:
      WPP_SF_dq(v7, &WPP_0cf0eaabdf4f3c4b779dfb88bb6a846b_Traceguids, v5, a1);
    }
  }
  else
  {
    memset(v11, 0, 0xF8uLL);
    DWORD2(v11[5]) |= 0x408u;
    *((_QWORD *)&v11[6] + 1) = &ndisIntReqGeneric;
    LODWORD(v11[0]) = 15466902;
    *((_QWORD *)&v11[2] + 1) = &v10;
    LODWORD(v11[2]) = -50265855;
    *(_QWORD *)((char *)v11 + 4) = 1LL;
    LODWORD(v11[3]) = 4;
    KeInitializeEvent((PRKEVENT)&v11[7], NotificationEvent, 0);
    v5 = ndisMInvokeOidRequest(a1, v11);
    if ( v5 == 259 )
    {
      KeWaitForSingleObject(&v11[7], Executive, 0, 0, 0LL);
      v5 = v11[5];
    }
    if ( v5 )
    {
      v8 = a1->SelectiveSuspend;
      NdisTraceLoggingUnexpectedSelectiveSuspendError(a1, 0x3D0u, v5);
      v8->LastUnexpectedFailureLine[1] = v8->LastUnexpectedFailureLine[0];
      v8->LastUnexpectedFailureLine[0] = 976;
      if ( (unsigned __int8)byte_1C00A025E >= 2u )
      {
        v7 = 20;
        goto LABEL_24;
      }
    }
  }
  return v5;
}
