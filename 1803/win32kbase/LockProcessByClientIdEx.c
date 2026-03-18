/*
 * XREFs of LockProcessByClientIdEx @ 0x1C006C4D4
 * Callers:
 *     xxxDwmCheckProcessSession @ 0x1C006C480 (xxxDwmCheckProcessSession.c)
 *     LockProcessByClientId @ 0x1C00BC244 (LockProcessByClientId.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall LockProcessByClientIdEx(void *a1, PEPROCESS *a2, _DWORD *a3)
{
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx

  result = PsLookupProcessByProcessId(a1, a2);
  v6 = result;
  if ( result >= 0 )
  {
    if ( a3 )
      *a3 = PsGetProcessSessionId(*a2);
    return v6;
  }
  return result;
}
