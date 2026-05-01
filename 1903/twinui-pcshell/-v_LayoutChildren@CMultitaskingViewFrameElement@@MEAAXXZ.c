/*
 * XREFs of ?v_LayoutChildren@CMultitaskingViewFrameElement@@MEAAXXZ @ 0x18036DEF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_GetContentLocation@CMultitaskingViewFrameElement@@AEAA?AUCRect@Geometry@@AEBUtagRECT@@@Z @ 0x18036D890 (-_GetContentLocation@CMultitaskingViewFrameElement@@AEAA-AUCRect@Geometry@@AEBUtagRECT@@@Z.c)
 */

void __fastcall CMultitaskingViewFrameElement::v_LayoutChildren(CMultitaskingViewFrameElement *this)
{
  __int64 v2; // rcx
  LONG v3; // edx
  int v4; // ecx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  struct tagRECT v9; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v10[4]; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v11; // [rsp+50h] [rbp-30h] BYREF
  __m128i v12; // [rsp+60h] [rbp-20h] BYREF

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    v3 = *((_DWORD *)this + 15);
    v9.left = *((_DWORD *)this + 14);
    v9.right = v9.left + 1;
    v9.top = v3;
    v9.bottom = v3 + 1;
    (*(void (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, &v9, 0LL, 0LL);
  }
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 27) + 48LL))((char *)this + 216);
  v4 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  v5 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v10[0] = 0;
  v10[1] = 0;
  v10[2] = v4;
  v6 = *((_QWORD *)this + 35);
  v10[3] = v5;
  if ( v6 )
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v6 + 104LL))(v6, v10);
  CMultitaskingViewFrameElement::_GetContentLocation((__int64)this, (struct tagRECT *)&v12, v10);
  v7 = *((_QWORD *)this + 34);
  v11 = (struct tagRECT)v12;
  if ( v7 )
  {
    v9 = (struct tagRECT)v12;
    v9.top = _mm_srli_si128(v12, 8).m128i_i32[1] - *((_DWORD *)this + 91);
    (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v7 + 104LL))(v7, &v9);
    v11.bottom = v9.top - *((_DWORD *)this + 92);
  }
  v8 = *((_QWORD *)this + 33);
  if ( v8 )
    (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v8 + 104LL))(v8, &v11);
}
