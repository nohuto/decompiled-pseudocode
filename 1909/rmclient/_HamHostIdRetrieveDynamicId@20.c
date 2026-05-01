/*
 * XREFs of _HamHostIdRetrieveDynamicId@20 @ 0x10005500
 * Callers:
 *     <none>
 * Callees:
 *     _CempRpcBindToServer@8 @ 0x1000B1B0 (_CempRpcBindToServer@8.c)
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamHostIdRetrieveDynamicId(PSID Sid, int a2, int a3, int a4, int a5)
{
  CLIENT_CALL_RETURN result; // eax
  ULONG v6; // eax

  result.Simple = CempRpcBindToServer(dword_10002410);
  if ( result.Simple >= 0 )
  {
    v6 = RtlLengthSid(Sid);
    result.Pointer = _NdrClientCall4(&pStubDescriptor, &pFormat, 0, Sid, v6, a2, a3, a4, a5).Pointer;
    if ( result.Simple >= 0 )
      return 0;
  }
  return result;
}
