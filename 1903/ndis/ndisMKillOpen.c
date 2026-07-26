/*
 * XREFs of ndisMKillOpen @ 0x1C01379FC
 * Callers:
 *     NdisCloseAdapter @ 0x1C0138530 (NdisCloseAdapter.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C118 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisMRestoreFilterSettings @ 0x1C006B6A4 (ndisMRestoreFilterSettings.c)
 *     EthDeleteFilterOpenAdapter @ 0x1C00A1870 (EthDeleteFilterOpenAdapter.c)
 *     nullDeleteFilterOpenAdapter @ 0x1C00A37DC (nullDeleteFilterOpenAdapter.c)
 */

void __fastcall ndisMKillOpen(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v3; // r14
  __int64 v4; // rsi
  KSPIN_LOCK *v5; // rcx
  bool v6; // zf
  __int64 *v7; // rcx
  unsigned int v8; // [rsp+50h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      10,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      a1);
  ndisReferencePackage((__int64)&ndisPkgs);
  v3 = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 96));
  v4 = *(_QWORD *)(v1 + 56);
  *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
  while ( v4 && v4 != a1 )
    v4 = *(_QWORD *)(v4 + 392);
  *(_QWORD *)(v1 + 520) = 0LL;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v1 + 96));
  if ( v4 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 232));
    if ( (*(_DWORD *)(a1 + 224) & 0x8000) != 0 )
    {
      v5 = (KSPIN_LOCK *)(a1 + 232);
    }
    else
    {
      *(_DWORD *)(a1 + 224) |= 0x8000u;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 232));
      while ( 1 )
      {
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 96));
        *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
        if ( !*(_BYTE *)(v1 + 89) )
          break;
        *(_QWORD *)(v1 + 520) = 0LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v1 + 96));
        v8 = 0;
        do
          ++v8;
        while ( v8 < 0x32 );
      }
      *(_BYTE *)(v1 + 89) = 1;
      v6 = *(_DWORD *)(v1 + 464) == 0;
      v7 = *(__int64 **)(v1 + 400);
      *(_QWORD *)(v1 + 1864) = KeGetCurrentThread();
      if ( v6 )
        EthDeleteFilterOpenAdapter((__int64)v7, a1);
      else
        nullDeleteFilterOpenAdapter(v7, a1);
      if ( !*(_DWORD *)(v1 + 464) && (*(_DWORD *)(v1 + 124) & 0x4010) == 0 )
        ndisMRestoreFilterSettings(v1, (char *)a1, 0);
      *(_QWORD *)(v1 + 1864) = 0LL;
      *(_BYTE *)(v1 + 89) = 0;
      ndisMDereferenceOpenLocked(a1, 1u);
      *(_QWORD *)(v1 + 520) = 0LL;
      v5 = (KSPIN_LOCK *)(v1 + 96);
    }
    KeReleaseSpinLockFromDpcLevel(v5);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      11,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      a1);
  KeLowerIrql(v3);
  ndisDereferencePackage((__int64)&ndisPkgs);
}
