/*
 * XREFs of PiSwIrpInterfaceRegister @ 0x14075519C
 * Callers:
 *     PiSwDispatch @ 0x1406D88E0 (PiSwDispatch.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x1400073A0 (RtlStringCbCopyW.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiSwPropertySet @ 0x1406D8BF0 (PiSwPropertySet.c)
 *     PiSwUpdateArrayProperties @ 0x1406D8D10 (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x1406D8E24 (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwDeviceOperationsAllowed @ 0x1406D8E84 (PiSwDeviceOperationsAllowed.c)
 *     PiSwValidatePropertyArray @ 0x1406D8EB0 (PiSwValidatePropertyArray.c)
 *     IopRegisterDeviceInterface @ 0x14070AD74 (IopRegisterDeviceInterface.c)
 *     PiSwDeviceInterfaceSetState @ 0x140755514 (PiSwDeviceInterfaceSetState.c)
 *     PiSwInterfaceCreate @ 0x1407555DC (PiSwInterfaceCreate.c)
 *     PiSwInterfaceFree @ 0x140836FC0 (PiSwInterfaceFree.c)
 */

__int64 __fastcall PiSwIrpInterfaceRegister(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 FsContext2; // rsi
  char v4; // r12
  struct _IRP *MasterIrp; // rcx
  NTSTATUS updated; // edi
  __int64 v7; // r8
  unsigned int v8; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rcx
  __int64 *InterfaceEntry; // rax
  _QWORD *v12; // rdx
  __int64 v13; // r8
  struct _KTHREAD *v14; // rax
  __int64 v15; // r8
  NTSTRSAFE_PCWSTR v16; // rsi
  __int64 v17; // rax
  struct _KTHREAD *v19; // rax
  __int64 v20; // rdx
  __int64 **v21; // rcx
  __int64 *v22; // [rsp+30h] [rbp-68h]
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v24[11]; // [rsp+40h] [rbp-58h] BYREF
  int v25; // [rsp+B0h] [rbp+18h] BYREF
  PVOID P; // [rsp+B8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v24[1] = CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v24[2] = FsContext2;
  v24[0] = 0LL;
  P = 0LL;
  v22 = 0LL;
  pszSrc = 0LL;
  v25 = 0;
  v4 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
  {
    updated = -1073741811;
    goto LABEL_36;
  }
  updated = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, v24);
  if ( updated >= 0 )
  {
    NdrMesTypeDecode3(v24[0], "TP 3\a", &off_14090A1E8, &off_140400530, 2, &P);
    if ( P
      && *(_QWORD *)P
      && ((v7 = *((_QWORD *)P + 3)) != 0 || !*((_DWORD *)P + 4))
      && ((v8 = *((_DWORD *)P + 4)) != 0 || !v7) )
    {
      updated = PiSwValidatePropertyArray(*((_QWORD *)P + 3), v8);
      if ( updated >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
        if ( !PiSwDeviceOperationsAllowed(FsContext2) || (*(_DWORD *)(FsContext2 + 64) & 8) != 0 )
        {
          updated = -1073741637;
        }
        else
        {
          updated = IopRegisterDeviceInterface(
                      *(wchar_t **)(FsContext2 + 80),
                      *(int **)P,
                      *((const wchar_t **)P + 1),
                      1,
                      (PVOID *)&pszSrc,
                      &v25);
          if ( updated >= 0 )
          {
            v10 = *(_QWORD *)(FsContext2 + 120);
            if ( v10 )
              *(_DWORD *)(v10 + 48) |= v25;
            InterfaceEntry = PiSwDeviceFindInterfaceEntry(FsContext2, pszSrc);
            v22 = InterfaceEntry;
            if ( InterfaceEntry )
            {
              updated = PiSwUpdateArrayProperties(
                          InterfaceEntry[3],
                          *((_DWORD *)InterfaceEntry + 8),
                          *((_QWORD *)P + 3),
                          *((_DWORD *)P + 4));
LABEL_17:
              ExReleaseResourceLite(&PiSwLockObj);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              if ( updated < 0 )
                goto LABEL_36;
              v13 = *((_QWORD *)P + 3);
              if ( v13 )
                updated = PiSwPropertySet(v22[2], 3u, v13, *((_DWORD *)P + 4));
              if ( updated < 0 )
                goto LABEL_36;
              v14 = KeGetCurrentThread();
              --v14->KernelApcDisable;
              ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
              LOBYTE(v15) = *((_BYTE *)P + 32);
              updated = PiSwDeviceInterfaceSetState(FsContext2, v22, v15);
              goto LABEL_22;
            }
            updated = PiSwInterfaceCreate(pszSrc);
            if ( updated >= 0 )
            {
              v4 = 1;
              v12 = *(_QWORD **)(FsContext2 + 192);
              if ( *v12 != FsContext2 + 184 )
                goto LABEL_48;
              MEMORY[0] = FsContext2 + 184;
              MEMORY[8] = v12;
              *v12 = 0LL;
              *(_QWORD *)(FsContext2 + 192) = 0LL;
              goto LABEL_17;
            }
          }
        }
LABEL_22:
        ExReleaseResourceLite(&PiSwLockObj);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        if ( updated < 0 )
          goto LABEL_36;
        v16 = pszSrc;
        updated = RtlStringCbCopyW(
                    (NTSTRSAFE_PWSTR)Irp->AssociatedIrp.MasterIrp,
                    CurrentStackLocation->Parameters.Read.Length,
                    pszSrc);
        if ( updated >= 0 )
        {
          v17 = -1LL;
          do
            ++v17;
          while ( v16[v17] );
          Irp->IoStatus.Information = 2 * v17 + 2;
        }
      }
    }
    else
    {
      updated = -1073741811;
    }
  }
  if ( updated >= 0 )
    goto LABEL_28;
LABEL_36:
  if ( v22 && v4 )
  {
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v20 = *v22;
    v21 = (__int64 **)v22[1];
    if ( *(__int64 **)(*v22 + 8) == v22 && *v21 == v22 )
    {
      *v21 = (__int64 *)v20;
      *(_QWORD *)(v20 + 8) = v21;
      ExReleaseResourceLite(&PiSwLockObj);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      PiSwInterfaceFree(v22);
      goto LABEL_28;
    }
LABEL_48:
    __fastfail(3u);
  }
LABEL_28:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( pszSrc )
    ExFreePoolWithTag((PVOID)pszSrc, 0);
  if ( v24[0] )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)updated;
}
