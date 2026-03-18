/*
 * XREFs of ??_E?$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x18005B580
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180078FF4 (--0CThreadContext@@AEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

CSwRenderTargetGetBounds *__fastcall PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vector deleting destructor'(
        CSwRenderTargetGetBounds *a1,
        char a2)
{
  CThreadContext *Value; // rbx
  CThreadContext *v5; // rax
  unsigned int v6; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  --CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CSwRenderTargetGetBounds::PrepareForReuse(a1);
    }
    else
    {
      Value = (CThreadContext *)TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v5 = (CThreadContext *)operator new(0x128uLL);
        if ( v5 )
          Value = CThreadContext::CThreadContext(v5);
        else
          Value = 0LL;
        if ( !Value )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x42u);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
      }
      if ( *((_DWORD *)Value + 23) >= *((_DWORD *)Value + 22) )
      {
        WPF::ProcessHeapImpl::Free(a1);
      }
      else
      {
        *(_QWORD *)a1 = *((_QWORD *)Value + 12);
        ++*((_DWORD *)Value + 23);
        *((_QWORD *)Value + 12) = a1;
      }
    }
  }
  return a1;
}
