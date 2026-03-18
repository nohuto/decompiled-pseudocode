/*
 * XREFs of DpiMitigatedRangeUpdate @ 0x1C029D070
 * Callers:
 *     DxgkMitigatedRangeUpdateCB @ 0x1C003ED80 (DxgkMitigatedRangeUpdateCB.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C004A3D8 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C004A4FC (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkDdiQueryVirtualFunctionLuid @ 0x1C0210A20 (DxgkDdiQueryVirtualFunctionLuid.c)
 */

void __fastcall DpiMitigatedRangeUpdate(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // r8
  void *v6; // rdx
  PIRP v7; // rbp
  struct _LUID *MasterIrp; // rbx
  __int64 v9; // rax
  _BYTE v10[16]; // [rsp+30h] [rbp-28h] BYREF
  int VirtualFunctionLuid; // [rsp+40h] [rbp-18h]
  struct _LUID SourceLuid; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1[8];
  SourceLuid = 0LL;
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v10, a1, 0LL, 1);
  if ( VirtualFunctionLuid < 0
    || (VirtualFunctionLuid = DxgkDdiQueryVirtualFunctionLuid(*(_QWORD **)(v2 + 3896), 0LL, a2, (__int64)&SourceLuid),
        VirtualFunctionLuid < 0) )
  {
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v10);
  }
  else
  {
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v10);
    ExAcquirePushLockExclusiveEx(v2 + 5488, 0LL);
    v6 = *(void **)(v2 + 5432);
    if ( v6 && (v7 = IoCsqRemoveNextIrp((PIO_CSQ)(v2 + 5328), v6)) != 0LL )
    {
      KeClearEvent((PRKEVENT)(v2 + 5496));
      MasterIrp = (struct _LUID *)v7->AssociatedIrp.MasterIrp;
      memset(MasterIrp, 0, 0x2CuLL);
      RtlCopyLuid(MasterIrp, &SourceLuid);
      v7->IoStatus.Status = 0;
      v7->IoStatus.Information = 44LL;
      IofCompleteRequest(v7, 1);
      KeWaitForSingleObject((PVOID)(v2 + 5496), Executive, 0, 0, 0LL);
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v4, v6, v5);
      *(_QWORD *)(v9 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v9);
    }
    ExReleasePushLockExclusiveEx(v2 + 5488, 0LL);
  }
}
