/*
 * XREFs of ??$Create@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@MV?$allocator@M@6@@BulkAnimator@Particles@@SAJPEAVIAnimator@1@AEAV?$vector@Ufloat4@Numerics@Foundation@Windows@@V?$allocator@Ufloat4@Numerics@Foundation@Windows@@@std@@@std@@HHAEAV?$vector@MV?$allocator@M@std@@@4@HAEAV?$unique_ptr@VBulkAnimator@Particles@@U?$default_delete@VBulkAnimator@Particles@@@std@@@4@@Z @ 0x1801C3A54
 * Callers:
 *     ?Setup@CParticleEmitter@@IEAAXXZ @ 0x1801C6B1C (-Setup@CParticleEmitter@@IEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     ?reset@?$unique_ptr@VIAnimator@Particles@@U?$default_delete@VIAnimator@Particles@@@std@@@std@@QEAAXPEAVIAnimator@Particles@@@Z @ 0x1801C80C0 (-reset@-$unique_ptr@VIAnimator@Particles@@U-$default_delete@VIAnimator@Particles@@@std@@@std@@QE.c)
 */

__int64 __fastcall Particles::BulkAnimator::Create<Windows::Foundation::Numerics::float4,std::allocator<Windows::Foundation::Numerics::float4>,float,std::allocator<float>>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        int a6,
        void ***a7)
{
  unsigned int v9; // ebx
  _DWORD *v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rdi
  void **v13; // r14

  v9 = 0;
  v10 = HeapAlloc(WPF::g_processHeap, 0, 0x30uLL);
  v12 = v10;
  if ( v10 )
  {
    *(_QWORD *)v10 = 0LL;
    v10[6] = 3;
    v10[7] = 16;
    *((_QWORD *)v10 + 4) = 4LL;
    v10[10] = 4;
    std::unique_ptr<Particles::IAnimator>::reset(v10, a1);
    *((_QWORD *)v12 + 1) = *a2;
    v11 = *a5;
    *((_QWORD *)v12 + 2) = *a5;
  }
  else
  {
    v12 = 0LL;
  }
  v13 = *a7;
  *a7 = (void **)v12;
  if ( v13 )
  {
    if ( *v13 )
      operator delete(*v13);
    operator delete(v13);
  }
  if ( !*a7 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x36u);
  }
  return v9;
}
