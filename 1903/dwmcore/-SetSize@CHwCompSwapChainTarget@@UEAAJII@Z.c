/*
 * XREFs of ?SetSize@CHwCompSwapChainTarget@@UEAAJII@Z @ 0x180240520
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x1800B2508 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?InitTargetSurface@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBUPixelFormatInfo@@@Z @ 0x18023FFD0 (-InitTargetSurface@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBUPixelFormatInfo@@@Z.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::SetSize(CHwCompSwapChainTarget *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  CHwCompSwapChainTarget *v7; // rsi
  signed int v8; // eax
  __int64 v9; // rcx
  signed int v10; // eax
  __int64 v11; // rcx
  struct CD3DDeviceLevel1 *v12; // rdx
  signed int inited; // eax
  __int64 v14; // rcx
  signed int v15; // eax
  __int64 v16; // rcx
  struct CD3DDeviceLevel1 *v18; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v19[4]; // [rsp+48h] [rbp-40h] BYREF

  v3 = 0;
  if ( a2 != *((_DWORD *)this - 50) || a3 != *((_DWORD *)this - 49) )
  {
    v7 = (CHwCompSwapChainTarget *)((char *)this - 208);
    (*(void (__fastcall **)(char *, _DWORD *))(*((_QWORD *)this - 26) + 24LL))((char *)this - 208, v19);
    v8 = (*(__int64 (__fastcall **)(CHwCompSwapChainTarget *, struct CD3DDeviceLevel1 **))(*(_QWORD *)v7 + 248LL))(
           v7,
           &v18);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x96u, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(CHwCompSwapChainTarget *))(*(_QWORD *)v7 + 96LL))(v7);
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(**((_QWORD **)this + 1) + 104LL))(
              *((_QWORD *)this + 1),
              0LL,
              a2,
              a3,
              v19[0],
              0);
      v3 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x9Fu, 0LL);
      }
      else
      {
        v12 = v18;
        *((_DWORD *)this - 50) = a2;
        *((_DWORD *)this - 49) = a3;
        inited = CHwCompSwapChainTarget::InitTargetSurface(v7, v12, (const struct PixelFormatInfo *)v19);
        v3 = inited;
        if ( inited < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, inited, 0xA3u, 0LL);
        }
        else
        {
          v15 = CBaseRenderTarget::Init(v7);
          v3 = v15;
          if ( v15 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xA5u, 0LL);
        }
      }
    }
  }
  return v3;
}
