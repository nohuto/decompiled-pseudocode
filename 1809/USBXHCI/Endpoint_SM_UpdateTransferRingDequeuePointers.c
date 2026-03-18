/*
 * XREFs of Endpoint_SM_UpdateTransferRingDequeuePointers @ 0x1C0017F54
 * Callers:
 *     ESM_UpdatingTransferRingDequeuePointers @ 0x1C0040EB0 (ESM_UpdatingTransferRingDequeuePointers.c)
 * Callees:
 *     XilEndpoint_FetchStreamContextArray @ 0x1C0014660 (XilEndpoint_FetchStreamContextArray.c)
 *     Endpoint_OnCancelSetDequeuePointer @ 0x1C0016838 (Endpoint_OnCancelSetDequeuePointer.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_SM_UpdateTransferRingDequeuePointers(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  __int64 result; // rax
  unsigned int i; // edi

  if ( !*(_BYTE *)(a1 + 37) )
    return Endpoint_OnCancelSetDequeuePointer(a1, 0);
  v4 = *(_QWORD *)(a1 + 136);
  *(_DWORD *)(v4 + 20) = 0;
  if ( (int)XilEndpoint_FetchStreamContextArray(v4, a2, a3) >= 0 )
  {
    result = *(_QWORD *)(a1 + 136);
    for ( i = 1; i <= *(_DWORD *)(result + 8); ++i )
    {
      Endpoint_OnCancelSetDequeuePointer(a1, i);
      result = *(_QWORD *)(a1 + 136);
    }
  }
  else
  {
    _m_prefetchw((const void *)(a1 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 32), 2u);
    if ( (result & 2) == 0 )
      return ESM_AddEvent((PVOID)(a1 + 288));
  }
  return result;
}
