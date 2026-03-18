/*
 * XREFs of ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800B3BB0
 * Callers:
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800B2580 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800B3C40 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

CMultiPrimitiveDrawListBrush *__fastcall CMultiPrimitiveDrawListBrush::`vector deleting destructor'(
        CMultiPrimitiveDrawListBrush *this,
        char a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  int Current; // eax
  struct CThreadContext *v6; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 7);
  if ( v4 )
    (**v4)(v4, 1LL);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    }
    else
    {
      Current = CThreadContext::GetCurrent(&v9);
      if ( Current < 0 )
        ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
      v6 = v9;
      if ( *((_DWORD *)v9 + 63) >= *((_DWORD *)v9 + 62) )
      {
        WPF::ProcessHeapImpl::Free(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)v9 + 32);
        ++*((_DWORD *)v6 + 63);
        *((_QWORD *)v6 + 32) = this;
      }
    }
  }
  return this;
}
