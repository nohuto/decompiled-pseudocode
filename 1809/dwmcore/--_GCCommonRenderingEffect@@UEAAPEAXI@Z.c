/*
 * XREFs of ??_GCCommonRenderingEffect@@UEAAPEAXI@Z @ 0x180026FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ??1EffectInput@@QEAA@XZ @ 0x18005D030 (--1EffectInput@@QEAA@XZ.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180078FF4 (--0CThreadContext@@AEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

CCommonRenderingEffect *__fastcall CCommonRenderingEffect::`scalar deleting destructor'(
        CCommonRenderingEffect *this,
        char a2)
{
  EffectInput *v3; // rsi
  __int64 v5; // rbx
  CThreadContext *Value; // rbx
  CThreadContext *v8; // rax
  unsigned int v9; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (CCommonRenderingEffect *)((char *)this + 64);
  v5 = 2LL;
  do
  {
    v3 = (EffectInput *)((char *)v3 - 24);
    EffectInput::~EffectInput(v3);
    --v5;
  }
  while ( v5 );
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    }
    else
    {
      Value = (CThreadContext *)TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v8 = (CThreadContext *)operator new(0x128uLL);
        if ( v8 )
          Value = CThreadContext::CThreadContext(v8);
        else
          Value = 0LL;
        if ( !Value )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x42u);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
      }
      if ( *((_DWORD *)Value + 31) >= *((_DWORD *)Value + 30) )
      {
        WPF::ProcessHeapImpl::Free(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)Value + 16);
        ++*((_DWORD *)Value + 31);
        *((_QWORD *)Value + 16) = this;
      }
    }
  }
  return this;
}
