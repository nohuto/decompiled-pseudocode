/*
 * XREFs of ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x1800AD130
 * Callers:
 *     ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x1800ACF80 (-ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z.c)
 *     ?InitializeViewboxAndRealizationSize@CCachedVisualImage@@AEAAXMM@Z @ 0x1801C7C7C (-InitializeViewboxAndRealizationSize@CCachedVisualImage@@AEAAXMM@Z.c)
 *     ?SetForVisualSurface@CCachedVisualImage@@QEAAXXZ @ 0x1801C7F7C (-SetForVisualSurface@CCachedVisualImage@@QEAAXXZ.c)
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x180214834 (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18004889C (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCachedVisualImage::ChoosePixelFormat(CCachedVisualImage *this)
{
  enum DXGI_FORMAT v2; // ecx
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx
  BOOL v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  enum DXGI_FORMAT v14[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *((_DWORD *)this + 51);
  if ( v2 == DXGI_FORMAT_UNKNOWN )
  {
    v3 = 0LL;
    v4 = 0LL;
    v5 = *(_QWORD *)(*((_QWORD *)this + 4) + 64LL);
    if ( *(_DWORD *)(v5 + 80) )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(v5 + 56) + 8 * v4);
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 264LL))(v6) )
          break;
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= *(_DWORD *)(v5 + 80) )
          goto LABEL_5;
      }
      v3 = *(_QWORD *)(*(_QWORD *)(v5 + 56) + 8 * v4);
    }
LABEL_5:
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)v3 + 24LL))(v3, v14);
      v2 = v14[0];
      *((enum DXGI_FORMAT *)this + 51) = v14[0];
    }
    else
    {
      v2 = DXGI_FORMAT_B8G8R8A8_UNORM;
      *((_DWORD *)this + 51) = 87;
    }
  }
  v7 = HasAlphaChannel(v2) && !*((_BYTE *)this + 380);
  *((_DWORD *)this + 52) = v7;
  if ( !*((_DWORD *)this + 53) )
  {
    v8 = *((_DWORD *)this + 51);
    if ( v8 <= 61 )
    {
      if ( v8 == 61 )
        goto LABEL_15;
      v9 = v8 - 2;
      if ( !v9 || (v10 = v9 - 8) == 0 )
      {
        *((_DWORD *)this + 53) = 2;
        return;
      }
      v11 = v10 - 1;
      if ( !v11 )
        goto LABEL_15;
      v12 = v11 - 13;
      if ( !v12 )
        goto LABEL_15;
      v13 = v12 - 4;
      if ( !v13 || v13 == 21 )
        goto LABEL_15;
    }
    else if ( v8 == 65 || v8 > 86 && (v8 <= 88 || v8 == 91 || v8 == 103 || (unsigned int)(v8 - 106) <= 1) )
    {
LABEL_15:
      *((_DWORD *)this + 53) = 1;
    }
  }
}
