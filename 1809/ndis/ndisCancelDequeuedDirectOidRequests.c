/*
 * XREFs of ndisCancelDequeuedDirectOidRequests @ 0x1C007463C
 * Callers:
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0072D4C (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C0072F18 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C0073304 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisRequestPowerResume @ 0x1C0075358 (ndisRequestPowerResume.c)
 * Callees:
 *     ndisMOidRequestCompleteInternal @ 0x1C0045B94 (ndisMOidRequestCompleteInternal.c)
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
