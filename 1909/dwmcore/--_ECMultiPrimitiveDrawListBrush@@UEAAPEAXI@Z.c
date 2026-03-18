/*
 * XREFs of ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x180095C40
 * Callers:
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180098B60 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180095D04 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

CMultiPrimitiveDrawListBrush *__fastcall CMultiPrimitiveDrawListBrush::`vector deleting destructor'(
        CMultiPrimitiveDrawListBrush *this,
        char a2)
{
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  int Current; // eax
  __int64 v6; // r8
  struct CThreadContext *v7; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 9);
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
      Current = CThreadContext::GetCurrent(&v10);
      if ( Current < 0 )
        ModuleFailFastForHRESULT((unsigned int)Current, retaddr, v6);
      v7 = v10;
      if ( *((_DWORD *)v10 + 67) >= *((_DWORD *)v10 + 66) )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)v10 + 34);
        ++*((_DWORD *)v7 + 67);
        *((_QWORD *)v7 + 34) = this;
      }
    }
  }
  return this;
}
