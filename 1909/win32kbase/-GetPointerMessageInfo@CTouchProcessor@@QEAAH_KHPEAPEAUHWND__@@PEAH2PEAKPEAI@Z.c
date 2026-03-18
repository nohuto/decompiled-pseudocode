/*
 * XREFs of ?GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C0169420
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C004E914 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A3CD8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C016767C (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016BF50 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C016F384 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0173210 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerMessageInfo(
        struct _KTHREAD **this,
        __int64 a2,
        unsigned int a3,
        HWND *a4,
        int *a5,
        int *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  __int64 v10; // rdi
  __int64 v12; // rdx
  PDEVICE_OBJECT v13; // rcx
  int v14; // r9d
  __int64 v15; // rcx
  const struct CPointerInputFrame *v16; // rsi
  __int64 v17; // r8
  unsigned int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  CInputDest *v24; // rcx
  HWND WindowHandle; // rax
  int v26; // r8d
  int v27; // edx
  CInpLockGuard *v29; // [rsp+30h] [rbp-38h] BYREF
  int v30; // [rsp+38h] [rbp-30h]
  int v31; // [rsp+70h] [rbp+8h] BYREF
  CInputDest *v32; // [rsp+78h] [rbp+10h] BYREF

  v10 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      102,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v29,
    (struct CInpLockGuard *)(this + 6));
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_13;
    v14 = 103;
LABEL_12:
    LOBYTE(v12) = 5;
    WPP_RECORDER_SF_(v13->DeviceExtension, v12, 7, v14, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
LABEL_13:
    v18 = 0;
    goto LABEL_35;
  }
  CTouchProcessor::GetPointerCapture(this, v10, a3, &v32, &v31);
  v16 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)this, *(_DWORD *)(v10 + 28));
  if ( !v16 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    v13 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_13;
    v14 = 104;
    goto LABEL_12;
  }
  v19 = *(unsigned int *)(v10 + 32);
  if ( (unsigned int)v19 >= *((_DWORD *)v16 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v12, v17);
    v19 = *(unsigned int *)(v10 + 32);
  }
  v20 = *((_QWORD *)v16 + 16) + 496 * v19;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v20) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
  if ( *(_WORD *)(v10 + 16) != *(_WORD *)(v20 + 180) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
  v24 = v32;
  if ( v32 )
  {
    WindowHandle = CInputDest::GetWindowHandle(v32);
    v26 = v31;
    *a4 = WindowHandle;
  }
  else
  {
    *a4 = *(HWND *)(v20 + 200);
    v26 = *(_DWORD *)(v20 + 152);
  }
  if ( a5 )
    *a5 = v24 != 0LL;
  if ( a6 )
    *a6 = v26;
  if ( a7 )
    *a7 = *(_DWORD *)(v20 + 176);
  if ( a8 )
    *a8 = *(_DWORD *)(v20 + 188);
  CTouchProcessor::UnreferenceFrame((CTouchProcessor *)this, v16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v27) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v27,
      7,
      105,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  v18 = 1;
LABEL_35:
  if ( !v30 )
    CInpLockGuard::UnLock(v29);
  return v18;
}
