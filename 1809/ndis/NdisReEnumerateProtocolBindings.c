/*
 * XREFs of NdisReEnumerateProtocolBindings @ 0x1C00EDA40
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C0017C5C (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C001A488 (ndisReferenceProtocol.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     McTemplateK0qqq @ 0x1C004F464 (McTemplateK0qqq.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005DD2C (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C00BF620 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00BF6DC (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 */

void __stdcall NdisReEnumerateProtocolBindings(NDIS_HANDLE NdisProtocolHandle)
{
  struct _MCGEN_TRACE_CONTEXT *v2; // rcx
  __int64 v3; // rdx

  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x1Fu, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)NdisProtocolHandle);
  if ( (*((_DWORD *)NdisProtocolHandle + 16) & 0x20000000) != 0 )
    ndisCheckForNdisTestBindingsOnAllMiniports();
  if ( ndisReferenceProtocol((__int64)NdisProtocolHandle, 0xAu) )
  {
    *(_BYTE *)(*((_QWORD *)NdisProtocolHandle + 103) + 1LL) = 1;
    _InterlockedIncrement((volatile signed __int32 *)&Ndis::BindEngine::s_NumBindOperationsInProgress);
    NDIS_BIND_DRIVER_BASE::ForEachLink(
      *((NDIS_BIND_DRIVER_BASE **)NdisProtocolHandle + 103),
      (void (__fastcall *)(_LIST_ENTRY *))lambda_8cf7bed277b840ea59cbc6a15c16d068_::_lambda_invoker_cdecl_);
    if ( *((struct _KTHREAD **)NdisProtocolHandle + 52) != KeGetCurrentThread() )
      NDIS_BIND_DRIVER_BASE::ForEachLink(
        *((NDIS_BIND_DRIVER_BASE **)NdisProtocolHandle + 103),
        (void (__fastcall *)(_LIST_ENTRY *))lambda_1f70e7b164a43a0d336a36d71bfafc03_::_lambda_invoker_cdecl_);
    Ndis::BindEngine::EndBindOperation();
    ndisDereferenceProtocol((_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, v3, 0xAu);
  }
  else
  {
    if ( (unsigned __int8)byte_1C00A025C >= 2u )
      WPP_SF_q(0x21u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)NdisProtocolHandle);
    if ( byte_1C00A2082 < 0 )
      McTemplateK0qqq(
        v2,
        &ReferenceProtocolFailed,
        &NDIS_PROVIDER_ID,
        0,
        0x71Eu,
        (const unsigned int)NdisProtocolHandle);
  }
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0x22u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)NdisProtocolHandle);
}
