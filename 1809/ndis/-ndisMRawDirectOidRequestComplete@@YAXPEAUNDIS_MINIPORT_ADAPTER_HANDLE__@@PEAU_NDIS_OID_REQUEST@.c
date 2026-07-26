/*
 * XREFs of ?ndisMRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0043188
 * Callers:
 *     ?ndisMpHookDefaultDirectOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0081E20 (-ndisMpHookDefaultDirectOidRequestComplete@@YAXPEAXPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAU.c)
 *     ?ndisMpHookRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0082170 (-ndisMpHookRawDirectOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQ.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0045B94 (ndisMOidRequestCompleteInternal.c)
 *     ndisClearBusy @ 0x1C00748D0 (ndisClearBusy.c)
 */

void __fastcall ndisMRawDirectOidRequestComplete(
        struct NDIS_MINIPORT_ADAPTER_HANDLE__ *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned int a3)
{
  KIRQL v6; // al

  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqd(0x2Bu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2, a3);
  if ( *((_QWORD *)a1 + 561) )
    ndisClearBusy(a1, 1LL, 50LL);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 12);
  --*((_DWORD *)a1 + 1072);
  *((_QWORD *)a1 + 65) = 0LL;
  *((_DWORD *)a1 + 466) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)a1 + 12, v6);
  ndisMOidRequestCompleteInternal(a1, a2, a3, 0LL);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x2Cu, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2);
}
