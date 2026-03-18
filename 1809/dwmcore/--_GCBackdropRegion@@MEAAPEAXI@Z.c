/*
 * XREFs of ??_GCBackdropRegion@@MEAAPEAXI@Z @ 0x18005A300
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?size@?$vector_facade@UBackdropBlur@CBackdropRegion@@V?$buffer_impl@UBackdropBlur@CBackdropRegion@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEBA_KXZ @ 0x180059EAC (-size@-$vector_facade@UBackdropBlur@CBackdropRegion@@V-$buffer_impl@UBackdropBlur@CBackdropRegio.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x180078FF4 (--0CThreadContext@@AEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ?clear_region@?$vector_facade@UBackdropBlur@CBackdropRegion@@V?$buffer_impl@UBackdropBlur@CBackdropRegion@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE794 (-clear_region@-$vector_facade@UBackdropBlur@CBackdropRegion@@V-$buffer_impl@UBackdropBlur@CBackd.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

CBackdropRegion *__fastcall CBackdropRegion::`scalar deleting destructor'(CBackdropRegion *this, char a2)
{
  void **v2; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  void *v7; // r8
  bool v8; // zf
  CThreadContext *Value; // rbx
  CThreadContext *v10; // rax
  unsigned int v11; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (void **)((char *)this + 16);
  v5 = detail::vector_facade<CBackdropRegion::BackdropBlur,detail::buffer_impl<CBackdropRegion::BackdropBlur,16,1,detail::liberal_expansion_policy>>::size((_QWORD *)this + 2);
  if ( v5 )
    detail::vector_facade<CBackdropRegion::BackdropBlur,detail::buffer_impl<CBackdropRegion::BackdropBlur,16,1,detail::liberal_expansion_policy>>::clear_region(
      v6,
      0LL,
      v5);
  v7 = *v2;
  v8 = *v2 == v2 + 3;
  *v2 = 0LL;
  if ( v8 )
    v7 = 0LL;
  if ( v7 )
    HeapFree(WPF::g_processHeap, 0, v7);
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
        v10 = (CThreadContext *)operator new(0x128uLL);
        if ( v10 )
          Value = CThreadContext::CThreadContext(v10);
        else
          Value = 0LL;
        if ( !Value )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x42u);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
      }
      if ( *((_DWORD *)Value + 71) >= *((_DWORD *)Value + 70) )
      {
        WPF::ProcessHeapImpl::Free(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)Value + 36);
        ++*((_DWORD *)Value + 71);
        *((_QWORD *)Value + 36) = this;
      }
    }
  }
  return this;
}
