/*
 * XREFs of PiDqIrpPropertySet @ 0x1406F3670
 * Callers:
 *     PiDqDispatch @ 0x1405B6520 (PiDqDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400668C0 (IofCompleteRequest.c)
 *     PiDqGetPnpObjectType @ 0x1405BB258 (PiDqGetPnpObjectType.c)
 *     PiPnpRtlEndOperation @ 0x1405BB544 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD2F8 (PiPnpRtlBeginOperation.c)
 *     PiDqOpenObjectRegKey @ 0x140666F54 (PiDqOpenObjectRegKey.c)
 *     _PnpCtxRegCloseKey @ 0x1406F2DC8 (_PnpCtxRegCloseKey.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F9FC0 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlSetObjectProperty @ 0x140706204 (PiPnpRtlSetObjectProperty.c)
 *     _PnpSetGenericStoreProperty @ 0x1407069EC (_PnpSetGenericStoreProperty.c)
 *     PiAuDoesClientHaveAccess @ 0x14071FFE0 (PiAuDoesClientHaveAccess.c)
 *     MIDL_user_free @ 0x140944190 (MIDL_user_free.c)
 */

__int64 __fastcall PiDqIrpPropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  char v3; // r15
  char v4; // si
  __int64 MasterIrp; // rcx
  NTSTATUS v6; // edi
  __int64 v7; // r10
  unsigned int PnpObjectType; // r12d
  unsigned int v9; // eax
  _DWORD *v10; // rcx
  __int64 v11; // rdx
  unsigned int i; // r15d
  __int64 v13; // rsi
  int v14; // eax
  void *v16; // [rsp+50h] [rbp-78h] BYREF
  void *v17; // [rsp+58h] [rbp-70h] BYREF
  __int64 v18; // [rsp+60h] [rbp-68h] BYREF
  PVOID P; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v20[11]; // [rsp+70h] [rbp-58h] BYREF
  void *v21; // [rsp+E8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v18 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v21 = 0LL;
  v3 = 0;
  v4 = 0;
  P = 0LL;
  MasterIrp = (__int64)Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_44;
  v6 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v18);
  if ( v6 < 0 )
    goto LABEL_27;
  NdrMesTypeDecode3(v18, "TP 3\a", &off_14036F1A0, &off_140425530, 2, &v21);
  MasterIrp = (__int64)v21;
  if ( !v21
    || !*((_QWORD *)v21 + 1)
    || !*((_QWORD *)v21 + 3)
    || !*((_DWORD *)v21 + 4)
    || (PnpObjectType = PiDqGetPnpObjectType(*(_DWORD *)v21)) == 0 )
  {
LABEL_44:
    v6 = -1073741811;
    goto LABEL_27;
  }
  v6 = PiDqOpenObjectRegKey(0, v7, PnpObjectType, 7, 0, 0LL, &v16);
  if ( v6 < 0 )
    goto LABEL_27;
  v9 = *((_DWORD *)v21 + 4);
  if ( v9 )
  {
    v10 = (_DWORD *)(*((_QWORD *)v21 + 3) + 20LL);
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
      v6 = PiDqOpenObjectRegKey(1, *((_QWORD *)v21 + 1), PnpObjectType, 7, 1, 0LL, &v17);
      if ( v6 < 0 )
        goto LABEL_27;
      goto LABEL_19;
    }
LABEL_38:
    v6 = -1073741790;
    goto LABEL_27;
  }
LABEL_19:
  v6 = PiPnpRtlBeginOperation(&P);
  if ( v6 >= 0 )
  {
    for ( i = 0; i < *((_DWORD *)v21 + 4); ++i )
    {
      v13 = *((_QWORD *)v21 + 3) + 48LL * i;
      v14 = *(_DWORD *)(v13 + 36);
      if ( *(_DWORD *)(v13 + 20) )
      {
        v6 = PnpSetGenericStoreProperty(
               PiPnpRtlCtx,
               (_DWORD)v17,
               *(_QWORD *)(v13 + 24),
               v13,
               *(_DWORD *)(v13 + 32),
               *(_QWORD *)(v13 + 40),
               v14);
        if ( v6 >= 0 )
        {
          v20[0] = 0LL;
          v20[1] = *(_QWORD *)(v13 + 24);
          v20[2] = v13;
          PiPnpRtlObjectEventWorker(*((_QWORD *)v21 + 1), PnpObjectType, 4, (unsigned int)v20, 1);
        }
      }
      else
      {
        v6 = PiPnpRtlSetObjectProperty(
               *(_QWORD *)&PiPnpRtlCtx,
               *((_QWORD *)v21 + 1),
               PnpObjectType,
               v16,
               *(_QWORD *)(v13 + 24),
               v13,
               *(_DWORD *)(v13 + 32),
               *(_QWORD *)(v13 + 40),
               v14,
               0);
      }
      if ( v6 == -1073741275 )
      {
        MasterIrp = (unsigned int)-(*(_DWORD *)(v13 + 32) != 0);
        v6 = MasterIrp & 0xC0000225;
      }
      if ( v6 < 0 )
        break;
    }
  }
LABEL_27:
  if ( v16 )
    PnpCtxRegCloseKey(MasterIrp, v16);
  if ( v17 )
    PnpCtxRegCloseKey(MasterIrp, v17);
  if ( v21 )
    MIDL_user_free(v21);
  if ( v18 )
    MesHandleFree();
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  Irp->IoStatus.Status = v6;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v6;
}
