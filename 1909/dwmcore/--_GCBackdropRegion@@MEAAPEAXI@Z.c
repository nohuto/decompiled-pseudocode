/*
 * XREFs of ??_GCBackdropRegion@@MEAAPEAXI@Z @ 0x18007FB40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?clear_region@?$vector_facade@UBackdropBlur@CBackdropRegion@@V?$buffer_impl@UBackdropBlur@CBackdropRegion@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18007FC28 (-clear_region@-$vector_facade@UBackdropBlur@CBackdropRegion@@V-$buffer_impl@UBackdropBlur@CBackd.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800E5664 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

CBackdropRegion *__fastcall CBackdropRegion::`scalar deleting destructor'(CBackdropRegion *this, char a2)
{
  void **v3; // rsi
  void **v4; // rbx
  __int64 v6; // r8
  CThreadContext *Value; // rbx
  HANDLE ProcessHeap; // rax
  CThreadContext *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (void **)((char *)this + 16);
  v4 = (void **)*((_QWORD *)this + 2);
  v6 = *((_QWORD *)this + 3) - (_QWORD)v4;
  if ( v6 / 24 )
  {
    detail::vector_facade<CBackdropRegion::BackdropBlur,detail::buffer_impl<CBackdropRegion::BackdropBlur,16,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 16,
      0LL,
      v6 / 24);
    v4 = (void **)*v3;
  }
  *v3 = 0LL;
  if ( v4 == v3 + 3 )
    v4 = 0LL;
  if ( v4 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v4);
  }
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
        v10 = (CThreadContext *)operator new(0x138uLL);
        if ( v10 )
          Value = CThreadContext::CThreadContext(v10);
        else
          Value = 0LL;
        if ( !Value )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, 0x8007000E, 0x42u, 0LL);
          ModuleFailFastForHRESULT(2147942414LL, retaddr, v12);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
      }
      if ( *((_DWORD *)Value + 75) >= *((_DWORD *)Value + 74) )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)Value + 38);
        ++*((_DWORD *)Value + 75);
        *((_QWORD *)Value + 38) = this;
      }
    }
  }
  return this;
}
