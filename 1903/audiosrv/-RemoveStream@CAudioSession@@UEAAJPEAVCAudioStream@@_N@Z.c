/*
 * XREFs of ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x180049E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180025B10 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180064CCA (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18006B90F (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800BCEF8 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800C9050 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x1800CD054 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x1800D11B0 (-RemoveAt@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1EF0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     WPP_SF_dq @ 0x1800D22A0 (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x1800D2488 (WPP_SF_qq.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::RemoveStream(CAudioSession *this, struct CAudioStream *a2, char a3)
{
  char v3; // si
  char v6; // r12
  unsigned int v7; // r15d
  size_t v8; // rdi
  unsigned int v9; // edx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  size_t *v14; // r9
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rcx
  __int64 v19; // r9
  int v20; // eax
  void *v21; // rcx
  unsigned int v22; // r8d
  const char *v23; // r9
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // r8
  _QWORD *v27; // r9
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdx
  size_t v31; // r14
  void *v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // r8
  const void *v35; // rdx
  unsigned __int64 v36; // rdx
  size_t v37; // rax
  void *v38; // rax
  void *v39; // r14
  __int64 v40; // rcx
  void *v41; // rdx
  unsigned int v42; // r12d
  __int64 v43; // r14
  char *v44; // rax
  char *v45; // r13
  _QWORD *v46; // rax
  __int64 v47; // r8
  const void *v48; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-28h] BYREF
  char v50; // [rsp+40h] [rbp-20h]
  LPCRITICAL_SECTION v51; // [rsp+48h] [rbp-18h] BYREF
  CAudioSession *v52; // [rsp+50h] [rbp-10h]
  size_t v53; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  size_t v55; // [rsp+A0h] [rbp+40h] BYREF
  char v56; // [rsp+B0h] [rbp+50h]

  v56 = a3;
  v3 = a3;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 62LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, this, a2);
  }
  (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)a2 + 160LL))(a2);
  v51 = (LPCRITICAL_SECTION)((char *)this + 48);
  LOBYTE(v52) = 0;
  ATL::CCritSecLock::Lock(&v51);
  v9 = 0;
  LODWORD(v55) = 0;
  if ( !*((_QWORD *)this + 13) )
    goto LABEL_18;
  v10 = 0LL;
  v11 = *((_QWORD *)this + 13);
  if ( !v11 )
    ATL::AtlThrowImpl(-2147024809);
  while ( *(struct CAudioStream **)(*((_QWORD *)this + 12) + 8 * v10) != a2 )
  {
    LODWORD(v55) = ++v9;
    v10 = v9;
    if ( v9 >= v11 )
      goto LABEL_17;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v33 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                      (char *)this + 96,
                      v10);
    WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 63LL, v34, (unsigned int)v55, *v33);
  }
  v6 = 1;
  v12 = *((_QWORD *)this + 13);
  if ( v10 >= v12 )
    ATL::AtlThrowImpl(-2147024809);
  v13 = *((_QWORD *)this + 12);
  v14 = (size_t *)(v13 + 8 * v10);
  v8 = *v14;
  v15 = v10 + 1;
  if ( v10 + 1 < v10 || v15 > v12 )
    ATL::AtlThrowImpl(-2147024809);
  v16 = v12 - v15;
  if ( v16 )
  {
    v35 = (const void *)(v13 + 8 * v15);
    if ( 8 * v16 )
    {
      if ( !v14 || !v35 )
      {
        *(_DWORD *)_o__errno(v15) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      memmove_0(v14, v35, 8 * v16);
    }
  }
  --*((_QWORD *)this + 13);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 200);
  v50 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v17 = *((_QWORD *)this + 31);
  v18 = *((_QWORD *)this + 32);
  if ( v17 >= v18 )
  {
    v31 = v17 + 1;
    if ( v17 + 1 > v18 )
    {
      if ( !*((_QWORD *)this + 30) )
      {
        if ( *((int *)this + 66) > v31 )
          v31 = *((int *)this + 66);
        v32 = calloc(v31, 8uLL);
        *((_QWORD *)this + 30) = v32;
        if ( v32 )
        {
          *((_QWORD *)this + 32) = v31;
          goto LABEL_13;
        }
LABEL_70:
        ATL::AtlThrowImpl(-2147024882);
      }
      v36 = *((int *)this + 66);
      if ( !*((_DWORD *)this + 66) )
      {
        v36 = v18 >> 1;
        if ( v31 - v18 > v18 >> 1 )
          v36 = v31 - v18;
      }
      v37 = v18 + v36;
      if ( v31 >= v18 + v36 )
        v37 = v17 + 1;
      v55 = v37;
      v38 = calloc(v37, 8uLL);
      v39 = v38;
      if ( !v38 )
        goto LABEL_70;
      v40 = *((_QWORD *)this + 31);
      v41 = (void *)*((_QWORD *)this + 30);
      if ( 8 * v40 )
      {
        if ( !v41 )
        {
          *(_DWORD *)_o__errno(v40) = 22;
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        memmove_0(v38, v41, 8 * v40);
        v41 = (void *)*((_QWORD *)this + 30);
      }
      free(v41);
      *((_QWORD *)this + 30) = v39;
      *((_QWORD *)this + 32) = v55;
    }
  }
LABEL_13:
  *(_QWORD *)(*((_QWORD *)this + 30) + 8 * v17) = v8;
  ++*((_QWORD *)this + 31);
  if ( v50 )
    LeaveCriticalSection(lpCriticalSection);
  v19 = (unsigned int)(*((_DWORD *)this + 22) - 1);
  *((_DWORD *)this + 22) = v19;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 64LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, v19);
  }
LABEL_17:
  v3 = v56;
LABEL_18:
  if ( (_BYTE)v52 )
    LeaveCriticalSection(v51);
  if ( !v6 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 128);
    v50 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v42 = 0;
    if ( *((_QWORD *)this + 22) )
    {
      v43 = 0LL;
      v44 = (char *)this + 168;
      while ( *(struct CAudioStream **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                                         v44,
                                         v43) != a2 )
      {
        v43 = ++v42;
        v44 = (char *)this + 168;
        if ( (unsigned __int64)v42 >= *((_QWORD *)this + 22) )
          goto LABEL_87;
      }
      if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
        || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0 )
      {
        v45 = (char *)this + 168;
      }
      else
      {
        v45 = (char *)this + 168;
        if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v46 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                            (char *)this + 168,
                            v43);
          WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 65LL, v47, v42, *v46);
        }
      }
      v8 = *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](v45, v43);
      v55 = v8;
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::RemoveAt(v45, v43);
      v51 = (LPCRITICAL_SECTION)((char *)this + 200);
      LOBYTE(v52) = 0;
      ATL::CCritSecLock::Lock(&v51);
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add((char *)this + 240, &v55);
      if ( (_BYTE)v52 )
        LeaveCriticalSection(v51);
    }
LABEL_87:
    if ( v50 )
      LeaveCriticalSection(lpCriticalSection);
  }
  if ( v8 )
  {
    if ( v3 )
    {
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
      v51 = (LPCRITICAL_SECTION)&CAudioStreamDestroy::`vftable';
      v52 = this;
      v53 = v8;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        (LPCRITICAL_SECTION)((char *)this + 496),
        (void (__fastcall ***)(_QWORD, __int64 *))&v51);
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
    }
    if ( *(_DWORD *)(v8 + 124) == 2 )
    {
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(v8 + 168);
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(v8 + 176);
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(v8 + 184);
    }
    v20 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, _QWORD, size_t))(*(_QWORD *)g_AudioResourceManager
                                                                                    + 32LL))(
            g_AudioResourceManager,
            *(_QWORD *)(v8 + 56),
            v8 + 8);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x145,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v20);
    v21 = *(void **)(v8 + 304);
    if ( v21 && !SetEvent(v21) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8E6, v22, v23);
      __debugbreak();
    }
    *(_QWORD *)(v8 + 64) = 0LL;
    v51 = (LPCRITICAL_SECTION)((char *)this + 200);
    LOBYTE(v52) = 0;
    ATL::CCritSecLock::Lock(&v51);
    if ( *((_QWORD *)this + 31) )
    {
      v24 = 0LL;
      v25 = *((_QWORD *)this + 31);
      if ( !v25 )
        ATL::AtlThrowImpl(-2147024809);
      while ( 1 )
      {
        v26 = *((_QWORD *)this + 30);
        v27 = (_QWORD *)(v26 + 8 * v24);
        if ( *v27 == v8 )
          break;
        v24 = ++v7;
        if ( v7 >= v25 )
          goto LABEL_37;
      }
      v28 = v24 + 1;
      if ( v24 + 1 < v24 || v28 > v25 )
        ATL::AtlThrowImpl(-2147024809);
      v29 = v25 - v28;
      if ( v29 )
      {
        v48 = (const void *)(v26 + 8 * v28);
        if ( 8 * v29 )
        {
          if ( !v27 || !v48 )
          {
            *(_DWORD *)_o__errno(v48) = 22;
            invalid_parameter_noinfo();
            ATL::AtlThrowImpl(-2147024809);
          }
          memmove_0(v27, v48, 8 * v29);
        }
      }
      --*((_QWORD *)this + 31);
    }
LABEL_37:
    (*(void (__fastcall **)(size_t))(*(_QWORD *)v8 + 64LL))(v8);
    if ( (_BYTE)v52 )
      LeaveCriticalSection(v51);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
      ThreadPool,
      *((_QWORD *)this + 76));
  }
  return 0LL;
}
