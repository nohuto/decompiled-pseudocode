/*
 * XREFs of ?GetPointerMessagePoint@CTouchProcessor@@QEAAHGPEAUtagPOINT@@@Z @ 0x1C013CED0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0063118 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD204 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD5D8 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C013E3D0 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01427CC (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerMessagePoint(
        CTouchProcessor *this,
        unsigned __int16 a2,
        struct tagPOINT *a3)
{
  struct tagTHREADINPUTPOINTERLIST *v6; // rdx
  unsigned int v7; // edi
  unsigned __int64 ThreadPointerData; // rax
  unsigned __int64 v9; // rsi
  const struct CPointerInputFrame *v10; // rdx
  __int64 v11; // r8
  struct tagPOINT *v12; // rax
  CInpLockGuard *v14[6]; // [rsp+30h] [rbp-48h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x66u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v14,
    (CTouchProcessor *)((char *)this + 56),
    0LL);
  v6 = (struct tagTHREADINFO *)((char *)gptiCurrent + 1080);
  *a3 = 0LL;
  v7 = 0;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(this, v6, a2, 0LL, 0LL, 0LL);
  v9 = ThreadPointerData;
  if ( ThreadPointerData )
  {
    v10 = CTouchProcessor::ReferenceFrame(this, *(_DWORD *)(ThreadPointerData + 28));
    if ( v10 )
    {
      v12 = (struct tagPOINT *)(*((_QWORD *)v10 + 13) + 576LL * *(unsigned int *)(v9 + 32));
      if ( v12 )
      {
        v7 = 1;
        *a3 = v12[33];
      }
      CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v10, v11);
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x67u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v14);
  return v7;
}
