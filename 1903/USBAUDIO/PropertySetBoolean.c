/*
 * XREFs of PropertySetBoolean @ 0x1C0026380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00117A0 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C0020E0C (DeviceRequestPowerUp.c)
 *     QueuePropertyRequest @ 0x1C0028FB4 (QueuePropertyRequest.c)
 */

__int64 __fastcall PropertySetBoolean(PIRP Irp, __int64 a2, _BYTE *a3)
{
  PKSFILTER FilterFromIrp; // rax
  __int64 v7; // r9
  int v8; // r8d
  __int64 v9; // rdx
  PIRP *Context; // rcx
  __int64 v11; // rbp
  unsigned int v13; // [rsp+58h] [rbp+10h]

  FilterFromIrp = KsGetFilterFromIrp(Irp);
  v8 = -1073741811;
  if ( *a3 > 1u || !FilterFromIrp )
    return (unsigned int)v8;
  v9 = (__int64)FilterFromIrp->Descriptor->NodeDescriptors + 152 * *(unsigned int *)(a2 + 24);
  Context = (PIRP *)FilterFromIrp->Context;
  v11 = *(_QWORD *)(v9 + 128);
  if ( LODWORD(Context[2][2].UserBuffer) == 1 )
  {
    if ( *(_DWORD *)(a2 + 32) < *(_DWORD *)(v9 + 92) )
    {
      v8 = (*(__int64 (__fastcall **)(PIRP *, __int64, _BYTE *))(v9 + 136))(Context, v9, a3);
      if ( v8 >= 0 )
      {
        *(_BYTE *)(v11 + 12) = *a3;
        Irp->IoStatus.Information = v13;
      }
    }
    return (unsigned int)v8;
  }
  if ( DeviceRequestPowerUp(Context, v9, 3221225485LL, v7) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp);
}
