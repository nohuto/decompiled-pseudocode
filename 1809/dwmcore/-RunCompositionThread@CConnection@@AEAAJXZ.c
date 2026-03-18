/*
 * XREFs of ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x180060FBC
 * Callers:
 *     ?CompositionThreadEntryPoint@CConnection@@CAKPEAX@Z @ 0x180060890 (-CompositionThreadEntryPoint@CConnection@@CAKPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     _anonymous_namespace_::State::State @ 0x18006089C (_anonymous_namespace_--State--State.c)
 *     ??0CEnergyReporter@@AEAA@XZ @ 0x180060E00 (--0CEnergyReporter@@AEAA@XZ.c)
 *     ??0CProcessAttributionReporter@@AEAA@XZ @ 0x180060E94 (--0CProcessAttributionReporter@@AEAA@XZ.c)
 *     ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180061144 (-Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@@Z @ 0x18006318C (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@@Z.c)
 *     ?Create@CKernelTransport@@SAJPEAPEAV1@@Z @ 0x180063A8C (-Create@CKernelTransport@@SAJPEAPEAV1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??_GCKernelTransport@@QEAAPEAXI@Z @ 0x18014554C (--_GCKernelTransport@@QEAAPEAXI@Z.c)
 *     ?OnConnectionLostNotification@CConnection@@AEAAXJ@Z @ 0x1801456F4 (-OnConnectionLostNotification@CConnection@@AEAAXJ@Z.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     ??1CProcessAttributionManager@@AEAA@XZ @ 0x180147D60 (--1CProcessAttributionManager@@AEAA@XZ.c)
 *     _anonymous_namespace_::State::_State @ 0x180148818 (_anonymous_namespace_--State--_State.c)
 *     ??1CProcessAttributionReporter@@AEAA@XZ @ 0x180149374 (--1CProcessAttributionReporter@@AEAA@XZ.c)
 *     ??_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z @ 0x180149AA0 (--_GCPartitionVerticalBlankScheduler@@UEAAPEAXI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CConnection::RunCompositionThread(CConnection *this)
{
  CProcessAttributionManager *v2; // rax
  LPVOID v3; // rax
  void *v4; // rax
  void *v5; // rax
  CEnergyReporter *v6; // rax
  CProcessAttributionReporter *v7; // rax
  CProcessAttributionReporter *v8; // rax
  CKernelTransport **v9; // r14
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // ebx
  struct CKernelTransport *v13; // rbx
  CPartitionVerticalBlankScheduler *v14; // rax
  CPartitionVerticalBlankScheduler *v15; // rax
  unsigned int v16; // ecx
  CPartitionVerticalBlankScheduler *v17; // rsi
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // edx
  unsigned int v21; // edx
  void (__fastcall ***v22)(_QWORD, __int64); // rcx
  CProcessAttributionReporter *v23; // rdi
  CEnergyReporter *v24; // rdi
  void (__fastcall ***v25)(_QWORD, __int64); // rcx
  CProcessAttributionManager *v26; // rdi
  void *v27; // rdi
  __int64 result; // rax
  unsigned int v29; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (CProcessAttributionManager *)WPF::ProcessHeapImpl::AllocClear(0x30uLL);
  if ( !v2 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *(_QWORD *)v2 = 0LL;
  *((_QWORD *)v2 + 1) = 0LL;
  *((_QWORD *)v2 + 2) = 0LL;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  qword_180307EB0 = v2;
  v3 = operator new(0x40uLL);
  if ( v3 )
    v4 = (void *)anonymous_namespace_::State::State((__int64)v3);
  else
    v4 = 0LL;
  qword_180307FC8 = v4;
  v5 = HeapAlloc(WPF::g_processHeap, 0, 0x78uLL);
  if ( v5 )
    v6 = CEnergyReporter::CEnergyReporter(v5);
  else
    v6 = 0LL;
  qword_180308310 = v6;
  v7 = (CProcessAttributionReporter *)HeapAlloc(WPF::g_processHeap, 0, 0x80uLL);
  if ( v7 )
    v8 = CProcessAttributionReporter::CProcessAttributionReporter(v7);
  else
    v8 = 0LL;
  qword_180308318 = v8;
  if ( !v8 )
    RaiseFailFastException(0LL, 0LL, 0);
  v9 = (CKernelTransport **)((char *)this + 96);
  v10 = CKernelTransport::Create((struct CKernelTransport **)this + 12);
  v12 = v10;
  if ( v10 < 0 )
  {
    v29 = 678;
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, v29);
    goto LABEL_34;
  }
  v13 = *v9;
  v14 = (CPartitionVerticalBlankScheduler *)WPF::ProcessHeapImpl::AllocClear(0x8A08uLL);
  if ( !v14 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v15 = CPartitionVerticalBlankScheduler::CPartitionVerticalBlankScheduler(v14, v13, this);
  v17 = v15;
  if ( !v15 )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024882, 0x21u);
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v12, 0x2ABu);
    goto LABEL_34;
  }
  v18 = CPartitionVerticalBlankScheduler::Initialize(v15);
  v12 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x22u);
    CPartitionVerticalBlankScheduler::`scalar deleting destructor'(v17, 1u);
  }
  else
  {
    *((_QWORD *)this + 13) = v17;
  }
  if ( v12 < 0 )
    goto LABEL_27;
  SetEvent(*((HANDLE *)this + 22));
  *((_BYTE *)this + 160) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_VBLANK_LOOP_Start);
  do
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 136LL))(*((_QWORD *)this + 13));
    v12 = v10;
    if ( v10 < 0 )
    {
      v29 = 696;
      goto LABEL_33;
    }
  }
  while ( *((_BYTE *)this + 160) );
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop);
LABEL_34:
  CConnection::OnConnectionLostNotification(this, v20);
  v22 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 13);
  if ( v22 )
  {
    (**v22)(v22, 1LL);
    *((_QWORD *)this + 13) = 0LL;
  }
  if ( *v9 )
  {
    CKernelTransport::`scalar deleting destructor'(*v9, v21);
    *v9 = 0LL;
  }
  v23 = qword_180308318;
  if ( qword_180308318 )
  {
    CProcessAttributionReporter::~CProcessAttributionReporter(qword_180308318);
    operator delete(v23, 0x80uLL);
  }
  v24 = qword_180308310;
  qword_180308318 = 0LL;
  if ( qword_180308310 )
  {
    v25 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)qword_180308310 + 6);
    if ( v25 )
      (**v25)(v25, 1LL);
    DynArrayImpl<1>::~DynArrayImpl<1>((char *)v24 + 88);
    DynArrayImpl<1>::~DynArrayImpl<1>((char *)v24 + 16);
    operator delete(v24, 0x78uLL);
  }
  v26 = qword_180307EB0;
  qword_180308310 = 0LL;
  if ( qword_180307EB0 )
  {
    CProcessAttributionManager::~CProcessAttributionManager(qword_180307EB0);
    WPF::ProcessHeapImpl::Free(v26);
  }
  v27 = qword_180307FC8;
  qword_180307EB0 = 0LL;
  if ( qword_180307FC8 )
  {
    anonymous_namespace_::State::_State(qword_180307FC8);
    operator delete(v27, 0x40uLL);
  }
  result = (unsigned int)v12;
  qword_180307FC8 = 0LL;
  return result;
}
