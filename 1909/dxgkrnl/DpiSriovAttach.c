/*
 * XREFs of DpiSriovAttach @ 0x1C02A3F3C
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C029F6C0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003C540 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C004A3D8 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C004A4FC (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C0211038 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C02A0904 (DpiFdoGetVirtualGpuType.c)
 */

__int64 __fastcall DpiSriovAttach(_QWORD *a1, struct _IRP *a2)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int v10; // edi
  int v11; // eax
  _BYTE v13[16]; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+40h] [rbp-18h]

  v3 = a1[8];
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v3, L"DpiSriovAttach", 0LL);
  v7 = DpiFdoGetVirtualGpuType((__int64)a2) ? 0x20 : 0;
  if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
  {
    v9 = WdLogNewEntry5_WdError(v6, v5, v8);
    v10 = -1073741790;
    *(_QWORD *)(v9 + 24) = -1073741790LL;
LABEL_14:
    WdLogEvent5_WdError(v9);
    goto LABEL_15;
  }
  if ( *(_BYTE *)(v7 + v3 + 5444) || *(_QWORD *)(v7 + v3 + 5416) )
  {
    v10 = -1073741811;
    v9 = WdLogNewEntry5_WdError(v6, v5, v8);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    goto LABEL_14;
  }
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v13, a1, a2, 1);
  v11 = v14;
  if ( v14 >= 0 )
  {
    if ( *(_DWORD *)(v3 + 236) == 2 )
    {
      *(_BYTE *)(v7 + v3 + 5444) = 1;
    }
    else
    {
      *(_QWORD *)(v7 + v3 + 5416) = a2;
      a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IoCsqInsertIrp((PIO_CSQ)(v3 + 5328), a2, 0LL);
      v11 = 259;
      v14 = 259;
    }
  }
  v10 = v11;
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v13);
LABEL_15:
  if ( bTracingEnabled )
    VgpuTrace(0, v10, (void *)v3, L"DpiSriovAttach", 0LL);
  return v10;
}
