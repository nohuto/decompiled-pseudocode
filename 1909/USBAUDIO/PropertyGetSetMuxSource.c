/*
 * XREFs of PropertyGetSetMuxSource @ 0x1C00273D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00118E0 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C0020E2C (DeviceRequestPowerUp.c)
 *     QueuePropertyRequest @ 0x1C0028FD4 (QueuePropertyRequest.c)
 */

__int64 __fastcall PropertyGetSetMuxSource(PIRP Irp, __int64 a2, unsigned int *a3)
{
  unsigned int v6; // r14d
  unsigned int v7; // edi
  PKSFILTER FilterFromIrp; // rdx
  __int64 v9; // rbp
  unsigned int *v10; // rax
  unsigned int v11; // ecx
  __int64 v13; // rdx
  PKSDEVICE Device; // rcx
  __int64 v15; // r8
  __int64 v16; // r9

  v6 = ((*(_DWORD *)(a2 + 20) & 1) << 7) | 1;
  v7 = -1073741811;
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  if ( !FilterFromIrp )
    return v7;
  v9 = (__int64)FilterFromIrp->Descriptor->NodeDescriptors + 152 * *(unsigned int *)(a2 + 24);
  if ( !v9 )
    return 3221225860LL;
  v10 = *(unsigned int **)(v9 + 128);
  if ( !v10 )
    return 3221225860LL;
  if ( v6 == 129 )
  {
    *a3 = *v10;
LABEL_8:
    Irp->IoStatus.Information = 4LL;
    return 0;
  }
  v11 = v10[1];
  if ( v11 == 1 && *a3 == 1 )
    goto LABEL_8;
  if ( v11 < *a3 || !*a3 )
    return v7;
  Device = KsGetDevice(FilterFromIrp);
  if ( *((_DWORD *)Device->Context + 132) == 1 )
  {
    v7 = (*(__int64 (__fastcall **)(PKSDEVICE, __int64, _QWORD, unsigned int *))(v9 + 136))(Device, v9, v6, a3);
    if ( (v7 & 0x80000000) == 0 )
    {
      **(_DWORD **)(v9 + 128) = *a3;
      Irp->IoStatus.Information = 4LL;
    }
    return v7;
  }
  if ( DeviceRequestPowerUp((PIRP *)Device, v13, v15, v16) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp);
}
