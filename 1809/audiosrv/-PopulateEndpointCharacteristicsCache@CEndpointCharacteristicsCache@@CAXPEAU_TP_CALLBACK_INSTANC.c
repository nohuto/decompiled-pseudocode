/*
 * XREFs of ?PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800585A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$emplace_back@AEAPEAVCEndpointCharacteristics@@@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEAPEAVCEndpointCharacteristics@@@Z @ 0x180058920 (--$emplace_back@AEAPEAVCEndpointCharacteristics@@@-$vector@V-$com_ptr_t@VCEndpointCharacteristic.c)
 *     ?EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXPEBG@Z @ 0x180058B30 (-EnsureSpatialSettingsAreInitialized@CSpatialProperties@@QEAAXPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
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
  __int64 j; // rbx
  _QWORD *k; // rbx
  LPVOID v11; // rcx
  LPVOID v12; // rcx
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  LPVOID v14; // [rsp+38h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v17; // [rsp+58h] [rbp-18h] BYREF
  __int64 v18; // [rsp+68h] [rbp-8h]
  LPVOID v19; // [rsp+98h] [rbp+28h] BYREF
  LPVOID ppv; // [rsp+A8h] [rbp+38h] BYREF

  v16[1] = -2LL;
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
      v17 = 0LL;
      v18 = 0LL;
      if ( !Context[104] )
      {
        v13 = 0LL;
        if ( (*(int (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 0LL, 0LL, &v13) >= 0 )
        {
          v14 = 0LL;
          if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v13 + 40LL))(v13, &v14) >= 0 )
          {
            v19 = 0LL;
            (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, LPVOID *))(*(_QWORD *)Context + 24LL))(
              Context,
              v14,
              0LL,
              1LL,
              &v19);
            v11 = v19;
            if ( v19 )
            {
              std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::emplace_back<CEndpointCharacteristics * &>(
                &v17,
                &v19);
              v11 = v19;
            }
            if ( v11 )
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
          }
          CoTaskMemFree(v14);
        }
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        if ( !Context[104] )
        {
          v14 = 0LL;
          if ( (*(int (__fastcall **)(LPVOID, __int64, _QWORD, LPVOID *))(*(_QWORD *)ppv + 32LL))(ppv, 1LL, 0LL, &v14) >= 0 )
          {
            v19 = 0LL;
            if ( (*(int (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)v14 + 40LL))(v14, &v19) >= 0 )
            {
              v16[0] = 0LL;
              (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, _QWORD *))(*(_QWORD *)Context + 24LL))(
                Context,
                v19,
                0LL,
                1LL,
                v16);
              if ( v16[0] )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16[0] + 16LL))(v16[0]);
            }
            CoTaskMemFree(v19);
          }
          if ( v14 )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
      if ( !Context[104] )
      {
        v13 = 0LL;
        if ( (*(int (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 0LL, 2LL, &v13) >= 0 )
        {
          v14 = 0LL;
          if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v13 + 40LL))(v13, &v14) >= 0 )
          {
            v19 = 0LL;
            (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, LPVOID *))(*(_QWORD *)Context + 24LL))(
              Context,
              v14,
              0LL,
              1LL,
              &v19);
            v12 = v19;
            if ( v19 )
            {
              std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::emplace_back<CEndpointCharacteristics * &>(
                &v17,
                &v19);
              v12 = v19;
            }
            if ( v12 )
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v12 + 16LL))(v12);
          }
          CoTaskMemFree(v14);
        }
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        if ( !Context[104] )
        {
          v14 = 0LL;
          if ( (*(int (__fastcall **)(LPVOID, __int64, __int64, LPVOID *))(*(_QWORD *)ppv + 32LL))(ppv, 1LL, 2LL, &v14) >= 0 )
          {
            v19 = 0LL;
            if ( (*(int (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)v14 + 40LL))(v14, &v19) >= 0 )
            {
              v16[0] = 0LL;
              (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, _QWORD *))(*(_QWORD *)Context + 24LL))(
                Context,
                v19,
                0LL,
                1LL,
                v16);
              if ( v16[0] )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16[0] + 16LL))(v16[0]);
            }
            CoTaskMemFree(v19);
          }
          if ( v14 )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v14 + 16LL))(v14);
          if ( !Context[104] )
          {
            v14 = 0LL;
            v4 = PerformEndpointDiscoveryForUnpluggedEndpoints();
            v5 = 1LL;
            if ( v4 )
              v5 = 9LL;
            if ( (*(int (__fastcall **)(LPVOID, __int64, __int64, LPVOID *))(*(_QWORD *)ppv + 24LL))(ppv, 2LL, v5, &v14) >= 0
              && (*(int (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)v14 + 24LL))(v14, &v19) >= 0 )
            {
              for ( i = 0; !Context[104] && i < (unsigned int)v19; ++i )
              {
                v16[0] = 0LL;
                if ( (*(int (__fastcall **)(LPVOID, _QWORD, _QWORD *))(*(_QWORD *)v14 + 32LL))(v14, i, v16) >= 0 )
                {
                  pv = 0LL;
                  if ( (*(int (__fastcall **)(_QWORD, LPVOID *))(*(_QWORD *)v16[0] + 40LL))(v16[0], &pv) >= 0 )
                  {
                    v13 = 0LL;
                    (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)Context + 24LL))(
                      Context,
                      pv,
                      0LL,
                      1LL,
                      &v13);
                    v7 = v13;
                    if ( v13 )
                    {
                      std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::emplace_back<CEndpointCharacteristics * &>(
                        &v17,
                        &v13);
                      v7 = v13;
                    }
                    if ( v7 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
                  }
                  CoTaskMemFree(pv);
                }
                if ( v16[0] )
                  (*(void (**)(void))(*(_QWORD *)v16[0] + 16LL))();
              }
            }
            if ( v14 )
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v14 + 16LL))(v14);
          }
        }
      }
      v8 = v17;
      for ( j = v17; j != *((_QWORD *)&v8 + 1); j += 8LL )
      {
        if ( !*(_DWORD *)(*(_QWORD *)j + 156LL) )
          CSpatialProperties::EnsureSpatialSettingsAreInitialized(
            (LPCRITICAL_SECTION)(*(_QWORD *)j + 1624LL),
            *(LPCWSTR *)(*(_QWORD *)j + 24LL));
      }
      if ( (_QWORD)v8 )
      {
        for ( k = (_QWORD *)v8; k != *((_QWORD **)&v8 + 1); ++k )
        {
          if ( *k )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*k + 16LL))(*k);
        }
        std::_Deallocate<16,0>((void *)v8, (const struct std::nothrow_t *)((v18 - v8) & 0xFFFFFFFFFFFFFFF8uLL));
      }
    }
    CoUninitialize();
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  }
}
