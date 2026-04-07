/*
 * XREFs of ?Create@CBitmapSource@@SAJPEAXKPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180047344
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800472C4 (-Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x18000EC38 (-Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z.c)
 *     ?Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z @ 0x18000ED18 (-Initialize@CBitmapSource@@AEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003852C (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x180048C18 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CBitmapSource::Create(void *a1, unsigned int a2, struct IDwmChannel *a3, struct CBitmapSource **a4)
{
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  CBitmapSource *v14; // rsi
  CBaseObject *v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  int v19; // [rsp+20h] [rbp-38h]
  enum DXGI_FORMAT v20; // [rsp+28h] [rbp-30h]
  enum DXGI_ALPHA_MODE v21; // [rsp+30h] [rbp-28h]
  struct IWICBitmap *v22; // [rsp+40h] [rbp-18h] BYREF
  struct IBitmapSource *v23[2]; // [rsp+48h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v23[0] = 0LL;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)v23);
  v8 = CCompressedSourceBitmap::Create(
         *((struct IWICImagingFactory **)CDesktopManager::s_pDesktopManagerInstance + 39),
         a1,
         a2,
         96.0,
         96.0,
         v20,
         v21,
         v23);
  v9 = v8;
  if ( v8 >= 0 )
  {
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v22);
    v12 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, struct IWICBitmap **))v23[0])(
            v23[0],
            &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94,
            &v22);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
              WPF::g_pProcessHeap,
              104LL);
      v14 = (CBitmapSource *)v13;
      if ( v13 )
      {
        *(_QWORD *)(v13 + 16) = 0LL;
        *(_QWORD *)(v13 + 96) = 0LL;
        *(_DWORD *)(v13 + 8) = 1;
        v15 = (CBaseObject *)v13;
        *(_QWORD *)v13 = &CBitmapSource::`vftable';
        *(_DWORD *)(v13 + 80) = 0x80000000;
        *(_DWORD *)(v13 + 88) = 0x80000000;
        *(_DWORD *)(v13 + 84) = 0x80000000;
        *(_DWORD *)(v13 + 92) = 0x80000000;
        v16 = CBitmapSource::Initialize((CBitmapSource *)v13, a3);
        v9 = v16;
        if ( v16 >= 0 )
        {
          v16 = CBitmapSource::Update(v14, v22);
          v9 = v16;
          if ( v16 >= 0 )
          {
            v15 = 0LL;
            *a4 = v14;
            v9 = 0;
            goto LABEL_14;
          }
          v17 = 97LL;
        }
        else
        {
          v17 = 95LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (unsigned int)"windows\\dwm\\udwm\\bitmapsource.cpp",
          (const char *)(unsigned int)v16,
          v19);
        goto LABEL_14;
      }
      v9 = -2147024882;
      v11 = 93LL;
      v10 = 2147942414LL;
    }
    else
    {
      v10 = (unsigned int)v12;
      v11 = 90LL;
    }
  }
  else
  {
    v10 = (unsigned int)v8;
    v11 = 89LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"windows\\dwm\\udwm\\bitmapsource.cpp",
    (const char *)v10,
    v19);
  v15 = 0LL;
LABEL_14:
  if ( v15 )
    CBaseObject::Release(v15);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)v23);
  return v9;
}
