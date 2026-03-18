/*
 * XREFs of ?SetSize@CHwCompSwapChainTarget@@UEAAJII@Z @ 0x180201240
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x180093814 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?InitTargetSurface@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBUPixelFormatInfo@@@Z @ 0x180200C4C (-InitTargetSurface@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBUPixelFormatInfo@@@Z.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::SetSize(CHwCompSwapChainTarget *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  CHwCompSwapChainTarget *v7; // rsi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  struct CD3DDeviceLevel1 *v12; // rdx
  int inited; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  struct CD3DDeviceLevel1 *v18; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v19[4]; // [rsp+48h] [rbp-40h] BYREF

  v3 = 0;
  if ( a2 != *((_DWORD *)this - 66) || a3 != *((_DWORD *)this - 65) )
  {
    v7 = (CHwCompSwapChainTarget *)((char *)this - 272);
    (*(void (__fastcall **)(char *, _DWORD *))(*((_QWORD *)this - 34) + 24LL))((char *)this - 272, v19);
    v8 = (*(__int64 (__fastcall **)(CHwCompSwapChainTarget *, struct CD3DDeviceLevel1 **))(*(_QWORD *)v7 + 248LL))(
           v7,
           &v18);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x99u);
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
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xA2u);
      }
      else
      {
        v12 = v18;
        *((_DWORD *)this - 66) = a2;
        *((_DWORD *)this - 65) = a3;
        inited = CHwCompSwapChainTarget::InitTargetSurface(v7, v12, (const struct PixelFormatInfo *)v19);
        v3 = inited;
        if ( inited < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, inited, 0xA6u);
        }
        else
        {
          v15 = CBaseRenderTarget::Init(v7);
          v3 = v15;
          if ( v15 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xA8u);
        }
      }
    }
  }
  return v3;
}
