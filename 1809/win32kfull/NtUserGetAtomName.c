/*
 * XREFs of NtUserGetAtomName @ 0x1C010AA10
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetAtomName(unsigned __int16 a1, ULONG64 a2)
{
  unsigned int AtomName; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+38h] [rbp-20h]
  volatile void *v11; // [rsp+40h] [rbp-18h]

  EnterSharedCrit(0LL, 1LL);
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v10 = *(_DWORD *)a2;
  v11 = *(volatile void **)(a2 + 8);
  ProbeForWrite(v11, (unsigned __int16)HIWORD(*(_DWORD *)a2), 2u);
  AtomName = UserGetAtomName(a1, v11, HIWORD(v10) >> 1);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return AtomName;
}
