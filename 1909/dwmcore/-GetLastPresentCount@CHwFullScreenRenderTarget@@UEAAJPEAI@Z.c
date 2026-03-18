/*
 * XREFs of ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x180062B00
 * Callers:
 *     <none>
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006402C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x180064D10 (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetLastPresentCount(CHwFullScreenRenderTarget *this, unsigned int *a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwFullScreenRenderTarget *)((char *)this - 144));
  v10 = v4;
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_180280CA0, 1u, v4, 0x12Eu, 0LL);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 4) + 352LL))(
           *((_QWORD *)this + 4),
           a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xF4u, 0LL);
    v10 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_180280CA0, 1u, v6, 0x130u, 0LL);
  }
  TranslateDXGIorD3DErrorInContext((unsigned int)v6, 0LL, &v10);
  return v10;
}
