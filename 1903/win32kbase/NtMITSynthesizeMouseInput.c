/*
 * XREFs of NtMITSynthesizeMouseInput @ 0x1C0115890
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0030F88 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00327D0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0032B10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0034500 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C0113300 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C0190C80 (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 */

__int64 __fastcall NtMITSynthesizeMouseInput(ULONG64 a1, unsigned int a2, LPCWSTR **a3)
{
  unsigned int v6; // edi
  LPCWSTR *v7; // rbx
  CInputThread *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  __int64 MouseProcessor; // rax
  LPCWSTR *v15[3]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v16[40]; // [rsp+48h] [rbp-70h] BYREF
  __int128 v17; // [rsp+70h] [rbp-48h]
  __int128 v18; // [rsp+80h] [rbp-38h]
  __int64 v19; // [rsp+90h] [rbp-28h]
  LPCWSTR *v20; // [rsp+D8h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v15, L"MITSynthesizeMouseInput", 0LL);
  memset(v16, 0, sizeof(v16));
  v6 = 0;
  LODWORD(v7) = 0;
  v20 = 0LL;
  EnterCrit(0, 1);
  if ( CInputThread::IsInputThread(v8) )
  {
    if ( a1 + 40 < a1 || a1 + 40 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v17 = *(_OWORD *)a1;
    v18 = *(_OWORD *)(a1 + 16);
    v19 = *(_QWORD *)(a1 + 32);
    *(_OWORD *)v16 = v17;
    *(_OWORD *)&v16[16] = v18;
    *(_QWORD *)&v16[32] = v19;
    if ( a3 )
    {
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        a3 = (LPCWSTR **)MmUserProbeAddress;
      v7 = *a3;
      v15[1] = v7;
      v20 = v7;
    }
    InputTraceLogging::Mouse::InjectInput();
    v12 = (unsigned __int64)&v20 & -(__int64)((_DWORD)v7 != 0);
    MouseProcessor = anonymous_namespace_::GetMouseProcessor();
    if ( MouseProcessor )
      v6 = CMouseProcessor::Extensibility_SynthesizeMouseInput(MouseProcessor, v16, a2, v12);
  }
  else
  {
    UserSetLastError(5LL, v9);
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v15);
  return v6;
}
