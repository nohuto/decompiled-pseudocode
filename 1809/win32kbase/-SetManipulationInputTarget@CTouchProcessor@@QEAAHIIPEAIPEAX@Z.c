/*
 * XREFs of ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C01431FC
 * Callers:
 *     NtUserSetManipulationInputTarget @ 0x1C00F1BE0 (NtUserSetManipulationInputTarget.c)
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C0134CE0 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001E68 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x1C0005D80 (--1CInputDest@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C002F91C (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0031C88 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0063118 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00701D8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00703C0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD204 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00AD3CC (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD4C4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD5D8 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD618 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C0130CE0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0138404 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C0138450 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C0138874 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C0138F08 (-FreeNode@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C013A0EC (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAXAEBVCInputDest@@@Z @ 0x1C013EABC (-HandleResultFromUserMode@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREV.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C013EF10 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1C0140FE4 (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C014146C (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z @ 0x1C0141EC8 (-ProcessLostCaptureList@CTouchProcessor@@AEAAXGHPEBUCPointerInputFrame@@KK@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0142400 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0142A80 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z @ 0x1C0143C3C (-SetPointerCapture@CTouchProcessor@@QEAAH_KAEBVCInputDest@@W4CPointerCaptureMode@@HH@Z.c)
 *     ?SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCInputDest@@H@Z @ 0x1C01456B0 (-SetupNewQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@PEAPEAU2@_KVCIn.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C0145834 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C01462B8 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ApiSetEditionGetInputDelegate @ 0x1C0161D5C (ApiSetEditionGetInputDelegate.c)
 *     ApiSetSetManipulationInputTargetTransform @ 0x1C016502C (ApiSetSetManipulationInputTargetTransform.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetManipulationInputTarget(
        CTouchProcessor *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        void *a5)
{
  unsigned int v7; // edi
  __int64 v8; // r8
  struct CPointerInputFrame *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // ebx
  __int64 v17; // r8
  struct CPointerInputFrame *v18; // r13
  struct CPointerQFrame *v19; // rax
  struct CInputPointerNode *v20; // rdx
  CPointerInfoNode *v21; // rcx
  __int64 v22; // r8
  struct CPointerQFrame *v23; // rbx
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int16 v32; // r13
  unsigned __int64 v33; // rbx
  struct CPointerInfoNode *ValidNodeInFrame; // r13
  struct CPointerInputFrame *v35; // rdx
  unsigned int v36; // ebx
  struct CInputPointerNode *NodeById; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // ebx
  unsigned int MessagesCore; // esi
  unsigned int i; // ebx
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rdx
  unsigned int v48; // [rsp+28h] [rbp-D8h]
  int v49; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v50; // [rsp+30h] [rbp-D0h]
  unsigned int v51; // [rsp+34h] [rbp-CCh]
  int v52; // [rsp+38h] [rbp-C8h]
  int v53; // [rsp+3Ch] [rbp-C4h]
  unsigned int v54; // [rsp+40h] [rbp-C0h]
  unsigned int v55; // [rsp+44h] [rbp-BCh]
  struct CPointerQFrame *v56; // [rsp+48h] [rbp-B8h] BYREF
  struct CPointerInputFrame *v57; // [rsp+50h] [rbp-B0h]
  unsigned int v58; // [rsp+58h] [rbp-A8h]
  void *v59; // [rsp+60h] [rbp-A0h]
  unsigned int *v60; // [rsp+68h] [rbp-98h]
  _OWORD v61[11]; // [rsp+70h] [rbp-90h] BYREF
  char v62; // [rsp+120h] [rbp+20h]
  CInpLockGuard *v63[6]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v64[176]; // [rsp+160h] [rbp+60h] BYREF
  _OWORD v65[11]; // [rsp+210h] [rbp+110h] BYREF
  _OWORD v66[11]; // [rsp+2C0h] [rbp+1C0h] BYREF
  _BYTE v67[192]; // [rsp+370h] [rbp+270h] BYREF
  _QWORD v68[24]; // [rsp+430h] [rbp+330h] BYREF
  _OWORD v69[12]; // [rsp+4F0h] [rbp+3F0h] BYREF

  v59 = a5;
  v60 = a4;
  v58 = a3;
  v7 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x4Fu,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v63,
    (CTouchProcessor *)((char *)this + 56),
    0LL);
  v9 = CTouchProcessor::FindAndReferenceFrameById((struct _KTHREAD **)this, a2, v8);
  v12 = (__int64)v9;
  if ( !v9 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2u, 0xBu, 0x50u, (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    UserSetLastError(87LL);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xBu,
        0x51u,
        (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
    goto LABEL_88;
  }
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v10, (__int64)v9, v11) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  if ( !*(_QWORD *)(v12 + 120) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  v16 = *(_DWORD *)(*(_QWORD *)(v12 + 104) + 232LL);
  if ( v16 == 6 || !v16 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
  v55 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)(v12 + 120) + 308LL), 6);
  v54 = -__CFSHR__(*(_DWORD *)(*(_QWORD *)(v12 + 120) + 308LL), 7);
  memset(v61, 0, sizeof(v61));
  v62 = 0;
  v53 = 0;
  if ( CSpatialProcessor::ResolveInputSinkToINPUTDEST(this, a5, v16, (struct tagINPUTDEST *)v64) )
  {
    v53 = -(v64[12] & 1);
    CInputDest::CInputDest((CInputDest *)v68, (const struct tagINPUTDEST *)v64);
    CInputDest::operator=((__int64)v61, v68);
    CInputDest::~CInputDest((CInputDest *)v68);
  }
  v57 = CTouchProcessor::ReferencePreviousFrameByDeviceInt(
          (struct _KTHREAD **)this,
          (const struct CPointerInputFrame *)v12,
          v17);
  v18 = v57;
  v19 = CTouchProcessor::SetupQFrame(
          this,
          (struct CPointerInputFrame *)v12,
          0xFFFFFFFFFFFFFFFFuLL,
          (const struct CInputDest *)v61,
          0);
  v56 = v19;
  v23 = v19;
  if ( !v19 || *(_DWORD *)v19 == -1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
  v24 = 0LL;
  v25 = 0LL;
  v51 = 0;
  v52 = 0;
  if ( !*(_DWORD *)(v12 + 48) )
  {
    v41 = 0;
LABEL_71:
    if ( LODWORD(v61[0]) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
    goto LABEL_73;
  }
  do
  {
    v26 = *(_QWORD *)(v12 + 104) + 576 * v25;
    if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v26) )
    {
      if ( CPointerInfoNode::IsForManipulationThread(v21) && (*(_DWORD *)(v26 + 4) & 0x200) == 0 )
      {
        v22 = v58;
        v21 = 0LL;
        if ( v58 )
        {
          v20 = (struct CInputPointerNode *)*(unsigned __int16 *)(v26 + 236);
          while ( v60[(unsigned int)v21] != (_DWORD)v20 )
          {
            v21 = (CPointerInfoNode *)(unsigned int)((_DWORD)v21 + 1);
            if ( (unsigned int)v21 >= v58 )
              goto LABEL_67;
          }
          v49 = 0;
          if ( DWORD1(v61[5]) )
          {
            v27 = *(_QWORD *)(v26 + 312);
            v65[0] = v61[0];
            v65[1] = v61[1];
            v65[2] = v61[2];
            v65[3] = v61[3];
            v65[4] = v61[4];
            v65[5] = v61[5];
            v65[6] = v61[6];
            v65[7] = v61[7];
            v65[8] = v61[8];
            v65[9] = v61[9];
            v65[10] = v61[10];
            v49 = ApiSetSetManipulationInputTargetTransform((unsigned int)v65, (_DWORD)v59, v27, (int)v26 + 224, v53);
          }
          if ( (*(_DWORD *)(v26 + 4) & 0x80u) == 0 )
          {
            v28 = CInputDest::CInputDest(v69, *(_QWORD *)(v26 + 256), *(_DWORD *)(v26 + 476));
            CInputDest::operator=((__int64)v61, v28);
            CInputDest::~CInputDest((CInputDest *)v69);
          }
          InputTraceLogging::Pointer::HandleResultFromUserMode(
            (const struct CPointerInputFrame *)v12,
            (const struct tagPOINTEREVENTINT *)(v26 + 224),
            v59,
            (const struct CInputDest *)v61);
          if ( LODWORD(v61[0]) )
          {
            if ( !v24 )
            {
              CInputDest::CInputDest((CInputDest *)v67, (const struct CInputDest *)v61);
              v24 = CTouchProcessor::SetupNewQFrame(this, v12, &v56);
              if ( !v24 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
              v23 = v56;
            }
            *(_DWORD *)(v26 + 4) |= 0x200u;
            v52 = 1;
            if ( v23 )
            {
              if ( *(_DWORD *)(v26 + 8) != *(_DWORD *)v23 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
              if ( !*((_DWORD *)v23 + 50) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
              *(_DWORD *)(v26 + 8) = *(_DWORD *)v24;
              ++*(_DWORD *)(v24 + 200);
              --*((_DWORD *)v23 + 50);
            }
            *(_QWORD *)(v26 + 256) = CInputDest::GetWindowHandle((CInputDest *)v61);
            if ( DWORD1(v61[5]) )
              CInputDest::operator=(v26 + 392, (__int64)v61);
            if ( (*(_DWORD *)v26 & 0x100) == 0 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40);
            if ( v49 )
              *(_DWORD *)(v26 + 244) |= 0x400000u;
            if ( DWORD1(v61[5]) )
            {
              v66[0] = v61[0];
              v66[1] = v61[1];
              v66[2] = v61[2];
              v66[3] = v61[3];
              v66[4] = v61[4];
              v66[5] = v61[5];
              v66[6] = v61[6];
              v66[7] = v61[7];
              v66[8] = v61[8];
              v66[9] = v61[9];
              v66[10] = v61[10];
              if ( ApiSetEditionGetInputDelegate(v66) )
                *(_DWORD *)v26 |= 0x100000u;
            }
            CTouchProcessor::ProcessQFrameNode(this, (struct CPointerQFrame *)v24, v18, (struct CPointerInfoNode *)v26);
            if ( *(_DWORD *)v24 == -1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
            *(_DWORD *)(v24 + 204) |= 0x10u;
          }
          else
          {
            v32 = *(_WORD *)(v26 + 236);
            v33 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            v50 = v32;
            if ( v57 )
            {
              ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((struct _KTHREAD **)this, v57, v32, 0LL);
              if ( ValidNodeInFrame )
              {
                *(_QWORD *)(v26 + 256) = 0LL;
                CInputDest::SetEmpty((CInputDest *)(v26 + 392));
                v35 = v57;
                *(_DWORD *)(v26 + 4) |= 0x200u;
                CTouchProcessor::ProcessEnterLeave(this, v35, (struct CPointerInfoNode *)v26);
                if ( (*(_DWORD *)ValidNodeInFrame & 0x80u) == 0 )
                  CTouchProcessor::ProcessAndUnreferencePreviousInput(
                    this,
                    (const struct CPointerInfoNode *)v26,
                    *((unsigned int **)ValidNodeInFrame + 2),
                    v33,
                    v55,
                    v54);
              }
              v32 = v50;
            }
            if ( (*(_DWORD *)(v26 + 244) & 0x40000) != 0 )
            {
              v48 = v33;
              v36 = v51;
              CTouchProcessor::ProcessLostCaptureList(
                (struct _KTHREAD **)this,
                v32,
                1LL,
                (const struct CPointerInputFrame *)v12,
                v51,
                v48);
            }
            else
            {
              v36 = v51;
            }
            CTouchProcessor::FreePointerInfoNodeInt((__int64)this, v12, v36);
            NodeById = CTouchProcessor::FindNodeById((struct _KTHREAD **)this, v32, 0, 0);
            v20 = NodeById;
            if ( NodeById
              && *((_DWORD *)NodeById + 9) == 3
              && *((struct CInputPointerNode **)NodeById + 36) == (struct CInputPointerNode *)((char *)NodeById + 288) )
            {
              CTouchProcessor::FreeNode((struct _KTHREAD **)this, NodeById, v22);
            }
            v23 = v56;
            v18 = v57;
          }
        }
      }
    }
LABEL_67:
    v25 = v51 + 1;
    v51 = v25;
  }
  while ( (unsigned int)v25 < *(_DWORD *)(v12 + 48) );
  v41 = v52;
  if ( !v52 )
    goto LABEL_71;
  CTouchProcessor::TryCoalesceQFrame(this, (struct CPointerInputFrame *)v12, v18, (const struct CPointerQFrame *)v24);
LABEL_73:
  if ( v18 )
    CTouchProcessor::UnreferenceFrameInt(this, (__int64)v18, v22);
  if ( v41 )
  {
    MessagesCore = CTouchProcessor::GenerateMessagesCore(
                     (struct _KTHREAD **)this,
                     v55,
                     v54,
                     1,
                     (const struct CPointerInputFrame *)v12);
    for ( i = 0; i < *(_DWORD *)(v12 + 48); ++i )
    {
      v44 = *(_QWORD *)(v12 + 104) + 576LL * i;
      v45 = *(_DWORD *)(v44 + 4);
      if ( (v45 & 0x200) != 0 && (v45 & 0x400) == 0 )
      {
        v46 = *(_QWORD *)(v44 + 16);
        *(_DWORD *)(v44 + 4) = v45 | 0x400;
        if ( v46 )
        {
          v22 = *(unsigned int *)(v44 + 244);
          if ( (v22 & 4) != 0 )
            CTouchProcessor::SetPointerCapture(
              this,
              v46,
              v61,
              2 - (unsigned int)((v22 & 0x10000) != 0),
              1,
              -__CFSHR__(*(_DWORD *)v44, 21));
        }
      }
    }
  }
  else
  {
    MessagesCore = 0;
  }
  CTouchProcessor::UnreferenceFrame((__int64)this, v12, v22);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x52u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  v7 = MessagesCore;
  CInputDest::~CInputDest((CInputDest *)v61);
LABEL_88:
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v63);
  return v7;
}
