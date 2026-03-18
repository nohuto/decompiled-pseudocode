/*
 * XREFs of ?GetBounds@CGlyphRunContent@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180205260
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B6EE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CGlyphRunContent::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v7; // rbx
  _QWORD *v8; // rbp
  int v9; // eax
  unsigned int v10; // edi
  float v12[4]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  *(_DWORD *)(a4 + 12) = 0;
  *(_DWORD *)(a4 + 8) = 0;
  *(_DWORD *)(a4 + 4) = 0;
  *(_DWORD *)a4 = 0;
  v7 = *(_QWORD **)(a1 + 56);
  v8 = *(_QWORD **)(a1 + 64);
  while ( 1 )
  {
    if ( v7 == v8 )
      return 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, float *))(*(_QWORD *)*v7 + 208LL))(*v7, a2, a3, v12);
    v10 = v9;
    if ( v9 < 0 )
      break;
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a4, v12);
    ++v7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x29,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\glyphruncontent.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
