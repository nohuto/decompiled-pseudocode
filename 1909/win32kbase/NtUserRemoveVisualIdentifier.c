/*
 * XREFs of NtUserRemoveVisualIdentifier @ 0x1C01192B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     ?RemoveMapping@InputObjectMap@@SAJU_LUID@@@Z @ 0x1C01C6260 (-RemoveMapping@InputObjectMap@@SAJU_LUID@@@Z.c)
 */

__int64 __fastcall NtUserRemoveVisualIdentifier(struct _LUID *a1)
{
  int v1; // ebx
  NTSTATUS v2; // eax
  ULONG v3; // eax
  __int64 v4; // rdx

  v1 = 0;
  if ( &a1[1] < a1 || (unsigned __int64)&a1[1] > MmUserProbeAddress )
    a1 = (struct _LUID *)MmUserProbeAddress;
  v2 = InputObjectMap::RemoveMapping(*a1);
  if ( v2 >= 0 )
  {
    return 1;
  }
  else
  {
    v3 = RtlNtStatusToDosError(v2);
    UserSetLastError(v3, v4);
  }
  return v1;
}
