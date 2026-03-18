/*
 * XREFs of Endpoint_SM_OkToCompleteEndpointResetRequest @ 0x1C00179D4
 * Callers:
 *     ESM_ReclaimingCanceledTransfersAfterControllerSurpriseRemoval @ 0x1C0040A70 (ESM_ReclaimingCanceledTransfersAfterControllerSurpriseRemoval.c)
 *     ESM_WaitingForControllerResetCompletion @ 0x1C0040ED0 (ESM_WaitingForControllerResetCompletion.c)
 * Callees:
 *     Endpoint_SM_CompleteResetRequestFromClient @ 0x1C001793C (Endpoint_SM_CompleteResetRequestFromClient.c)
 */

__int64 __fastcall Endpoint_SM_OkToCompleteEndpointResetRequest(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  int v3; // ett

  _m_prefetchw((const void *)(a1 + 32));
  LODWORD(result) = *(_DWORD *)(a1 + 32);
  do
  {
    v2 = (unsigned int)result ^ 0x100;
    v3 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v2, result);
  }
  while ( v3 != (_DWORD)result );
  if ( (result & 0x100) != 0 )
    return Endpoint_SM_CompleteResetRequestFromClient(a1, v2, 256);
  return result;
}
