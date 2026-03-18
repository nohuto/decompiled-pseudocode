/*
 * XREFs of ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C016FE54
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C00A3C30 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 *     NtUserSetManipulationInputTarget @ 0x1C0119CC0 (NtUserSetManipulationInputTarget.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0001728 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00304C0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0030C04 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C004E914 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C004EAF0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C004EF64 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A3EB0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00B766C (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C015B5A0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0164518 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C01645CC (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C01649EC (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0165030 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C01652CC (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0165E1C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAXAEBVCInputDest@@@Z @ 0x1C016B3E0 (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C016B83C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C016B8BC (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016BF50 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C016D858 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C016DD5C (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C016EE8C (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C016F0A0 (-ProcessRoutedAwayList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C016F76C (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C01708D0 (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C0172410 (-SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCIn.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C01725B8 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C0172EF8 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0173210 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01734BC (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C019A05C (ApiSetEditionGetInputDelegate.c)
 *     ApiSetSetManipulationInputTargetTransform @ 0x1C019EBB4 (ApiSetSetManipulationInputTargetTransform.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetManipulationInputTarget(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        void *a5)
{
  unsigned int v5; // ebx
  unsigned int v7; // edi
  __int64 v8; // r8
  struct CPointerInputFrame *v9; // rax
  __int64 v10; // rdx
  CTouchProcessor *v11; // rcx
  __int64 v12; // r8
  struct CPointerInputFrame *v13; // r14
  int v14; // edx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // ebx
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  struct CPointerInputFrame *v23; // r13
  CTouchProcessor *v24; // rcx
  struct CPointerQFrame *v25; // rax
  struct CInputPointerNode *v26; // rdx
  CPointerInfoNode *v27; // rcx
  __int64 v28; // r8
  struct CPointerQFrame *v29; // rbx
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // r8
  _QWORD *v34; // rax
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned __int16 v41; // r13
  unsigned __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // r8
  struct CPointerInfoNode *ValidNodeInFrame; // r12
  struct CPointerInputFrame *v46; // rdx
  unsigned int v47; // ebx
  struct CInputPointerNode *NodeById; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  int v53; // ebx
  unsigned int MessagesCore; // esi
  unsigned int i; // ebx
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rdx
  int v59; // r8d
  __int64 v60; // rdx
  __int64 v61; // r8
  unsigned int v63; // [rsp+28h] [rbp-D8h]
  unsigned int v64; // [rsp+30h] [rbp-D0h]
  int v65; // [rsp+34h] [rbp-CCh]
  int v66; // [rsp+38h] [rbp-C8h]
  int v67; // [rsp+3Ch] [rbp-C4h]
  unsigned int v68; // [rsp+40h] [rbp-C0h]
  int v69; // [rsp+44h] [rbp-BCh]
  struct CPointerQFrame *v70; // [rsp+48h] [rbp-B8h] BYREF
  struct CPointerInputFrame *v71; // [rsp+50h] [rbp-B0h]
  __int64 v72; // [rsp+58h] [rbp-A8h]
  unsigned int v73; // [rsp+60h] [rbp-A0h]
  void *v74; // [rsp+68h] [rbp-98h]
  unsigned int *v75; // [rsp+70h] [rbp-90h]
  CInpLockGuard *v76; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v77[120]; // [rsp+80h] [rbp-80h] BYREF
  char v78; // [rsp+F8h] [rbp-8h]
  _OWORD v79[7]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v80; // [rsp+170h] [rbp+70h]
  _OWORD v81[7]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v82; // [rsp+1F0h] [rbp+F0h]
  _DWORD v83[32]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v84[128]; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v85[16]; // [rsp+300h] [rbp+200h] BYREF
  _OWORD v86[8]; // [rsp+380h] [rbp+280h] BYREF

  v5 = a2;
  v74 = a5;
  v75 = a4;
  v73 = a3;
  v7 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      83,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)&v76, (struct CInpLockGuard *)(this + 6));
  v9 = CTouchProcessor::FindAndReferenceFrameById(this, v5, v8);
  v13 = v9;
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v10, 7, 84, (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    }
    UserSetLastError(87LL, v10);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v14) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        7,
        85,
        (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
    }
    goto LABEL_93;
  }
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v11, v9, v12) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
  if ( !*((_QWORD *)v13 + 18) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
  v18 = *(_DWORD *)(*((_QWORD *)v13 + 16) + 176LL);
  if ( v18 == 6 || !v18 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
  v69 = -__CFSHR__(*(_DWORD *)(*((_QWORD *)v13 + 18) + 312LL), 4);
  v68 = -__CFSHR__(*(_DWORD *)(*((_QWORD *)v13 + 18) + 312LL), 5);
  memset(v77, 0, sizeof(v77));
  v78 = 0;
  memset(v83, 0, 0x78uLL);
  v66 = 0;
  if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(
         (CSpatialProcessor *)this,
         a5,
         v18,
         0LL,
         (struct tagINPUTDEST *)v83) )
  {
    v66 = -(v83[4] & 1);
    CInputDest::CInputDest((CInputDest *)v85, (const struct tagINPUTDEST *)v83);
    CInputDest::operator=((__int64)v77, v85, v20);
    CInputDest::SetEmpty((CInputDest *)v85, v21, v22);
  }
  v71 = CTouchProcessor::ReferencePreviousFrameByDeviceInt(this, v13, v19);
  v23 = v71;
  v25 = CTouchProcessor::SetupQFrame(v24, v13, 0xFFFFFFFFFFFFFFFFuLL, (const struct CInputDest *)v77, 0);
  v70 = v25;
  v29 = v25;
  if ( !v25 || *(_DWORD *)v25 == -1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
  v30 = 0LL;
  v31 = 0LL;
  v64 = 0;
  v65 = 0;
  v72 = 0LL;
  if ( !*((_DWORD *)v13 + 12) )
  {
    v53 = 0;
LABEL_75:
    if ( *(_DWORD *)v77 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
    goto LABEL_77;
  }
  do
  {
    v32 = *((_QWORD *)v13 + 16) + 496 * v31;
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v32) )
    {
      if ( CPointerInfoNode::IsForManipulationThread(v27) && (*(_DWORD *)(v32 + 4) & 0x200) == 0 )
      {
        v28 = v73;
        v27 = 0LL;
        if ( v73 )
        {
          v26 = (struct CInputPointerNode *)*(unsigned __int16 *)(v32 + 180);
          while ( v75[(unsigned int)v27] != (_DWORD)v26 )
          {
            v27 = (CPointerInfoNode *)(unsigned int)((_DWORD)v27 + 1);
            if ( (unsigned int)v27 >= v73 )
              goto LABEL_71;
          }
          v67 = 0;
          if ( *(_DWORD *)&v77[92] )
          {
            v33 = *(_QWORD *)(v32 + 256);
            v79[0] = *(_OWORD *)v77;
            v79[1] = *(_OWORD *)&v77[16];
            v79[2] = *(_OWORD *)&v77[32];
            v79[3] = *(_OWORD *)&v77[48];
            v79[4] = *(_OWORD *)&v77[64];
            v79[5] = *(_OWORD *)&v77[80];
            v79[6] = *(_OWORD *)&v77[96];
            v80 = *(_QWORD *)&v77[112];
            v67 = ApiSetSetManipulationInputTargetTransform((unsigned int)v79, (_DWORD)v74, v33, (int)v32 + 168, v66);
          }
          if ( (*(_DWORD *)(v32 + 4) & 0x80u) == 0 )
          {
            v34 = CInputDest::CInputDest(v86, *(_QWORD *)(v32 + 200), *(_DWORD *)(v32 + 452), 1);
            CInputDest::operator=((__int64)v77, v34, v35);
            CInputDest::SetEmpty((CInputDest *)v86, v36, v37);
          }
          InputTraceLogging::Pointer::HandleResultFromUserMode(
            v13,
            (const struct tagPOINTEREVENTINT *)(v32 + 168),
            v74,
            (const struct CInputDest *)v77);
          if ( *(_DWORD *)v77 )
          {
            if ( !v30 )
            {
              CInputDest::CInputDest((CInputDest *)v84, (__int64 **)v77);
              v72 = CTouchProcessor::SetupNewQFrame(v49, v13, &v70);
              v30 = v72;
              if ( !v72 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40);
              v29 = v70;
            }
            *(_DWORD *)(v32 + 4) |= 0x200u;
            v65 = 1;
            if ( v29 )
            {
              if ( *(_DWORD *)(v32 + 8) != *(_DWORD *)v29 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40);
              if ( !*((_DWORD *)v29 + 36) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40);
              *(_DWORD *)(v32 + 8) = *(_DWORD *)v30;
              ++*(_DWORD *)(v30 + 144);
              --*((_DWORD *)v29 + 36);
            }
            *(_QWORD *)(v32 + 200) = CInputDest::GetWindowHandle((CInputDest *)v77);
            if ( *(_DWORD *)&v77[92] )
              CInputDest::operator=(v32 + 360, (__int64)v77, v52);
            if ( (*(_DWORD *)v32 & 0x100) == 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v51, v50, v52);
            if ( v67 )
              *(_DWORD *)(v32 + 188) |= 0x400000u;
            if ( *(_DWORD *)&v77[92] )
            {
              v81[0] = *(_OWORD *)v77;
              v81[1] = *(_OWORD *)&v77[16];
              v81[2] = *(_OWORD *)&v77[32];
              v81[3] = *(_OWORD *)&v77[48];
              v81[4] = *(_OWORD *)&v77[64];
              v81[5] = *(_OWORD *)&v77[80];
              v81[6] = *(_OWORD *)&v77[96];
              v82 = *(_QWORD *)&v77[112];
              if ( ApiSetEditionGetInputDelegate(v81) )
                *(_DWORD *)v32 |= 0x100000u;
            }
            CTouchProcessor::ProcessQFrameNode(this, (struct CPointerQFrame *)v30, v23, (struct CPointerInfoNode *)v32);
            if ( *(_DWORD *)v30 == -1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
            *(_DWORD *)(v30 + 148) |= 0x10u;
          }
          else
          {
            v41 = *(_WORD *)(v32 + 180);
            v42 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            if ( v71 )
            {
              ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((CTouchProcessor *)this, v71, v41, 0LL);
              if ( ValidNodeInFrame )
              {
                *(_QWORD *)(v32 + 200) = 0LL;
                CInputDest::SetEmpty((CInputDest *)(v32 + 360), v43, v44);
                v46 = v71;
                *(_DWORD *)(v32 + 4) |= 0x200u;
                CTouchProcessor::ProcessEnterLeave(this, v46, (struct CPointerInfoNode *)v32);
                if ( (*(_DWORD *)ValidNodeInFrame & 0x80u) == 0 )
                  CTouchProcessor::ProcessAndUnreferencePreviousInput(
                    (CTouchProcessor *)this,
                    (const struct CPointerInfoNode *)v32,
                    *((unsigned int **)ValidNodeInFrame + 2),
                    v42,
                    v69,
                    v68);
              }
              v30 = v72;
            }
            if ( (*(_DWORD *)(v32 + 188) & 0x40000) != 0 )
            {
              v63 = v42;
              v47 = v64;
              CTouchProcessor::ProcessRoutedAwayList((CTouchProcessor *)this, v41, 1LL, v13, v64, v63);
            }
            else
            {
              v47 = v64;
            }
            CTouchProcessor::FreePointerInfoNodeInt(this, v13, v47);
            NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)this, v41, 0, 0);
            v26 = NodeById;
            if ( NodeById
              && *((_DWORD *)NodeById + 13) == 3
              && *((struct CInputPointerNode **)NodeById + 31) == (struct CInputPointerNode *)((char *)NodeById + 248) )
            {
              CTouchProcessor::FreeNode(this, NodeById, v28);
            }
            v29 = v70;
            v23 = v71;
          }
        }
      }
    }
LABEL_71:
    v31 = v64 + 1;
    v64 = v31;
  }
  while ( (unsigned int)v31 < *((_DWORD *)v13 + 12) );
  v53 = v65;
  if ( !v65 )
    goto LABEL_75;
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, v13, v23, (const struct CPointerQFrame *)v30);
LABEL_77:
  if ( v23 )
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v23);
  if ( v53 )
  {
    MessagesCore = CTouchProcessor::GenerateMessagesCore(this, v69, v68, 1, v13);
    for ( i = 0; i < *((_DWORD *)v13 + 12); ++i )
    {
      v56 = *((_QWORD *)v13 + 16) + 496LL * i;
      v57 = *(_DWORD *)(v56 + 4);
      if ( (v57 & 0x200) != 0 && (v57 & 0x400) == 0 )
      {
        v58 = *(_QWORD *)(v56 + 16);
        *(_DWORD *)(v56 + 4) = v57 | 0x400;
        if ( v58 )
        {
          v59 = *(_DWORD *)(v56 + 188);
          if ( (v59 & 4) != 0 )
            CTouchProcessor::SetPointerCapture(
              this,
              v58,
              v77,
              2 - (unsigned int)((v59 & 0x10000) != 0),
              1,
              -__CFSHR__(*(_DWORD *)v56, 21));
        }
      }
    }
  }
  else
  {
    MessagesCore = 0;
  }
  CTouchProcessor::UnreferenceFrame((CTouchProcessor *)this, v13);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v60) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v60,
      7,
      86,
      (__int64)&WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids);
  }
  v7 = MessagesCore;
  CInputDest::SetEmpty((CInputDest *)v77, v60, v61);
LABEL_93:
  CInpLockGuard::UnLock(v76);
  return v7;
}
