/*
 * XREFs of ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00EC300
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C00151C8 (ndisReferenceMiniportNoCheck.c)
 *     ndisDereferenceProtocol @ 0x1C0017C5C (ndisDereferenceProtocol.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisRemoveOpenFromGlobalList @ 0x1C006439C (ndisRemoveOpenFromGlobalList.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00BEB5C (ndisNotifyWmiBindUnbind.c)
 *     ndisFreeOpenBlock @ 0x1C00EC434 (ndisFreeOpenBlock.c)
 *     ndisInvokeCloseAdapterComplete @ 0x1C00EE12C (ndisInvokeCloseAdapterComplete.c)
 */

void __fastcall ndisMQueuedFinishClose(_QWORD *P)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  struct _KEVENT *v5; // rcx
  struct _KEVENT *v6; // rcx

  v1 = P[2];
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qq(0xFu, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, P, v1);
  ndisReferenceMiniportNoCheck(v1, 0x33u);
  v3 = P[3];
  if ( *(_BYTE *)(v3 + 56) < 6u )
    (*(void (__fastcall **)(_QWORD, _QWORD))(v3 + 232))(P[4], 0LL);
  else
    ndisInvokeCloseAdapterComplete(P);
  ndisDereferenceMiniport(v1, 0x33u);
  if ( (P[28] & 0x10000) == 0 )
    ndisNotifyWmiBindUnbind(v1, P[3], 0);
  ndisDereferenceProtocol((_NDIS_PROTOCOL_BLOCK *)P[3], v4, 9u);
  v5 = (struct _KEVENT *)P[41];
  if ( v5 )
    KeSetEvent(v5, 0, 0);
  v6 = (struct _KEVENT *)P[112];
  if ( v6 )
    KeSetEvent(v6, 0, 0);
  ndisRemoveOpenFromGlobalList((__int64)P);
  ndisFreeOpenBlock(P);
  ndisDereferenceMiniport(v1, 0x2Eu);
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qq(0x10u, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, P, v1);
}
