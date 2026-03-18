/*
 * XREFs of ?GetBuffer@CDWMSwapChain@@UEAAJIPEAIPEAPEAUID3D11Texture2D@@@Z @ 0x18007A150
 * Callers:
 *     ?GetAdvancedDirectFlipRestoreBuffer@CDWMSwapChain@@UEAAJ_NPEAPEAUID3D11Texture2D@@@Z @ 0x180204120 (-GetAdvancedDirectFlipRestoreBuffer@CDWMSwapChain@@UEAAJ_NPEAPEAUID3D11Texture2D@@@Z.c)
 *     ?PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z @ 0x180204B50 (-PresentInternal@CDWMSwapChainDDA@@MEAAJPEBVCRegion@@IIPEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::GetBuffer(
        CDWMSwapChain *this,
        __int64 a2,
        unsigned int *a3,
        struct ID3D11Texture2D **a4)
{
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0LL;
  v6 = a2;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *, struct ID3D11Texture2D **))(**((_QWORD **)this + 53) + 72LL))(
         *((_QWORD *)this + 53),
         a2,
         &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
         a4);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xAEu);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 53) + 72LL))(
            *((_QWORD *)this + 53),
            v6,
            &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
            &v15);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xB2u);
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v15 + 72LL))(v15, a3);
      v9 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xB4u);
    }
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v9;
}
