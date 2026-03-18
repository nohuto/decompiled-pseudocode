/*
 * XREFs of ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0137CA8
 * Callers:
 *     ?DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C0137AD0 (-DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0141860 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C0141C10 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD29C (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD5D8 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0132FA0 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C0137C40 (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C013A0EC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C013B078 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?HandleDesktopEdgy@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@H@Z @ 0x1C013E5A0 (-HandleDesktopEdgy@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@H@Z.c)
 *     ?IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C013F628 (-IsTouchpadDevice@CTouchProcessor@@IEBAHPEAX@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C0141FD8 (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0142C48 (-RemoveUndispatchedFrameFromThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionEdgyEnabled @ 0x1C01616B0 (ApiSetEditionEdgyEnabled.c)
 *     ApiSetEditionEdgyProcessInput @ 0x1C0161750 (ApiSetEditionEdgyProcessInput.c)
 *     ApiSetEditionEdgyResetCurrentFrame @ 0x1C016181C (ApiSetEditionEdgyResetCurrentFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DoContactVisualizationAndGenerateMessages(
        CTouchProcessor *this,
        const struct RIMCOMPLETEFRAME *a2,
        const struct CPointerInputFrame *a3,
        void *a4,
        int a5,
        int a6,
        int a7)
{
  PDEVICE_OBJECT v10; // rcx
  unsigned int MessagesCore; // r14d
  CTouchProcessor *v12; // rcx
  CTouchProcessor *v13; // rcx
  __int64 v14; // rdx
  int v15; // ebx
  CTouchProcessor *v16; // rcx
  unsigned int v17; // r8d
  struct CPointerInputFrame *v18; // rbp
  int v19; // eax
  const struct CPointerInputFrame *NextFrame; // rbx
  __int64 v21; // r8
  __int64 v22; // r8
  int v24; // eax
  struct CPointerInputFrame *i; // rax
  CInpLockGuard *v26[6]; // [rsp+30h] [rbp-78h] BYREF
  CInpLockGuard *v27[6]; // [rsp+60h] [rbp-48h] BYREF
  struct CPointerInputFrame *v28; // [rsp+B8h] [rbp+10h] BYREF

  v28 = a2;
  v10 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x144u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  MessagesCore = 1;
  if ( *((struct _KTHREAD **)this + 8) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, a2, a3);
  if ( !a7 )
  {
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v26,
      (CTouchProcessor *)((char *)this + 56),
      0LL);
    CTouchProcessor::DoContactVisualization(v12, a3, a4, a5);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v26);
  }
  if ( (unsigned int)ApiSetEditionEdgyEnabled() && !(unsigned int)CTouchProcessor::IsTouchpadDevice(v13, a4) )
  {
    v28 = 0LL;
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v27,
      (CTouchProcessor *)((char *)this + 56),
      0LL);
    v15 = ApiSetEditionEdgyProcessInput(this, v14, a3, &v28);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v27);
    if ( (unsigned int)(v15 + 1) <= 1 )
    {
      v24 = *((_DWORD *)a3 + 23);
      if ( v15 )
      {
        *((_DWORD *)a3 + 23) = v24 | 0x40;
        for ( i = v28; i && i != a3; i = CTouchProcessor::GetNextFrame(
                                           this,
                                           i,
                                           (struct _LIST_ENTRY *)((char *)this + 72)) )
          *((_DWORD *)i + 23) |= 0x40u;
      }
      else
      {
        *((_DWORD *)a3 + 23) = v24 | 0x20;
      }
      InputTraceLogging::Pointer::HandleDesktopEdgy(a3, v15);
      return MessagesCore;
    }
    v18 = v28;
    if ( v28 )
    {
      *((_DWORD *)v28 + 23) &= ~0x20u;
      if ( v28 )
      {
        v19 = *((_DWORD *)v28 + 23);
        if ( (v19 & 0x40) == 0 && *((_DWORD *)v28 + 12) == 1 && (v19 & 8) != 0 )
        {
          v16 = (CTouchProcessor *)*((_QWORD *)v28 + 13);
          if ( (*(_DWORD *)v16 & 0x400) != 0 && (*((_DWORD *)v16 + 61) & 1) == 0 )
            CTouchProcessor::ProcessPointerInfoNodeEnterLeave(this, v28, v17);
        }
      }
      do
      {
        if ( v18 == a3 )
          break;
        CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList(v16, v18);
        if ( (*((_DWORD *)v18 + 23) & 0x40) == 0 )
          CTouchProcessor::GenerateMessagesCore(this, a5, a6, 0, v18);
        NextFrame = CTouchProcessor::GetNextFrame(this, v18, (struct _LIST_ENTRY *)((char *)this + 72));
        CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v18, v21);
        v18 = NextFrame;
      }
      while ( NextFrame );
    }
    ApiSetEditionEdgyResetCurrentFrame();
  }
  CTouchProcessor::RemoveUndispatchedFrameFromThreadFrameList(v13, a3);
  if ( (*((_DWORD *)a3 + 23) & 0x40) == 0 )
    MessagesCore = CTouchProcessor::GenerateMessagesCore(this, a5, a6, 0, a3);
  CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)a3, v22);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x145u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  return MessagesCore;
}
