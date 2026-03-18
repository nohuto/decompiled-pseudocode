/*
 * XREFs of ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007CE04
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007CC80 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@AEBVCRegion@@KIPEBURenderTargetPresentParameters@@@Z @ 0x18007CEDC (-PresentSwapChain@CD3DDeviceLevel1@@QEAAJPEAVCSwapChainBase@@AEBVCRegion@@KIPEBURenderTargetPres.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Present(
        CHwDisplayRenderTarget *this,
        __int64 a2,
        char a3,
        const struct RenderTargetPresentParameters *a4)
{
  char *v4; // rsi
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // ebx
  unsigned int v11; // r9d
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v15[10]; // [rsp+30h] [rbp-28h] BYREF
  char v16; // [rsp+60h] [rbp+8h] BYREF

  v15[0] = 0;
  v4 = (char *)this - 208;
  v16 = 0;
  v8 = (*(__int64 (__fastcall **)(char *, __int64, char *, unsigned int *))(*((_QWORD *)this - 26) + 272LL))(
         (char *)this - 208,
         a2,
         &v16,
         v15);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x184u);
LABEL_9:
    if ( v16 && (v15[0] & 2) == 0 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 296LL))(v4);
    return (unsigned int)v10;
  }
  v11 = v15[0];
  if ( a3 )
  {
    v11 = v15[0] | 0x80;
    v15[0] |= 0x80u;
  }
  if ( v16 )
  {
    v12 = CD3DDeviceLevel1::PresentSwapChain(
            *((CD3DDeviceLevel1 **)this + 1),
            *((struct CSwapChainBase **)this + 4),
            (CHwDisplayRenderTarget *)((char *)this + 128),
            v11,
            *((_DWORD *)this + 30),
            a4);
    v10 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x330u);
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v10, 0x19Eu);
    goto LABEL_9;
  }
  return (unsigned int)v10;
}
