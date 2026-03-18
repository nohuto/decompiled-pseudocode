/*
 * XREFs of NtUserGetClassName @ 0x1C00D6470
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetClassName(__int64 a1, int a2, ULONG64 a3)
{
  unsigned int AtomName; // esi
  __int64 v7; // rcx
  __int64 v8; // rdi
  volatile void *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int8 v13; // cl
  int v15; // [rsp+28h] [rbp-40h]

  AtomName = 0;
  EnterSharedCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    v15 = *(_DWORD *)a3;
    v9 = *(volatile void **)(a3 + 8);
    ProbeForWrite(v9, HIWORD(v15), 2u);
    v10 = *(_QWORD *)(*(_QWORD *)(v8 + 136) + 8LL);
    v11 = *(unsigned __int16 *)(v10 + 2);
    if ( a2 )
    {
      if ( (*(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x3FFF) != 0 )
      {
        v12 = (*(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x3FFFu) - 666;
        if ( (unsigned int)v12 < 0x1F )
        {
          _mm_lfence();
          v13 = byte_1C02DFAF0[v12];
          if ( v13 == 25 )
            v11 = *(unsigned __int16 *)(v10 + 2);
          else
            v11 = *(unsigned __int16 *)(gpsi + 2LL * v13 + 868);
        }
      }
    }
    AtomName = UserGetAtomName(v11, v9, HIWORD(v15) >> 1);
  }
  UserSessionSwitchLeaveCrit(v7);
  return AtomName;
}
