/*
 * XREFs of ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x180097280
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180095D04 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAX_K0@Z @ 0x180098154 (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@de.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x180098A64 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x180099050 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x180099088 (-size@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800DA5C0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

CDrawListCache *__fastcall CDrawListCache::`scalar deleting destructor'(CDrawListCache *this, char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rbx
  int Current; // eax
  __int64 v9; // r8
  struct CThreadContext *v10; // rcx
  __int64 v12; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v14; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CDrawListCache::`vftable';
  CDrawListCache::ReleaseDrawListEntries(this);
  v4 = detail::pointer_buffer_impl<CDrawListEntry *>::size((char *)this + 32);
  v5 = detail::pointer_buffer_impl<CDrawListEntry *>::first((char *)this + 32) + 8 * v4;
  v7 = (v5 - detail::pointer_buffer_impl<CDrawListEntry *>::first((char *)this + 32)) >> 3;
  if ( v7 )
    detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::clear_region(
      (char *)this + 32,
      v6,
      v7);
  if ( (*((_BYTE *)this + 32) & 3) == 1 )
  {
    v12 = detail::pointer_buffer_impl<CDrawListEntry *>::first((char *)this + 32);
    operator delete((void *)(v12 - 16));
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    }
    else
    {
      Current = CThreadContext::GetCurrent(&v14);
      if ( Current < 0 )
        ModuleFailFastForHRESULT((unsigned int)Current, retaddr, v9);
      v10 = v14;
      if ( *((_DWORD *)v14 + 15) >= *((_DWORD *)v14 + 14) )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)v14 + 8);
        ++*((_DWORD *)v10 + 15);
        *((_QWORD *)v10 + 8) = this;
      }
    }
  }
  return this;
}
