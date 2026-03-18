/*
 * XREFs of DpiSriovNotification @ 0x1C02683F0
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C0263DD0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C0035FC0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C0042E3C (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C0042F78 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C0264FC4 (DpiFdoGetVirtualGpuType.c)
 */

__int64 __fastcall DpiSriovNotification(_QWORD *a1, struct _IRP *a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rax
  _BYTE v15[16]; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+40h] [rbp-18h]

  v5 = a1[8];
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v5, L"DpiSriovNotification", 0LL);
  if ( a4 < 4 || !a3 )
  {
    v12 = -1073741789;
    v13 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v13 + 24) = -1073741789LL;
    goto LABEL_15;
  }
  if ( DpiFdoGetVirtualGpuType((__int64)a2) )
  {
    v10 = 5328LL;
    v11 = 5348LL;
  }
  else
  {
    v10 = 5296LL;
    v11 = 5316LL;
  }
  if ( !*(_BYTE *)(v11 + v5) || *(_QWORD *)(v10 + v5) )
  {
    v12 = -1073741811;
    v13 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
LABEL_15:
    WdLogEvent5_WdError(v13);
    goto LABEL_16;
  }
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v15, a1, a2, 1);
  v12 = v16;
  if ( v16 >= 0 )
  {
    *(_QWORD *)(v10 + v5) = a2;
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    IoCsqInsertIrp((PIO_CSQ)(v5 + 5200), a2, 0LL);
    v12 = 259;
    v16 = 259;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v15);
LABEL_16:
  if ( bTracingEnabled )
    VgpuTrace(0, v12, (void *)v5, L"DpiSriovNotification", 0LL);
  return v12;
}
