/*
 * XREFs of ?CheckDirectFlipSupport@CHwFullScreenRenderTarget@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@PEA_N@Z @ 0x180165D70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CheckDirectFlipSupport(
        CHwFullScreenRenderTarget *this,
        struct IDXGIResource *a2,
        __int64 a3,
        const struct tagRECT *a4,
        bool *a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // xmm0_8
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  _QWORD v12[2]; // [rsp+40h] [rbp-28h] BYREF

  *a5 = 0;
  v5 = *((_QWORD *)this + 3);
  v6 = *((_QWORD *)this + 4);
  v7 = _mm_srli_si128(*(__m128i *)(v5 + 104), 8).m128i_u64[0];
  v12[0] = *(_QWORD *)(v5 + 104);
  v12[1] = v7;
  v8 = (*(__int64 (__fastcall **)(__int64, struct IDXGIResource *, __int64, const struct tagRECT *, _QWORD *, bool *))(*(_QWORD *)v6 + 104LL))(
         v6,
         a2,
         a3,
         a4,
         v12,
         a5);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x182u, 0LL);
  return v10;
}
