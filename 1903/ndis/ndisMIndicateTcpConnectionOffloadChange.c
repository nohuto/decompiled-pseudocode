/*
 * XREFs of ndisMIndicateTcpConnectionOffloadChange @ 0x1C00AB524
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisMIndicateTcpConnectionOffloadChange(KSPIN_LOCK *a1, int a2, __int64 a3, unsigned int a4)
{
  char v8; // bl
  KIRQL v9; // dl
  KSPIN_LOCK v10; // r8

  v8 = 0;
  v9 = KeAcquireSpinLockRaiseToDpc(a1 + 12);
  v10 = a1[512];
  a1[65] = (KSPIN_LOCK)KeGetCurrentThread();
  if ( v10 )
  {
    if ( a2 == 1073872899 )
    {
      if ( a4 >= 0x14 && *(_BYTE *)a3 == 0x80 && *(_WORD *)(a3 + 2) >= 0x14u )
      {
        v8 = 1;
        if ( *(_BYTE *)(a3 + 1) )
        {
          *(_OWORD *)(v10 + 1004) = *(_OWORD *)a3;
          *(_DWORD *)(v10 + 1020) = *(_DWORD *)(a3 + 16);
          goto LABEL_15;
        }
      }
    }
    else
    {
      if ( a2 != 1073872907 )
        goto LABEL_15;
      if ( a4 >= 0x14 && *(_BYTE *)a3 == 0x80 && *(_WORD *)(a3 + 2) >= 0x14u )
      {
        v8 = 1;
        if ( *(_BYTE *)(a3 + 1) )
        {
          *(_OWORD *)(v10 + 1024) = *(_OWORD *)a3;
          *(_DWORD *)(v10 + 1040) = *(_DWORD *)(a3 + 16);
          goto LABEL_15;
        }
      }
    }
    v8 = 0;
  }
LABEL_15:
  a1[65] = 0LL;
  KeReleaseSpinLock(a1 + 12, v9);
  return v8;
}
