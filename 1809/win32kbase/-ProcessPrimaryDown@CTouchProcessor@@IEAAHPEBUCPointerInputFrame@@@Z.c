/*
 * XREFs of ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0142064
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C013A0EC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C002F178 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C006F344 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C006F44C (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD29C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0130FA4 (-DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0131014 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0132FA0 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C013EF10 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x1C013EF38 (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C013F518 (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C0145968 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionSetForegroundCheckNoActivate @ 0x1C0163770 (ApiSetEditionSetForegroundCheckNoActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::ProcessPrimaryDown(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        __int64 a3)
{
  PDEVICE_OBJECT v5; // rcx
  unsigned int v6; // r14d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r8
  unsigned int v11; // ebp
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // r9d
  PDEVICE_OBJECT v16; // rcx
  unsigned __int16 v17; // r9
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  void *v25; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  CInpLockGuard *v29[6]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v30[64]; // [rsp+60h] [rbp-68h] BYREF

  v5 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xB5u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  v6 = 0;
  if ( *((struct _KTHREAD **)this + 8) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((struct _KTHREAD **)this, *((unsigned int *)a2 + 10), a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  if ( (*((_DWORD *)a2 + 23) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  v10 = *((unsigned int *)a2 + 12);
  v11 = 0;
  v12 = *((_QWORD *)a2 + 13);
  if ( (_DWORD)v10 )
  {
    v13 = (unsigned int)v10;
    do
    {
      v14 = *((_QWORD *)a2 + 13) + 576 * v13;
      if ( v12 >= v14 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v7, v10);
      if ( (*(_QWORD *)(v12 + 16) || CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v12))
        && (unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v12) )
      {
        break;
      }
      v12 += 576LL;
      v13 = v15;
      ++v11;
      v10 = v15;
    }
    while ( v11 < v15 );
  }
  if ( v11 == (_DWORD)v10 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 4u, 0xBu, 0xB6u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    v16 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v17 = 183;
LABEL_37:
      WPP_RECORDER_SF_(
        (__int64)v16->DeviceExtension,
        5u,
        0xBu,
        v17,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      return 0LL;
    }
    return 0LL;
  }
  v18 = *((_QWORD *)a2 + 13) + 576LL * (unsigned int)v10;
  if ( v12 >= v18 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v7, v10);
  if ( !(unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
  if ( !*(_QWORD *)(v12 + 16) && !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
  if ( (*(_DWORD *)v12 & 0x1000) != 0 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2u, 0xBu, 0xB8u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    v16 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v17 = 185;
      goto LABEL_37;
    }
    return 0LL;
  }
  if ( *(_DWORD *)(v12 + 476) )
  {
    v25 = *(void **)(v12 + 256);
    if ( !v25 )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        2u,
        0xBu,
        0xBAu,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v16 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v17 = 187;
        goto LABEL_37;
      }
      return 0LL;
    }
    if ( !CInputDest::IsEqualByWindowHandle(v12 + 392, v25, 1) )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)this + 1),
        2u,
        0xBu,
        0xBCu,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v16 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v17 = 189;
        goto LABEL_37;
      }
      return 0LL;
    }
    v6 = 1;
    if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v12) )
    {
      if ( !CInputDest::DoesBelongToForeground(v12 + 392, 1) || !CInputDest::DoesBelongToForegroundThread(v12 + 392) )
      {
        if ( gpqForeground )
        {
          if ( (*(_DWORD *)(gpqForeground + 388) & 0x2000000) != 0 )
          {
            v28 = *(_QWORD *)(gpqForeground + 112);
            if ( v28 )
            {
              if ( gptiForeground == *(struct tagTHREADINFO **)(v28 + 16)
                && CInputDest::DoesBelongToForeground(v12 + 392, 1) )
              {
                WPP_RECORDER_SF_(
                  *((_QWORD *)this + 1),
                  4u,
                  0xBu,
                  0xBEu,
                  (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    5u,
                    0xBu,
                    0xBFu,
                    (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
                return 1LL;
              }
            }
          }
        }
        CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v30, (struct CInputDest *)(v12 + 392), v27);
        CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
          (CInpUnlockGuardExclusive *)v29,
          (CTouchProcessor *)((char *)this + 56),
          0LL);
        v6 = ApiSetEditionSetForegroundCheckNoActivate(v12 + 392);
        CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v29);
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v30);
      }
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0xC0u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  return v6;
}
