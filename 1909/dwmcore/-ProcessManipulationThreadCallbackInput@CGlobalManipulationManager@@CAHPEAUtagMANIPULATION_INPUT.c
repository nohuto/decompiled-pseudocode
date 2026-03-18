/*
 * XREFs of ?ProcessManipulationThreadCallbackInput@CGlobalManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1802382EC
 * Callers:
 *     ?ManipulationThreadCallback@CGlobalManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x18001DD00 (-ManipulationThreadCallback@CGlobalManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800CBA2C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x1800D81A8 (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x18015E0B4 (McTemplateU0qq.c)
 *     ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x180236CE8 (-Insert@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV-$ComPtr@VCManipulatio.c)
 *     ?OnInput@CGlobalManipulationManager@@AEAAXXZ @ 0x180237660 (-OnInput@CGlobalManipulationManager@@AEAAXXZ.c)
 *     ?QueuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z @ 0x18023885C (-QueuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z.c)
 *     ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z @ 0x18025E504 (-Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CGlobalManipulationManager::ProcessManipulationThreadCallbackInput(
        struct tagMANIPULATION_INPUT_INFO *a1,
        CGlobalManipulationManager *this)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // esi
  signed int v6; // eax
  __int64 v7; // rcx
  struct CManipulationFrame *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  signed int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  struct CManipulationFrame *v16; // rcx
  struct CManipulationFrame *v18; // [rsp+60h] [rbp+30h] BYREF
  struct CManipulationFrame *v19; // [rsp+70h] [rbp+40h] BYREF

  v18 = 0LL;
  if ( !a1 )
    goto LABEL_27;
  v4 = *((_QWORD *)a1 + 15);
  v5 = *((_DWORD *)a1 + 12);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
    McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &MANIPULATION_FRAME_RECEIVED, v5, *((_DWORD *)a1 + 9));
  InputTraceLogging::GestureTargeting::QueuePointerFrame(v4, *(_QWORD *)a1, v5, *((_DWORD *)a1 + 9));
  if ( v18 )
    (*(void (__fastcall **)(struct CManipulationFrame *))(*(_QWORD *)v18 + 8LL))(v18);
  v6 = CManipulationFrame::Create(a1, &v18);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x28Au, 0LL);
  }
  else
  {
    v8 = v18;
    v19 = v18;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v19);
    v19 = v8;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v19);
    v12 = CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(v10, v9, (__int64 *)&v19);
    if ( v8 )
      (*(void (__fastcall **)(struct CManipulationFrame *))(*(_QWORD *)v8 + 8LL))(v8);
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v12, 0x28Cu, 0LL);
    }
    else
    {
      if ( GetCurrentThreadId() == CManipulationManager::s_dwManipulationThreadId && this )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
          McTemplateU0qq(
            Microsoft_Windows_Dwm_Core_Provider_Context,
            &MANIPULATION_FRAME_QUEUED,
            v5,
            *((_DWORD *)a1 + 9));
        CGlobalManipulationManager::OnInput(this);
        goto LABEL_27;
      }
      if ( SetEvent(qword_180339D90) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
          McTemplateU0qq(
            Microsoft_Windows_Dwm_Core_Provider_Context,
            &MANIPULATION_FRAME_QUEUED,
            v5,
            *((_DWORD *)a1 + 9));
        goto LABEL_27;
      }
      CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(v13, &v19, 0, 0LL);
      if ( v19 )
        (*(void (__fastcall **)(struct CManipulationFrame *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  AcquireSRWLockExclusive(&CGlobalManipulationManager::s_rwPointerBufferLock);
  dword_18033D158 = GetCurrentThreadId();
  v14 = 0LL;
  v15 = *((unsigned int *)a1 + 9);
  if ( (_DWORD)v15 )
  {
    do
    {
      CGlobalManipulationManager::s_rgPointerIds[v14] = *((_DWORD *)a1 + 60 * (unsigned int)v14 + 11);
      v14 = (unsigned int)(v14 + 1);
      v15 = *((unsigned int *)a1 + 9);
    }
    while ( (unsigned int)v14 < (unsigned int)v15 );
  }
  if ( (*((_DWORD *)a1 + 13) & 0x180000) == 0 )
    SetManipulationInputTarget(*((unsigned int *)a1 + 12), 0LL, v15, CGlobalManipulationManager::s_rgPointerIds);
  dword_18033D158 = 0;
  ReleaseSRWLockExclusive(&CGlobalManipulationManager::s_rwPointerBufferLock);
LABEL_27:
  v16 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(struct CManipulationFrame *))(*(_QWORD *)v16 + 8LL))(v16);
  }
  return 1LL;
}
