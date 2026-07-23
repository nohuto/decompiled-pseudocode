/*
 * XREFs of KiCompleteDirectSwitchThread @ 0x1400D2C9C
 * Callers:
 *     KeReleaseSemaphoreEx @ 0x1400D29F0 (KeReleaseSemaphoreEx.c)
 * Callees:
 *     KiRemoveBoostThread @ 0x1400CFE60 (KiRemoveBoostThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400D1DBC (KiUpdateTotalCyclesCurrentThread.c)
 */

char __fastcall KiCompleteDirectSwitchThread(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned __int64 updated; // rdi
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned __int64 v8; // rcx

  v2 = *(_DWORD *)(a2 + 120);
  if ( (v2 & 0x20) != 0 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
    _disable();
    updated = KiUpdateTotalCyclesCurrentThread(a1, a2, 0LL);
    _enable();
    v7 = *(_QWORD *)(a1 + 11528);
    if ( v7 )
    {
      v8 = *(_QWORD *)(a2 + 32);
      if ( v8 > updated )
        *(_QWORD *)(v7 - 184) += v8 - updated;
    }
    LOBYTE(v2) = KiRemoveBoostThread(a1, a2, v6);
    *(_QWORD *)(a2 + 32) = updated;
  }
  return v2;
}
