/*
 * XREFs of ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800F85FC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_49e61b4b5e107012da56e971e0ef5073__void_::_Do_call @ 0x1800F9FC0 (std--_Func_impl_no_alloc__lambda_49e61b4b5e107012da56e971e0ef5073__void_--_Do_call.c)
 * Callees:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032A80 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800383C0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18003C510 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180062C00 (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800C2680 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800EE04C (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800F950C (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x1800FA1D0 (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CAudioResourceManager::ReevaluateSaDeviceSettings(
        CAudioResourceManager *this,
        const unsigned __int16 *a2)
{
  int v3; // ebx
  char v4; // r12
  int v5; // r13d
  struct tWAVEFORMATEX *v6; // rdi
  struct tWAVEFORMATEX *v7; // rsi
  __int64 *i; // rbx
  __int64 *v9; // r14
  __int64 v10; // r15
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 *v13; // r15
  struct CEndpointCharacteristics *v14; // r14
  unsigned int v15; // eax
  int v16; // eax
  struct tWAVEFORMATEX *v17; // r14
  struct CEndpointCharacteristics *v18; // r15
  int v19; // eax
  __int64 v20; // rax
  const struct tWAVEFORMATEX *v21; // rax
  __int64 v22; // r15
  __int64 v23; // r15
  __int64 *v24; // rbx
  __int64 *v25; // r14
  __int64 *v26; // rbx
  __int64 *v27; // rdi
  __int64 v28; // rcx
  SaDeviceParams *v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  struct _GUID v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+90h] [rbp-70h] BYREF
  struct CEndpointCharacteristics *v34; // [rsp+98h] [rbp-68h] BYREF
  struct tWAVEFORMATEX *v35; // [rsp+A0h] [rbp-60h] BYREF
  LPVOID pv; // [rsp+A8h] [rbp-58h] BYREF
  struct tWAVEFORMATEX *v37; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v38; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v39; // [rsp+C8h] [rbp-38h]
  struct tWAVEFORMATEX *v40; // [rsp+D0h] [rbp-30h] BYREF
  struct tWAVEFORMATEX *v41; // [rsp+D8h] [rbp-28h]
  struct tWAVEFORMATEX *v42; // [rsp+E0h] [rbp-20h]
  CAudioResourceManager *v43; // [rsp+E8h] [rbp-18h]
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+F0h] [rbp-10h] BYREF
  struct _GUID v45; // [rsp+100h] [rbp+0h] BYREF
  struct _GUID v46; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v47[16]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v48[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v49[16]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v50[16]; // [rsp+150h] [rbp+50h] BYREF

  lpCriticalSection[1] = (LPCRITICAL_SECTION)-2LL;
  v43 = this;
  v34 = 0LL;
  v3 = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         &v34);
  v30 = 0LL;
  if ( v3 >= 0 )
    v3 = (*(__int64 (__fastcall **)(struct IDeviceGraphStore *, const unsigned __int16 *, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
           g_DeviceGraphStore,
           a2,
           &v30);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, (__int64)&WPP_79ddef80328333c3349c04c3a3e53ca6_Traceguids, a2);
  }
  if ( v3 >= 0 )
  {
    (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v30 + 112LL))(v30, lpCriticalSection);
    while ( 1 )
    {
      v4 = 1;
      v38 = 0LL;
      v39 = 0LL;
      v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v30 + 80LL))(v30, &v38);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Eu,
          (__int64)&WPP_79ddef80328333c3349c04c3a3e53ca6_Traceguids,
          (__int64)(*((_QWORD *)&v38 + 1) - v38) >> 3);
      }
      if ( v5 >= 0 )
        break;
LABEL_50:
      v26 = (__int64 *)v38;
      if ( (_QWORD)v38 )
      {
        v27 = (__int64 *)*((_QWORD *)&v38 + 1);
        if ( (_QWORD)v38 != *((_QWORD *)&v38 + 1) )
        {
          do
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v26++);
          while ( v26 != v27 );
          v26 = (__int64 *)v38;
        }
        std::_Deallocate<16,0>(v26, (const struct std::nothrow_t *)((v39 - (_QWORD)v26) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      if ( v5 < 0 || v4 )
      {
        if ( lpCriticalSection[0] )
          LeaveCriticalSection(lpCriticalSection[0]);
        goto LABEL_59;
      }
    }
    v33 = 0LL;
    v6 = 0LL;
    v41 = 0LL;
    v7 = 0LL;
    v42 = 0LL;
    for ( i = (__int64 *)v38; ; ++i )
    {
      if ( i == *((__int64 **)&v38 + 1) )
      {
LABEL_49:
        CoTaskMemFree(v7);
        CoTaskMemFree(v6);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v33);
        goto LABEL_50;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 152LL))(*i)
        && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 120LL))(*i) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*i + 136LL))(*i) )
        {
          v31 = 0LL;
          v32 = 0LL;
          if ( (*(int (__fastcall **)(__int64, __int64, struct _GUID *))(*(_QWORD *)v30 + 104LL))(v30, *i, &v31) < 0 )
            goto LABEL_26;
          v9 = *(__int64 **)&v31.Data1;
          if ( (__int64)(*(_QWORD *)v31.Data4 - *(_QWORD *)&v31.Data1) >> 3 == 1 )
          {
            v29 = 0LL;
            if ( (*(int (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)*i + 104LL))(*i, &v29) >= 0 )
            {
              v10 = **(_QWORD **)&v31.Data1;
              v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 32LL))(*i);
              if ( v11 != (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 104LL))(v10) )
              {
                v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 176LL))(*i);
                if ( GetTickCount64() - v12 >= 0x2700 )
                {
                  Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v33, i);
                  v6 = (struct tWAVEFORMATEX *)*((_QWORD *)v29 + 2);
                  *((_QWORD *)v29 + 2) = 0LL;
                  CoTaskMemFree(0LL);
                  v41 = v6;
                  v7 = (struct tWAVEFORMATEX *)*((_QWORD *)v29 + 3);
                  *((_QWORD *)v29 + 3) = 0LL;
                  CoTaskMemFree(0LL);
                  v42 = v7;
                  v23 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)&v31.Data1 + 104LL))(**(_QWORD **)&v31.Data1);
                  if ( v29 )
                    SaDeviceParams::`scalar deleting destructor'((LPVOID *)v29);
                  v29 = 0LL;
                  v24 = *(__int64 **)&v31.Data1;
                  if ( *(_QWORD *)&v31.Data1 )
                  {
                    v25 = *(__int64 **)v31.Data4;
                    if ( *(_QWORD *)&v31.Data1 != *(_QWORD *)v31.Data4 )
                    {
                      do
                        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v24++);
                      while ( v24 != v25 );
                      v24 = *(__int64 **)&v31.Data1;
                    }
                    std::_Deallocate<16,0>(
                      v24,
                      (const struct std::nothrow_t *)((v32 - (_QWORD)v24) & 0xFFFFFFFFFFFFFFF8uLL));
                  }
                  goto LABEL_47;
                }
              }
            }
            if ( v29 )
              SaDeviceParams::`scalar deleting destructor'((LPVOID *)v29);
LABEL_26:
            v9 = *(__int64 **)&v31.Data1;
          }
          if ( v9 )
          {
            v13 = *(__int64 **)v31.Data4;
            if ( v9 != *(__int64 **)v31.Data4 )
            {
              do
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v9++);
              while ( v9 != v13 );
              v9 = *(__int64 **)&v31.Data1;
            }
            std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)((v32 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL));
          }
          continue;
        }
        LODWORD(v29) = 0;
        v40 = 0LL;
        v35 = 0LL;
        v37 = 0LL;
        pv = 0LL;
        v45 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v47);
        v46 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v48);
        v31 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v49);
        v14 = v34;
        v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
        v16 = DeriveDeviceGraphFormatsForStream(
                v14,
                0,
                (struct _GUID *)v15,
                AUDCLNT_SHAREMODE_SHARED,
                &v31,
                &v46,
                &v45,
                0LL,
                &v37,
                (struct tWAVEFORMATEX **)&pv,
                &v35,
                &v40);
        v17 = v40;
        if ( v16 >= 0 )
        {
          v31 = *(struct _GUID *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v50);
          v18 = v34;
          v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 80LL))(*i);
          if ( (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                      (__int64)v18,
                      v19,
                      &v17->wFormatTag,
                      &v31,
                      0,
                      &v29,
                      0LL,
                      0LL,
                      0LL) >= 0 )
          {
            v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 32LL))(*i);
            if ( v20 != (int)((double)(int)v29 * 10000000.0 / (double)(int)v17->nSamplesPerSec + 0.5)
              || (v21 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 48LL))(*i),
                  !(unsigned int)CompareWaveFormat(v17, v21)) )
            {
              v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 176LL))(*i);
              if ( GetTickCount64() - v22 >= 0x2700 )
              {
                Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v33, i);
                CoTaskMemFree(0LL);
                v6 = v17;
                v41 = v17;
                CoTaskMemFree(0LL);
                v7 = v35;
                v42 = v35;
                v23 = (unsigned int)(int)((double)(int)v29 * 10000000.0 / (double)(int)v17->nSamplesPerSec + 0.5);
                CoTaskMemFree(pv);
                CoTaskMemFree(v37);
                CoTaskMemFree(0LL);
                CoTaskMemFree(0LL);
LABEL_47:
                v4 = 0;
                if ( v33 )
                {
                  std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(&v38);
                  v5 = CAudioResourceManager::SwitchStreamGroupsToNewSaDevice(v43, v34, v30, v6, v7, v23, &v33);
                }
                goto LABEL_49;
              }
            }
          }
        }
        CoTaskMemFree(pv);
        CoTaskMemFree(v37);
        CoTaskMemFree(v35);
        CoTaskMemFree(v17);
      }
    }
  }
LABEL_59:
  v28 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  if ( v34 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v34 + 16LL))(v34);
}
