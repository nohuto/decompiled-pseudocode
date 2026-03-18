/*
 * XREFs of ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x180049700
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalPresent@CHwndRenderTarget@@QEAAJ_NAEBURenderTargetPresentParameters@@@Z @ 0x180049788 (-InternalPresent@CHwndRenderTarget@@QEAAJ_NAEBURenderTargetPresentParameters@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

__int64 __fastcall CHwndRenderTarget::Present(CHwndRenderTarget *this, bool a2, int a3)
{
  unsigned int v3; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  _BYTE v10[36]; // [rsp+30h] [rbp-48h] BYREF
  int v11; // [rsp+54h] [rbp-24h]

  v3 = 0;
  if ( *(int *)(*((_QWORD *)this - 6) + 1096LL) < 6 )
  {
    memset_0(v10, 0, 0x28uLL);
    v11 = a3;
    v7 = CHwndRenderTarget::InternalPresent(
           (CHwndRenderTarget *)((char *)this - 64),
           a2,
           (const struct RenderTargetPresentParameters *)v10);
    v3 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x5EFu, 0LL);
  }
  return v3;
}
