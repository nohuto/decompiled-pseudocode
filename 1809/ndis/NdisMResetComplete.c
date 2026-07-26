/*
 * XREFs of NdisMResetComplete @ 0x1C0060FE0
 * Callers:
 *     ndisMReset @ 0x1C0063990 (ndisMReset.c)
 *     ndisMResetMiniportInternal @ 0x1C0063F8C (ndisMResetMiniportInternal.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisMResetCompleteStage1 @ 0x1C0063D20 (ndisMResetCompleteStage1.c)
 *     ndisMResetCompleteStage2 @ 0x1C0063DD4 (ndisMResetCompleteStage2.c)
 *     ndisClearBusy @ 0x1C00748D0 (ndisClearBusy.c)
 */

void __stdcall NdisMResetComplete(NDIS_HANDLE MiniportAdapterHandle, NDIS_STATUS Status, BOOLEAN AddressingReset)
{
  ULONG_PTR v4; // rdi
  __int64 v6; // r8
  KIRQL v7; // r14
  bool v8; // zf
  int v9; // eax
  BOOLEAN v10; // dl

  v4 = Status;
  if ( (unsigned __int8)byte_1C00A0260 >= 4u )
    WPP_SF_q(0x54u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (__int64)MiniportAdapterHandle);
  if ( *((_QWORD *)MiniportAdapterHandle + 561) )
    ndisClearBusy(MiniportAdapterHandle, 1LL, 36LL);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  v8 = (*((_DWORD *)MiniportAdapterHandle + 30) & 0x200000) == 0;
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  *((_DWORD *)MiniportAdapterHandle + 466) = 726679;
  if ( v8 )
  {
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *((_QWORD *)MiniportAdapterHandle + 486),
      "Completing reset when one is not pending");
    KeBugCheckEx(0x7Cu, 0xFuLL, (ULONG_PTR)MiniportAdapterHandle, v4, AddressingReset);
  }
  LOBYTE(v6) = AddressingReset;
  v9 = ndisMResetCompleteStage1(MiniportAdapterHandle, (unsigned int)v4, v6);
  v10 = AddressingReset;
  if ( v9 )
    v10 = 0;
  if ( !v10 || (_DWORD)v4 )
    ndisMResetCompleteStage2(MiniportAdapterHandle);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 466) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v7);
  if ( (unsigned __int8)byte_1C00A0260 >= 4u )
    WPP_SF_q(0x55u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (__int64)MiniportAdapterHandle);
}
