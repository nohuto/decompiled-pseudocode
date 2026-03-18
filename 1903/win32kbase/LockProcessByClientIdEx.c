/*
 * XREFs of LockProcessByClientIdEx @ 0x1C009B0A8
 * Callers:
 *     LockProcessByClientId @ 0x1C009AE20 (LockProcessByClientId.c)
 *     xxxDwmCheckProcessSession @ 0x1C009B050 (xxxDwmCheckProcessSession.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LockProcessByClientIdEx(void *a1, PEPROCESS *a2, _DWORD *a3)
{
  NTSTATUS v5; // edi

  v5 = PsLookupProcessByProcessId(a1, a2);
  if ( v5 >= 0 && a3 )
    *a3 = PsGetProcessSessionId(*a2);
  return (unsigned int)v5;
}
