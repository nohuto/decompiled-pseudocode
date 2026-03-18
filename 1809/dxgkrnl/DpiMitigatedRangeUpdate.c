/*
 * XREFs of DpiMitigatedRangeUpdate @ 0x1C0263138
 * Callers:
 *     DxgkMitigatedRangeUpdateCB @ 0x1C00387C0 (DxgkMitigatedRangeUpdateCB.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C0042E3C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C0042F78 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkDdiQueryVirtualFunctionLuid @ 0x1C01E1038 (DxgkDdiQueryVirtualFunctionLuid.c)
 */

void __fastcall DpiMitigatedRangeUpdate(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  void *v5; // rdx
  PIRP v6; // rbp
  struct _LUID *MasterIrp; // rbx
  __int64 v8; // rax
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF
  int VirtualFunctionLuid; // [rsp+40h] [rbp-18h]
  struct _LUID SourceLuid; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1[8];
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v9, a1, 0LL, 1);
  if ( VirtualFunctionLuid < 0
    || (VirtualFunctionLuid = DxgkDdiQueryVirtualFunctionLuid(*(_QWORD **)(v2 + 3792), 0, a2, (__int64)&SourceLuid),
        VirtualFunctionLuid < 0) )
  {
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v9);
  }
  else
  {
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v9);
    ExAcquirePushLockExclusiveEx(v2 + 5360, 0LL);
    v5 = *(void **)(v2 + 5304);
    if ( v5 && (v6 = IoCsqRemoveNextIrp((PIO_CSQ)(v2 + 5200), v5)) != 0LL )
    {
      KeClearEvent((PRKEVENT)(v2 + 5368));
      MasterIrp = (struct _LUID *)v6->AssociatedIrp.MasterIrp;
      memset(MasterIrp, 0, 0x2CuLL);
      RtlCopyLuid(MasterIrp, &SourceLuid);
      v6->IoStatus.Status = 0;
      v6->IoStatus.Information = 44LL;
      IofCompleteRequest(v6, 1);
      KeWaitForSingleObject((PVOID)(v2 + 5368), Executive, 0, 0, 0LL);
    }
    else
    {
      v8 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v8 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v8);
    }
    ExReleasePushLockExclusiveEx(v2 + 5360, 0LL);
  }
}
