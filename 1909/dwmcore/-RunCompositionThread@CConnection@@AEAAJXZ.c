/*
 * XREFs of ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800DECFC
 * Callers:
 *     ?CompositionThreadEntryPoint@CConnection@@CAKPEAX@Z @ 0x1800DECF0 (-CompositionThreadEntryPoint@CConnection@@CAKPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x1800DF0E8 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z @ 0x1800DF1C4 (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCTransport@@PEAVCConnection@@@Z.c)
 *     _anonymous_namespace_::State::State @ 0x1800DFB2C (_anonymous_namespace_--State--State.c)
 *     ??0CEnergyReporter@@AEAA@XZ @ 0x1800DFC2C (--0CEnergyReporter@@AEAA@XZ.c)
 *     ??0CProcessAttributionReporter@@AEAA@XZ @ 0x1800DFCB8 (--0CProcessAttributionReporter@@AEAA@XZ.c)
 *     ??0CProcessResourceAttributionReporter@@AEAA@XZ @ 0x1800DFD20 (--0CProcessResourceAttributionReporter@@AEAA@XZ.c)
 *     ?Create@CKernelTransport@@SAJPEAPEAVCTransport@@@Z @ 0x1800E6F74 (-Create@CKernelTransport@@SAJPEAPEAVCTransport@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 *     _anonymous_namespace_::State::_State @ 0x1801714E8 (_anonymous_namespace_--State--_State.c)
 *     ??1CProcessAttributionManager@@AEAA@XZ @ 0x180177158 (--1CProcessAttributionManager@@AEAA@XZ.c)
 *     ??1CProcessAttributionReporter@@AEAA@XZ @ 0x180177590 (--1CProcessAttributionReporter@@AEAA@XZ.c)
 *     ??1CProcessResourceAttributionReporter@@AEAA@XZ @ 0x180177A28 (--1CProcessResourceAttributionReporter@@AEAA@XZ.c)
 *     ??_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z @ 0x180178000 (--_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z.c)
 */

