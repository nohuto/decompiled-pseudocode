/*
 * XREFs of ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C0165FC8
 * Callers:
 *     ?DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z @ 0x1C0165DD0 (-DispatchFrameAndGetNext@CTouchProcessor@@QEAAPEAXPEAX@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C01703EC (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C0170864 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z @ 0x1C00A4E80 (-LockExclusive@CInpLockGuard@@QEAAXAEAVCLockListEntryStack@@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z @ 0x1C0165F5C (-DoContactVisualization@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAXH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C016801C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0169738 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?HandleDesktopEdgy@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@H@Z @ 0x1C016D100 (-HandleDesktopEdgy@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@H@Z.c)
 *     ?ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z @ 0x1C0170B8C (-ProcessPointerInfoNodeEnterLeave@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0175400 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     IsTouchpadDevice @ 0x1C01844FC (IsTouchpadDevice.c)
 *     ApiSetEditionEdgyEnabled @ 0x1C019BA84 (ApiSetEditionEdgyEnabled.c)
 *     ApiSetEditionEdgyProcessInput @ 0x1C019BC0C (ApiSetEditionEdgyProcessInput.c)
 *     ApiSetEditionEdgyResetCurrentFrame @ 0x1C019BCFC (ApiSetEditionEdgyResetCurrentFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DoContactVisualizationAndGenerateMessages(
        CTouchProcessor *this,
        const struct RIMCOMPLETEFRAME *a2,
        const struct CPointerInputFrame *a3,
        __int64 a4,
        int a5,
        int a6,
        int a7)
{
  CTouchProcessor *v9; // rsi
  void *v10; // rdx
  unsigned int MessagesCore; // r14d
  CTouchProcessor *v12; // rcx
  __int64 v13; // rdx
  int v14; // ebp
  unsigned int v15; // r8d
  struct CPointerInputFrame *v16; // rbp
  int v17; // eax
  _DWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  const struct CPointerInputFrame *NextFrame; // rbx
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  int v26; // edx
  int v27; // eax
  struct CPointerInputFrame *i; // rax
  _BYTE v30[56]; // [rsp+30h] [rbp-38h] BYREF
  char v31; // [rsp+70h] [rbp+8h] BYREF
  struct CPointerInputFrame *v32; // [rsp+78h] [rbp+10h] BYREF

  v32 = a2;
  v9 = this;
  v10 = &WPP_06d7dff703a03015e007562f188a8383_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    this = (CTouchProcessor *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v10) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v10,
        7,
        328,
        (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
    }
  }
  MessagesCore = 1;
  if ( *((struct _KTHREAD **)v9 + 10) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v10, a3);
  if ( !a7 )
  {
    CInpLockGuard::UnLock((CTouchProcessor *)((char *)v9 + 48));
    CTouchProcessor::DoContactVisualization(v12, a3, a4, a5);
    CInpLockGuard::LockExclusive((CTouchProcessor *)((char *)v9 + 48), (struct CLockListEntryStack *)&v31);
  }
  if ( (unsigned int)ApiSetEditionEdgyEnabled(this, v10) && !(unsigned __int8)IsTouchpadDevice(a4) )
  {
    v32 = 0LL;
    CInpLockGuard::UnLock((CTouchProcessor *)((char *)v9 + 48));
    v14 = ApiSetEditionEdgyProcessInput(v9, v13, a3, &v32);
    CInpLockGuard::LockExclusive((CTouchProcessor *)((char *)v9 + 48), (struct CLockListEntryStack *)v30);
    if ( (unsigned int)(v14 + 1) <= 1 )
    {
      v27 = *((_DWORD *)a3 + 28);
      if ( v14 )
      {
        *((_DWORD *)a3 + 28) = v27 | 0x80;
        for ( i = v32; i && i != a3; i = CTouchProcessor::GetNextFrame(v9, i, (struct _LIST_ENTRY *)((char *)v9 + 104)) )
          *((_DWORD *)i + 28) |= 0x80u;
      }
      else
      {
        *((_DWORD *)a3 + 28) = v27 | 0x40;
      }
      InputTraceLogging::Pointer::HandleDesktopEdgy(a3, v14);
      return MessagesCore;
    }
    v16 = v32;
    if ( v32 )
    {
      *((_DWORD *)v32 + 28) &= ~0x40u;
      if ( v32 )
      {
        v17 = *((_DWORD *)v32 + 28);
        if ( (v17 & 0x80u) == 0 && *((_DWORD *)v32 + 12) == 1 && (v17 & 0x10) != 0 )
        {
          v18 = (_DWORD *)*((_QWORD *)v32 + 16);
          if ( (*v18 & 0x400) != 0 && (v18[47] & 1) == 0 )
            CTouchProcessor::ProcessPointerInfoNodeEnterLeave(v9, v32, v15);
        }
      }
      do
      {
        if ( v16 == a3 )
          break;
        v19 = (_QWORD *)((char *)v16 + 24);
        v20 = *((_QWORD *)v16 + 3);
        if ( *(struct CPointerInputFrame **)(v20 + 8) != (struct CPointerInputFrame *)((char *)v16 + 24) )
          goto LABEL_41;
        v21 = (_QWORD *)*((_QWORD *)v16 + 4);
        if ( (_QWORD *)*v21 != v19 )
          goto LABEL_41;
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
        *((_QWORD *)v16 + 4) = (char *)v16 + 24;
        *v19 = v19;
        if ( (*((_DWORD *)v16 + 28) & 0x80u) == 0 )
          CTouchProcessor::GenerateMessagesCore(v9, a5, a6, 0, v16);
        NextFrame = CTouchProcessor::GetNextFrame(v9, v16, (struct _LIST_ENTRY *)((char *)v9 + 104));
        CTouchProcessor::UnreferenceFrame(v9, v16);
        v16 = NextFrame;
      }
      while ( NextFrame );
    }
    ApiSetEditionEdgyResetCurrentFrame();
  }
  v23 = (_QWORD *)((char *)a3 + 24);
  v24 = *((_QWORD *)a3 + 3);
  if ( *(const struct CPointerInputFrame **)(v24 + 8) != (const struct CPointerInputFrame *)((char *)a3 + 24)
    || (v25 = (_QWORD *)*((_QWORD *)a3 + 4), (_QWORD *)*v25 != v23) )
  {
LABEL_41:
    __fastfail(3u);
  }
  *v25 = v24;
  *(_QWORD *)(v24 + 8) = v25;
  *((_QWORD *)a3 + 4) = (char *)a3 + 24;
  *v23 = v23;
  if ( (*((_DWORD *)a3 + 28) & 0x80u) == 0 )
    MessagesCore = CTouchProcessor::GenerateMessagesCore(v9, a5, a6, 0, a3);
  CTouchProcessor::UnreferenceFrame(v9, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v26) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v26,
      7,
      329,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  return MessagesCore;
}
