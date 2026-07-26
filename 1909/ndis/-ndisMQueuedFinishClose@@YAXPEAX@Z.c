/*
 * XREFs of ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C01169C0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BC9C (ndisReferenceMiniportNoCheck.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C0027808 (ndisNotifyWmiBindUnbind.c)
 *     ndisDereferenceProtocol @ 0x1C00280E0 (ndisDereferenceProtocol.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisFreeOpenBlock @ 0x1C0081F70 (ndisFreeOpenBlock.c)
 *     ndisRemoveOpenFromGlobalList @ 0x1C009C3C0 (ndisRemoveOpenFromGlobalList.c)
 *     ndisInvokeCloseAdapterComplete @ 0x1C0116F08 (ndisInvokeCloseAdapterComplete.c)
 */

void __fastcall ndisMQueuedFinishClose(_QWORD *P)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  int v5; // r9d
  struct _KEVENT *v6; // rcx
  struct _KEVENT *v7; // rcx

  v1 = P[2];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      15,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      (char)P,
      P[2]);
  ndisReferenceMiniportNoCheck(v1, 0x33u);
  v3 = P[3];
  if ( *(_BYTE *)(v3 + 56) < 6u )
    (*(void (__fastcall **)(_QWORD, _QWORD))(v3 + 232))(P[4], 0LL);
  else
    ndisInvokeCloseAdapterComplete((char)P);
  ndisDereferenceMiniport(v1, 0x33u);
  if ( (P[28] & 0x10000) == 0 )
    ndisNotifyWmiBindUnbind(v1, P[3], 0);
  ndisDereferenceProtocol((_NDIS_PROTOCOL_BLOCK *)P[3], v4, 9u, v5);
  v6 = (struct _KEVENT *)P[41];
  if ( v6 )
    KeSetEvent(v6, 0, 0);
  v7 = (struct _KEVENT *)P[112];
  if ( v7 )
    KeSetEvent(v7, 0, 0);
  ndisRemoveOpenFromGlobalList((__int64)P);
  ndisFreeOpenBlock(P);
  ndisDereferenceMiniport(v1, 0x2Eu);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      16,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      (char)P,
      v1);
}
