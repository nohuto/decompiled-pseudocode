/*
 * XREFs of ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0161A70
 * Callers:
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C016E1FC (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C016E420 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0179538 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     HMAssignmentLock @ 0x1C0024280 (HMAssignmentLock.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C0034220 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0059370 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00A3CD8 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C010ABE0 (EtwTraceBeginPointerFrameCommit.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C015ED6C (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z @ 0x1C0160D04 (-CommitFrame@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@@Z.c)
 *     ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C0161030 (-CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOI.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C01619E4 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C0165190 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C0165364 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     IsTouchpadDevice @ 0x1C018230C (IsTouchpadDevice.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C019E288 (ApiSetResetLastSeenFrameId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CommitRimCompleteFrame(
        CTouchProcessor *this,
        struct RIMCOMPLETEFRAME *a2,
        char a3,
        char a4)
{
  struct RIMCOMPLETEFRAME *v5; // rsi
  CTouchProcessor *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // edx
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  char *v13; // rcx
  KPROCESSOR_MODE v14; // r8
  int v15; // eax
  int v16; // edx
  unsigned __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  const GUID *v20; // r8
  __int64 v21; // r15
  __int64 v22; // rdx
  int v23; // edx
  char *v24; // rdi
  __int64 v25; // r8
  struct CPointerQFrame *v26; // rax
  int v27; // edx
  unsigned __int64 v28; // rcx
  int v29; // edx
  struct A0xad387374::CFrameIdGenerator *v30; // rbx
  int v31; // r13d
  __int64 v32; // rdx
  __int64 v33; // r8
  _DWORD *v34; // r13
  __int64 v35; // rax
  _DWORD *v36; // r14
  __int64 v37; // rbx
  __int64 v38; // rcx
  _QWORD *v39; // r13
  __int64 v40; // rbx
  int v41; // edx
  CTouchProcessor *v42; // rcx
  _QWORD *v43; // r15
  void *v44; // rax
  int v45; // edx
  __int64 v46; // r8
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // r14
  CTouchProcessor *v50; // rcx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  __int128 v53; // [rsp+40h] [rbp-40h] BYREF
  CInpLockGuard *v54; // [rsp+50h] [rbp-30h] BYREF
  int v55; // [rsp+58h] [rbp-28h]
  __int128 v56; // [rsp+60h] [rbp-20h]
  CInpLockGuard *v57; // [rsp+70h] [rbp-10h] BYREF
  int v58; // [rsp+78h] [rbp-8h]

  v5 = a2;
  v6 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      157,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v57,
    (CTouchProcessor *)((char *)v6 + 48));
  if ( *((struct _KTHREAD **)v6 + 10) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  if ( a4 )
  {
    if ( *((_DWORD *)v6 + 49) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_81;
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v7, 7, 158, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_81;
      v11 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_81;
      v12 = 159;
LABEL_80:
      LOBYTE(v10) = 5;
      WPP_RECORDER_SF_(v11->DeviceExtension, v10, 7, v12, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
LABEL_81:
      v24 = 0LL;
      goto LABEL_82;
    }
  }
  else if ( *((_DWORD *)v6 + 48) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_81;
    LOBYTE(v7) = 3;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v7, 7, 160, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_81;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_81;
    v12 = 161;
    goto LABEL_80;
  }
  v13 = (char *)*((_QWORD *)v5 + 4);
  v14 = *((_DWORD *)v5 + 18) == 0;
  Object = 0LL;
  v15 = RawInputManagerDeviceObjectResolveHandle(v13, 3u, v14, &Object);
  if ( v15 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_81;
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_D((_DWORD)gBaseLog, v16, 7, 162, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids, v15);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_81;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_81;
    v12 = 163;
    goto LABEL_80;
  }
  if ( Object == (PVOID)-88LL )
    v17 = 0LL;
  else
    v17 = *((_QWORD *)Object + 11);
  ObfDereferenceObject(Object);
  *(_QWORD *)&v53 = HMValidateHandleNoSecure(v17, 19);
  v21 = v53;
  if ( !(_QWORD)v53 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
  v22 = *((unsigned int *)v5 + 6);
  if ( !(_DWORD)v22 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v22, v20);
    LODWORD(v22) = *((_DWORD *)v5 + 6);
  }
  EtwTraceBeginPointerFrameCommit(0LL, v22, v20);
  v24 = (char *)Win32AllocPoolZInit(0x98uLL, 1718645589LL);
  if ( !v24 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_81;
    LOBYTE(v23) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v23, 7, 164, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_81;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_81;
    v12 = 165;
    goto LABEL_80;
  }
  v26 = CTouchProcessor::AllocPointerQFrameList((struct _KTHREAD **)v6, *((unsigned int *)v5 + 6), v25);
  *((_QWORD *)v24 + 17) = v26;
  if ( !v26 )
  {
    Win32FreePool((__int64)v24);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_81;
    LOBYTE(v27) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v27, 7, 166, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_81;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_81;
    v12 = 167;
    goto LABEL_80;
  }
  v28 = 496LL * *((unsigned int *)v5 + 6);
  if ( v28 <= 0xFFFFFFFF )
    *((_QWORD *)v24 + 16) = Win32AllocPoolZInit((unsigned int)v28, 1701868373LL);
  if ( !*((_QWORD *)v24 + 16) )
  {
    CTouchProcessor::FreePointerQFrameList(
      (CTouchProcessor *)v28,
      *((struct CPointerQFrame **)v24 + 17),
      *((_DWORD *)v5 + 6));
    Win32FreePool((__int64)v24);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_81;
    LOBYTE(v29) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v29, 7, 168, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_81;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_81;
    v12 = 169;
    goto LABEL_80;
  }
  v30 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)&v54,
    (struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance + 8));
  v31 = (*(_DWORD *)v30)++;
  if ( v31 == -1 )
  {
    *(_DWORD *)v30 = 1;
    ApiSetResetLastSeenFrameId();
  }
  if ( !v55 )
    CInpLockGuard::UnLock(v54);
  *((_DWORD *)v24 + 10) = v31;
  *((_DWORD *)v24 + 12) = *((_DWORD *)v5 + 6);
  *((_QWORD *)v24 + 8) = v17;
  *(_OWORD *)(v24 + 72) = *(_OWORD *)((char *)v5 + 40);
  *(_OWORD *)(v24 + 88) = *(_OWORD *)((char *)v5 + 56);
  *((_QWORD *)v24 + 13) = *(_QWORD *)(*((_QWORD *)v5 + 14) + 96LL);
  InputTraceLogging::Pointer::CommitFrame((const struct RIMDEV *)v21, (const struct CPointerInputFrame *)v24);
  v34 = (_DWORD *)*((_QWORD *)v5 + 14);
  v35 = 0LL;
  LODWORD(Object) = 0;
  if ( *((_DWORD *)v5 + 6) )
  {
    v36 = v34 + 2;
    do
    {
      v37 = 496 * v35;
      *(_DWORD *)(*((_QWORD *)v24 + 16) + v37 + 164) = *v34;
      v38 = 496 * v35 + *((_QWORD *)v24 + 16) + 168LL;
      *(_OWORD *)v38 = *(_OWORD *)v36;
      *(_OWORD *)(v38 + 16) = *((_OWORD *)v36 + 1);
      *(_OWORD *)(v38 + 32) = *((_OWORD *)v36 + 2);
      *(_OWORD *)(v38 + 48) = *((_OWORD *)v36 + 3);
      *(_OWORD *)(v38 + 64) = *((_OWORD *)v36 + 4);
      *(_OWORD *)(v38 + 80) = *((_OWORD *)v36 + 5);
      *(_OWORD *)(v38 + 96) = *((_OWORD *)v36 + 6);
      *(_OWORD *)(v38 + 112) = *((_OWORD *)v36 + 7);
      *(_OWORD *)(v38 + 128) = *((_OWORD *)v36 + 8);
      *(_OWORD *)(v38 + 144) = *((_OWORD *)v36 + 9);
      *(_OWORD *)(v38 + 160) = *((_OWORD *)v36 + 10);
      *(_QWORD *)(v38 + 176) = *((_QWORD *)v36 + 22);
      *(_QWORD *)(*((_QWORD *)v24 + 16) + v37 + 192) = v17;
      CInputDest::SetEmpty((CInputDest *)(496 * v35 + *((_QWORD *)v24 + 16) + 360LL), v32, v33);
      InputTraceLogging::Pointer::CommitFramePointer(
        (const struct RIMDEV *)v21,
        (const struct CPointerInputFrame *)v24,
        (const struct tagPOINTEREVENTINT *)(v37 + *((_QWORD *)v24 + 16) + 168LL));
      v35 = (unsigned int)((_DWORD)Object + 1);
      v34 += 48;
      v36 += 48;
      LODWORD(Object) = v35;
    }
    while ( (unsigned int)v35 < *((_DWORD *)v5 + 6) );
    v6 = this;
  }
  v39 = 0LL;
  *((_DWORD *)v24 + 14) = *((_DWORD *)v5 + 7);
  *(_QWORD *)v24 = gpTouchProcessor;
  v40 = *((_QWORD *)v5 + 13);
  if ( v40 )
  {
    while ( 1 )
    {
      v43 = Win32AllocPoolZInit(0x20uLL, 1685222229LL);
      if ( !v43 )
        break;
      v44 = Win32AllocPoolZInit(*(unsigned int *)(v40 + 4), 1685222229LL);
      v43[2] = v44;
      *((_DWORD *)v43 + 1) = *(_DWORD *)v40;
      *((_DWORD *)v43 + 2) = *(_DWORD *)(v40 + 4);
      memmove(v44, *(const void **)(v40 + 8), *(unsigned int *)(v40 + 4));
      if ( v39 )
        v39[3] = v43;
      else
        *((_QWORD *)v24 + 15) = v43;
      v40 = *(_QWORD *)(v40 + 16);
      v39 = v43;
      if ( !v40 )
      {
        v21 = v53;
        goto LABEL_57;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v41) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v41, 7, 171, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    }
    v47 = *((_QWORD *)v24 + 15);
    while ( v47 )
    {
      v48 = *(_QWORD *)(v47 + 16);
      v49 = v47;
      if ( v48 )
        Win32FreePool(v48);
      v47 = *(_QWORD *)(v47 + 24);
      Win32FreePool(v49);
    }
    CTouchProcessor::FreePointerInfoList(v42, *((struct CPointerInfoNode **)v24 + 16), *((_DWORD *)v5 + 6));
    CTouchProcessor::FreePointerQFrameList(v50, *((struct CPointerQFrame **)v24 + 17), *((_DWORD *)v5 + 6));
    Win32FreePool((__int64)v24);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_81;
    v11 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_81;
    v12 = 172;
    goto LABEL_80;
  }
LABEL_57:
  *(_QWORD *)&v56 = v24 + 144;
  *((_QWORD *)&v56 + 1) = *(_QWORD *)(v21 + 480);
  v53 = v56;
  HMAssignmentLock((__int64 **)&v53);
  if ( a3
    || (CTouchProcessor::CommitInputFrame((struct _KTHREAD **)v6, (struct CPointerInputFrame *)v24, v46),
        (unsigned __int8)IsTouchpadDevice(v17)) )
  {
    *((_DWORD *)v24 + 28) |= 0x200u;
  }
  else if ( a4 )
  {
    *((_DWORD *)v24 + 28) |= 0x100u;
    ++*((_DWORD *)v6 + 48);
  }
  else
  {
    ++*((_DWORD *)v6 + 49);
  }
  *((_QWORD *)v24 + 4) = v24 + 24;
  *((_QWORD *)v24 + 3) = v24 + 24;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v45) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v45,
      7,
      173,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
LABEL_82:
  if ( !v58 )
    CInpLockGuard::UnLock(v57);
  return (struct CPointerInputFrame *)v24;
}
