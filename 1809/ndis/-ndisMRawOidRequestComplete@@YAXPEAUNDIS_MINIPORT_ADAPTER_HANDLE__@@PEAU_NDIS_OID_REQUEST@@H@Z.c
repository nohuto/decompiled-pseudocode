/*
 * XREFs of ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0043268
 * Callers:
 *     ?ndisMpHookDefaultOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0081E40 (-ndisMpHookDefaultOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_M.c)
 *     ?ndisMpHookRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C00821B0 (-ndisMpHookRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@.c)
 * Callees:
 *     ndisOidFreeInternalCloneRequest @ 0x1C000F400 (ndisOidFreeInternalCloneRequest.c)
 *     ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C001A588 (-CancelTimer@NdisWatchdogState@@QEAA_NXZ.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0045B94 (ndisMOidRequestCompleteInternal.c)
 *     ndisClearBusy @ 0x1C00748D0 (ndisClearBusy.c)
 */

void __fastcall ndisMRawOidRequestComplete(
        struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned int a3)
{
  UCHAR *NdisReserved; // rdi
  struct _NDIS_OID_REQUEST *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rcx
  NdisWatchdogState *v10; // rcx
  struct _NDIS_OID_REQUEST *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a2;
  NdisReserved = a2->NdisReserved;
  v7 = a2;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqd(0x29u, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2, a3);
  v8 = *((_QWORD *)a1 + 474);
  v9 = *(_QWORD *)(v8 + 352);
  if ( !v9 || *(_QWORD *)(v9 + 64) == *(_QWORD *)(v8 + 176) )
    v10 = (NdisWatchdogState *)*((_QWORD *)a1 + 689);
  else
    v10 = (NdisWatchdogState *)*((_QWORD *)a1 + 690);
  if ( v10 != (NdisWatchdogState *)-1LL )
    NdisWatchdogState::CancelTimer(v10);
  if ( (*((_DWORD *)NdisReserved + 4) & 0x8000000) != 0 )
  {
    ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)a1, (__int64)a2, 1, (KSPIN_LOCK *)&v12);
    v7 = v12;
    NdisReserved = v12->NdisReserved;
  }
  if ( (*((_DWORD *)NdisReserved + 4) & 0x400) != 0 )
  {
    *((_DWORD *)NdisReserved + 2) = a3;
    KeSetEvent((PRKEVENT)(NdisReserved + 40), 0, 0);
  }
  else
  {
    if ( *((_QWORD *)a1 + 561) )
      ndisClearBusy(a1, 1LL, 33LL);
    ndisMOidRequestCompleteInternal(a1, v7, a3, 0LL);
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x2Au, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2);
}
