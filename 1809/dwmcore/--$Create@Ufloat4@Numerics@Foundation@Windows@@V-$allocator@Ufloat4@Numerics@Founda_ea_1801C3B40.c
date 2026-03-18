/*
 * XREFs of ??$Create@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@U1234@V56@@BulkAnimator@Particles@@SAJPEAVIAnimator@1@AEAV?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@HH1HAEAV?$unique_ptr@VBulkAnimator@Particles@@U?$default_delete@VBulkAnimator@Particles@@@std@@@4@@Z @ 0x1801C3B40
 * Callers:
 *     ?Setup@CParticleEmitter@@IEAAXXZ @ 0x1801C6B1C (-Setup@CParticleEmitter@@IEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_ptr@VIAnimator@Particles@@U?$default_delete@VIAnimator@Particles@@@std@@@std@@QEAAXPEAVIAnimator@Particles@@@Z @ 0x1801C80C0 (-reset@-$unique_ptr@VIAnimator@Particles@@U-$default_delete@VIAnimator@Particles@@@std@@@std@@QE.c)
 */

__int64 __fastcall Particles::BulkAnimator::Create<Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>,Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        __int64 *a5,
        int a6,
        void ***a7)
{
  unsigned int v10; // ebx
  _DWORD *v11; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rdi
  void **v14; // r14

  v10 = 0;
  v11 = HeapAlloc(WPF::g_processHeap, 0, 0x30uLL);
  v13 = v11;
  if ( v11 )
  {
    *(_QWORD *)v11 = 0LL;
    v11[7] = 16;
    v11[10] = 16;
    v11[6] = 0;
    v11[8] = a4;
    v11[9] = a6;
    std::unique_ptr<Particles::IAnimator>::reset(v11, a1);
    *((_QWORD *)v13 + 1) = *a2;
    v12 = *a5;
    *((_QWORD *)v13 + 2) = *a5;
  }
  else
  {
    v13 = 0LL;
  }
  v14 = *a7;
  *a7 = (void **)v13;
  if ( v14 )
  {
    if ( *v14 )
      operator delete(*v14);
    operator delete(v14);
  }
  if ( !*a7 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024882, 0x36u);
  }
  return v10;
}
