/*
 * XREFs of ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800ECA9C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_49e61b4b5e107012da56e971e0ef5073__void_::_Do_call @ 0x1800EE3A0 (std--_Func_impl_no_alloc__lambda_49e61b4b5e107012da56e971e0ef5073__void_--_Do_call.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x180013C14 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180021910 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180034B00 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18005F0AC (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800E278C (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800E2AB8 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800ED988 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800EE590 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CAudioResourceManager::ReevaluateSaDeviceSettings(
        CAudioResourceManager *this,
        const unsigned __int16 *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  char v5; // r12
  int v6; // r13d
  struct tWAVEFORMATEX *v7; // rdi
  struct tWAVEFORMATEX *v8; // rsi
  __int64 *i; // rbx
  char v10; // al
  __int64 v11; // r9
  __int64 *v12; // r14
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 *v16; // r15
  __int64 v17; // rcx
  struct CEndpointCharacteristics *v18; // r14
  unsigned int v19; // eax
  int v20; // eax
  struct tWAVEFORMATEX *v21; // r14
  struct CEndpointCharacteristics *v22; // r15
  int v23; // eax
  __int64 v24; // rax
  const struct tWAVEFORMATEX *v25; // rax
  __int64 v26; // r15
  __int64 v27; // r15
  __int64 *v28; // rbx
  __int64 *v29; // r14
  __int64 v30; // rcx
  __int64 *v31; // rbx
  __int64 *v32; // rdi
  SaDeviceParams *v33; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  struct _GUID v35; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+90h] [rbp-70h] BYREF
  struct CEndpointCharacteristics *v38; // [rsp+98h] [rbp-68h] BYREF
  struct tWAVEFORMATEX *v39; // [rsp+A0h] [rbp-60h] BYREF
  LPVOID pv; // [rsp+A8h] [rbp-58h] BYREF
  struct tWAVEFORMATEX *v41; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v42; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v43; // [rsp+C8h] [rbp-38h]
  struct tWAVEFORMATEX *v44; // [rsp+D0h] [rbp-30h] BYREF
  struct tWAVEFORMATEX *v45; // [rsp+D8h] [rbp-28h]
  struct tWAVEFORMATEX *v46; // [rsp+E0h] [rbp-20h]
  CAudioResourceManager *v47; // [rsp+E8h] [rbp-18h]
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct _GUID v49; // [rsp+100h] [rbp+0h] BYREF
  struct _GUID v50; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v51[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v52[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v53[16]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v54[16]; // [rsp+150h] [rbp+50h] BYREF

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v47 = this;
  v38 = 0LL;
  v3 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         &v38);
  v4 = 0LL;
  v34 = 0LL;
  if ( v3 >= 0 )
  {
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v34);
    v3 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, const unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
           g_DeviceGraphStore,
           a2,
           &v34);
    v4 = v34;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, (__int64)&WPP_77202523448037bdbe1ee95759e6b961_Traceguids, a2);
    v4 = v34;
  }
  if ( v3 >= 0 )
  {
    (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v4 + 112LL))(v4, lpCriticalSection);
    while ( 1 )
    {
      v5 = 1;
      v42 = 0LL;
      v43 = 0LL;
      v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v34 + 80LL))(v34, &v42);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Eu,
          (__int64)&WPP_77202523448037bdbe1ee95759e6b961_Traceguids,
          (__int64)(*((_QWORD *)&v42 + 1) - v42) >> 3);
      }
      if ( v6 >= 0 )
        break;
LABEL_54:
      v31 = (__int64 *)v42;
      if ( (_QWORD)v42 )
      {
        v32 = (__int64 *)*((_QWORD *)&v42 + 1);
        if ( (_QWORD)v42 != *((_QWORD *)&v42 + 1) )
        {
          do
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v31++);
          while ( v31 != v32 );
          v31 = (__int64 *)v42;
        }
        std::_Deallocate<16,0>(v31, (const struct std::nothrow_t *)((v43 - (_QWORD)v31) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      if ( v6 < 0 || v5 )
      {
        if ( lpCriticalSection[0] )
          LeaveCriticalSection(lpCriticalSection[0]);
        goto LABEL_63;
      }
    }
    v37 = 0LL;
    v7 = 0LL;
    v45 = 0LL;
    v8 = 0LL;
    v46 = 0LL;
    for ( i = (__int64 *)v42; ; ++i )
    {
      if ( i == *((__int64 **)&v42 + 1) )
      {
LABEL_53:
        CoTaskMemFree(v8);
        CoTaskMemFree(v7);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v37);
        goto LABEL_54;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 152LL))(*i)
        && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 120LL))(*i) )
      {
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 136LL))(*i);
        v11 = *i;
        if ( v10 )
        {
          v35 = 0LL;
          v36 = 0LL;
          if ( (*(int (__fastcall **)(__int64, __int64, struct _GUID *))(*(_QWORD *)v34 + 104LL))(v34, v11, &v35) < 0 )
            goto LABEL_26;
          v12 = *(__int64 **)&v35.Data1;
          if ( (__int64)(*(_QWORD *)v35.Data4 - *(_QWORD *)&v35.Data1) >> 3 == 1 )
          {
            v33 = 0LL;
            if ( (*(int (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)*i + 104LL))(*i, &v33) >= 0 )
            {
              v13 = *i;
              v14 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)&v35.Data1 + 104LL))(**(_QWORD **)&v35.Data1);
              if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13) != v14 )
              {
                v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 176LL))(*i);
                if ( GetTickCount64() - v15 >= 0x2700 )
                {
                  Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v37, i);
                  v7 = (struct tWAVEFORMATEX *)*((_QWORD *)v33 + 2);
                  *((_QWORD *)v33 + 2) = 0LL;
                  CoTaskMemFree(0LL);
                  v45 = v7;
                  v8 = (struct tWAVEFORMATEX *)*((_QWORD *)v33 + 3);
                  *((_QWORD *)v33 + 3) = 0LL;
                  CoTaskMemFree(0LL);
                  v46 = v8;
                  v27 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)&v35.Data1 + 104LL))(**(_QWORD **)&v35.Data1);
                  if ( v33 )
                    SaDeviceParams::`scalar deleting destructor'((LPVOID *)v33);
                  v33 = 0LL;
                  v28 = *(__int64 **)&v35.Data1;
                  if ( *(_QWORD *)&v35.Data1 )
                  {
                    v29 = *(__int64 **)v35.Data4;
                    if ( *(_QWORD *)&v35.Data1 != *(_QWORD *)v35.Data4 )
                    {
                      do
                      {
                        v30 = *v28;
                        if ( *v28 )
                        {
                          *v28 = 0LL;
                          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
                        }
                        ++v28;
                      }
                      while ( v28 != v29 );
                      v28 = *(__int64 **)&v35.Data1;
                    }
                    std::_Deallocate<16,0>(
                      v28,
                      (const struct std::nothrow_t *)((v36 - (_QWORD)v28) & 0xFFFFFFFFFFFFFFF8uLL));
                  }
                  goto LABEL_51;
                }
              }
            }
            if ( v33 )
              SaDeviceParams::`scalar deleting destructor'((LPVOID *)v33);
LABEL_26:
            v12 = *(__int64 **)&v35.Data1;
          }
          if ( v12 )
          {
            v16 = *(__int64 **)v35.Data4;
            if ( v12 != *(__int64 **)v35.Data4 )
            {
              do
              {
                v17 = *v12;
                if ( *v12 )
                {
                  *v12 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
                }
                ++v12;
              }
              while ( v12 != v16 );
              v12 = *(__int64 **)&v35.Data1;
            }
            std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)((v36 - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL));
          }
          continue;
        }
        LODWORD(v33) = 0;
        v44 = 0LL;
        v39 = 0LL;
        v41 = 0LL;
        pv = 0LL;
        v49 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v11 + 40LL))(v11, v51);
        v50 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v52);
        v35 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v53);
        v18 = v38;
        v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
        v20 = DeriveDeviceGraphFormatsForStream(
                v18,
                0,
                (struct _GUID *)v19,
                AUDCLNT_SHAREMODE_SHARED,
                &v35,
                &v50,
                &v49,
                0LL,
                &v41,
                (struct tWAVEFORMATEX **)&pv,
                &v39,
                &v44);
        v21 = v44;
        if ( v20 >= 0 )
        {
          v35 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v54);
          v22 = v38;
          v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
          if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                      (__int64)v22,
                      v23,
                      &v21->wFormatTag,
                      &v35,
                      0,
                      &v33,
                      0LL,
                      0LL,
                      0LL) >= 0 )
          {
            v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 32LL))(*i);
            if ( v24 != (int)((double)(int)v33 * 10000000.0 / (double)(int)v21->nSamplesPerSec + 0.5)
              || (v25 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 48LL))(*i),
                  !(unsigned int)CompareWaveFormat(v21, v25)) )
            {
              v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 176LL))(*i);
              if ( GetTickCount64() - v26 >= 0x2700 )
              {
                Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v37, i);
                CoTaskMemFree(0LL);
                v7 = v21;
                v45 = v21;
                CoTaskMemFree(0LL);
                v8 = v39;
                v46 = v39;
                v27 = (unsigned int)(int)((double)(int)v33 * 10000000.0 / (double)(int)v21->nSamplesPerSec + 0.5);
                CoTaskMemFree(pv);
                CoTaskMemFree(v41);
                CoTaskMemFree(0LL);
                CoTaskMemFree(0LL);
LABEL_51:
                v5 = 0;
                if ( v37 )
                {
                  std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(&v42);
                  v6 = CAudioResourceManager::SwitchStreamGroupsToNewSaDevice(v47, v38, v34, v7, v8, v27, &v37);
                }
                goto LABEL_53;
              }
            }
          }
        }
        CoTaskMemFree(pv);
        CoTaskMemFree(v41);
        CoTaskMemFree(v39);
        CoTaskMemFree(v21);
      }
    }
  }
LABEL_63:
  Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease(&v34);
  if ( v38 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v38 + 16LL))(v38);
}
