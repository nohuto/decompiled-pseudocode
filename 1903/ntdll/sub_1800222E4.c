/*
 * XREFs of sub_1800222E4 @ 0x1800222E4
 * Callers:
 *     sub_180022378 @ 0x180022378 (sub_180022378.c)
 *     sub_1800225E4 @ 0x1800225E4 (sub_1800225E4.c)
 * Callees:
 *     sub_180021D94 @ 0x180021D94 (sub_180021D94.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_1800222E4(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v6 = 0;
  if ( a1 )
  {
    RtlAcquireSRWLockExclusive(&stru_1801660B0);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) || (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      sub_180021D94(a1, a2, 0LL, &v6);
      v2 = v6;
    }
    else
    {
      v2 = -1073741515;
    }
    RtlReleaseSRWLockExclusive(&stru_1801660B0);
  }
  return v2;
}
