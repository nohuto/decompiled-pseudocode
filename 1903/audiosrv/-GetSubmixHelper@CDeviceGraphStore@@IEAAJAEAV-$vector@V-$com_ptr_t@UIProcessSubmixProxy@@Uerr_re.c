/*
 * XREFs of ?GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$$QEAV?$function@$$A6A_NAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z@3@@Z @ 0x1800F33EC
 * Callers:
 *     ?GetSubmixesForApplication@CDeviceGraphStore@@UEAAJPEBGKAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800F3AF0 (-GetSubmixesForApplication@CDeviceGraphStore@@UEAAJPEBGKAEAV-$vector@V-$com_ptr_t@UIProcessSubmi.c)
 *     ?GetSubmixesForPID@CDeviceGraphStore@@UEAAJKW4ProcessSubmixCapture@@AEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800F3C00 (-GetSubmixesForPID@CDeviceGraphStore@@UEAAJKW4ProcessSubmixCapture@@AEAV-$vector@V-$com_ptr_t@UI.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180004FE0 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180044928 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800513D4 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800D5A2C (--1-$vector@V-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIProcessSubm.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@PEAU32@@Z @ 0x1800D999C (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800D9BB0 (--$_Emplace_reallocate@V-$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800F1B98 (--$_Emplace_reallocate@AEBV-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@-$vector@V-$ComP.c)
 *     ?_Tidy@?$vector@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1800F40B0 (-_Tidy@-$vector@V-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIDe.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CDeviceGraphStore::GetSubmixHelper(__int64 a1, char **a2, __int64 a3)
{
  char *v4; // r15
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  _QWORD *v6; // rbx
  char *v7; // r14
  char *v8; // r12
  __int64 *v9; // r8
  __int64 v10; // rcx
  _QWORD *i; // rax
  char *j; // r13
  int v13; // eax
  unsigned int v14; // esi
  const char *v15; // r9
  __int64 *v16; // rbx
  __int64 *v17; // rdi
  char *kk; // rbx
  __int64 v19; // rcx
  __int64 result; // rax
  __int64 *v21; // rbx
  _QWORD *k; // rsi
  __int64 *v23; // rdi
  int v24; // eax
  unsigned int v25; // r13d
  __int64 *v26; // rbx
  __int64 *v27; // rdi
  __int64 *v28; // rbx
  __int64 *v29; // rdi
  char *m; // rbx
  __int64 v31; // rcx
  __int64 *v32; // rbx
  _QWORD *n; // rdi
  __int64 *v34; // r13
  int v35; // eax
  unsigned int v36; // r13d
  __int64 *v37; // rbx
  __int64 *v38; // rdi
  __int64 *v39; // rbx
  __int64 *v40; // rdi
  __int64 *v41; // rbx
  __int64 *v42; // rdi
  char *ii; // rbx
  __int64 v44; // rcx
  __int64 *jj; // rbx
  __int64 v46; // rcx
  char **v47; // rcx
  char *v48; // rdx
  __int64 v49; // rax
  int v50[4]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+30h] [rbp-98h]
  __int128 v52; // [rsp+38h] [rbp-90h] BYREF
  __int64 v53; // [rsp+48h] [rbp-80h]
  __int128 v54; // [rsp+50h] [rbp-78h] BYREF
  __int64 v55; // [rsp+60h] [rbp-68h]
  char *v56; // [rsp+68h] [rbp-60h] BYREF
  __int128 v57; // [rsp+70h] [rbp-58h]
  __int64 v58; // [rsp+80h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v60; // [rsp+D0h] [rbp+8h] BYREF
  char **v61; // [rsp+D8h] [rbp+10h]
  __int64 v62; // [rsp+E0h] [rbp+18h]
  char *v63; // [rsp+E8h] [rbp+20h]

  v62 = a3;
  v61 = a2;
  v58 = -2LL;
  v4 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v60 = v5;
  v6 = **(_QWORD ***)(a1 + 56);
  v7 = 0LL;
  v8 = 0LL;
  try
  {
    while ( v6 != *(_QWORD **)(a1 + 56) )
    {
      v9 = v6 + 8;
      if ( v7 == v8 )
      {
        std::vector<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore> const &>(
          &v56,
          v8,
          v9);
        v7 = (char *)*((_QWORD *)&v57 + 1);
        v8 = (char *)v57;
        v4 = v56;
      }
      else
      {
        *(_QWORD *)v8 = *v9;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)v8);
        v8 += 8;
        *(_QWORD *)&v57 = v8;
      }
      v10 = v6[2];
      if ( *(_BYTE *)(v10 + 25) )
      {
        for ( i = (_QWORD *)v6[1]; !*((_BYTE *)i + 25) && v6 == (_QWORD *)i[2]; i = (_QWORD *)i[1] )
          v6 = i;
      }
      else
      {
        i = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>::_Min((_QWORD *)v10);
      }
      v6 = i;
    }
    if ( v5 )
      LeaveCriticalSection(v5);
    for ( j = v4; ; j += 8 )
    {
      v63 = j;
      if ( j == v8 )
      {
        std::vector<Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>::_Tidy(&v56);
        return 0LL;
      }
      *(_OWORD *)v50 = 0LL;
      v51 = 0LL;
      v13 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)j + 80LL))(*(_QWORD *)j, v50);
      v14 = v13;
      if ( v13 < 0 )
        break;
      v21 = *(__int64 **)v50;
      for ( k = *(_QWORD **)v50; ; ++k )
      {
        v23 = *(__int64 **)&v50[2];
        if ( k == *(_QWORD **)&v50[2] )
          break;
        v52 = 0LL;
        v53 = 0LL;
        v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)j + 104LL))(*(_QWORD *)j, *k, &v52);
        v25 = v24;
        if ( v24 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2C5,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
            (const char *)(unsigned int)v24);
          v26 = (__int64 *)v52;
          if ( (_QWORD)v52 )
          {
            v27 = (__int64 *)*((_QWORD *)&v52 + 1);
            if ( (_QWORD)v52 != *((_QWORD *)&v52 + 1) )
            {
              do
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v26++);
              while ( v26 != v27 );
              v26 = (__int64 *)v52;
            }
            std::_Deallocate<16,0>(v26, (const struct std::nothrow_t *)((v53 - (_QWORD)v26) & 0xFFFFFFFFFFFFFFF8uLL));
            v52 = 0LL;
            v53 = 0LL;
          }
          v28 = *(__int64 **)v50;
          if ( *(_QWORD *)v50 )
          {
            v29 = *(__int64 **)&v50[2];
            if ( *(_QWORD *)v50 != *(_QWORD *)&v50[2] )
            {
              do
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v28++);
              while ( v28 != v29 );
              v28 = *(__int64 **)v50;
            }
            std::_Deallocate<16,0>(v28, (const struct std::nothrow_t *)((v51 - (_QWORD)v28) & 0xFFFFFFFFFFFFFFF8uLL));
            *(_OWORD *)v50 = 0LL;
            v51 = 0LL;
          }
          if ( v4 )
          {
            for ( m = v4; m != v8; m += 8 )
            {
              v31 = *(_QWORD *)m;
              if ( *(_QWORD *)m )
              {
                *(_QWORD *)m = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
              }
            }
            std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)(8 * ((v7 - v4) >> 3)));
          }
          return v25;
        }
        v32 = (__int64 *)v52;
        for ( n = (_QWORD *)v52; ; ++n )
        {
          v34 = (__int64 *)*((_QWORD *)&v52 + 1);
          if ( n == *((_QWORD **)&v52 + 1) )
            break;
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*n + 152LL))(*n)
            || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*n + 240LL))(*n) )
          {
            v54 = 0LL;
            v55 = 0LL;
            v35 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*n + 352LL))(*n, &v54);
            v36 = v35;
            if ( v35 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x2D2,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                (const char *)(unsigned int)v35);
              v37 = (__int64 *)v54;
              if ( (_QWORD)v54 )
              {
                v38 = (__int64 *)*((_QWORD *)&v54 + 1);
                if ( (_QWORD)v54 != *((_QWORD *)&v54 + 1) )
                {
                  do
                    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v37++);
                  while ( v37 != v38 );
                  v37 = (__int64 *)v54;
                }
                std::_Deallocate<16,0>(
                  v37,
                  (const struct std::nothrow_t *)((v55 - (_QWORD)v37) & 0xFFFFFFFFFFFFFFF8uLL));
                v54 = 0LL;
                v55 = 0LL;
              }
              v39 = (__int64 *)v52;
              if ( (_QWORD)v52 )
              {
                v40 = (__int64 *)*((_QWORD *)&v52 + 1);
                if ( (_QWORD)v52 != *((_QWORD *)&v52 + 1) )
                {
                  do
                    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v39++);
                  while ( v39 != v40 );
                  v39 = (__int64 *)v52;
                }
                std::_Deallocate<16,0>(
                  v39,
                  (const struct std::nothrow_t *)((v53 - (_QWORD)v39) & 0xFFFFFFFFFFFFFFF8uLL));
                v52 = 0LL;
                v53 = 0LL;
              }
              v41 = *(__int64 **)v50;
              if ( *(_QWORD *)v50 )
              {
                v42 = *(__int64 **)&v50[2];
                if ( *(_QWORD *)v50 != *(_QWORD *)&v50[2] )
                {
                  do
                    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v41++);
                  while ( v41 != v42 );
                  v41 = *(__int64 **)v50;
                }
                std::_Deallocate<16,0>(
                  v41,
                  (const struct std::nothrow_t *)((v51 - (_QWORD)v41) & 0xFFFFFFFFFFFFFFF8uLL));
                *(_OWORD *)v50 = 0LL;
                v51 = 0LL;
              }
              if ( v4 )
              {
                for ( ii = v4; ii != v8; ii += 8 )
                {
                  v44 = *(_QWORD *)ii;
                  if ( *(_QWORD *)ii )
                  {
                    *(_QWORD *)ii = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
                  }
                }
                std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)(8 * ((v7 - v4) >> 3)));
              }
              return v36;
            }
            for ( jj = (__int64 *)v54; jj != *((__int64 **)&v54 + 1); ++jj )
            {
              v46 = *(_QWORD *)(v62 + 56);
              if ( !v46 )
                std::_Xbad_function_call();
              if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v46 + 16LL))(v46, jj) )
              {
                ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
                  &v60,
                  *jj);
                v47 = v61;
                v48 = v61[1];
                if ( v61[2] == v48 )
                {
                  std::vector<wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>>(
                    v61,
                    v48,
                    (__int64 *)&v60);
                }
                else
                {
                  v49 = (__int64)v60;
                  v60 = 0LL;
                  *(_QWORD *)v48 = v49;
                  v47[1] += 8;
                }
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v60);
              }
            }
            std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>((__int64)&v54);
          }
          v32 = (__int64 *)v52;
        }
        if ( v32 )
        {
          if ( v32 != *((__int64 **)&v52 + 1) )
          {
            do
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v32++);
            while ( v32 != v34 );
            v32 = (__int64 *)v52;
          }
          std::_Deallocate<16,0>(v32, (const struct std::nothrow_t *)((v53 - (_QWORD)v32) & 0xFFFFFFFFFFFFFFF8uLL));
        }
        v21 = *(__int64 **)v50;
        j = v63;
      }
      if ( v21 )
      {
        if ( v21 != *(__int64 **)&v50[2] )
        {
          do
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v21++);
          while ( v21 != v23 );
          v21 = *(__int64 **)v50;
        }
        std::_Deallocate<16,0>(v21, (const struct std::nothrow_t *)((v51 - (_QWORD)v21) & 0xFFFFFFFFFFFFFFF8uLL));
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B9,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
      (const char *)(unsigned int)v13);
    v16 = *(__int64 **)v50;
    if ( *(_QWORD *)v50 )
    {
      v17 = *(__int64 **)&v50[2];
      if ( *(_QWORD *)v50 != *(_QWORD *)&v50[2] )
      {
        do
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v16++);
        while ( v16 != v17 );
        v16 = *(__int64 **)v50;
      }
      std::_Deallocate<16,0>(v16, (const struct std::nothrow_t *)((v51 - (_QWORD)v16) & 0xFFFFFFFFFFFFFFF8uLL));
      *(_OWORD *)v50 = 0LL;
      v51 = 0LL;
    }
    if ( v4 )
    {
      for ( kk = v4; kk != v8; kk += 8 )
      {
        v19 = *(_QWORD *)kk;
        if ( *(_QWORD *)kk )
        {
          *(_QWORD *)kk = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)(8 * ((v7 - v4) >> 3)));
    }
    result = v14;
  }
  catch ( ... )
  {
    LODWORD(v60) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x2E3,
                     (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                     v15);
    return (unsigned int)v60;
  }
  return result;
}
