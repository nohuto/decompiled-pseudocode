/*
 * XREFs of ?ndisInvokeOpenAdapterComplete@@_Y2PAGE@@AXPEAU_NDIS_OPEN_BLOCK@@H@Z @ 0x1C0116E3C
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093A48 (ndisOpenAdapterLegacyProtocol.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisInvokeOpenAdapterComplete(struct _NDIS_OPEN_BLOCK *a1, int a2)
{
  _NDIS_PROTOCOL_BLOCK *ProtocolHandle; // rdi
  int v3; // esi
  int v5; // edx
  char v6; // [rsp+38h] [rbp-10h]

  ProtocolHandle = a1->ProtocolHandle;
  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      6,
      98,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      (char)ProtocolHandle,
      (char)a1,
      v6);
  }
  ProtocolHandle->OpenAdapterCompleteHandlerEx(a1->ProtocolBindingContext, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      6,
      99,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      (char)ProtocolHandle,
      (char)a1);
  }
}
