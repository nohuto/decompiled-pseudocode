/*
 * XREFs of ?EnsureRenderTarget@CLocalAppRenderTarget@@IEAAJAEBUD2D_SIZE_F@@@Z @ 0x1802502D8
 * Callers:
 *     ?Render@CLocalAppRenderTarget@@UEAAJPEA_N@Z @ 0x1802508C0 (-Render@CLocalAppRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     floor @ 0x1800E7F48 (floor.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015EA50 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x18015F2A0 (-GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x18023F998 (-Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     ?GetCompSurfHandle@CHwCompSwapChainTarget@@QEBAPEAXXZ @ 0x18023FCE4 (-GetCompSurfHandle@CHwCompSwapChainTarget@@QEBAPEAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CLocalAppRenderTarget@@UEAAXXZ @ 0x180250830 (-ReleaseResourcesForDisplayChange@CLocalAppRenderTarget@@UEAAXXZ.c)
 *     ?SendCompSurfHandle@CLocalAppRenderTarget@@IEBAXPEAX@Z @ 0x180250C5C (-SendCompSurfHandle@CLocalAppRenderTarget@@IEBAXPEAX@Z.c)
 */

__int64 __fastcall CLocalAppRenderTarget::EnsureRenderTarget(CLocalAppRenderTarget *this, const struct D2D_SIZE_F *a2)
{
  struct CD3DDeviceLevel1 **v2; // r14
  int *v3; // rax
  signed int v6; // edi
  struct CD3DDeviceLevel1 *v7; // rcx
  signed int DefaultD3DDevice; // eax
  __int64 v9; // rcx
  int v10; // r15d
  double v11; // xmm0_8
  int v12; // edx
  unsigned int *v13; // rsi
  char v14; // r8
  int v15; // ecx
  int v16; // eax
  void (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // rcx
  signed int v18; // eax
  __int64 v19; // rcx
  CHwCompSwapChainTarget *v20; // rsi
  void *CompSurfHandle; // r14
  signed int v22; // eax
  __int64 v23; // rcx
  signed int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  void *v29; // [rsp+20h] [rbp-20h]
  __int64 v30; // [rsp+70h] [rbp+30h] BYREF
  CHwCompSwapChainTarget *v31; // [rsp+80h] [rbp+40h] BYREF

  v2 = (struct CD3DDeviceLevel1 **)((char *)this + 168);
  v3 = (int *)*((_QWORD *)this + 21);
  v6 = 0;
  v7 = (struct CD3DDeviceLevel1 *)v3;
  if ( v3 && v3[220] < 0 )
  {
    CLocalAppRenderTarget::ReleaseResourcesForDisplayChange((CLocalAppRenderTarget *)((char *)this + 64));
    v7 = *v2;
  }
  if ( v7
    || (*v2 = 0LL,
        DefaultD3DDevice = CD3DDeviceManager::GetDefaultD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v2),
        v6 = DefaultD3DDevice,
        DefaultD3DDevice >= 0) )
  {
    v10 = (int)floor(a2->width + 0.5);
    v11 = floor(a2->height + 0.5);
    v12 = *((_DWORD *)this + 22);
    v13 = (unsigned int *)((char *)this + 92);
    v14 = 0;
    v15 = (int)v11;
    if ( v10 != v12 || (v16 = *v13, v15 != *v13) )
    {
      v14 = 1;
      *((_DWORD *)this + 22) = v10;
      *v13 = v15;
      v12 = v10;
      v16 = (int)v11;
    }
    if ( v12 && v16 )
    {
      v17 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 22);
      if ( v17 )
      {
        if ( v14 )
        {
          (**v17)(v17, &GUID_c1102d2e_5afc_41c9_a025_779b188b0abe, &v30);
          v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v30 + 32LL))(
                 v30,
                 *((unsigned int *)this + 22),
                 *v13);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v30);
          if ( v6 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v6, 0xDEu, 0LL);
          else
            *((_BYTE *)this + 161) = 1;
        }
      }
      else
      {
        v31 = 0LL;
        v30 = 0LL;
        wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)&v31);
        LODWORD(v29) = 0;
        v18 = CHwCompSwapChainTarget::Create(
                *v2,
                *((_DWORD *)this + 22),
                *v13,
                3u,
                v29,
                (CLocalAppRenderTarget *)((char *)this + 96),
                &v31);
        v6 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xCEu, 0LL);
        }
        else
        {
          v20 = v31;
          CompSurfHandle = (void *)CHwCompSwapChainTarget::GetCompSurfHandle(v31);
          if ( v30 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          v22 = (**(__int64 (__fastcall ***)(CHwCompSwapChainTarget *, GUID *, __int64 *))v20)(
                  v20,
                  &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
                  &v30);
          v6 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xD3u, 0LL);
          }
          else
          {
            v24 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v30 + 24LL))(v30, (char *)this + 80);
            v6 = v24;
            if ( v24 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xD4u, 0LL);
            }
            else
            {
              v26 = *((_QWORD *)this + 22);
              v31 = 0LL;
              *((_QWORD *)this + 22) = v20;
              if ( v26 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
              *((_QWORD *)this + 17) = v30;
              v30 = 0LL;
              CLocalAppRenderTarget::SendCompSurfHandle(this, CompSurfHandle);
              *((_BYTE *)this + 161) = 1;
            }
          }
        }
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v30);
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v31);
      }
    }
    else
    {
      CLocalAppRenderTarget::ReleaseResourcesForDisplayChange((CLocalAppRenderTarget *)((char *)this + 64));
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, DefaultD3DDevice, 0xB0u, 0LL);
  }
  return (unsigned int)v6;
}
