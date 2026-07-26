/*
 * XREFs of ndisNicAutoPowerSaverResetTelemetryData @ 0x1C00B85D4
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00BB8C4 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ndisSelectiveSuspendInitialize @ 0x1C011BF18 (ndisSelectiveSuspendInitialize.c)
 * Callees:
 *     memset @ 0x1C0041440 (memset.c)
 */

void __fastcall ndisNicAutoPowerSaverResetTelemetryData(__int64 a1)
{
  __int64 v1; // rsi
  KIRQL v2; // di
  __int64 v3; // rax

  if ( (*(_BYTE *)(a1 + 1004) & 6) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 4448);
    if ( v1 )
    {
      v2 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 4448));
      memset((void *)(v1 + 704), 0, 0x390uLL);
      v3 = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(v1 + 712) = *(_QWORD *)(v1 + 672);
      *(_DWORD *)(v1 + 704) = *(_DWORD *)(v1 + 644);
      *(_QWORD *)(v1 + 720) = *(_QWORD *)(v1 + 688);
      *(_QWORD *)(v1 + 728) = v3;
      KeReleaseSpinLock((PKSPIN_LOCK)v1, v2);
    }
  }
}
