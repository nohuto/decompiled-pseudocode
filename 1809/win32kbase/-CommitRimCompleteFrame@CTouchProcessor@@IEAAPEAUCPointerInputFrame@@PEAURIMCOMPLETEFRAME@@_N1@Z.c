/*
 * XREFs of ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0135D6C
 * Callers:
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0141860 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0141A34 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C014B724 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     HMAssignmentLock @ 0x1C0031820 (HMAssignmentLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0031BAC (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00510B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD240 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     EtwTraceBeginPointerFrameCommit @ 0x1C00E5F80 (EtwTraceBeginPointerFrameCommit.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0132F74 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C0133B5C (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CommitFrame@Pointer@InputTraceLogging@@SAXPEBXPEBUCPointerInputFrame@@@Z @ 0x1C01359E8 (-CommitFrame@Pointer@InputTraceLogging@@SAXPEBXPEBUCPointerInputFrame@@@Z.c)
 *     ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C0135AD4 (-CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBXPEBUCPointerInputFrame@@PEBUtagPOINTEREVEN.c)
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C0135CE0 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C0139064 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C01391A8 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C01649B4 (ApiSetResetLastSeenFrameId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::CommitRimCompleteFrame(
        CTouchProcessor *this,
        struct RIMCOMPLETEFRAME *a2,
        char a3,
        char a4)
{
  CTouchProcessor *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  PDEVICE_OBJECT v10; // rcx
  unsigned __int16 v11; // r9
  char *v12; // rcx
  KPROCESSOR_MODE v13; // r8
  int v14; // eax
  unsigned __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  const GUID *v18; // r8
  PVOID *v19; // r12
  __int64 v20; // rdx
  char *v21; // rdi
  __int64 v22; // r8
  struct CPointerQFrame *v23; // rax
  unsigned __int64 v24; // rcx
  struct A0xad387374::CFrameIdGenerator *v25; // rbx
  int v26; // r13d
  _DWORD *v27; // r13
  __int64 v28; // rax
  _OWORD *v29; // rsi
  __int64 v30; // rbx
  _OWORD *v31; // rcx
  _QWORD *v32; // r13
  __int64 v33; // rbx
  _QWORD *v34; // r15
  void *v35; // rax
  __int64 v36; // r8
  CTouchProcessor *v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rsi
  CTouchProcessor *v41; // rcx
  PVOID Object[2]; // [rsp+38h] [rbp-69h] BYREF
  __int128 v44; // [rsp+48h] [rbp-59h] BYREF
  CInpLockGuard *v45[7]; // [rsp+58h] [rbp-49h] BYREF
  CInpLockGuard *v46[13]; // [rsp+90h] [rbp-11h] BYREF

  v6 = this;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x99u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v46,
    (CTouchProcessor *)((char *)v6 + 56),
    0LL);
  if ( *((struct _KTHREAD **)v6 + 8) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  if ( a4 )
  {
    if ( *((_DWORD *)v6 + 41) )
    {
      WPP_RECORDER_SF_(*((_QWORD *)v6 + 1), 3u, 0xBu, 0x9Au, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 155;
LABEL_60:
        WPP_RECORDER_SF_(
          (__int64)v10->DeviceExtension,
          5u,
          0xBu,
          v11,
          (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
        goto LABEL_61;
      }
      goto LABEL_61;
    }
LABEL_12:
    v12 = (char *)*((_QWORD *)a2 + 4);
    v13 = *((_DWORD *)a2 + 12) == 0;
    Object[0] = 0LL;
    v14 = RawInputManagerDeviceObjectResolveHandle(v12, 3u, v13, Object);
    if ( v14 < 0 )
    {
      WPP_RECORDER_SF_d(
        *((_QWORD *)v6 + 1),
        2u,
        0xBu,
        0x9Eu,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids,
        v14);
      v10 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v11 = 159;
        goto LABEL_60;
      }
    }
    else
    {
      v15 = 0LL;
      if ( Object[0] != (PVOID)-88LL )
        v15 = *((_QWORD *)Object[0] + 11);
      ObfDereferenceObject(Object[0]);
      v19 = (PVOID *)HMValidateHandleNoSecure(v15, 19);
      if ( !v19 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16, v18);
      v20 = *((unsigned int *)a2 + 6);
      if ( !(_DWORD)v20 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v20, v18);
        LODWORD(v20) = *((_DWORD *)a2 + 6);
      }
      EtwTraceBeginPointerFrameCommit(0LL, v20, v18);
      v21 = (char *)Win32AllocPoolZInit(0x80uLL, 0x66707355u);
      if ( v21 )
      {
        v23 = CTouchProcessor::AllocPointerQFrameList((struct _KTHREAD **)v6, *((unsigned int *)a2 + 6), v22);
        *((_QWORD *)v21 + 14) = v23;
        if ( v23 )
        {
          v24 = 576LL * *((unsigned int *)a2 + 6);
          if ( v24 <= 0xFFFFFFFF )
            *((_QWORD *)v21 + 13) = Win32AllocPoolZInit((unsigned int)v24, 0x65707355u);
          if ( *((_QWORD *)v21 + 13) )
          {
            v25 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
            *((_DWORD *)v21 + 22) = 1;
            CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
              (CInpLockGuardExclusiveIfNeeded *)v45,
              (struct A0xad387374::CFrameIdGenerator *)((char *)v25 + 8),
              0LL);
            v26 = (*(_DWORD *)v25)++;
            if ( v26 == -1 )
            {
              *(_DWORD *)v25 = 1;
              ApiSetResetLastSeenFrameId();
            }
            CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v45);
            *((_DWORD *)v21 + 10) = v26;
            *((_DWORD *)v21 + 12) = *((_DWORD *)a2 + 6);
            *((_QWORD *)v21 + 8) = v15;
            *((_QWORD *)v21 + 9) = *((_QWORD *)a2 + 5);
            *((_QWORD *)v21 + 10) = *(_QWORD *)(*((_QWORD *)a2 + 11) + 96LL);
            InputTraceLogging::Pointer::CommitFrame(v19, (const struct CPointerInputFrame *)v21);
            v27 = (_DWORD *)*((_QWORD *)a2 + 11);
            v28 = 0LL;
            LODWORD(Object[0]) = 0;
            if ( *((_DWORD *)a2 + 6) )
            {
              v29 = v27 + 2;
              do
              {
                v30 = 576 * v28;
                *(_DWORD *)(v30 + *((_QWORD *)v21 + 13) + 220) = *v27;
                v31 = (_OWORD *)(576 * v28 + *((_QWORD *)v21 + 13) + 224LL);
                *v31 = *v29;
                v31[1] = v29[1];
                v31[2] = v29[2];
                v31[3] = v29[3];
                v31[4] = v29[4];
                v31[5] = v29[5];
                v31[6] = v29[6];
                v31[7] = v29[7];
                v31[8] = v29[8];
                v31[9] = v29[9];
                *(_QWORD *)(v30 + *((_QWORD *)v21 + 13) + 248) = v15;
                CInputDest::SetEmpty((CInputDest *)(576 * v28 + *((_QWORD *)v21 + 13) + 392LL));
                InputTraceLogging::Pointer::CommitFramePointer(
                  v19,
                  (const struct CPointerInputFrame *)v21,
                  (const struct tagPOINTEREVENTINT *)(v30 + *((_QWORD *)v21 + 13) + 224LL));
                v28 = (unsigned int)(LODWORD(Object[0]) + 1);
                v27 += 42;
                v29 = (_OWORD *)((char *)v29 + 168);
                LODWORD(Object[0]) = v28;
              }
              while ( (unsigned int)v28 < *((_DWORD *)a2 + 6) );
              v6 = this;
            }
            *((_DWORD *)v21 + 14) = *((_DWORD *)a2 + 7);
            v32 = 0LL;
            *(_QWORD *)v21 = WPP_MAIN_CB.Queue.ListEntry.Blink;
            v33 = *((_QWORD *)a2 + 10);
            while ( 1 )
            {
              if ( !v33 )
              {
                Object[0] = v21 + 120;
                Object[1] = v19[60];
                v44 = *(_OWORD *)Object;
                HMAssignmentLock((__int64)&v44);
                if ( !a3 )
                {
                  CTouchProcessor::CommitInputFrame((struct _KTHREAD **)v6, (struct CPointerInputFrame *)v21, v36);
                  if ( a4 )
                  {
                    *((_DWORD *)v21 + 23) |= 0x80u;
                    ++*((_DWORD *)v6 + 40);
                  }
                  else
                  {
                    ++*((_DWORD *)v6 + 41);
                  }
                }
                *((_QWORD *)v21 + 4) = v21 + 24;
                *((_QWORD *)v21 + 3) = v21 + 24;
                if ( a3 )
                  *((_DWORD *)v21 + 23) |= 0x100u;
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    5u,
                    0xBu,
                    0xA9u,
                    (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
                goto LABEL_62;
              }
              v34 = Win32AllocPoolZInit(0x20uLL, 0x64727355u);
              if ( !v34 )
                break;
              v35 = Win32AllocPoolZInit(*(unsigned int *)(v33 + 4), 0x64727355u);
              v34[2] = v35;
              *((_DWORD *)v34 + 1) = *(_DWORD *)v33;
              *((_DWORD *)v34 + 2) = *(_DWORD *)(v33 + 4);
              memmove(v35, *(const void **)(v33 + 8), *(unsigned int *)(v33 + 4));
              if ( v32 )
                v32[3] = v34;
              else
                *((_QWORD *)v21 + 12) = v34;
              v33 = *(_QWORD *)(v33 + 16);
              v32 = v34;
            }
            WPP_RECORDER_SF_(
              *((_QWORD *)v6 + 1),
              2u,
              0xBu,
              0xA7u,
              (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
            v38 = *((_QWORD *)v21 + 12);
            while ( v38 )
            {
              v39 = *(_QWORD *)(v38 + 16);
              v40 = v38;
              if ( v39 )
                Win32FreePool(v39);
              v38 = *(_QWORD *)(v38 + 24);
              Win32FreePool(v40);
            }
            CTouchProcessor::FreePointerInfoList(v37, *((struct CPointerInfoNode **)v21 + 13), *((_DWORD *)a2 + 6));
            CTouchProcessor::FreePointerQFrameList(v41, *((struct CPointerQFrame **)v21 + 14), *((_DWORD *)a2 + 6));
            Win32FreePool((__int64)v21);
            v10 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              v11 = 168;
              goto LABEL_60;
            }
          }
          else
          {
            CTouchProcessor::FreePointerQFrameList(
              (CTouchProcessor *)v24,
              *((struct CPointerQFrame **)v21 + 14),
              *((_DWORD *)a2 + 6));
            Win32FreePool((__int64)v21);
            WPP_RECORDER_SF_(
              *((_QWORD *)v6 + 1),
              2u,
              0xBu,
              0xA4u,
              (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
            v10 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              v11 = 165;
              goto LABEL_60;
            }
          }
        }
        else
        {
          Win32FreePool((__int64)v21);
          WPP_RECORDER_SF_(
            *((_QWORD *)v6 + 1),
            2u,
            0xBu,
            0xA2u,
            (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
          v10 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v11 = 163;
            goto LABEL_60;
          }
        }
      }
      else
      {
        WPP_RECORDER_SF_(
          *((_QWORD *)v6 + 1),
          2u,
          0xBu,
          0xA0u,
          (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
        v10 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v11 = 161;
          goto LABEL_60;
        }
      }
    }
    goto LABEL_61;
  }
  if ( !*((_DWORD *)v6 + 40) )
    goto LABEL_12;
  WPP_RECORDER_SF_(*((_QWORD *)v6 + 1), 3u, 0xBu, 0x9Cu, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  v10 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v11 = 157;
    goto LABEL_60;
  }
LABEL_61:
  v21 = 0LL;
LABEL_62:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v46);
  return (struct CPointerInputFrame *)v21;
}
