/*
 * XREFs of PropertySetFeatureValue @ 0x1C0025050
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010480 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C001FD4C (DeviceRequestPowerUp.c)
 *     QueuePropertyRequest @ 0x1C0027E24 (QueuePropertyRequest.c)
 */

__int64 __fastcall PropertySetFeatureValue(PIRP Irp, __int64 a2, __int64 a3)
{
  PKSFILTER FilterFromIrp; // rax
  __int64 v7; // rdx
  PKSFILTER v8; // r14
  int v9; // esi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *Context; // r10
  unsigned int v17; // ecx
  ULONG Length; // [rsp+28h] [rbp-40h]
  unsigned int v19; // [rsp+78h] [rbp+10h] BYREF

  FilterFromIrp = KsGetFilterFromIrp(Irp);
  v8 = FilterFromIrp;
  v9 = -1073741811;
  if ( !FilterFromIrp )
    return (unsigned int)v9;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v11 = (__int64)FilterFromIrp->Descriptor->NodeDescriptors + 152 * *(unsigned int *)(a2 + 24);
  Length = CurrentStackLocation->Parameters.Read.Length;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v7,
    0xAu,
    0xBu,
    (__int64)&WPP_80f9ce8d702435eb31980f9eb50f5c3b_Traceguids,
    Length);
  Context = v8->Context;
  if ( *(_DWORD *)(Context[2] + 528LL) == 1 )
  {
    v17 = *(_DWORD *)(a2 + 32);
    if ( v17 < *(_DWORD *)(v11 + 92) )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, unsigned int, int, unsigned int *))(v11 + 136))(
             Context,
             v11,
             CurrentStackLocation->Parameters.Read.Length,
             a3,
             v17,
             1,
             &v19);
      if ( v9 >= 0 )
        Irp->IoStatus.Information = v19;
    }
    return (unsigned int)v9;
  }
  if ( DeviceRequestPowerUp((PIRP *)v8->Context, v12, v13, v14) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp);
}
