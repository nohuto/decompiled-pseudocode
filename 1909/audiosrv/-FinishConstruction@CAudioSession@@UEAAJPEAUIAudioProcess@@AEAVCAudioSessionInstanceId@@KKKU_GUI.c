/*
 * XREFs of ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x18003F960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800260A0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180030A30 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18003FDD0 (--$_Emplace_reallocate@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vector@.c)
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x18003FF1C (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800451FC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180047348 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BC238 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 *     WPP_SF_Sd @ 0x1800C4C2C (WPP_SF_Sd.c)
 *     WPP_SF__guid_ @ 0x1800C9E80 (WPP_SF__guid_.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800D0F38 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall CAudioSession::FinishConstruction(
        CAudioSession *this,
        struct IAudioProcess *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        struct _GUID *a7)
{
  unsigned int v7; // r15d
  struct IAudioProcess *v9; // rsi
  CAudioSession *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rbx
  int v14; // eax
  int cchWideChar; // r12d
  ATL::CStringData *v16; // rcx
  __int64 v17; // r12
  int v18; // ebx
  int v19; // r12d
  ATL::CStringData *v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // eax
  HRESULT v24; // eax
  unsigned int v25; // ebx
  int v26; // eax
  unsigned int v27; // ebx
  int v28; // eax
  unsigned int v29; // ebx
  __int64 v30; // rax
  const char *v31; // r9
  __int64 v32; // rax
  const char *v33; // r9
  const char *v34; // r9
  __int64 result; // rax
  ATL::CAtlException *v36; // rbx
  ATL::CAtlException *v37; // rbx
  struct IAudioProcess **v38; // rdx
  struct IAudioProcess *v39; // rax
  WCHAR *v40; // rdx
  WCHAR *v41; // r10
  unsigned int lpWideCharStr; // [rsp+20h] [rbp-98h]
  int v43; // [rsp+30h] [rbp-88h]
  int v44; // [rsp+30h] [rbp-88h]
  struct IAudioProcess *v46; // [rsp+40h] [rbp-78h] BYREF
  struct IAudioProcess *v47; // [rsp+48h] [rbp-70h] BYREF
  __int64 v48; // [rsp+50h] [rbp-68h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-60h] BYREF
  char v50; // [rsp+60h] [rbp-58h]
  __int64 v51; // [rsp+68h] [rbp-50h]
  ATL::CAtlException *v52; // [rsp+70h] [rbp-48h] BYREF
  ATL::CAtlException *v53; // [rsp+78h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v51 = -2LL;
  v7 = a4;
  v9 = a2;
  v10 = this;
  v48 = (__int64)this;
  v46 = a2;
  try
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        41,
        (unsigned int)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
        *((_QWORD *)a3 + 9),
        a4);
    }
    v47 = v9;
    if ( v9 )
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 8LL))(v9);
    if ( *((_QWORD *)v10 + 99) == *((_QWORD *)v10 + 98) )
    {
      std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
        (char *)v10 + 776,
        *((_QWORD *)v10 + 98),
        &v47);
    }
    else
    {
      v38 = (struct IAudioProcess **)*((_QWORD *)v10 + 98);
      v39 = v47;
      v47 = 0LL;
      *v38 = v39;
      *((_QWORD *)v10 + 98) += 8LL;
    }
    if ( v47 )
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v47 + 16LL))(v47);
    *((_BYTE *)v10 + 800) = (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 96LL))(v9) != 0;
    v11 = CAudioSessionInstanceId::Copy((CAudioSession *)((char *)v10 + 656), a3);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7FE,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v11);
      return v12;
    }
    v13 = *((_QWORD *)v10 + 91);
    v14 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 40LL))(v9);
    *((_QWORD *)v10 + 117) = v13;
    *((_DWORD *)v10 + 236) = v14;
    *((_BYTE *)v10 + 303) = (v7 & 1) != 0;
    if ( (v7 & 1) != 0 )
      *((_DWORD *)v10 + 78) = 2000;
    if ( (v7 & 4) != 0 )
    {
      try
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(
          (char *)v10 + 320,
          L"@%SystemRoot%\\System32\\AudioSrv.Dll,-202");
      }
      catch ( ATL::CAtlException *v52 )
      {
        v36 = v52;
        if ( *(_DWORD *)v52 == -1073741571 )
          _o__resetstkoflw();
        v43 = *(_DWORD *)v36;
        if ( v43 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x815,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v43);
          return (unsigned int)v43;
        }
        v10 = (CAudioSession *)v48;
        v9 = v46;
        v7 = a4;
      }
      try
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(
          (char *)v10 + 328,
          L"@%SystemRoot%\\System32\\AudioSrv.Dll,-203");
      }
      catch ( ATL::CAtlException *v53 )
      {
        v37 = v53;
        if ( *(_DWORD *)v53 == -1073741571 )
          _o__resetstkoflw();
        v44 = *(_DWORD *)v37;
        if ( v44 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x818,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v44);
          return (unsigned int)v44;
        }
        v10 = (CAudioSession *)v48;
        v9 = v46;
        v7 = a4;
      }
      *((_BYTE *)v10 + 302) = 1;
      *((_DWORD *)v10 + 78) = 5000;
      v18 = 1;
    }
    else
    {
      cchWideChar = MultiByteToWideChar(3u, 0, MultiByteStr, -1, 0LL, 0) - 1;
      if ( cchWideChar > 0 )
      {
        v40 = (WCHAR *)*((_QWORD *)v10 + 40);
        v18 = 1;
        if ( ((1 - *((_DWORD *)v40 - 2)) | (*((_DWORD *)v40 - 3) - cchWideChar)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)v10 + 40, cchWideChar);
          v40 = (WCHAR *)*((_QWORD *)v10 + 40);
        }
        MultiByteToWideChar(3u, 0, MultiByteStr, -1, v40, cchWideChar);
        ATL::CSimpleStringT<unsigned short,0>::SetLength((char *)v10 + 320, (unsigned int)cchWideChar);
      }
      else
      {
        v16 = (ATL::CStringData *)(*((_QWORD *)v10 + 40) - 24LL);
        v17 = *(_QWORD *)v16;
        if ( *((_DWORD *)v16 + 2) )
        {
          if ( *((int *)v16 + 4) >= 0 )
          {
            ATL::CStringData::Release(v16);
            *((_QWORD *)v10 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17) + 24;
          }
          else
          {
            ATL::CSimpleStringT<unsigned short,0>::SetLength((char *)v10 + 320, 0LL);
          }
        }
        v18 = 1;
      }
      v19 = MultiByteToWideChar(3u, 0, MultiByteStr, -1, 0LL, 0) - 1;
      if ( v19 > 0 )
      {
        v41 = (WCHAR *)*((_QWORD *)v10 + 41);
        if ( ((1 - *((_DWORD *)v41 - 2)) | (*((_DWORD *)v41 - 3) - v19)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)v10 + 41, v19);
          v41 = (WCHAR *)*((_QWORD *)v10 + 41);
        }
        MultiByteToWideChar(3u, 0, MultiByteStr, -1, v41, v19);
        ATL::CSimpleStringT<unsigned short,0>::SetLength((char *)v10 + 328, (unsigned int)v19);
      }
      else
      {
        v20 = (ATL::CStringData *)(*((_QWORD *)v10 + 41) - 24LL);
        v46 = *(struct IAudioProcess **)v20;
        if ( *((_DWORD *)v20 + 2) )
        {
          if ( *((int *)v20 + 4) >= 0 )
          {
            ATL::CStringData::Release(v20);
            *((_QWORD *)v10 + 41) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v46 + 24LL))(v46)
                                  + 24;
          }
          else
          {
            ATL::CSimpleStringT<unsigned short,0>::SetLength((char *)v10 + 328, 0LL);
          }
        }
      }
    }
    if ( (v7 & 0x20) == 0 )
      v18 = 0;
    *((_DWORD *)v10 + 120) = v18;
    *((_DWORD *)v10 + 76) = a5;
    *((_DWORD *)v10 + 77) = v7;
    *((_DWORD *)v10 + 69) = a6;
    v21 = *(_QWORD *)&a7->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a7->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v21 = *(_QWORD *)a7->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v21 )
    {
      *(struct _GUID *)((char *)v10 + 284) = *a7;
      *((_BYTE *)v10 + 300) = 1;
    }
    else
    {
      v22 = UuidCreate((UUID *)((char *)v10 + 284));
      if ( v22 )
        return wil::details::in1diag3::Return_Win32(
                 retaddr,
                 (void *)0x82E,
                 (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                 (const char *)v22,
                 lpWideCharStr);
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        42LL,
        &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
        (char *)v10 + 284);
    }
    v23 = UuidCreate((UUID *)v10 + 21);
    if ( v23 )
    {
      result = wil::details::in1diag3::Return_Win32(
                 retaddr,
                 (void *)0x838,
                 (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                 (const char *)v23,
                 lpWideCharStr);
    }
    else
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF__guid_(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          43LL,
          &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
          (char *)v10 + 336);
      }
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)v10 + 808);
      v50 = 0;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      *((_DWORD *)v10 + 212) = 1065353216;
      if ( v50 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v50 = 0;
      }
      v24 = PSCreateMemoryPropertyStore(&IID_IPropertyStore, (void **)v10 + 61);
      v25 = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x840,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)v24);
        result = v25;
      }
      else
      {
        v26 = (*(__int64 (__fastcall **)(CAudioSession *, _QWORD))(*(_QWORD *)v10 + 248LL))(v10, v7);
        v27 = v26;
        if ( v26 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x842,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v26);
          result = v27;
        }
        else
        {
          v28 = (*(__int64 (__fastcall **)(struct IAudioProcess *, CAudioSession *))(*(_QWORD *)v9 + 24LL))(v9, v10);
          v29 = v28;
          if ( v28 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x845,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
              (const char *)(unsigned int)v28);
            result = v29;
          }
          else
          {
            v30 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), CAudioSession *))(*(_QWORD *)ThreadPool + 8LL))(
                    ThreadPool,
                    CAudioSession::InactiveTimerCallback,
                    v10);
            *((_QWORD *)v10 + 75) = v30;
            if ( v30 )
            {
              v32 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, CAudioSession *))(*(_QWORD *)ThreadPool
                                                                                                  + 56LL))(
                      ThreadPool,
                      CAudioSession::StateCheckExpiredCallback,
                      v10);
              *((_QWORD *)v10 + 76) = v32;
              if ( v32 )
              {
                if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_q(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    84LL,
                    &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
                    v10);
                }
                v48 = -10000LL * *((unsigned int *)v10 + 78);
                v46 = (struct IAudioProcess *)v48;
                (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, struct IAudioProcess **, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
                  ThreadPool,
                  *((_QWORD *)v10 + 75),
                  &v46,
                  0LL,
                  100);
                result = 0LL;
              }
              else
              {
                result = wil::details::in1diag3::Return_GetLastError(
                           retaddr,
                           (void *)0x84C,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v33);
              }
            }
            else
            {
              result = wil::details::in1diag3::Return_GetLastError(
                         retaddr,
                         (void *)0x849,
                         (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                         v31);
            }
          }
        }
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x855,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v34);
  }
  return result;
}
