/*
 * XREFs of ?SetMaxDragVisualSize@MultitaskingViewDragVisual@@UEAAXAEBUCSize@Geometry@@@Z @ 0x180324A80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetContentShrinkRect@MultitaskingViewDragVisual@@AEAA?AUCRect@Geometry@@XZ @ 0x1803244CC (-GetContentShrinkRect@MultitaskingViewDragVisual@@AEAA-AUCRect@Geometry@@XZ.c)
 */

void __fastcall MultitaskingViewDragVisual::SetMaxDragVisualSize(
        MultitaskingViewDragVisual *this,
        const struct Geometry::CSize *a2)
{
  MultitaskingViewDragVisual *v2; // r10
  __int64 v3; // rax
  int v4; // edx
  int v5; // ecx
  int v6[4]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF

  v2 = this;
  if ( *(_DWORD *)a2 != *((_DWORD *)this + 16) || *((_DWORD *)a2 + 1) != *((_DWORD *)this + 17) )
  {
    v3 = *(_QWORD *)a2;
    v7 = 0uLL;
    *((_QWORD *)this + 8) = v3;
    if ( (int)v3 <= 0 || SHIDWORD(v3) <= 0 )
    {
      v4 = *((_DWORD *)this + 13);
      LODWORD(v7) = -*((_DWORD *)this + 12);
      DWORD2(v7) = *((_DWORD *)this + 14) + v7;
      v5 = *((_DWORD *)this + 15);
      DWORD1(v7) = -v4;
      HIDWORD(v7) = v5 - v4;
    }
    else
    {
      v7 = *(_OWORD *)MultitaskingViewDragVisual::GetContentShrinkRect((__int64)this, v6);
    }
    (*(void (__fastcall **)(_QWORD, __int128 *, __int64))(**((_QWORD **)v2 + 4) + 24LL))(*((_QWORD *)v2 + 4), &v7, 3LL);
  }
}
