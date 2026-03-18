/*
 * XREFs of ?ProcessManipulationThreadCallbackInput@CManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1801EBA7C
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x18001D840 (-ManipulationThreadCallback@CManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070160 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0qq @ 0x180148FA4 (McTemplateU0qq.c)
 *     ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x1801EA540 (-Insert@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV-$ComPtr@VCManipulatio.c)
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x1801EAF8C (-OnInput@CManipulationManager@@AEAAXXZ.c)
 *     ?QueuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z @ 0x1801EBFDC (-QueuePointerFrame@GestureTargeting@InputTraceLogging@@SAX_K0KK@Z.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x1801EC234 (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 *     ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z @ 0x1801F95E4 (-Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CManipulationManager::ProcessManipulationThreadCallbackInput(
        struct tagMANIPULATION_INPUT_INFO *a1,
        CManipulationManager *this)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // esi
  int v6; // eax
  __int64 v7; // rcx
  struct CManipulationFrame *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  struct CManipulationFrame *v17; // [rsp+60h] [rbp+30h] BYREF
  struct CManipulationFrame *v18; // [rsp+70h] [rbp+40h] BYREF
  struct CManipulationFrame *v19; // [rsp+78h] [rbp+48h] BYREF

  v17 = 0LL;
  if ( !a1 )
    goto LABEL_22;
  v4 = *((_QWORD *)a1 + 12);
  v5 = *((_DWORD *)a1 + 6);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
    McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &MANIPULATION_FRAME_RECEIVED, v5, *((_DWORD *)a1 + 3));
  InputTraceLogging::GestureTargeting::QueuePointerFrame(v4, *(_QWORD *)a1, v5, *((_DWORD *)a1 + 3));
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v17);
  v6 = CManipulationFrame::Create(a1, &v17);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x314u);
  }
  else
  {
    v8 = v17;
    v19 = v17;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v19);
    v18 = v8;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v18);
    v11 = CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(v10, v9, (__int64 *)&v18);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v19);
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x316u);
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
            *((_DWORD *)a1 + 3));
        CManipulationManager::OnInput(this);
        goto LABEL_22;
      }
      if ( SetEvent(qword_1803083A0) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
          McTemplateU0qq(
            Microsoft_Windows_Dwm_Core_Provider_Context,
            &MANIPULATION_FRAME_QUEUED,
            v5,
            *((_DWORD *)a1 + 3));
        goto LABEL_22;
      }
      CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(v13, &v18, 0LL, 0LL);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v18);
    }
  }
  AcquireSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
  dword_180308A18 = GetCurrentThreadId();
  v14 = 0LL;
  v15 = *((unsigned int *)a1 + 3);
  if ( (_DWORD)v15 )
  {
    do
    {
      CManipulationManager::s_rgPointerIds[v14] = *((_DWORD *)a1 + 56 * (unsigned int)v14 + 5);
      v14 = (unsigned int)(v14 + 1);
      v15 = *((unsigned int *)a1 + 3);
    }
    while ( (unsigned int)v14 < (unsigned int)v15 );
  }
  if ( (*((_DWORD *)a1 + 7) & 0x180000) == 0 )
    SetManipulationInputTarget(*((unsigned int *)a1 + 6), 0LL, v15, CManipulationManager::s_rgPointerIds);
  dword_180308A18 = 0;
  ReleaseSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
LABEL_22:
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v17);
  return 1LL;
}
