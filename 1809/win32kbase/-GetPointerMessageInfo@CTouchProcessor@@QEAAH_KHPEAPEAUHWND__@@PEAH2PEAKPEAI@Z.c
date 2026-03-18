/*
 * XREFs of ?GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C013CCC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0031C88 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD5D8 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C013B1AC (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01427CC (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  unsigned int v12; // ebx
  PDEVICE_OBJECT v13; // rcx
  unsigned __int16 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  const struct CPointerInputFrame *v17; // rbp
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  CInputDest *v24; // rcx
  HWND WindowHandle; // rax
  __int64 v26; // r8
  CInpLockGuard *v28[8]; // [rsp+30h] [rbp-68h] BYREF
  int v29; // [rsp+A0h] [rbp+8h] BYREF
  CInputDest *v30; // [rsp+A8h] [rbp+10h] BYREF

  v12 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x62u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v28,
    (struct CInpLockGuard *)(this + 7),
    (void *)a2);
  if ( a2 )
  {
    CTouchProcessor::GetPointerCapture(this, a2, a3, &v30, &v29);
    v17 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)this, *(_DWORD *)(a2 + 28));
    if ( v17 )
    {
      v19 = *(unsigned int *)(a2 + 32);
      if ( (unsigned int)v19 >= *((_DWORD *)v17 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v18);
        v19 = *(unsigned int *)(a2 + 32);
      }
      v20 = *((_QWORD *)v17 + 13) + 576 * v19;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v20) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
      if ( *(_WORD *)(a2 + 16) != *(_WORD *)(v20 + 236) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23);
      v24 = v30;
      if ( v30 )
      {
        WindowHandle = CInputDest::GetWindowHandle(v30);
        v26 = (unsigned int)v29;
        *a4 = WindowHandle;
      }
      else
      {
        *a4 = *(HWND *)(v20 + 256);
        v26 = *(unsigned int *)(v20 + 208);
      }
      if ( a5 )
        *a5 = v24 != 0LL;
      if ( a6 )
        *a6 = v26;
      if ( a7 )
        *a7 = *(_DWORD *)(v20 + 232);
      if ( a8 )
        *a8 = *(_DWORD *)(v20 + 244);
      CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v17, v26);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          0xBu,
          0x65u,
          (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v12 = 1;
    }
    else
    {
      v13 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v14 = 100;
        goto LABEL_9;
      }
    }
  }
  else
  {
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v14 = 99;
LABEL_9:
      WPP_RECORDER_SF_(
        (__int64)v13->DeviceExtension,
        5u,
        0xBu,
        v14,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v28);
  return v12;
}
