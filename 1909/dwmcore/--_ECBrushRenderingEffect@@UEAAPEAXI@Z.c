/*
 * XREFs of ??_ECBrushRenderingEffect@@UEAAPEAXI@Z @ 0x1800398E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z @ 0x18003A434 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCBrushRenderingEffect@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800BB350 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

CBrushRenderingEffect *__fastcall CBrushRenderingEffect::`vector deleting destructor'(
        CBrushRenderingEffect *this,
        char a2)
{
  CDrawListBitmap *v3; // rsi
  __int64 v5; // rdi
  struct CBrushRenderingEffect *v6; // rcx
  struct CObjectCache *ObjectCache; // rax

  v3 = (CBrushRenderingEffect *)((char *)this + 120);
  v5 = 4LL;
  do
  {
    v3 = (CDrawListBitmap *)((char *)v3 - 24);
    CDrawListBitmap::~CDrawListBitmap(v3);
    --v5;
  }
  while ( v5 );
  v6 = (struct CBrushRenderingEffect *)*((_QWORD *)this + 2);
  if ( v6 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v6 + 8LL))(*(_QWORD *)v6);
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(v6);
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
