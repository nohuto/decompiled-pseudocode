/*
 * XREFs of ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1800496FC
 * Callers:
 *     ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x1800497C4 (-Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z.c)
 * Callees:
 *     ?Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z @ 0x1800475A4 (-Init@CD3DResource@@IEAAXPEAVIMILPoolManager@@I@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800484B8 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::InitResource(
        CD3DTexture *this,
        struct CD3DResourceManager *a2,
        struct ID3D11Texture2D *a3)
{
  unsigned int v3; // ebx
  int v4; // r14d
  unsigned int v5; // ebp
  int v9; // ecx
  _DWORD v11[12]; // [rsp+30h] [rbp-68h] BYREF

  v3 = 0;
  v4 = 0;
  v5 = 0;
  if ( *((_DWORD *)this + 46) )
  {
    while ( 1 )
    {
      ((void (__fastcall *)(struct ID3D11Texture2D *, _DWORD *))a3->lpVtbl->GetDesc)(a3, v11);
      v9 = GetPixelFormatSize(v11[4]) >> 3;
      if ( !v9 )
        break;
      ++v5;
      v4 += v9 * v11[0] * v11[1];
      if ( v5 >= *((_DWORD *)this + 46) )
        goto LABEL_4;
    }
    v3 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2003292288, 0xA4u, 0LL);
  }
  else
  {
LABEL_4:
    CD3DResource::Init(this, a2, v4);
    *((_QWORD *)this + 15) = a3;
    ((void (__fastcall *)(struct ID3D11Texture2D *))a3->lpVtbl->AddRef)(a3);
  }
  return v3;
}
