/*
 * XREFs of ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0170C18
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C016801C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C00391EC (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C004196C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C0041A84 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C00A4E80 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C015DAA0 (-DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C015DB5C (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C016DA3C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x1C016DA64 (-IsFrameReferenced@CTouchProcessor@@AEAAHK@Z.c)
 *     ?IsPrimaryDown@CPointerInfoNode@@QEBAHXZ @ 0x1C016E02C (-IsPrimaryDown@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ @ 0x1C01748F4 (-ShouldForegroundActivate@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionSetForegroundCheckNoActivate @ 0x1C019E410 (ApiSetEditionSetForegroundCheckNoActivate.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::ProcessPrimaryDown(
        struct _KTHREAD **this,
        const struct CPointerInputFrame *a2,
        __int64 a3)
{
  const struct CPointerInputFrame *v3; // rdi
  struct _KTHREAD **v4; // r14
  unsigned int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r8
  unsigned int v10; // esi
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned int v14; // r9d
  int v15; // edx
  PDEVICE_OBJECT v16; // rcx
  int v17; // r9d
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  struct CInputDest *v25; // rdi
  int v26; // edx
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // edx
  int v31; // edx
  _BYTE v32[64]; // [rsp+30h] [rbp-68h] BYREF
  char v33; // [rsp+A0h] [rbp+8h] BYREF

  v3 = a2;
  v4 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    this = (struct _KTHREAD **)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        7,
        185,
        (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    }
  }
  v5 = 0;
  if ( v4[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v4, *((unsigned int *)v3 + 10), a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( (*((_DWORD *)v3 + 28) & 0x10) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  v9 = *((unsigned int *)v3 + 12);
  v10 = 0;
  v11 = *((_QWORD *)v3 + 16);
  if ( (_DWORD)v9 )
  {
    v12 = (unsigned int)v9;
    do
    {
      v13 = *((_QWORD *)v3 + 16) + 496 * v12;
      if ( v11 >= v13 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v6, v9);
      if ( (*(_QWORD *)(v11 + 16) || CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v11))
        && (unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v11) )
      {
        break;
      }
      v11 += 496LL;
      v12 = v14;
      ++v10;
      v9 = v14;
    }
    while ( v10 < v14 );
  }
  if ( v10 == (_DWORD)v9 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v6, 7, 186, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v16 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v17 = 187;
LABEL_46:
    LOBYTE(v15) = 5;
    WPP_RECORDER_SF_(v16->DeviceExtension, v15, 7, v17, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    return 0LL;
  }
  v18 = *((_QWORD *)v3 + 16) + 496LL * (unsigned int)v9;
  if ( v11 >= v18 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v6, v9);
  if ( !(unsigned int)CPointerInfoNode::IsPrimaryDown((CPointerInfoNode *)v11) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
  if ( !*(_QWORD *)(v11 + 16) && !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v11) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v19, v23);
  if ( (*(_DWORD *)v11 & 0x1000) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    LOBYTE(v19) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v19, 7, 188, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v16 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v17 = 189;
    goto LABEL_46;
  }
  if ( *(_DWORD *)(v11 + 452) )
  {
    v24 = *(_QWORD *)(v11 + 200);
    if ( !v24 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v24) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v24, 7, 190, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v16 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v17 = 191;
      goto LABEL_46;
    }
    v25 = (struct CInputDest *)(v11 + 360);
    if ( !CInputDest::IsEqualByWindowHandle(v11 + 360, v24, 1) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      LOBYTE(v26) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v26, 7, 192, (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v16 = WPP_GLOBAL_Control;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return 0LL;
      v17 = 193;
      goto LABEL_46;
    }
    v5 = 1;
    if ( (unsigned int)CPointerInfoNode::ShouldForegroundActivate((CPointerInfoNode *)v11) )
    {
      if ( !CInputDest::DoesBelongToForeground(v11 + 360, 1) || !CInputDest::DoesBelongToForegroundThread((__int64)v25) )
      {
        if ( gpqForeground )
        {
          if ( (*(_DWORD *)(gpqForeground + 396) & 0x2000000) != 0 )
          {
            v29 = *(_QWORD *)(gpqForeground + 120);
            if ( v29 )
            {
              if ( gptiForeground == *(struct tagTHREADINFO **)(v29 + 16)
                && CInputDest::DoesBelongToForeground(v11 + 360, 1) )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v30) = 4;
                  WPP_RECORDER_SF_(
                    (_DWORD)gBaseLog,
                    v30,
                    7,
                    194,
                    (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    {
                      LOBYTE(v31) = 5;
                      WPP_RECORDER_SF_(
                        WPP_GLOBAL_Control->DeviceExtension,
                        v31,
                        7,
                        195,
                        (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
                    }
                  }
                }
                return 1LL;
              }
            }
          }
        }
        CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v32, v25, v28);
        CInpLockGuard::UnLock((CInpLockGuard *)(v4 + 6));
        v5 = ApiSetEditionSetForegroundCheckNoActivate(v25);
        CInpLockGuard::LockExclusive((CInpLockGuard *)(v4 + 6), (struct CLockListEntryStack *)&v33);
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v32);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v19) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v19,
      7,
      196,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  return v5;
}
