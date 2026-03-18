/*
 * XREFs of ?HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x180037C58
 * Callers:
 *     ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x180035630 (-HasBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 * Callees:
 *     ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCSpriteVisualContent@@I@Z @ 0x1800767F4 (-GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCSpriteVisualContent@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderingTechniqueFragment::HasBackdropInput(
        CRenderingTechniqueFragment *this,
        const struct CBrushRenderingGraph *a2)
{
  char v2; // bl
  __int64 v4; // rsi
  int v6; // ebp
  __int64 i; // rdi
  __int64 v8; // rax
  struct CSpriteVisualContent *NamedInput; // rax

  v2 = 0;
  v4 = (__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 4;
  v6 = 0;
  if ( (_DWORD)v4 )
  {
    for ( i = 0LL; ; i += 16LL )
    {
      v8 = *((_QWORD *)this + 4);
      if ( !*(_QWORD *)(i + v8 + 8) && !*(_BYTE *)(i + v8 + 4) )
      {
        NamedInput = CBrushRenderingGraph::GetNamedInput(a2, *(_DWORD *)(i + v8));
        if ( NamedInput )
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, __int64))(*(_QWORD *)NamedInput + 48LL))(
                 NamedInput,
                 8LL) )
          {
            break;
          }
        }
      }
      if ( ++v6 >= (unsigned int)v4 )
        return v2;
    }
    return 1;
  }
  return v2;
}
