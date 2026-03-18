/*
 * XREFs of DpiFlexIovMitigationUpdate @ 0x1C0267B64
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C0263DD0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C0035FC0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C0042E3C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C0042F78 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C01E1670 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C0264FC4 (DpiFdoGetVirtualGpuType.c)
 */

__int64 __fastcall DpiFlexIovMitigationUpdate(
        _QWORD *a1,
        struct _IRP *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v7; // rsi
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v17; // rdi
  int v18; // eax
  _BYTE v19[16]; // [rsp+30h] [rbp-28h] BYREF
  int v20; // [rsp+40h] [rbp-18h]

  v7 = a1[8];
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v7, L"DpiFlexIovMitigationUpdate", 0LL);
  if ( !a2->RequestorMode || DxgkpCheckProcessForVirtualMachineManagementAccess() )
  {
    if ( a4 >= 8 && a3 && a6 >= 0x2C && a5 )
    {
      if ( DpiFdoGetVirtualGpuType((__int64)a2) )
      {
        v15 = WdLogNewEntry5_WdWarning(a1, v13, v14);
        WdLogEvent5_WdWarning(v15);
        return 3221225659LL;
      }
      if ( *(_BYTE *)(v7 + 5316) && !*(_QWORD *)(v7 + 5304) )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v19, a1, a2, 1);
        v18 = v20;
        if ( v20 >= 0 )
        {
          KeSetEvent((PRKEVENT)(v7 + 5368), 0, 0);
          *(_QWORD *)(v7 + 5304) = a2;
          a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          IoCsqInsertIrp((PIO_CSQ)(v7 + 5200), a2, 0LL);
          v18 = 259;
          v20 = 259;
        }
        v12 = v18;
        CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v19);
        goto LABEL_21;
      }
      v17 = -1073741811LL;
    }
    else
    {
      v17 = -1073741789LL;
    }
    v12 = v17;
    v11 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v11 + 24) = v17;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(a1);
    v12 = -1073741790;
    *(_QWORD *)(v11 + 24) = -1073741790LL;
  }
  WdLogEvent5_WdError(v11);
LABEL_21:
  if ( bTracingEnabled )
    VgpuTrace(0, v12, (void *)v7, L"DpiFlexIovMitigationUpdate", 0LL);
  return v12;
}
