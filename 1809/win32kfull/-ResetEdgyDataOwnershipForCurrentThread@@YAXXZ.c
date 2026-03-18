/*
 * XREFs of ?ResetEdgyDataOwnershipForCurrentThread@@YAXXZ @ 0x1C010F580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void ResetEdgyDataOwnershipForCurrentThread(void)
{
  __int64 v0; // rdx

  if ( grpdeskRitInput )
  {
    v0 = *(_QWORD *)(grpdeskRitInput + 240LL);
    if ( v0 )
    {
      if ( *(_QWORD *)(v0 + 288) == gptiCurrent )
      {
        *(_QWORD *)(v0 + 288) = 0LL;
        *(_DWORD *)(*(_QWORD *)(grpdeskRitInput + 240LL) + 16LL) = 0;
      }
    }
  }
}
