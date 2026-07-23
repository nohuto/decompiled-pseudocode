/*
 * XREFs of PiDqIrpPropertySet @ 0x1406D6B7C
 * Callers:
 *     PiDqDispatch @ 0x140591640 (PiDqDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiDqGetPnpObjectType @ 0x140596A78 (PiDqGetPnpObjectType.c)
 *     PiPnpRtlEndOperation @ 0x140596CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140597E08 (PiPnpRtlBeginOperation.c)
 *     PiDqOpenObjectRegKey @ 0x1406DAEA4 (PiDqOpenObjectRegKey.c)
 *     PiPnpRtlSetObjectProperty @ 0x1406E64F0 (PiPnpRtlSetObjectProperty.c)
 *     _PnpSetGenericStoreProperty @ 0x1406E6CCC (_PnpSetGenericStoreProperty.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F31C0 (PiPnpRtlObjectEventWorker.c)
 *     PiAuDoesClientHaveAccess @ 0x140700A2C (PiAuDoesClientHaveAccess.c)
 */

__int64 __fastcall PiDqIrpPropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v3; // r15
  char v4; // si
  struct _IRP *MasterIrp; // rcx
  NTSTATUS v6; // edi
  int v7; // r10d
  unsigned int PnpObjectType; // r12d
  unsigned int v9; // eax
  _DWORD *v10; // rcx
  __int64 v11; // rdx
  unsigned int i; // r15d
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // r8d
  __int64 v16; // r10
  HANDLE Handle; // [rsp+50h] [rbp-78h] BYREF
  HANDLE v19; // [rsp+58h] [rbp-70h] BYREF
  __int64 v20; // [rsp+60h] [rbp-68h] BYREF
  PVOID v21; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v22[11]; // [rsp+70h] [rbp-58h] BYREF
  PVOID P; // [rsp+E8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v20 = 0LL;
  Handle = 0LL;
  v19 = 0LL;
  P = 0LL;
  v3 = 0;
  v4 = 0;
  v21 = 0LL;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_44;
  v6 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v20);
  if ( v6 < 0 )
    goto LABEL_27;
  NdrMesTypeDecode3(v20, "TP 3\a", &off_140350000, &off_140400520, 2, &P);
  if ( !P
    || !*((_QWORD *)P + 1)
    || !*((_QWORD *)P + 3)
    || !*((_DWORD *)P + 4)
    || (PnpObjectType = PiDqGetPnpObjectType(*(_DWORD *)P)) == 0 )
  {
LABEL_44:
    v6 = -1073741811;
    goto LABEL_27;
  }
  v6 = PiDqOpenObjectRegKey(0, v7, PnpObjectType, 7, 0, 0LL, (__int64)&Handle);
  if ( v6 < 0 )
    goto LABEL_27;
  v9 = *((_DWORD *)P + 4);
  if ( v9 )
  {
    v10 = (_DWORD *)(*((_QWORD *)P + 3) + 20LL);
    v11 = v9;
    do
    {
      if ( !*v10 )
        v3 = 1;
      if ( *v10 == 1 )
        v4 = 1;
      v10 += 12;
      --v11;
    }
    while ( v11 );
  }
  if ( v3 && !(unsigned __int8)PiAuDoesClientHaveAccess(2LL) )
    goto LABEL_38;
  if ( v4 )
  {
    if ( (unsigned __int8)PiAuDoesClientHaveAccess(256LL) )
    {
      v6 = PiDqOpenObjectRegKey(1, *((_QWORD *)P + 1), PnpObjectType, 7, 1, 0LL, (__int64)&v19);
      if ( v6 < 0 )
        goto LABEL_27;
      goto LABEL_19;
    }
LABEL_38:
    v6 = -1073741790;
    goto LABEL_27;
  }
LABEL_19:
  v6 = PiPnpRtlBeginOperation(&v21);
  if ( v6 >= 0 )
  {
    for ( i = 0; i < *((_DWORD *)P + 4); ++i )
    {
      v13 = *((_QWORD *)P + 3) + 48LL * i;
      v14 = *(_QWORD *)(v13 + 40);
      v15 = *(_DWORD *)(v13 + 32);
      v16 = *(_QWORD *)(v13 + 24);
      if ( *(_DWORD *)(v13 + 20) )
      {
        v6 = PnpSetGenericStoreProperty(PiPnpRtlCtx, (_DWORD)v19, v16, v13, v15, v14, *(_DWORD *)(v13 + 36));
        if ( v6 >= 0 )
        {
          v22[0] = 0LL;
          v22[1] = *(_QWORD *)(v13 + 24);
          v22[2] = v13;
          PiPnpRtlObjectEventWorker(*((_QWORD *)P + 1), PnpObjectType, 4, (unsigned int)v22, 1);
        }
      }
      else
      {
        v6 = PiPnpRtlSetObjectProperty(
               *(_QWORD *)&PiPnpRtlCtx,
               *((_QWORD *)P + 1),
               PnpObjectType,
               Handle,
               v16,
               v13,
               v15,
               v14,
               *(_DWORD *)(v13 + 36),
               0);
      }
      if ( v6 == -1073741275 )
        v6 = *(_DWORD *)(v13 + 32) != 0 ? 0xC0000225 : 0;
      if ( v6 < 0 )
        break;
    }
  }
LABEL_27:
  if ( Handle )
    ZwClose(Handle);
  if ( v19 )
    ZwClose(v19);
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v20 )
    MesHandleFree();
  if ( v21 )
    PiPnpRtlEndOperation((PVOID **)v21);
  Irp->IoStatus.Status = v6;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v6;
}
