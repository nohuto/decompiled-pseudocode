/*
 * XREFs of ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x18008E080
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008EE90 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x180249C7C (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800E5664 (--0CThreadContext@@AEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

CRectanglesShape *__fastcall CRectanglesShape::`scalar deleting destructor'(CRectanglesShape *this, char a2)
{
  void *v4; // rcx
  void *v5; // rdx
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  _QWORD *Value; // rbx
  int v11; // eax
  CThreadContext *v12; // rax
  __int64 v13; // rcx
  CThreadContext *v14; // rax
  __int64 v15; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &CRectanglesShape::`vftable';
  *((_DWORD *)this + 10) = 0;
  v4 = (void *)*((_QWORD *)this + 2);
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v4 != v5 )
  {
    operator delete(v4);
    v5 = (void *)*((_QWORD *)this + 3);
    v11 = *((_DWORD *)this + 8);
    *((_QWORD *)this + 2) = v5;
    *((_DWORD *)this + 9) = v11;
  }
  v6 = *((_QWORD *)this + 8);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 8) = 0LL;
    v5 = (void *)*((_QWORD *)this + 3);
  }
  v7 = (void *)*((_QWORD *)this + 2);
  if ( v7 != v5 )
  {
    operator delete(v7);
    *((_QWORD *)this + 2) = 0LL;
  }
  v8 = *((_QWORD *)this + 1);
  if ( v8 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( (a2 & 1) == 0 )
    return this;
  if ( (a2 & 4) != 0 )
  {
    CSwRenderTargetGetBounds::PrepareForReuse(this);
    return this;
  }
  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v12 = (CThreadContext *)operator new(0x138uLL);
    if ( !v12 || (v14 = CThreadContext::CThreadContext(v12), (Value = v14) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, 0x8007000E, 0x42u, 0LL);
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v15);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v14);
  }
  if ( *((_DWORD *)Value + 3) < *((_DWORD *)Value + 2) )
  {
    *(_QWORD *)this = Value[2];
    ++*((_DWORD *)Value + 3);
    Value[2] = this;
    return this;
  }
  operator delete(this);
  return this;
}
