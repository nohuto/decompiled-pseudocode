/*
 * XREFs of DpiSriovNotification @ 0x1C02A3F70
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C029F2B0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003C3E0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C004A328 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C004A44C (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C02A04F4 (DpiFdoGetVirtualGpuType.c)
 */

__int64 __fastcall DpiSriovNotification(_QWORD *a1, struct _IRP *a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rax
  _BYTE v17[16]; // [rsp+30h] [rbp-28h] BYREF
  int v18; // [rsp+40h] [rbp-18h]

  v5 = a1[8];
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v5, L"DpiSriovNotification", 0LL);
  if ( a4 < 4 || !a3 )
  {
    v14 = -1073741789;
    v15 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v15 + 24) = -1073741789LL;
    goto LABEL_15;
  }
  if ( DpiFdoGetVirtualGpuType((__int64)a2) )
  {
    v12 = 5456LL;
    v13 = 5476LL;
  }
  else
  {
    v12 = 5424LL;
    v13 = 5444LL;
  }
  if ( !*(_BYTE *)(v13 + v5) || *(_QWORD *)(v12 + v5) )
  {
    v14 = -1073741811;
    v15 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
LABEL_15:
    WdLogEvent5_WdError(v15);
    goto LABEL_16;
  }
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v17, a1, a2, 1);
  v14 = v18;
  if ( v18 >= 0 )
  {
    *(_QWORD *)(v12 + v5) = a2;
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    IoCsqInsertIrp((PIO_CSQ)(v5 + 5328), a2, 0LL);
    v14 = 259;
    v18 = 259;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v17);
LABEL_16:
  if ( bTracingEnabled )
    VgpuTrace(0, v14, (void *)v5, L"DpiSriovNotification", 0LL);
  return v14;
}
