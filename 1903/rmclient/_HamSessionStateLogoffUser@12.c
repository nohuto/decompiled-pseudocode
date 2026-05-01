/*
 * XREFs of _HamSessionStateLogoffUser@12 @ 0x10012F60
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamSessionStateLogoffUser(_DWORD *a1, PSID Sid, int a3)
{
  ULONG v3; // eax

  v3 = RtlLengthSid(Sid);
  return _NdrClientCall4(&stru_10001120, &byte_100027AC, *a1, Sid, v3, a3);
}
