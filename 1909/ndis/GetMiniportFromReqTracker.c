/*
 * XREFs of GetMiniportFromReqTracker @ 0x1C0035124
 * Callers:
 *     ndisOidPreAddPMProtocolOffload @ 0x1C0022FB0 (ndisOidPreAddPMProtocolOffload.c)
 *     ndisPreSetPMParameters @ 0x1C0034E04 (ndisPreSetPMParameters.c)
 *     ndisOidPreProtocolOptions @ 0x1C006DC60 (ndisOidPreProtocolOptions.c)
 *     ndisOidPrePMHaltOnSuspend @ 0x1C0074530 (ndisOidPrePMHaltOnSuspend.c)
 *     ndisPreQueryPMParameters @ 0x1C00758F0 (ndisPreQueryPMParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMiniportFromReqTracker(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rax

  result = *a1;
  if ( !*a1 )
  {
    v2 = a1[3];
    if ( v2 )
    {
      return *(_QWORD *)(v2 + 16);
    }
    else
    {
      result = a1[1];
      if ( result )
        return *(_QWORD *)(result + 32);
      result = a1[2];
      if ( result )
        return *(_QWORD *)(result + 32);
    }
  }
  return result;
}
