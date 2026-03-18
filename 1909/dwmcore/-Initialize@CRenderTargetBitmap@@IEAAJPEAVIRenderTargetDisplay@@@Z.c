/*
 * XREFs of ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z @ 0x1800BF4F0
 * Callers:
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z @ 0x1800BEF5C (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800207E8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x1800BF2BC (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::Initialize(CRenderTargetBitmap *this, struct IRenderTargetDisplay *a2)
{
  signed int v4; // eax
  __int64 v5; // rcx
  int v6; // ebx
  char v8; // [rsp+48h] [rbp+10h] BYREF
  struct IRenderTargetDisplay *v9; // [rsp+50h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct IRenderTargetDisplay *, char *))(*(_QWORD *)a2 + 528LL))(a2, &v8);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x58u, 0LL);
  }
  else
  {
    if ( !v8 )
    {
      v6 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x80070057, 0x5Bu, 0LL);
      goto LABEL_8;
    }
    v9 = a2;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v9);
    v9 = (struct IRenderTargetDisplay *)*((_QWORD *)this + 19);
    *((_QWORD *)this + 19) = a2;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v9);
    if ( *((struct IRenderTargetDisplay **)this + 21) != a2 )
    {
      (*(void (__fastcall **)(struct IRenderTargetDisplay *))(*(_QWORD *)a2 + 8LL))(a2);
      v9 = (struct IRenderTargetDisplay *)*((_QWORD *)this + 21);
      *((_QWORD *)this + 21) = a2;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v9);
    }
  }
  if ( v6 < 0 )
LABEL_8:
    CRenderTargetBitmap::ReleaseRenderTargetBitmap(this);
  return (unsigned int)v6;
}
