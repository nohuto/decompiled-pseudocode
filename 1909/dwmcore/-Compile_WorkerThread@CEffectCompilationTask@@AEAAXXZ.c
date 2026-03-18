/*
 * XREFs of ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1800D5734
 * Callers:
 *     _lambda_193e8a4e6d1693db3d1863bd3aa4b00f_::_lambda_invoker_cdecl_ @ 0x1800D9BD0 (_lambda_193e8a4e6d1693db3d1863bd3aa4b00f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180017B68 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z @ 0x1800C5BA8 (-OnTaskCompleted_AnyThread@CEffectCompilationService@@AEAAXPEAVCEffectCompilationTask@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0p @ 0x18015D458 (McTemplateU0p.c)
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x180198BD4 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 *     ?GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z @ 0x180198CBC (-GetRestrictedErrorDescription@CEffectCompilationTask@@SAJPEAPEAG@Z.c)
 */

void __fastcall CEffectCompilationTask::Compile_WorkerThread(CEffectCompilationTask *this)
{
  __int64 v2; // rcx
  int v3; // esi
  _QWORD *v4; // rax
  unsigned int v5; // edx
  _QWORD *v6; // rbx
  void (__fastcall ***v7)(_QWORD); // rcx
  CCompiledEffectCache *v8; // rcx
  CEffectCompilationService *v9; // rcx
  OLECHAR *v10; // rbp
  DWORD LastError; // ebx
  void (__fastcall ***v12)(_QWORD); // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  SetRestrictedErrorInfo(0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0p(v2, &EVTDESC_COMPILE_EFFECT_Start, this);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v12);
  v3 = CompileEffectDescription(*((_QWORD *)this + 6), &v12);
  if ( v3 < 0 )
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
    v4 = DefaultHeap::Alloc(0x28uLL);
    v6 = v4;
    if ( v4 )
    {
      v7 = v12;
      *v4 = 0LL;
      v4[1] = 0LL;
      *((_DWORD *)v4 + 4) = 0;
      v4[3] = v7;
      if ( v7 )
        (**v7)(v7);
      v6[4] = this;
    }
    else
    {
      v6 = 0LL;
    }
    v8 = (CCompiledEffectCache *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 9) = v6;
    if ( v8 )
    {
      CCompiledEffectCache::`scalar deleting destructor'(v8, v5);
      v6 = (_QWORD *)*((_QWORD *)this + 9);
    }
    if ( !v6 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0, 0x8007000E, 0xB8u, 0LL);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0p(v8, &EVTDESC_COMPILE_EFFECT_Stop, this);
  v9 = (CEffectCompilationService *)*((_QWORD *)this + 1);
  *((_DWORD *)this + 22) = v3;
  *((_DWORD *)this + 16) = (v3 >> 31) + 3;
  CEffectCompilationService::OnTaskCompleted_AnyThread(v9, this, 0);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v12);
}
