/*
 * XREFs of LockProcessByClientIdEx @ 0x1C007BD18
 * Callers:
 *     LockProcessByClientId @ 0x1C007BB68 (LockProcessByClientId.c)
 *     xxxDwmCheckProcessSession @ 0x1C007BCC0 (xxxDwmCheckProcessSession.c)
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
