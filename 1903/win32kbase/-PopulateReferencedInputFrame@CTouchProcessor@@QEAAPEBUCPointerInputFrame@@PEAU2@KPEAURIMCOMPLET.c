/*
 * XREFs of ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C016F2EC
 * Callers:
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C0170864 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C01716C4 (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 * Callees:
 *     _HMObjectFromHandle @ 0x1C0022DB0 (_HMObjectFromHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0039248 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0043954 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     EtwTraceEndPointerFrameCommit @ 0x1C010DC40 (EtwTraceEndPointerFrameCommit.c)
 *     EtwTraceEndPointerFrameCreation @ 0x1C010DC70 (EtwTraceEndPointerFrameCreation.c)
 *     ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C0166484 (-DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropR.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0166718 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z @ 0x1C01674CC (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C016DA3C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C016DABC (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C016E13C (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C016EBBC (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C017107C (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C017195C (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C01747A8 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C01750E8 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z @ 0x1C01756AC (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::PopulateReferencedInputFrame(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        __int64 a3,
        struct RIMCOMPLETEFRAME *a4)
{
  struct CPointerInputFrame *v4; // rdi
  unsigned int v6; // esi
  __int64 v7; // rax
  struct CPointerInfoNode *v8; // rbx
  unsigned __int64 v9; // rcx
  struct CPointerInputFrame *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  const struct CPointerInputFrame *v14; // r15
  unsigned int v15; // r12d
  CPointerInfoNode *v16; // rsi
  _DWORD *v17; // r14
  unsigned __int64 Queue; // rbx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct CPointerQFrame *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct CPointerQFrame *v31; // rbx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  const GUID *v35; // r8
  __int64 v36; // rdx
  CTouchProcessor *v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned int v42; // ebx
  __int64 v43; // r8
  int v44; // edx
  struct CPointerInputFrame *v45; // rbx
  _BYTE v47[128]; // [rsp+30h] [rbp-C8h] BYREF

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      7,
      46,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  *((_DWORD *)v4 + 28) |= 1u;
  v6 = 0;
  v7 = *((unsigned int *)v4 + 12);
  v8 = (struct CPointerInfoNode *)*((_QWORD *)v4 + 16);
  if ( (_DWORD)v7 )
  {
    do
    {
      v9 = *((_QWORD *)v4 + 16) + 496 * v7;
      if ( (unsigned __int64)v8 >= v9 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, a2, a3);
      if ( (*(_DWORD *)v8 & 0x1000) != 0 && (InputTraceLogging::Pointer::DropInput(), (*(_DWORD *)v8 & 0x1000) != 0)
        || !(unsigned int)CTouchProcessor::PopulatePointerInfoNode(this, v4, v8) )
      {
        CTouchProcessor::FreePointerInfoNodeInt(this, v4, v6);
      }
      v7 = *((unsigned int *)v4 + 12);
      ++v6;
      v8 = (struct CPointerInfoNode *)((char *)v8 + 496);
    }
    while ( v6 < (unsigned int)v7 );
  }
  v10 = CTouchProcessor::ReferencePreviousFrameByDeviceInt((CTouchProcessor *)this, v4);
  v13 = *((unsigned int *)v4 + 12);
  v14 = v10;
  *((_DWORD *)v4 + 28) &= ~1u;
  v15 = 0;
  v16 = (CPointerInfoNode *)*((_QWORD *)v4 + 16);
  if ( (_DWORD)v13 )
  {
    v17 = (_DWORD *)((char *)v16 + 360);
    do
    {
      if ( (unsigned __int64)v16 >= *((_QWORD *)v4 + 16) + 496 * v13 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v11, v12);
      if ( (*(_DWORD *)v16 & 0x1000) == 0 && (unsigned int)CPointerInfoNode::IsValid(v16) )
      {
        memset(v47, 0, 121);
        if ( CPointerInfoNode::IsForManipulationThread(v16) )
        {
          Queue = -1LL;
        }
        else
        {
          if ( v17[23] )
          {
            v19 = *(_QWORD *)(HMObjectFromHandle(*((_QWORD *)v17 - 20)) + 16);
            if ( CInputDest::GetQueue((CInputDest *)v17, 2LL) != *(_QWORD *)(v19 + 424) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
          }
          Queue = CInputDest::GetQueue((CInputDest *)v17, 2LL);
          CInputDest::operator=((__int64)v47, (__int64)v17, v23);
          if ( !Queue )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
        }
        v27 = CTouchProcessor::SetupQFrame(
                (CTouchProcessor *)(v14 != 0LL),
                v4,
                Queue,
                (const struct CInputDest *)v47,
                v14 != 0LL);
        v31 = v27;
        if ( !v14 )
        {
          v29 = *((unsigned int *)v27 + 37);
          if ( (v29 & 2) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
        }
        v32 = *(_DWORD *)v31;
        if ( *(_DWORD *)v31 == -1 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
          v32 = *(_DWORD *)v31;
        }
        *(v17 - 88) = v32;
        ++*((_DWORD *)v31 + 36);
        CTouchProcessor::ProcessQFrameNode((CTouchProcessor *)this, v31, v14, v16);
        CInputDest::SetEmpty((CInputDest *)v47, v33, v34);
      }
      v13 = *((unsigned int *)v4 + 12);
      v16 = (CPointerInfoNode *)((char *)v16 + 496);
      v17 += 124;
      ++v15;
    }
    while ( v15 < (unsigned int)v13 );
  }
  CTouchProcessor::TryCoalesceQFrame((CTouchProcessor *)this, v4, v14, 0LL);
  EtwTraceEndPointerFrameCommit((struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)v4 + 10), *((_DWORD *)v4 + 12), v35);
  EtwTraceEndPointerFrameCreation((struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)v4 + 10), *((_DWORD *)v4 + 12), 0LL);
  if ( v14 )
    CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v14);
  if ( this[10] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v38);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v37, v4, v38) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41);
  v42 = *((_DWORD *)v4 + 10);
  CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, v4);
  v45 = CTouchProcessor::FindAndReferenceFrameById(this, v42, v43);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v44) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v44,
      7,
      47,
      (__int64)&WPP_06d7dff703a03015e007562f188a8383_Traceguids);
  }
  return v45;
}
