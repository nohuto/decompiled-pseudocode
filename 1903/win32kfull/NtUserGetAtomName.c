/*
 * XREFs of NtUserGetAtomName @ 0x1C0111410
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetAtomName(unsigned __int16 a1, ULONG64 a2)
{
  unsigned int AtomName; // ebx
  __int64 v5; // rcx
  int v7; // [rsp+38h] [rbp-20h]
  volatile void *v8; // [rsp+40h] [rbp-18h]

  EnterSharedCrit(0LL, 1LL);
  if ( a2 >= MmUserProbeAddress )
    a2 = MmUserProbeAddress;
  v7 = *(_DWORD *)a2;
  v8 = *(volatile void **)(a2 + 8);
  ProbeForWrite(v8, (unsigned __int16)HIWORD(*(_DWORD *)a2), 2u);
  AtomName = UserGetAtomName(a1, v8, HIWORD(v7) >> 1);
  UserSessionSwitchLeaveCrit(v5);
  return AtomName;
}
