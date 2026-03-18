/*
 * XREFs of ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C0140910
 * Callers:
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C0141C10 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     ?ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@Z @ 0x1C014280C (-ReferenceInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@PEAURIMCOMPLETEFRAME@@K@.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x1C0005D80 (--1CInputDest@@QEAA@XZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C002F1D4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00701D8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00AD3CC (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD4C4 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD618 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     EtwTraceEndPointerFrameCommit @ 0x1C00E66B0 (EtwTraceEndPointerFrameCommit.c)
 *     EtwTraceEndPointerFrameCreation @ 0x1C00E66E0 (EtwTraceEndPointerFrameCreation.c)
 *     ?DropPointer@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C0138134 (-DropPointer@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4Dro.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0138404 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C013EF10 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C013F664 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C0140200 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C0142400 (-ProcessQFrameNode@CTouchProcessor@@QEAAXPEAUCPointerQFrame@@PEBUCPointerInputFrame@@PEAUCPointe.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0142A80 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@H@Z @ 0x1C0145834 (-SetupQFrame@CTouchProcessor@@QEAAPEAUCPointerQFrame@@PEAUCPointerInputFrame@@_KAEBVCInputDest@@.c)
 *     ?TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z @ 0x1C01462B8 (-TryCoalesceQFrame@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEBU2@PEBUCPointerQFrame@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::PopulateReferencedInputFrame(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        __int64 a3,
        struct RIMCOMPLETEFRAME *a4)
{
  __int64 v6; // rax
  unsigned int v7; // ebp
  struct CPointerInfoNode *v8; // rbx
  unsigned __int64 v9; // rcx
  struct CPointerInputFrame *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  const struct CPointerInputFrame *v13; // r15
  CPointerInfoNode *v14; // r14
  unsigned int v15; // r12d
  CInputDest *v16; // rbp
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // rbx
  __int64 Queue; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct CPointerQFrame *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct CPointerQFrame *v31; // rbx
  int v32; // eax
  const GUID *v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned int v40; // ebx
  __int64 v41; // r8
  struct CPointerInputFrame *v42; // rbx
  _BYTE v44[192]; // [rsp+30h] [rbp-108h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x29u,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  v6 = *((unsigned int *)a2 + 12);
  v7 = 0;
  v8 = (struct CPointerInfoNode *)*((_QWORD *)a2 + 13);
  for ( *((_DWORD *)a2 + 22) = 2; v7 < (unsigned int)v6; v8 = (struct CPointerInfoNode *)((char *)v8 + 576) )
  {
    v9 = *((_QWORD *)a2 + 13) + 576 * v6;
    if ( (unsigned __int64)v8 >= v9 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, a2, a3);
    if ( (*(_DWORD *)v8 & 0x1000) != 0 && (InputTraceLogging::Pointer::DropPointer(), (*(_DWORD *)v8 & 0x1000) != 0)
      || !(unsigned int)CTouchProcessor::PopulatePointerInfoNode(this, a2, v8) )
    {
      CTouchProcessor::FreePointerInfoNodeInt((__int64)this, (__int64)a2, v7);
    }
    v6 = *((unsigned int *)a2 + 12);
    ++v7;
  }
  *((_DWORD *)a2 + 22) = 4;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_InputVirtualization__private_propertyCache,
    0xF89686u,
    (__int64)&unk_1C01933C8,
    0,
    3u);
  v10 = CTouchProcessor::ReferencePreviousFrameByDeviceInt(this, a2);
  v12 = *((unsigned int *)a2 + 12);
  v13 = v10;
  v14 = (CPointerInfoNode *)*((_QWORD *)a2 + 13);
  v15 = 0;
  if ( (_DWORD)v12 )
  {
    v16 = (CPointerInfoNode *)((char *)v14 + 392);
    do
    {
      v17 = *((_QWORD *)a2 + 13) + 576 * v12;
      if ( (unsigned __int64)v14 >= v17 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v17, v11);
      if ( (*(_DWORD *)v14 & 0x1000) == 0 && (unsigned int)CPointerInfoNode::IsValid(v14) )
      {
        memset(v44, 0, 177);
        if ( CPointerInfoNode::IsForManipulationThread(v14) )
        {
          v18 = -1LL;
        }
        else
        {
          if ( *((_DWORD *)v16 + 21) )
          {
            v19 = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)*((_DWORD *)v16 - 34));
            Queue = CInputDest::GetQueue(v16, 2);
            v23 = *(_QWORD *)(v19 + 16);
            if ( Queue != *(_QWORD *)(v23 + 432) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v21, v22);
          }
          v18 = CInputDest::GetQueue(v16, 2);
          CInputDest::operator=((__int64)v44, (__int64)v16);
          if ( !v18 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
        }
        v27 = CTouchProcessor::SetupQFrame(this, a2, v18, (const struct CInputDest *)v44, v13 != 0LL);
        v31 = v27;
        if ( !v13 )
        {
          v29 = *((unsigned int *)v27 + 51);
          if ( (v29 & 2) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
        }
        v32 = *(_DWORD *)v31;
        if ( *(_DWORD *)v31 == -1 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
          v32 = *(_DWORD *)v31;
        }
        *((_DWORD *)v16 - 96) = v32;
        ++*((_DWORD *)v31 + 50);
        CTouchProcessor::ProcessQFrameNode(this, v31, v13, v14);
        CInputDest::~CInputDest((CInputDest *)v44);
      }
      v12 = *((unsigned int *)a2 + 12);
      v14 = (CPointerInfoNode *)((char *)v14 + 576);
      v16 = (CInputDest *)((char *)v16 + 576);
      ++v15;
    }
    while ( v15 < (unsigned int)v12 );
  }
  CTouchProcessor::TryCoalesceQFrame(this, a2, v13, 0LL);
  EtwTraceEndPointerFrameCommit((struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a2 + 10), *((_DWORD *)a2 + 12), v33);
  EtwTraceEndPointerFrameCreation((struct _MCGEN_TRACE_CONTEXT *)*((unsigned int *)a2 + 10), *((_DWORD *)a2 + 12), 0LL);
  if ( v13 )
    CTouchProcessor::UnreferenceFrameInt(this, (__int64)v13, v36);
  if ( *((struct _KTHREAD **)this + 8) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v34, v36);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v35, (__int64)a2, v36) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v38, v37, v39);
  v40 = *((_DWORD *)a2 + 10);
  CTouchProcessor::UnreferenceFrameInt(this, (__int64)a2, v39);
  v42 = CTouchProcessor::FindAndReferenceFrameById((struct _KTHREAD **)this, v40, v41);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x2Au,
      (__int64)&WPP_34edb07bf13d308a4f9f363aca43f10b_Traceguids);
  return v42;
}
