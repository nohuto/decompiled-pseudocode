/*
 * XREFs of ESM_ReclaimingCanceledTransfersAfterControllerSurpriseRemoval @ 0x1C0040A70
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_OkToCompleteEndpointResetRequest @ 0x1C00179D4 (Endpoint_SM_OkToCompleteEndpointResetRequest.c)
 *     TR_OkToReclaimTransfersOnCancel @ 0x1C0024D6C (TR_OkToReclaimTransfersOnCancel.c)
 */

__int64 __fastcall ESM_ReclaimingCanceledTransfersAfterControllerSurpriseRemoval(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  unsigned int v3; // esi

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_BYTE *)(v1 + 37) )
  {
    v2 = *(_QWORD *)(v1 + 136);
    v3 = 1;
    for ( *(_DWORD *)(v2 + 20) = 0; v3 <= *(_DWORD *)(v2 + 8); ++v3 )
      TR_OkToReclaimTransfersOnCancel(*(_QWORD *)(104LL * (v3 - 1) + *(_QWORD *)(v1 + 136) + 48));
  }
  else
  {
    TR_OkToReclaimTransfersOnCancel(*(_QWORD *)(v1 + 88));
  }
  Endpoint_SM_OkToCompleteEndpointResetRequest(v1);
  return 1000LL;
}
