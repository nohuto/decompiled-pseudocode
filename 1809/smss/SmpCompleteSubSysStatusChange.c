/*
 * XREFs of SmpCompleteSubSysStatusChange @ 0x140002DA4
 * Callers:
 *     SmpReadySubSys @ 0x140002D40 (SmpReadySubSys.c)
 *     SmpDeleteSubSys @ 0x140016738 (SmpDeleteSubSys.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SmpCompleteSubSysStatusChange(__int64 a1)
{
  NTSTATUS result; // eax
  HANDLE *v2; // rcx

  result = a1;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v2 = (HANDLE *)_InterlockedExchange64((volatile __int64 *)(a1 + 16), 0LL);
    if ( v2 )
    {
      if ( *(_DWORD *)v2 )
        return NtSetEvent(v2[1], 0LL);
      else
        return SmpDisposeSubSysSynch(v2);
    }
  }
  return result;
}