__int64 __fastcall CConnection::RunCompositionThread(CConnection *this)
{
  CProcessAttributionManager *v2; // rax
  __int64 v3; // r8
  LPVOID v4; // rax
  void *v5; // rax
  void *v6; // rax
  CEnergyReporter *v7; // rax
  CProcessAttributionReporter *v8; // rax
  __int64 v9; // r8
  CProcessAttributionReporter *v10; // rax
  void *v11; // rax
  __int64 v12; // r8
  union _SLIST_HEADER *v13; // rax
  struct CTransport **v14; // r14
  signed int v15; // eax
  __int64 v16; // rcx
  signed int v17; // ebx
  struct CTransport *v18; // rbx
  CPartitionVerticalBlankScheduler *v19; // rax
  __int64 v20; // r8
  CPartitionVerticalBlankScheduler *v21; // rax
  __int64 v22; // rcx
  CPartitionVerticalBlankScheduler *v23; // rsi
  __int64 v24; // rcx
  signed int v25; // eax
  void (__fastcall ***v26)(_QWORD, __int64); // rcx
  CProcessAttributionReporter *v27; // rdi
  CProcessResourceAttributionReporter *v28; // rdi
  CEnergyReporter *v29; // rdi
  void (__fastcall ***v30)(_QWORD, __int64); // rcx
  void *v31; // rdi
  CProcessAttributionManager *v32; // rdi
  __int64 result; // rax
  unsigned int v34; // [rsp+20h] [rbp-38h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (CProcessAttributionManager *)DefaultHeap::AllocClear(0x30uLL);
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v3);
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)v2 + 1) = 0LL;
  *((_QWORD *)v2 + 2) = 0LL;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  lpMem = v2;
  v4 = operator new(0x40uLL);
  if ( v4 )
    v5 = (void *)anonymous_namespace_::State::State(v4);
  else
    v5 = 0LL;
  qword_180339D30 = v5;
  v6 = DefaultHeap::Alloc(0x78uLL);
  if ( v6 )
    v7 = CEnergyReporter::CEnergyReporter(v6);
  else
    v7 = 0LL;
  qword_180339D48 = v7;
  v8 = (CProcessAttributionReporter *)DefaultHeap::Alloc(0x80uLL);
  if ( v8 )
    v10 = CProcessAttributionReporter::CProcessAttributionReporter(v8);
  else
    v10 = 0LL;
  qword_180339D50 = v10;
  if ( !v10 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v9);
  v11 = DefaultHeap::Alloc(0x40uLL);
  if ( v11 )
    v13 = (union _SLIST_HEADER *)CProcessResourceAttributionReporter::CProcessResourceAttributionReporter(v11);
  else
    v13 = 0LL;
  qword_180339D58 = (CProcessResourceAttributionReporter *)v13;
  if ( !v13 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v12);
  InitializeSListHead(v13 + 1);
  v14 = (struct CTransport **)((char *)this + 40);
  v15 = CKernelTransport::Create((struct CTransport **)this + 5);
  v17 = v15;
  if ( v15 < 0 )
  {
    v34 = 204;
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, v34, 0LL);
  }
  else
  {
    v18 = *v14;
    v19 = (CPartitionVerticalBlankScheduler *)DefaultHeap::AllocClear(0x8B58uLL);
    if ( !v19 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v20);
    v21 = CPartitionVerticalBlankScheduler::CPartitionVerticalBlankScheduler(v19, v18, this);
    v23 = v21;
    if ( !v21 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, 0x8007000E, 0x1Fu, 0LL);
      v17 = -2147024882;
LABEL_20:
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v17, 0xD1u, 0LL);
      goto LABEL_34;
    }
    v25 = CPartitionVerticalBlankScheduler::Initialize(v21);
    v17 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v25, 0x20u, 0LL);
      CPartitionVerticalBlankScheduler::`scalar deleting destructor'(v23, 1u);
    }
    else
    {
      *((_QWORD *)this + 2) = v23;
    }
    if ( v17 < 0 )
      goto LABEL_20;
    SetEvent(*((HANDLE *)this + 4));
    *((_BYTE *)this + 56) = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_VBLANK_LOOP_Start);
    do
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 128LL))(*((_QWORD *)this + 2));
      v17 = v15;
      if ( v15 < 0 )
      {
        v34 = 222;
        goto LABEL_33;
      }
    }
    while ( *((_BYTE *)this + 56) );
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop);
  }
LABEL_34:
  (*(void (__fastcall **)(CConnection *, __int64))(*(_QWORD *)this + 40LL))(this, 2291663905LL);
  v26 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 2);
  if ( v26 )
  {
    (**v26)(v26, 1LL);
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( *v14 )
  {
    (**(void (__fastcall ***)(struct CTransport *, __int64))*v14)(*v14, 1LL);
    *v14 = 0LL;
  }
  v27 = qword_180339D50;
  if ( qword_180339D50 )
  {
    CProcessAttributionReporter::~CProcessAttributionReporter(qword_180339D50);
    operator delete(v27);
  }
  v28 = qword_180339D58;
  qword_180339D50 = 0LL;
  if ( qword_180339D58 )
  {
    CProcessResourceAttributionReporter::~CProcessResourceAttributionReporter(qword_180339D58);
    operator delete(v28);
  }
  v29 = qword_180339D48;
  qword_180339D58 = 0LL;
  if ( qword_180339D48 )
  {
    WaitForThreadpoolWorkCallbacks(*((PTP_WORK *)qword_180339D48 + 9), 1);
    CloseThreadpoolWork(*((PTP_WORK *)v29 + 9));
    v30 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v29 + 6);
    if ( v30 )
      (**v30)(v30, 1LL);
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v29 + 88);
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v29 + 16);
    operator delete(v29);
  }
  v31 = qword_180339D30;
  qword_180339D48 = 0LL;
  if ( qword_180339D30 )
  {
    anonymous_namespace_::State::_State(qword_180339D30);
    operator delete(v31);
  }
  v32 = lpMem;
  qword_180339D30 = 0LL;
  if ( lpMem )
  {
    CProcessAttributionManager::~CProcessAttributionManager(lpMem);
    operator delete(v32);
  }
  result = (unsigned int)v17;
  lpMem = 0LL;
  return result;
}
