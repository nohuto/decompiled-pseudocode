/*
 * XREFs of ??_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z @ 0x18000FB60
 * Callers:
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800669C0 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z @ 0x18000FCB8 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

CPrimitiveGroupDrawListBrush *__fastcall CPrimitiveGroupDrawListBrush::`vector deleting destructor'(
        CPrimitiveGroupDrawListBrush *this,
        char a2)
{
  struct CPrimitiveGroupDrawListBrush *v4; // rcx
  struct CObjectCache *ObjectCache; // rax

  v4 = (struct CPrimitiveGroupDrawListBrush *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    *((_QWORD *)this + 9) = 0LL;
    (*(void (__fastcall **)(struct CPrimitiveGroupDrawListBrush *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v4);
      if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = this;
      }
    }
  }
  return this;
}
