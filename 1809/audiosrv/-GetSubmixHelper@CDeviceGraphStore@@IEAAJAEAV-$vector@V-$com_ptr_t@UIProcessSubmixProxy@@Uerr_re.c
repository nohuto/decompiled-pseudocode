/*
 * XREFs of ?GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$$QEAV?$function@$$A6A_NAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z@3@@Z @ 0x1800E83CC
 * Callers:
 *     ?GetSubmixesForApplication@CDeviceGraphStore@@UEAAJPEBGKAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800E8A20 (-GetSubmixesForApplication@CDeviceGraphStore@@UEAAJPEBGKAEAV-$vector@V-$com_ptr_t@UIProcessSubmi.c)
 *     ?GetSubmixesForPID@CDeviceGraphStore@@UEAAJKW4ProcessSubmixCapture@@AEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800E8B30 (-GetSubmixesForPID@CDeviceGraphStore@@UEAAJKW4ProcessSubmixCapture@@AEAV-$vector@V-$com_ptr_t@UI.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800161F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180019A54 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x1800CAFAC (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800CB1E0 (--$_Emplace_reallocate@V-$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wi.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDeviceGraphStore::GetSubmixHelper(__int64 a1, char **a2, __int64 a3)
{
  __int64 v3; // rsi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  const char *v5; // r9
  _QWORD *v6; // rdi
  int v7; // eax
  unsigned int v8; // esi
  __int64 *v9; // rdi
  __int64 *v10; // r14
  __int64 result; // rax
  __int64 *v12; // rsi
  _QWORD *i; // r15
  __int64 *v14; // r14
  int v15; // eax
  unsigned int v16; // r14d
  __int64 *v17; // rdi
  __int64 *v18; // rsi
  __int64 v19; // rcx
  __int64 *v20; // rdi
  __int64 *v21; // rsi
  __int64 *v22; // rsi
  _QWORD *j; // r14
  __int64 *v24; // r12
  int v25; // eax
  unsigned int v26; // r12d
  __int64 *v27; // rdi
  __int64 *v28; // rsi
  __int64 *v29; // rdi
  __int64 *v30; // rsi
  __int64 v31; // rcx
  __int64 *v32; // rdi
  __int64 *v33; // rsi
  __int64 *v34; // r12
  __int64 *k; // rsi
  __int64 *v36; // r13
  __int64 v37; // rcx
  char *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  _QWORD *m; // rax
  __int128 v43; // [rsp+30h] [rbp-88h] BYREF
  __int64 v44; // [rsp+40h] [rbp-78h]
  __int128 v45; // [rsp+48h] [rbp-70h] BYREF
  __int64 v46; // [rsp+58h] [rbp-60h]
  __int128 v47; // [rsp+60h] [rbp-58h] BYREF
  __int64 v48; // [rsp+70h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 v53; // [rsp+D8h] [rbp+20h] BYREF

  v3 = a1;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v6 = **(_QWORD ***)(v3 + 56);
  try
  {
    while ( v6 != *(_QWORD **)(v3 + 56) )
    {
      v43 = 0LL;
      v44 = 0LL;
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v6[8] + 80LL))(v6[8], &v43);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          691LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
          (const char *)(unsigned int)v7);
        v9 = (__int64 *)v43;
        if ( (_QWORD)v43 )
        {
          v10 = (__int64 *)*((_QWORD *)&v43 + 1);
          if ( (_QWORD)v43 != *((_QWORD *)&v43 + 1) )
          {
            do
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v9++);
            while ( v9 != v10 );
            v9 = (__int64 *)v43;
          }
          std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)((v44 - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL));
          v43 = 0LL;
          v44 = 0LL;
        }
        if ( v4 )
          LeaveCriticalSection(v4);
        return v8;
      }
      v12 = (__int64 *)v43;
      for ( i = (_QWORD *)v43; ; ++i )
      {
        v14 = (__int64 *)*((_QWORD *)&v43 + 1);
        if ( i == *((_QWORD **)&v43 + 1) )
          break;
        v45 = 0LL;
        v46 = 0LL;
        v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(*(_QWORD *)v6[8] + 104LL))(v6[8], *i, &v45);
        v16 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            703LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
            (const char *)(unsigned int)v15);
          v17 = (__int64 *)v45;
          if ( (_QWORD)v45 )
          {
            v18 = (__int64 *)*((_QWORD *)&v45 + 1);
            if ( (_QWORD)v45 != *((_QWORD *)&v45 + 1) )
            {
              do
              {
                v19 = *v17;
                if ( *v17 )
                {
                  *v17 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
                }
                ++v17;
              }
              while ( v17 != v18 );
              v17 = (__int64 *)v45;
            }
            std::_Deallocate<16,0>(v17, (const struct std::nothrow_t *)((v46 - (_QWORD)v17) & 0xFFFFFFFFFFFFFFF8uLL));
            v45 = 0LL;
            v46 = 0LL;
          }
          v20 = (__int64 *)v43;
          if ( (_QWORD)v43 )
          {
            v21 = (__int64 *)*((_QWORD *)&v43 + 1);
            if ( (_QWORD)v43 != *((_QWORD *)&v43 + 1) )
            {
              do
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v20++);
              while ( v20 != v21 );
              v20 = (__int64 *)v43;
            }
            std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)((v44 - (_QWORD)v20) & 0xFFFFFFFFFFFFFFF8uLL));
            v43 = 0LL;
            v44 = 0LL;
          }
          if ( v4 )
            LeaveCriticalSection(v4);
          return v16;
        }
        v22 = (__int64 *)v45;
        for ( j = (_QWORD *)v45; ; ++j )
        {
          v24 = (__int64 *)*((_QWORD *)&v45 + 1);
          if ( j == *((_QWORD **)&v45 + 1) )
            break;
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 152LL))(*j)
            || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*j + 240LL))(*j) )
          {
            v47 = 0LL;
            v48 = 0LL;
            v25 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*j + 352LL))(*j, &v47);
            v26 = v25;
            if ( v25 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                716LL,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                (const char *)(unsigned int)v25);
              v27 = (__int64 *)v47;
              if ( (_QWORD)v47 )
              {
                v28 = (__int64 *)*((_QWORD *)&v47 + 1);
                if ( (_QWORD)v47 != *((_QWORD *)&v47 + 1) )
                {
                  do
                    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v27++);
                  while ( v27 != v28 );
                  v27 = (__int64 *)v47;
                }
                std::_Deallocate<16,0>(
                  v27,
                  (const struct std::nothrow_t *)((v48 - (_QWORD)v27) & 0xFFFFFFFFFFFFFFF8uLL));
                v47 = 0LL;
                v48 = 0LL;
              }
              v29 = (__int64 *)v45;
              if ( (_QWORD)v45 )
              {
                v30 = (__int64 *)*((_QWORD *)&v45 + 1);
                if ( (_QWORD)v45 != *((_QWORD *)&v45 + 1) )
                {
                  do
                  {
                    v31 = *v29;
                    if ( *v29 )
                    {
                      *v29 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
                    }
                    ++v29;
                  }
                  while ( v29 != v30 );
                  v29 = (__int64 *)v45;
                }
                std::_Deallocate<16,0>(
                  v29,
                  (const struct std::nothrow_t *)((v46 - (_QWORD)v29) & 0xFFFFFFFFFFFFFFF8uLL));
                v45 = 0LL;
                v46 = 0LL;
              }
              v32 = (__int64 *)v43;
              if ( (_QWORD)v43 )
              {
                v33 = (__int64 *)*((_QWORD *)&v43 + 1);
                if ( (_QWORD)v43 != *((_QWORD *)&v43 + 1) )
                {
                  do
                    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v32++);
                  while ( v32 != v33 );
                  v32 = (__int64 *)v43;
                }
                std::_Deallocate<16,0>(
                  v32,
                  (const struct std::nothrow_t *)((v44 - (_QWORD)v32) & 0xFFFFFFFFFFFFFFF8uLL));
                v43 = 0LL;
                v44 = 0LL;
              }
              if ( v4 )
                LeaveCriticalSection(v4);
              return v26;
            }
            v34 = (__int64 *)v47;
            for ( k = (__int64 *)v47; ; ++k )
            {
              v36 = (__int64 *)*((_QWORD *)&v47 + 1);
              if ( k == *((__int64 **)&v47 + 1) )
                break;
              v37 = *(_QWORD *)(a3 + 56);
              if ( !v37 )
                std::_Xbad_function_call();
              if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 16LL))(v37, k) )
              {
                ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
                  &v53,
                  *k);
                v38 = a2[1];
                if ( a2[2] == v38 )
                {
                  std::vector<wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>>(
                    a2,
                    v38,
                    &v53);
                }
                else
                {
                  v39 = v53;
                  v53 = 0LL;
                  *(_QWORD *)v38 = v39;
                  a2[1] += 8;
                }
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v53);
              }
              v34 = (__int64 *)v47;
            }
            if ( v34 )
            {
              if ( v34 != *((__int64 **)&v47 + 1) )
              {
                do
                  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v34++);
                while ( v34 != v36 );
                v34 = (__int64 *)v47;
              }
              std::_Deallocate<16,0>(v34, (const struct std::nothrow_t *)((v48 - (_QWORD)v34) & 0xFFFFFFFFFFFFFFF8uLL));
            }
          }
          v22 = (__int64 *)v45;
        }
        if ( v22 )
        {
          if ( v22 != *((__int64 **)&v45 + 1) )
          {
            do
            {
              v40 = *v22;
              if ( *v22 )
              {
                *v22 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
              }
              ++v22;
            }
            while ( v22 != v24 );
            v22 = (__int64 *)v45;
          }
          std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)((v46 - (_QWORD)v22) & 0xFFFFFFFFFFFFFFF8uLL));
        }
        v12 = (__int64 *)v43;
      }
      if ( v12 )
      {
        if ( v12 != *((__int64 **)&v43 + 1) )
        {
          do
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v12++);
          while ( v12 != v14 );
          v12 = (__int64 *)v43;
        }
        std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)((v44 - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      v3 = a1;
      if ( !*((_BYTE *)v6 + 25) )
      {
        v41 = v6[2];
        if ( *(_BYTE *)(v41 + 25) )
        {
          for ( m = (_QWORD *)v6[1]; !*((_BYTE *)m + 25) && v6 == (_QWORD *)m[2]; m = (_QWORD *)m[1] )
            v6 = m;
        }
        else
        {
          m = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min((_QWORD *)v41);
        }
        v6 = m;
        v3 = a1;
      }
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2DD,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           v5);
  }
  return result;
}
