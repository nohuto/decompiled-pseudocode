/*
 * XREFs of PortPassThroughBuildIrpEx @ 0x1C00244B0
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C000F6CC (RaUnitAtaPassThroughIoctl.c)
 *     PortPassThroughExSendAsync @ 0x1C00762B4 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C0076920 (PortPassThroughSendAsync.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 */

PIRP __fastcall PortPassThroughBuildIrpEx(
        __int64 a1,
        void *a2,
        ULONG a3,
        char a4,
        KPROCESSOR_MODE AccessMode,
        PIRP Irp,
        char a7,
        void *a8,
        __int64 a9,
        struct _MDL **a10)
{
  char v11; // si
  struct _KPROCESS *RequestorProcess; // r14
  bool v14; // di
  PIRP v15; // rbx
  PMDL Mdl; // rax
  struct _MDL *v17; // rdi
  struct _MDL *MdlAddress; // rcx
  _KAPC_STATE ApcState; // [rsp+58h] [rbp-70h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v11 = 0;
  RequestorProcess = 0LL;
  if ( a7 && (!a8 || !a10 || !(_DWORD)a9) )
    return 0LL;
  if ( a10 )
    *a10 = 0LL;
  v14 = AccessMode == 1 && Irp;
  v15 = IoAllocateIrp(*(_BYTE *)(a1 + 76), 0);
  if ( !v15 )
    return 0LL;
  v15->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_WORD *)&v15->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 271;
  if ( a2 )
  {
    Mdl = IoAllocateMdl(a2, a3, 0, 0, 0LL);
    v15->MdlAddress = Mdl;
    if ( !Mdl )
    {
LABEL_15:
      IoFreeIrp(v15);
      return 0LL;
    }
    if ( v14 )
    {
      RequestorProcess = IoGetRequestorProcess(Irp);
      if ( RequestorProcess )
      {
        if ( RequestorProcess != IoGetCurrentProcess() )
        {
          KeStackAttachProcess(RequestorProcess, &ApcState);
          v11 = 1;
        }
      }
    }
    MmProbeAndLockPages(v15->MdlAddress, AccessMode, (LOCK_OPERATION)(a4 != 0));
    if ( v11 )
      KeUnstackDetachProcess(&ApcState);
  }
  if ( a7 )
  {
    v17 = IoAllocateMdl(a8, a9, 0, 0, 0LL);
    if ( !v17 )
    {
      MdlAddress = v15->MdlAddress;
      if ( MdlAddress )
      {
        MmUnlockPages(MdlAddress);
        IoFreeMdl(v15->MdlAddress);
      }
      goto LABEL_15;
    }
    if ( v11 )
      KeStackAttachProcess(RequestorProcess, &ApcState);
    else
      v11 = 0;
    MmProbeAndLockPages(v17, AccessMode, IoWriteAccess);
    if ( v11 )
      KeUnstackDetachProcess(&ApcState);
    *a10 = v17;
  }
  return v15;
}
