/*
 * XREFs of ndisMKillOpen @ 0x1C0116A68
 * Callers:
 *     NdisCloseAdapter @ 0x1C0117490 (NdisCloseAdapter.c)
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0017490 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisMRestoreFilterSettings @ 0x1C004623C (ndisMRestoreFilterSettings.c)
 *     EthDeleteFilterOpenAdapter @ 0x1C0066E34 (EthDeleteFilterOpenAdapter.c)
 *     nullDeleteFilterOpenAdapter @ 0x1C00688FC (nullDeleteFilterOpenAdapter.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 */

void __fastcall ndisMKillOpen(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v3; // r14
  __int64 v4; // rsi
  KSPIN_LOCK *v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v7; // rcx
  unsigned int v8; // [rsp+40h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0xAu, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, a1);
  ndisReferencePackage((__int64)&ndisPkgs);
  v3 = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 96));
  v4 = *(_QWORD *)(v1 + 56);
  *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v1 + 1864) = 1441871;
  while ( v4 && v4 != a1 )
    v4 = *(_QWORD *)(v4 + 392);
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_DWORD *)(v1 + 1864) = 0;
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
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 96));
      CurrentThread = KeGetCurrentThread();
      for ( *(_DWORD *)(v1 + 1864) = 1441908; ; *(_DWORD *)(v1 + 1864) = 1441909 )
      {
        *(_QWORD *)(v1 + 520) = CurrentThread;
        if ( !*(_BYTE *)(v1 + 89) )
          break;
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1864) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v1 + 96));
        v8 = 0;
        do
          ++v8;
        while ( v8 < 0x32 );
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 96));
        CurrentThread = KeGetCurrentThread();
      }
      *(_BYTE *)(v1 + 89) = 1;
      *(_DWORD *)(v1 + 1868) = 1441909;
      v7 = *(__int64 **)(v1 + 400);
      *(_QWORD *)(v1 + 1872) = KeGetCurrentThread();
      if ( *(_DWORD *)(v1 + 464) )
        nullDeleteFilterOpenAdapter(v7, a1);
      else
        EthDeleteFilterOpenAdapter((__int64)v7, a1);
      if ( !*(_DWORD *)(v1 + 464) && (*(_DWORD *)(v1 + 124) & 0x4010) == 0 )
        ndisMRestoreFilterSettings(v1, (_QWORD *)a1, 0);
      *(_BYTE *)(v1 + 89) = 0;
      *(_DWORD *)(v1 + 1868) = 0;
      *(_QWORD *)(v1 + 1872) = 0LL;
      ndisMDereferenceOpenLocked(a1, 1u);
      v5 = (KSPIN_LOCK *)(v1 + 96);
      *(_QWORD *)(v1 + 520) = 0LL;
      *(_DWORD *)(v1 + 1864) = 0;
    }
    KeReleaseSpinLockFromDpcLevel(v5);
  }
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(0xBu, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, a1);
  KeLowerIrql(v3);
  ndisDereferencePackage((__int64)&ndisPkgs);
}
