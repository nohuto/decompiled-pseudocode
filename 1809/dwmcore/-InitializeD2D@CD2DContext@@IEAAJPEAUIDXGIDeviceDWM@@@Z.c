/*
 * XREFs of ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800D6748
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x1800D6B04 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?D2DRemoveClip@CD2DContext@@IEAAXXZ @ 0x180025BE4 (-D2DRemoveClip@CD2DContext@@IEAAXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800376CC (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180096D48 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x1800D691C (-PopulateEffectTable@CD2DContext@@AEAAJXZ.c)
 *     ?CreateDevice@CD2DFactory@@QEAAJPEAUIDXGIDeviceDWM@@PEAPEAUID2D1Device@@@Z @ 0x1800D69D0 (-CreateDevice@CD2DFactory@@QEAAJPEAUIDXGIDeviceDWM@@PEAPEAUID2D1Device@@@Z.c)
 *     ?Create@CD2DResourceManager@@SAJPEAVCD2DContext@@PEAPEAV1@@Z @ 0x1800D6AA8 (-Create@CD2DResourceManager@@SAJPEAVCD2DContext@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::InitializeD2D(CD2DContext *this, struct IDXGIDeviceDWM *a2)
{
  int v3; // ebx
  int D2DFactoryNoRef; // eax
  _QWORD *v6; // r14
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  int v10; // r9d
  unsigned int v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-30h] BYREF

  v12 = 0LL;
  v3 = *((_DWORD *)this + 212);
  if ( v3 < 0 )
  {
    v11 = 35;
    v10 = *((_DWORD *)this + 212);
  }
  else
  {
    D2DFactoryNoRef = CD2DResourceManager::Create(this, (struct CD2DResourceManager **)this + 25);
    v3 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v11 = 37;
    }
    else
    {
      D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(this, (struct CD2DFactory **)this + 26);
      v3 = D2DFactoryNoRef;
      if ( D2DFactoryNoRef < 0 )
      {
        v11 = 39;
      }
      else
      {
        v6 = (_QWORD *)((char *)this + 216);
        D2DFactoryNoRef = CD2DFactory::CreateDevice(*((CD2DFactory **)this + 26), a2, (struct ID2D1Device **)this + 27);
        v3 = D2DFactoryNoRef;
        if ( D2DFactoryNoRef < 0 )
        {
          v11 = 44;
        }
        else
        {
          D2DFactoryNoRef = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v6)(
                              *v6,
                              &GUID_46fdbfea_53f8_440c_b9e2_81dfec612a72,
                              (char *)this + 224);
          v3 = D2DFactoryNoRef;
          if ( D2DFactoryNoRef < 0 )
          {
            v11 = 46;
          }
          else
          {
            D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)*v6 + 32LL))(
                                *v6,
                                0LL,
                                &v12);
            v3 = D2DFactoryNoRef;
            if ( D2DFactoryNoRef < 0 )
            {
              v11 = 49;
            }
            else
            {
              v7 = (_QWORD *)((char *)this + 232);
              D2DFactoryNoRef = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v12)(
                                  v12,
                                  &GUID_394ea6a3_0c34_4321_950b_6ca20f0be6c7,
                                  (char *)this + 232);
              v3 = D2DFactoryNoRef;
              if ( D2DFactoryNoRef < 0 )
              {
                v11 = 51;
              }
              else
              {
                D2DFactoryNoRef = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v7)(
                                    *v7,
                                    &GUID_2ea67ed7_d42e_4c07_9dd5_a91ea23e01d2,
                                    (char *)this + 240);
                v3 = D2DFactoryNoRef;
                if ( D2DFactoryNoRef < 0 )
                {
                  v11 = 53;
                }
                else
                {
                  v8 = *v7;
                  v13[0] = 0LL;
                  v13[1] = 0LL;
                  D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, char *))(*(_QWORD *)v8 + 64LL))(
                                      v8,
                                      v13,
                                      0LL,
                                      (char *)this + 352);
                  v3 = D2DFactoryNoRef;
                  if ( D2DFactoryNoRef < 0 )
                  {
                    v11 = 59;
                  }
                  else
                  {
                    D2DFactoryNoRef = CD2DContext::PopulateEffectTable(this);
                    v3 = D2DFactoryNoRef;
                    if ( D2DFactoryNoRef >= 0 )
                    {
                      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v6 + 48LL))(*v6, 0x40000000LL);
                      CD2DContext::D2DRemoveClip(this);
                      goto LABEL_12;
                    }
                    v11 = 61;
                  }
                }
              }
            }
          }
        }
      }
    }
    v10 = D2DFactoryNoRef;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v10, v11);
LABEL_12:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v3, 0);
}
