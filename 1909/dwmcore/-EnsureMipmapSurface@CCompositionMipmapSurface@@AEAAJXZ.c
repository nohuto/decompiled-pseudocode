/*
 * XREFs of ?EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1801CFDD8
 * Callers:
 *     ?OnSceneReady@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@@Z @ 0x1801D0130 (-OnSceneReady@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180017B68 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x1800238B4 (-Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_D.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180053C94 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x1801CEBA0 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CCompositionMipmapSurface::EnsureMipmapSurface(struct _LUID *this)
{
  unsigned int v1; // ebx
  signed int ExistingDevice; // eax
  __int64 v4; // rcx
  struct CD3DDeviceLevel1 *v5; // rbx
  LONG HighPart; // eax
  struct D3D11_SUBRESOURCE_DATA *v7; // r8
  signed int v8; // eax
  __int64 v9; // rcx
  signed int v10; // eax
  __int64 v11; // rcx
  struct CD3DSurface *v12; // rax
  struct CD3DSurface *v13; // rsi
  struct CD3DSurface *v15; // [rsp+38h] [rbp-19h] BYREF
  struct CD3DDeviceLevel1 *v16; // [rsp+40h] [rbp-11h] BYREF
  __int128 v17; // [rsp+48h] [rbp-9h] BYREF
  _DWORD v18[12]; // [rsp+58h] [rbp+7h] BYREF
  __int128 v19; // [rsp+88h] [rbp+37h]

  v1 = 0;
  if ( !*(_QWORD *)&this[20] )
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease((__int64 *)&v16);
    ExistingDevice = CD3DDeviceManager::GetExistingDevice((CD3DDeviceManager *)&g_D3DDeviceManager, this[14], &v16);
    v1 = ExistingDevice;
    if ( ExistingDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, ExistingDevice, 0x138u, 0LL);
    }
    else
    {
      v18[6] = 0;
      v18[7] = 0;
      v18[9] = 0;
      v18[10] = 0;
      v15 = 0LL;
      v5 = v16;
      *(_QWORD *)&v17 = "DWM Composition Mipmap Surface";
      v18[0] = this[15].LowPart;
      v18[1] = this[15].HighPart;
      v18[2] = this[16].LowPart;
      HighPart = this[16].HighPart;
      DWORD2(v17) = 30;
      v18[4] = HighPart;
      v18[3] = 1;
      v19 = v17;
      v18[5] = 1;
      v18[8] = 8;
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v15);
      v8 = CD3DSurface::Create((CD3DDeviceLevel1 **)v5 + 112, (const struct DWM_TEXTURE2D_DESC *)v18, v7, &v15);
      v1 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x14Cu, 0LL);
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(char *, unsigned __int64))(*((_QWORD *)v15 + 3) + 24LL))(
                (char *)v15 + 24,
                (unsigned __int64)&this[9] & -(__int64)(this != 0LL));
        v1 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x14Eu, 0LL);
        }
        else
        {
          v12 = (struct CD3DSurface *)this[20];
          v13 = v15;
          if ( v12 != v15 )
          {
            if ( v15 )
            {
              (**(void (__fastcall ***)(struct CD3DSurface *))v15)(v15);
              v12 = (struct CD3DSurface *)this[20];
            }
            *(_QWORD *)&v17 = v12;
            this[20] = (struct _LUID)v13;
            Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v17);
          }
          LOBYTE(this[19].LowPart) = 1;
        }
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v15);
    }
    Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease((__int64 *)&v16);
  }
  return v1;
}
