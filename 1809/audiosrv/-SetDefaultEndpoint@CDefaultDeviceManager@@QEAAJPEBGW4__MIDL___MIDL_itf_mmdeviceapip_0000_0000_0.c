/*
 * XREFs of ?SetDefaultEndpoint@CDefaultDeviceManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18012013C
 * Callers:
 *     ?SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x18011F490 (-SetDefaultAudioEndpoint@DynamicAudioEndpointManager@@QEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18001EF78 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800506B8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointLevel@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_J@Z @ 0x18011FF3C (-GetEndpointLevel@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEA_J@Z.c)
 *     ?IsEqualObject@?$CComPtrBase@UIMMEndpoint@@@ATL@@QEAA_NPEAUIUnknown@@@Z @ 0x180120054 (-IsEqualObject@-$CComPtrBase@UIMMEndpoint@@@ATL@@QEAA_NPEAUIUnknown@@@Z.c)
 *     ?IsNeverSetAsDefault@@YAHPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180120108 (-IsNeverSetAsDefault@@YAHPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL.c)
 *     ?SetEndpointLevels@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@_K@Z @ 0x180120730 (-SetEndpointLevels@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CDefaultDeviceManager::SetDefaultEndpoint(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  HRESULT Instance; // ebx
  __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // r8
  __int64 v11; // rsi
  unsigned int v12; // edi
  struct IUnknown *v13; // rcx
  __int64 v14; // r8
  struct IUnknown *v15; // rcx
  unsigned int v16; // edi
  struct IUnknown *v18; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-48h] BYREF
  struct IUnknown *v20; // [rsp+40h] [rbp-40h] BYREF
  struct IUnknown *v21; // [rsp+48h] [rbp-38h] BYREF
  struct IUnknown *v22; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-28h] BYREF
  struct IUnknown *v24; // [rsp+60h] [rbp-20h] BYREF
  LPVOID ppv[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v26; // [rsp+78h] [rbp-8h] BYREF
  unsigned int v27; // [rsp+B0h] [rbp+30h] BYREF
  int v28; // [rsp+B4h] [rbp+34h]

  v28 = HIDWORD(a1);
  ppv[1] = (LPVOID)-2LL;
  ppv[0] = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  v21 = 0LL;
  v27 = 0;
  v19 = 0;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               ppv);
  if ( Instance >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(LPVOID, __int64, struct IUnknown **))(*(_QWORD *)ppv[0] + 40LL))(
                 ppv[0],
                 a2,
                 &v22);
    if ( Instance >= 0 )
    {
      if ( !ATL::CComPtrBase<IMMEndpoint>::IsEqualObject((void (__fastcall ****)(_QWORD, GUID *, __int64 *))&v24, v22) )
        ATL::AtlComQIPtrAssign(&v24, v22, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
      if ( !v24 )
        goto LABEL_6;
      Instance = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v24->lpVtbl[1].QueryInterface)(v24, &v19);
      if ( Instance >= 0 )
      {
        if ( (unsigned int)IsNeverSetAsDefault((__int64)v22, v19, a3) )
        {
LABEL_6:
          Instance = -2147467259;
          goto LABEL_69;
        }
        Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, struct IUnknown **))(*(_QWORD *)ppv[0] + 24LL))(
                     ppv[0],
                     v19,
                     1LL,
                     &v21);
        if ( Instance >= 0 )
        {
          Instance = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v21->lpVtbl[1].QueryInterface)(
                       v21,
                       &v27);
          if ( Instance >= 0 )
          {
            if ( !v27 )
            {
              Instance = -2147023728;
              goto LABEL_69;
            }
            v8 = -1LL;
            v9 = 0;
            do
            {
              v18 = 0LL;
              Instance = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IUnknown **))v21->lpVtbl[1].AddRef)(
                           v21,
                           v9,
                           &v18);
              if ( Instance < 0 )
                goto LABEL_65;
              if ( !(unsigned int)IsNeverSetAsDefault((__int64)v18, v19, a3)
                && (int)GetEndpointLevel(v18, a3, &v20) >= 0
                && v8 <= (__int64)v20 )
              {
                v8 = (__int64)v20;
              }
              if ( v18 )
                ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl->Release)(v18);
              ++v9;
            }
            while ( v9 < v27 );
            if ( v8 == -1 )
              v10 = 1LL;
            else
              v10 = v8 + 2;
            v11 = 0LL;
            if ( v8 != -1 )
              v11 = v8 + 1;
            Instance = SetEndpointLevels(v22, a3, v10);
            if ( Instance >= 0 )
            {
              v12 = 0;
              if ( v27 )
              {
                do
                {
                  v18 = 0LL;
                  Instance = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IUnknown **))v21->lpVtbl[1].AddRef)(
                               v21,
                               v12,
                               &v18);
                  if ( Instance < 0 )
                    goto LABEL_65;
                  if ( !(unsigned int)IsNeverSetAsDefault((__int64)v18, v19, a3)
                    && (int)GetEndpointLevel(v18, a3, &v26) < 0 )
                  {
                    v20 = 0LL;
                    v23 = 0;
                    v13 = v18;
                    if ( !v18 )
                      goto LABEL_63;
                    ATL::AtlComQIPtrAssign(&v20, v18, &GUID_a4566d7a_c8f5_4150_0b7b_4ee7e744fc5c);
                    if ( !v20 )
                    {
                      v13 = v18;
LABEL_63:
                      Instance = -2147024809;
                      if ( v13 )
                        ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
                      goto LABEL_69;
                    }
                    Instance = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, unsigned int *))v20->lpVtbl[3].QueryInterface)(
                                 v20,
                                 a3,
                                 &v23);
                    if ( Instance < 0 )
                    {
                      v15 = v20;
LABEL_58:
                      if ( v15 )
                        ((void (__fastcall *)(struct IUnknown *))v15->lpVtbl->Release)(v15);
                      goto LABEL_65;
                    }
                    v14 = v11;
                    if ( v23 < 0x60000000 )
                      v14 = 0LL;
                    Instance = SetEndpointLevels(v18, a3, v14);
                    v15 = v20;
                    if ( Instance < 0 )
                      goto LABEL_58;
                    if ( v20 )
                      ((void (*)(void))v20->lpVtbl->Release)();
                  }
                  if ( v18 )
                    ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl->Release)(v18);
                }
                while ( ++v12 < v27 );
              }
              if ( v21 )
                ATL::AtlComPtrAssign(&v21, 0LL);
              Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, struct IUnknown **))(*(_QWORD *)ppv[0]
                                                                                                + 24LL))(
                           ppv[0],
                           v19,
                           14LL,
                           &v21);
              if ( Instance >= 0 )
              {
                Instance = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v21->lpVtbl[1].QueryInterface)(
                             v21,
                             &v27);
                if ( Instance >= 0 )
                {
                  v16 = 0;
                  if ( !v27 )
                  {
LABEL_67:
                    if ( Instance >= 0 )
                      *a4 = v19;
                    goto LABEL_69;
                  }
                  while ( 1 )
                  {
                    v18 = 0LL;
                    Instance = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IUnknown **))v21->lpVtbl[1].AddRef)(
                                 v21,
                                 v16,
                                 &v18);
                    if ( Instance < 0 )
                      break;
                    if ( !(unsigned int)IsNeverSetAsDefault((__int64)v18, v19, a3)
                      && (int)GetEndpointLevel(v18, a3, &v20) >= 0
                      && (__int64)v20 >= v11 )
                    {
                      v20 = (struct IUnknown *)((char *)v20 + 1);
                      Instance = SetEndpointLevels(v18, a3, v20);
                      if ( Instance < 0 )
                        break;
                    }
                    if ( v18 )
                      ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl->Release)(v18);
                    if ( ++v16 >= v27 )
                      goto LABEL_67;
                  }
LABEL_65:
                  if ( v18 )
                    ((void (__fastcall *)(struct IUnknown *))v18->lpVtbl->Release)(v18);
                  goto LABEL_67;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_69:
  if ( v21 )
    ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
  if ( v24 )
    ((void (__fastcall *)(struct IUnknown *))v24->lpVtbl->Release)(v24);
  if ( v22 )
    ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl->Release)(v22);
  if ( ppv[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
  return (unsigned int)Instance;
}
