/*
 * XREFs of ndisSetWakeUpTimer @ 0x1C001C960
 * Callers:
 *     ndisMWakeUpDpcX @ 0x1C0010F50 (ndisMWakeUpDpcX.c)
 *     ndisMWakeUpDpc @ 0x1C00A1730 (ndisMWakeUpDpc.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C00B95DC (ndisSelectiveSuspendResumeOperations.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C013B4EC (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisCheckForHangSupported @ 0x1C001CA14 (ndisCheckForHangSupported.c)
 */

char __fastcall ndisSetWakeUpTimer(__int64 a1, __int64 a2)
{
  int v2; // r8d
  ULONG v4; // esi
  __int64 v5; // rcx
  int v6; // r8d
  unsigned __int8 v7; // al
  __int64 v8; // rbx

  v2 = 1000 * *(_DWORD *)(a1 + 376);
  LODWORD(a2) = (unsigned __int64)(1717986919LL * v2) >> 32;
  v4 = v2 / 5;
  if ( !(unsigned __int8)ndisCheckForHangSupported(a1, a2) )
    return 0;
  v7 = *(_BYTE *)(v5 + 32);
  if ( v7 > 6u || v7 == 6 && *(_BYTE *)(v5 + 33) >= 0x1Eu )
    v4 = 4000;
  *(_DWORD *)(v5 + 124) &= ~0x20000000u;
  v8 = -10000LL * v6;
  KeClearEvent((PRKEVENT)(v5 + 1912));
  KeSetCoalescableTimer((PKTIMER)(a1 + 216), (LARGE_INTEGER)v8, 0, v4, (PKDPC)(a1 + 280));
  return 1;
}
