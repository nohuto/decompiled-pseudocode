/*
 * XREFs of _HamGetApplicationStateForPsmKey@20 @ 0x10006B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __stdcall HamGetApplicationStateForPsmKey(_DWORD *a1, int a2, PSID Sid, int a4, int a5)
{
  ULONG v5; // eax

  if ( RtlValidSid(Sid) )
  {
    v5 = RtlLengthSid(Sid);
    return _NdrClientCall4(&stru_100010A0, &byte_100026D8, *a1, a2, Sid, v5, a4, a5);
  }
  else
  {
    return (CLIENT_CALL_RETURN)-1073741583;
  }
}
