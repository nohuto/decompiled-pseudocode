/*
 * XREFs of sub_180076EC8 @ 0x180076EC8
 * Callers:
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 * Callees:
 *     RtlIsCriticalSectionLockedByThread @ 0x18002A4D0 (RtlIsCriticalSectionLockedByThread.c)
 *     sub_180035B5C @ 0x180035B5C (sub_180035B5C.c)
 */

void __fastcall sub_180076EC8(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx

  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 128);
    *(GUID *)(a1 + 232) = NtCurrentTeb()->ActivityId;
    if ( v2 )
    {
      if ( (*(_BYTE *)(v2 + 436) & 1) == 0 )
      {
        v3 = *(_DWORD *)(a1 + 104) | 8;
        *(_DWORD *)(a1 + 104) = v3;
        if ( NtCurrentTeb()->IsImpersonating )
        {
          v3 |= 4u;
          *(_DWORD *)(a1 + 104) = v3;
        }
        if ( sub_180035B5C() )
        {
          v3 |= 0x10u;
          *(_DWORD *)(a1 + 104) = v3;
        }
        if ( RtlIsCriticalSectionLockedByThread(NtCurrentPeb()->LoaderLock) )
        {
          v3 |= 0x20u;
          *(_DWORD *)(a1 + 104) = v3;
        }
        if ( NtCurrentTeb()->PreferredLanguages )
        {
          v3 |= 0x40u;
          *(_DWORD *)(a1 + 104) = v3;
        }
        if ( NtCurrentTeb()->SavedPriorityState )
          *(_DWORD *)(a1 + 104) = v3 | 0x80;
      }
    }
  }
}
