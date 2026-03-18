/*
 * XREFs of DpiSriovDetach @ 0x1C02A3CA0
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C029F2B0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003C3E0 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C004A328 (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C004A44C (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

__int64 __fastcall DpiSriovDetach(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // edi
  unsigned int v6; // esi
  __int64 v7; // rdi
  _QWORD *v8; // rax
  void *v9; // rdx
  PIRP v10; // rax
  void *v11; // rdx
  PIRP v12; // rax
  void *v13; // rdx
  PIRP v14; // rax
  _BYTE v16[16]; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+40h] [rbp-18h]

  v3 = a1[8];
  v4 = a2;
  v6 = 0;
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v3, L"DpiSriovDetach", 0LL);
  v7 = v4 != 0 ? 5448LL : 5416LL;
  if ( *(_BYTE *)(v7 + v3 + 28) || *(_QWORD *)(v7 + v3) )
  {
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v16, a1, 0LL, 1);
    v6 = v17;
    if ( v17 >= 0 )
    {
      v9 = *(void **)(v7 + v3);
      *(_BYTE *)(v7 + v3 + 28) = 0;
      if ( v9 )
      {
        v10 = IoCsqRemoveNextIrp((PIO_CSQ)(v3 + 5328), v9);
        *(_QWORD *)(v7 + v3) = 0LL;
        if ( v10 )
        {
          v10->IoStatus.Status = -1073741536;
          v10->IoStatus.Information = 0LL;
          IofCompleteRequest(v10, 0);
        }
      }
      v11 = *(void **)(v7 + v3 + 8);
      if ( v11 )
      {
        v12 = IoCsqRemoveNextIrp((PIO_CSQ)(v3 + 5328), v11);
        *(_QWORD *)(v7 + v3 + 8) = 0LL;
        if ( v12 )
        {
          v12->IoStatus.Status = -1073741536;
          v12->IoStatus.Information = 0LL;
          IofCompleteRequest(v12, 0);
        }
      }
      v13 = *(void **)(v7 + v3 + 16);
      if ( v13 )
      {
        v14 = IoCsqRemoveNextIrp((PIO_CSQ)(v3 + 5328), v13);
        *(_QWORD *)(v7 + v3 + 16) = 0LL;
        if ( v14 )
        {
          v14->IoStatus.Status = -1073741536;
          v14->IoStatus.Information = 0LL;
          IofCompleteRequest(v14, 0);
        }
      }
    }
    KeClearEvent((PRKEVENT)(v3 + 5496));
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v16);
  }
  else
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3);
    v8[3] = DpiFdoDispatchIoctl;
    v8[4] = DpiSriovDetach;
    v8[5] = 0LL;
    WdLogEvent5_WdWarning(v8);
  }
  if ( bTracingEnabled )
    VgpuTrace(0, v6, (void *)v3, L"DpiSriovDetach", 0LL);
  return v6;
}
