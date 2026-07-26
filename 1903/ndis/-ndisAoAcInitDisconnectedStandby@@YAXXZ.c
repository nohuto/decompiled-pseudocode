/*
 * XREFs of ?ndisAoAcInitDisconnectedStandby@@YAXXZ @ 0x1C007B9C4
 * Callers:
 *     ?ndisDriverReinit@@YAXPEAU_DRIVER_OBJECT@@PEAXK@Z @ 0x1C003F670 (-ndisDriverReinit@@YAXPEAU_DRIVER_OBJECT@@PEAXK@Z.c)
 * Callees:
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C0077328 (ndisUpdateAndIndicatePMCapabilities.c)
 */

void ndisAoAcInitDisconnectedStandby(void)
{
  KIRQL v0; // al
  struct _NDIS_M_DRIVER_BLOCK *v1; // rdi
  KIRQL v2; // bp
  __int64 i; // rbx
  int v4; // ecx
  int v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+54h] [rbp+Ch]
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  v6 = 0;
  v5 = 1;
  if ( ZwPowerInformation(PowerInformationInternal, &v5, 8u, &v7, 8u) < 0 )
  {
LABEL_5:
    if ( !ndisEnforceDisconnectedStandby )
      return;
    goto LABEL_6;
  }
  if ( (v7 & 0x20000000000LL) == 0 )
  {
    ndisEnforceDisconnectedStandby = 0;
    goto LABEL_5;
  }
  ndisEnforceDisconnectedStandby = 1;
LABEL_6:
  v0 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v1 = ndisMiniDriverList;
  v2 = v0;
  while ( v1 )
  {
    KeAcquireSpinLockAtDpcLevel(&v1->Ref.SpinLock);
    for ( i = (__int64)v1->MiniportQueue; i; i = *(_QWORD *)(i + 8) )
    {
      v4 = *(_DWORD *)(i + 124);
      if ( (v4 & 0x200000) != 0 && ndisAoAcCapable || (*(_DWORD *)(i + 2684) & 0x200) != 0 )
      {
        *(_DWORD *)(i + 3864) |= 0x10u;
        *(_DWORD *)(i + 124) = v4 & 0xFFFFFFBF;
        ndisUpdateAndIndicatePMCapabilities(i);
      }
    }
    KeReleaseSpinLockFromDpcLevel(&v1->Ref.SpinLock);
    v1 = v1->NextDriver;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v2);
}
