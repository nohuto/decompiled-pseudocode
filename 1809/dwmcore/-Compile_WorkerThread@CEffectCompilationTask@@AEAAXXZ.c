/*
 * XREFs of ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x180076BE8
 * Callers:
 *     _lambda_150d5d81640f42c693c65612364f9ad2_::_lambda_invoker_cdecl_ @ 0x18007BEE0 (_lambda_150d5d81640f42c693c65612364f9ad2_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800183E0 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CCompiledEffectCache@@QEAA@PEAUICompiledEffect@Composition@UI@Windows@@PEAX@Z @ 0x180076CCC (--0CCompiledEffectCache@@QEAA@PEAUICompiledEffect@Composition@UI@Windows@@PEAX@Z.c)
 *     ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x180078E28 (-OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x180172AC0 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x180172BA8 (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 *     McTemplateU0p @ 0x180172CC8 (McTemplateU0p.c)
 */

void __fastcall CEffectCompilationTask::Compile_WorkerThread(CEffectCompilationTask *this)
{
  __int64 v2; // rcx
  __int64 v3; // r9
  int v4; // esi
  CCompiledEffectCache *v5; // rax
  unsigned int v6; // edx
  __int64 v7; // r9
  CCompiledEffectCache *v8; // rcx
  CEffectCompilationService *v9; // rcx
  OLECHAR *v10; // rbp
  DWORD LastError; // ebx
  struct Windows::UI::Composition::ICompiledEffect *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  SetRestrictedErrorInfo(0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0p(v2, &EVTDESC_COMPILE_EFFECT_Start, this, v3);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v12);
  v4 = CompileEffectDescription(*((_QWORD *)this + 6), &v12);
  if ( v4 < 0 )
  {
    v10 = (OLECHAR *)*((_QWORD *)this + 10);
    if ( v10 )
    {
      LastError = GetLastError();
      SysFreeString(v10);
      SetLastError(LastError);
    }
    *((_QWORD *)this + 10) = 0LL;
    CEffectCompilationTask::GetRestrictedErrorDescription((unsigned __int16 **)this + 10);
  }
  else
  {
    v5 = (CCompiledEffectCache *)HeapAlloc(WPF::g_processHeap, 0, 0x28uLL);
    if ( v5 )
      v5 = CCompiledEffectCache::CCompiledEffectCache(v5, v12, this);
    v8 = (CCompiledEffectCache *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = v5;
    if ( v8 )
    {
      CCompiledEffectCache::`scalar deleting destructor'(v8, v6);
      v5 = (CCompiledEffectCache *)*((_QWORD *)this + 9);
    }
    if ( !v5 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, -2147024882, 0xBAu);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0p(v8, &EVTDESC_COMPILE_EFFECT_Stop, this, v7);
  v9 = (CEffectCompilationService *)*((_QWORD *)this + 1);
  *((_DWORD *)this + 22) = v4;
  *((_DWORD *)this + 16) = (v4 >> 31) + 3;
  CEffectCompilationService::OnTaskCompleted_AnyThread(v9, this, 0);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v12);
}
