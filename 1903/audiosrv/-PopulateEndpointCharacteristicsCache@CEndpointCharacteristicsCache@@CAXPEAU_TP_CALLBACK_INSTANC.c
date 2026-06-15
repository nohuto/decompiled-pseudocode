/*
 * XREFs of ?PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800529E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$emplace_back@AEAPEAVCEndpointCharacteristics@@@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEAPEAVCEndpointCharacteristics@@@Z @ 0x180052D34 (--$emplace_back@AEAPEAVCEndpointCharacteristics@@@-$vector@V-$com_ptr_t@VCEndpointCharacteristic.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_________lambda_de3787b9043c5215ac50eb582b680ae7___ @ 0x180052F38 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_CEndpoint.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=18
void __fastcall CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache(
        PTP_CALLBACK_INSTANCE Instance,
        _BYTE *Context,
        PTP_WORK Work)
{
  int v4; // eax
  __int64 v5; // r8
  unsigned int i; // edi
  __int64 v7; // rcx
  __int128 v8; // rdi
  __int64 *j; // rbx
  LPVOID v10; // rcx
  LPVOID v11; // rcx
  __int64 v12; // [rsp+30h] [rbp-40h] BYREF
  LPVOID v13; // [rsp+38h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v16; // [rsp+58h] [rbp-18h] BYREF
  __int64 v17; // [rsp+68h] [rbp-8h]
  LPVOID v18; // [rsp+98h] [rbp+28h] BYREF
  LPVOID ppv; // [rsp+A8h] [rbp+38h] BYREF

  v15[1] = -2LL;
  if ( CoInitializeEx(0LL, 0) >= 0 )
  {
    ppv = 0LL;
    if ( CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv) >= 0 )
    {
      v16 = 0LL;
      v17 = 0LL;
      if ( !Context[104] )
      {
        v12 = 0LL;
        if ( (*(int (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 0LL, 0LL, &v12) >= 0 )
        {
          v13 = 0LL;
          if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v12 + 40LL))(v12, &v13) >= 0 )
          {
            v18 = 0LL;
            (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, LPVOID *))(*(_QWORD *)Context + 24LL))(
              Context,
              v13,
              0LL,
              1LL,
              &v18);
            v10 = v18;
            if ( v18 )
            {
              std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::emplace_back<CEndpointCharacteristics * &>(
                &v16,
                &v18);
              v10 = v18;
            }
            if ( v10 )
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v10 + 16LL))(v10);
          }
          CoTaskMemFree(v13);
        }
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        if ( !Context[104] )
        {
          v13 = 0LL;
          if ( (*(int (__fastcall **)(LPVOID, __int64, _QWORD, LPVOID *))(*(_QWORD *)ppv + 32LL))(ppv, 1LL, 0LL, &v13) >= 0 )
          {
            v18 = 0LL;
            if ( (*(int (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)v13 + 40LL))(v13, &v18) >= 0 )
            {
              v15[0] = 0LL;
              (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, _QWORD *))(*(_QWORD *)Context + 24LL))(
                Context,
                v18,
                0LL,
                1LL,
                v15);
              if ( v15[0] )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
            }
            CoTaskMemFree(v18);
          }
          if ( v13 )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
      if ( !Context[104] )
      {
        v12 = 0LL;
        if ( (*(int (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 0LL, 2LL, &v12) >= 0 )
        {
          v13 = 0LL;
          if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v12 + 40LL))(v12, &v13) >= 0 )
          {
            v18 = 0LL;
            (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, LPVOID *))(*(_QWORD *)Context + 24LL))(
              Context,
              v13,
              0LL,
              1LL,
              &v18);
            v11 = v18;
            if ( v18 )
            {
              std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::emplace_back<CEndpointCharacteristics * &>(
                &v16,
                &v18);
              v11 = v18;
            }
            if ( v11 )
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
          }
          CoTaskMemFree(v13);
        }
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        if ( !Context[104] )
        {
          v13 = 0LL;
          if ( (*(int (__fastcall **)(LPVOID, __int64, __int64, LPVOID *))(*(_QWORD *)ppv + 32LL))(ppv, 1LL, 2LL, &v13) >= 0 )
          {
            v18 = 0LL;
            if ( (*(int (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)v13 + 40LL))(v13, &v18) >= 0 )
            {
              v15[0] = 0LL;
              (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, _QWORD *))(*(_QWORD *)Context + 24LL))(
                Context,
                v18,
                0LL,
                1LL,
                v15);
              if ( v15[0] )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
            }
            CoTaskMemFree(v18);
          }
          if ( v13 )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v13 + 16LL))(v13);
          if ( !Context[104] )
          {
            v13 = 0LL;
            v4 = PerformEndpointDiscoveryForUnpluggedEndpoints();
            v5 = 1LL;
            if ( v4 )
              v5 = 9LL;
            if ( (*(int (__fastcall **)(LPVOID, __int64, __int64, LPVOID *))(*(_QWORD *)ppv + 24LL))(ppv, 2LL, v5, &v13) >= 0
              && (*(int (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)v13 + 24LL))(v13, &v18) >= 0 )
            {
              for ( i = 0; !Context[104] && i < (unsigned int)v18; ++i )
              {
                v15[0] = 0LL;
                if ( (*(int (__fastcall **)(LPVOID, _QWORD, _QWORD *))(*(_QWORD *)v13 + 32LL))(v13, i, v15) >= 0 )
                {
                  pv = 0LL;
                  if ( (*(int (__fastcall **)(_QWORD, LPVOID *))(*(_QWORD *)v15[0] + 40LL))(v15[0], &pv) >= 0 )
                  {
                    v12 = 0LL;
                    (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)Context + 24LL))(
                      Context,
                      pv,
                      0LL,
                      1LL,
                      &v12);
                    v7 = v12;
                    if ( v12 )
                    {
                      std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::emplace_back<CEndpointCharacteristics * &>(
                        &v16,
                        &v12);
                      v7 = v12;
                    }
                    if ( v7 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
                  }
                  CoTaskMemFree(pv);
                }
                if ( v15[0] )
                  (*(void (**)(void))(*(_QWORD *)v15[0] + 16LL))();
              }
            }
            if ( v13 )
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v13 + 16LL))(v13);
          }
        }
      }
      v8 = v16;
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_________lambda_de3787b9043c5215ac50eb582b680ae7___(
        &v18,
        v16,
        *((_QWORD *)&v16 + 1));
      if ( (_QWORD)v8 )
      {
        for ( j = (__int64 *)v8; j != *((__int64 **)&v8 + 1); ++j )
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(j);
        std::_Deallocate<16,0>((void *)v8, (const struct std::nothrow_t *)((v17 - v8) & 0xFFFFFFFFFFFFFFF8uLL));
      }
    }
    CoUninitialize();
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  }
}
