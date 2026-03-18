/*
 * XREFs of ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18004EE80
 * Callers:
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B8B8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18004E2CC (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::Initialize(CRenderTargetBitmap *this, struct IRenderTargetDisplay *a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  char v10; // [rsp+48h] [rbp+10h] BYREF
  struct IRenderTargetDisplay *v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct IRenderTargetDisplay *, char *))(*(_QWORD *)a2 + 520LL))(a2, &v10);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x5Bu);
  }
  else
  {
    if ( !v10 )
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024809, 0x5Eu);
      goto LABEL_11;
    }
    v11 = a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v11);
    v7 = *((_QWORD *)this + 19);
    *((_QWORD *)this + 19) = a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( *((struct IRenderTargetDisplay **)this + 21) != a2 )
    {
      (*(void (__fastcall **)(struct IRenderTargetDisplay *))(*(_QWORD *)a2 + 8LL))(a2);
      v8 = *((_QWORD *)this + 21);
      *((_QWORD *)this + 21) = a2;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  if ( v6 < 0 )
LABEL_11:
    CRenderTargetBitmap::ReleaseRenderTargetBitmap(this);
  return (unsigned int)v6;
}
