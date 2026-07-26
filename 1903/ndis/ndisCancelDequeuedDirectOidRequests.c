/*
 * XREFs of ndisCancelDequeuedDirectOidRequests @ 0x1C00B7E2C
 * Callers:
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00B60FC (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00B62D0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00B68D8 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisRequestPowerResume @ 0x1C00B8C10 (ndisRequestPowerResume.c)
 * Callees:
 *     ndisMOidRequestCompleteInternal @ 0x1C001DCEC (ndisMOidRequestCompleteInternal.c)
 */

void __fastcall ndisCancelDequeuedDirectOidRequests(__int64 a1, _QWORD **a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rax

  while ( 1 )
  {
    v4 = *a2;
    if ( *a2 == a2 )
      break;
    if ( (_QWORD **)v4[1] != a2 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *a2 = v5;
    v5[1] = a2;
    ndisMOidRequestCompleteInternal(a1, (__int64)(v4 - 9), -1073676276, 0LL);
  }
}
