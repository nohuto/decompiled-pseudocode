/*
 * XREFs of ?SetMaxDragVisualSize@MultitaskingViewDragVisual@@UEAAXAEBUCSize@Geometry@@@Z @ 0x180385020
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?GetContentShrinkRect@MultitaskingViewDragVisual@@AEAA?AUCRect@Geometry@@XZ @ 0x180384A5C (-GetContentShrinkRect@MultitaskingViewDragVisual@@AEAA-AUCRect@Geometry@@XZ.c)
 */

void __fastcall MultitaskingViewDragVisual::SetMaxDragVisualSize(
        MultitaskingViewDragVisual *this,
        const struct Geometry::CSize *a2)
{
  MultitaskingViewDragVisual *v2; // r10
  __int64 v3; // rax
  int v4; // edx
  int v5; // ecx
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF

  v2 = this;
  if ( *(_DWORD *)a2 != *((_DWORD *)this + 16) || *((_DWORD *)a2 + 1) != *((_DWORD *)this + 17) )
  {
    v3 = *(_QWORD *)a2;
    *((_QWORD *)this + 8) = *(_QWORD *)a2;
    if ( (int)v3 <= 0 || *((int *)this + 17) <= 0 )
    {
      v4 = *((_DWORD *)this + 13);
      LODWORD(v6) = -*((_DWORD *)this + 12);
      DWORD2(v6) = *((_DWORD *)this + 14) + v6;
      v5 = *((_DWORD *)this + 15);
      DWORD1(v6) = -v4;
      HIDWORD(v6) = v5 - v4;
    }
    else
    {
      v6 = *(_OWORD *)MultitaskingViewDragVisual::GetContentShrinkRect((__int64)this, (int *)&v6);
    }
    (*(void (__fastcall **)(_QWORD, __int128 *, __int64))(**((_QWORD **)v2 + 4) + 24LL))(*((_QWORD *)v2 + 4), &v6, 3LL);
  }
}
