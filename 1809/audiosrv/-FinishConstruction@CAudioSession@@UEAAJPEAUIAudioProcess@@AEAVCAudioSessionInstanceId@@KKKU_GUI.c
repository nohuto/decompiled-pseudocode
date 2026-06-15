/*
 * XREFs of ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x180007DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800084B0 (--$_Emplace_reallocate@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vector@.c)
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x1800085F4 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180013618 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001FAA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001FB10 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18002B690 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x1800646A8 (-StartInactiveTimer@CAudioSession@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800ADD68 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     WPP_SF_Sd @ 0x1800B69FC (WPP_SF_Sd.c)
 *     WPP_SF__guid_ @ 0x1800BBBE0 (WPP_SF__guid_.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800C2BC4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall CAudioSession::FinishConstruction(
        struct _RTL_CRITICAL_SECTION *this,
        struct IAudioProcess *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        struct _GUID *a7)
{
  unsigned int v7; // r13d
  struct IAudioProcess *v9; // r15
  CAudioSession *v10; // rdi
  struct IAudioProcess **v11; // rdx
  struct IAudioProcess *v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  const char *v15; // r9
  __int64 result; // rax
  __int64 v17; // rbx
  int v18; // eax
  WCHAR **v19; // r12
  int cchWideChar; // ebx
  WCHAR *v21; // rdx
  int *v22; // rcx
  __int64 v23; // rbx
  WCHAR **v24; // rbx
  int v25; // esi
  WCHAR *v26; // rcx
  ATL::CStringData *v27; // rcx
  __int64 v28; // rsi
  LPCRITICAL_SECTION v29; // rbx
  unsigned int v30; // eax
  unsigned int v31; // eax
  HRESULT v32; // eax
  unsigned int v33; // ebx
  int v34; // eax
  unsigned int v35; // ebx
  int v36; // eax
  unsigned int v37; // ebx
  __int64 v38; // rax
  const char *v39; // r9
  __int64 v40; // rax
  const char *v41; // r9
  ATL::CAtlException *v42; // rbx
  ATL::CAtlException *v43; // rbx
  unsigned int lpWideCharStr; // [rsp+20h] [rbp-98h]
  int v45; // [rsp+30h] [rbp-88h]
  int v46; // [rsp+30h] [rbp-88h]
  struct IAudioProcess *v48; // [rsp+40h] [rbp-78h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-70h] BYREF
  char v50; // [rsp+50h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v51; // [rsp+58h] [rbp-60h]
  struct IAudioProcess *v52; // [rsp+60h] [rbp-58h]
  __int64 v53; // [rsp+68h] [rbp-50h]
  ATL::CAtlException *v54; // [rsp+70h] [rbp-48h] BYREF
  ATL::CAtlException *v55; // [rsp+78h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v53 = -2LL;
  v7 = a4;
  v9 = a2;
  v10 = (CAudioSession *)this;
  v51 = this;
  lpCriticalSection = this;
  v52 = a2;
  try
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        41,
        (unsigned int)&WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
        *((_QWORD *)a3 + 9),
        a4);
    }
    v48 = v9;
    if ( v9 )
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 8LL))(v9);
    if ( *((_QWORD *)v10 + 104) == *((_QWORD *)v10 + 103) )
    {
      std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
        (char *)v10 + 816,
        *((_QWORD *)v10 + 103),
        &v48);
    }
    else
    {
      v11 = (struct IAudioProcess **)*((_QWORD *)v10 + 103);
      v12 = v48;
      v48 = 0LL;
      *v11 = v12;
      *((_QWORD *)v10 + 103) += 8LL;
    }
    if ( v48 )
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v48 + 16LL))(v48);
    *((_BYTE *)v10 + 840) = (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 96LL))(v9) != 0;
    v13 = CAudioSessionInstanceId::Copy((CAudioSession *)((char *)v10 + 696), a3);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7FF,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v13,
        lpWideCharStr);
      return v14;
    }
    v17 = *((_QWORD *)v10 + 96);
    v18 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 40LL))(v9);
    *((_QWORD *)v10 + 122) = v17;
    *((_DWORD *)v10 + 246) = v18;
    *((_BYTE *)v10 + 303) = v7 & 1;
    if ( (v7 & 1) != 0 )
      *((_DWORD *)v10 + 78) = 2000;
    if ( (v7 & 4) != 0 )
    {
      try
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(
          (char *)v10 + 320,
          L"@%SystemRoot%\\System32\\AudioSrv.Dll,-202",
          40LL);
      }
      catch ( ATL::CAtlException *v54 )
      {
        v42 = v54;
        if ( *(_DWORD *)v54 == -1073741571 )
          _o__resetstkoflw();
        v45 = *(_DWORD *)v42;
        if ( v45 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x816,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v45,
            lpWideCharStr);
          return (unsigned int)v45;
        }
        v10 = (CAudioSession *)v51;
        v9 = v52;
        v7 = a4;
      }
      try
      {
        ATL::CSimpleStringT<unsigned short,0>::SetString(
          (char *)v10 + 328,
          L"@%SystemRoot%\\System32\\AudioSrv.Dll,-203",
          40LL);
      }
      catch ( ATL::CAtlException *v55 )
      {
        v43 = v55;
        if ( *(_DWORD *)v55 == -1073741571 )
          _o__resetstkoflw();
        v46 = *(_DWORD *)v43;
        if ( v46 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x819,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v46,
            lpWideCharStr);
          return (unsigned int)v46;
        }
        v10 = (CAudioSession *)v51;
        v9 = v52;
        v7 = a4;
      }
      *((_BYTE *)v10 + 302) = 1;
      *((_DWORD *)v10 + 78) = 5000;
    }
    else
    {
      v19 = (WCHAR **)((char *)v10 + 320);
      cchWideChar = MultiByteToWideChar(3u, 0, MultiByteStr, -1, 0LL, 0) - 1;
      v21 = (WCHAR *)*((_QWORD *)v10 + 40);
      if ( cchWideChar <= 0 )
      {
        v22 = (int *)(v21 - 12);
        v23 = *((_QWORD *)v21 - 3);
        if ( *((_DWORD *)v21 - 4) )
        {
          if ( v22[4] >= 0 )
          {
            ATL::CStringData::Release((ATL::CStringData *)v22);
            *v19 = (WCHAR *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 24LL))(v23) + 24);
          }
          else
          {
            ATL::CSimpleStringT<unsigned short,0>::SetLength((char *)v10 + 320, 0LL);
          }
        }
      }
      else
      {
        if ( ((1 - *((_DWORD *)v21 - 2)) | (*((_DWORD *)v21 - 3) - cchWideChar)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((char *)v10 + 320, (unsigned int)cchWideChar);
          v21 = *v19;
        }
        MultiByteToWideChar(3u, 0, MultiByteStr, -1, v21, cchWideChar);
        ATL::CSimpleStringT<unsigned short,0>::SetLength((char *)v10 + 320, (unsigned int)cchWideChar);
      }
      v24 = (WCHAR **)((char *)v10 + 328);
      v25 = MultiByteToWideChar(3u, 0, MultiByteStr, -1, 0LL, 0) - 1;
      v26 = (WCHAR *)*((_QWORD *)v10 + 41);
      if ( v25 <= 0 )
      {
        v27 = (ATL::CStringData *)(v26 - 12);
        v28 = *(_QWORD *)v27;
        if ( *((_DWORD *)v27 + 2) )
        {
          if ( *((int *)v27 + 4) >= 0 )
          {
            ATL::CStringData::Release(v27);
            *v24 = (WCHAR *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 24LL))(v28) + 24);
          }
          else
          {
            ATL::CSimpleStringT<unsigned short,0>::SetLength((char *)v10 + 328, 0LL);
          }
        }
      }
      else
      {
        if ( ((1 - *((_DWORD *)v26 - 2)) | (*((_DWORD *)v26 - 3) - v25)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((char *)v10 + 328, (unsigned int)v25);
          v26 = *v24;
        }
        MultiByteToWideChar(3u, 0, MultiByteStr, -1, v26, v25);
        ATL::CSimpleStringT<unsigned short,0>::SetLength((char *)v10 + 328, (unsigned int)v25);
      }
    }
    *((_DWORD *)v10 + 120) = (v7 >> 5) & 1;
    *((_DWORD *)v10 + 76) = a5;
    *((_DWORD *)v10 + 77) = v7;
    *((_DWORD *)v10 + 69) = a6;
    v29 = lpCriticalSection;
    if ( *(_QWORD *)&a7->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
      && *(_QWORD *)a7->Data4 == *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
    {
      v30 = UuidCreate((UUID *)((char *)&lpCriticalSection[7].DebugInfo + 4));
      if ( v30 )
        return wil::details::in1diag3::Return_Win32(
                 retaddr,
                 (void *)0x82F,
                 (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                 (const char *)v30,
                 lpWideCharStr);
    }
    else
    {
      *(struct _GUID *)((char *)&lpCriticalSection[7].DebugInfo + 4) = *a7;
      *((_BYTE *)v10 + 300) = 1;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        42LL,
        &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
        (char *)&v29[7].DebugInfo + 4);
    }
    v31 = UuidCreate((UUID *)v10 + 21);
    if ( v31 )
    {
      result = wil::details::in1diag3::Return_Win32(
                 retaddr,
                 (void *)0x839,
                 (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                 (const char *)v31,
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
          &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
          (char *)v10 + 336);
      }
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)v10 + 848);
      v50 = 0;
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
      *((_DWORD *)v10 + 222) = 1065353216;
      if ( v50 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v50 = 0;
      }
      v32 = PSCreateMemoryPropertyStore(&IID_IPropertyStore, (void **)v10 + 61);
      v33 = v32;
      if ( v32 >= 0 )
      {
        v34 = (*(__int64 (__fastcall **)(CAudioSession *, _QWORD))(*(_QWORD *)v10 + 248LL))(v10, v7);
        v35 = v34;
        if ( v34 >= 0 )
        {
          v36 = (*(__int64 (__fastcall **)(struct IAudioProcess *, CAudioSession *))(*(_QWORD *)v9 + 24LL))(v9, v10);
          v37 = v36;
          if ( v36 >= 0 )
          {
            v38 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), CAudioSession *))(*(_QWORD *)ThreadPool + 8LL))(
                    ThreadPool,
                    CAudioSession::InactiveTimerCallback,
                    v10);
            *((_QWORD *)v10 + 75) = v38;
            if ( v38 )
            {
              v40 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WORK *), CAudioSession *))(*(_QWORD *)ThreadPool + 56LL))(
                      ThreadPool,
                      CAudioSession::StateCheckExpiredCallback,
                      v10);
              *((_QWORD *)v10 + 76) = v40;
              if ( v40 )
              {
                CAudioSession::StartInactiveTimer(v10);
                result = 0LL;
              }
              else
              {
                result = wil::details::in1diag3::Return_GetLastError(
                           retaddr,
                           (void *)0x84D,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v41);
              }
            }
            else
            {
              result = wil::details::in1diag3::Return_GetLastError(
                         retaddr,
                         (void *)0x84A,
                         (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                         v39);
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x846,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
              (const char *)(unsigned int)v36,
              lpWideCharStr);
            result = v37;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x843,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v34,
            lpWideCharStr);
          result = v35;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x841,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)v32,
          lpWideCharStr);
        result = v33;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x856,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                           v15);
  }
  return result;
}
