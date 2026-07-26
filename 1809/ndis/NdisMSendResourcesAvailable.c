/*
 * XREFs of NdisMSendResourcesAvailable @ 0x1C00558D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisMQueueWorkItem @ 0x1C00638BC (ndisMQueueWorkItem.c)
 */

void __fastcall NdisMSendResourcesAvailable(__int64 a1)
{
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_q(0x1Au, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(a1 + 120) |= 0x400000u;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1864) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
  if ( *(_QWORD *)(a1 + 144) )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1864) = 1508654;
    ndisMQueueWorkItem(a1, 1LL);
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1864) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
  }
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_q(0x1Bu, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, a1);
}
