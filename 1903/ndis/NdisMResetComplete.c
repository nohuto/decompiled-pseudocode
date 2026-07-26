/*
 * XREFs of NdisMResetComplete @ 0x1C0098660
 * Callers:
 *     ndisMReset @ 0x1C009B750 (ndisMReset.c)
 *     ndisMResetMiniportInternal @ 0x1C009BCCC (ndisMResetMiniportInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1C009797C (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ndisMResetCompleteStage2 @ 0x1C009BB24 (ndisMResetCompleteStage2.c)
 *     ndisClearBusy @ 0x1C00B80E0 (ndisClearBusy.c)
 */

void __stdcall NdisMResetComplete(NDIS_HANDLE MiniportAdapterHandle, NDIS_STATUS Status, BOOLEAN AddressingReset)
{
  ULONG_PTR v4; // rdi
  KIRQL v6; // r14
  bool v7; // zf
  int v8; // eax
  BOOLEAN v9; // dl
  int v10; // edx

  v4 = Status;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Status) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Status,
      17,
      82,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)MiniportAdapterHandle);
  }
  if ( *((_QWORD *)MiniportAdapterHandle + 556) )
    ndisClearBusy(MiniportAdapterHandle, 1LL, 36LL);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  v7 = (*((_DWORD *)MiniportAdapterHandle + 30) & 0x200000) == 0;
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  if ( v7 )
  {
    DbgPrintEx(
      0x78u,
      0,
      " ***NDIS*** : Miniport %Z - %s\n",
      *((_QWORD *)MiniportAdapterHandle + 482),
      "Completing reset when one is not pending");
    KeBugCheckEx(0x7Cu, 0xFuLL, (ULONG_PTR)MiniportAdapterHandle, v4, AddressingReset);
  }
  v8 = ndisMResetCompleteStage1((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, v4, AddressingReset);
  v9 = AddressingReset;
  if ( v8 )
    v9 = 0;
  if ( !v9 || (_DWORD)v4 )
    ndisMResetCompleteStage2((char)MiniportAdapterHandle);
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v6);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      17,
      83,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)MiniportAdapterHandle);
  }
}
