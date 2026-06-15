/*
 * XREFs of ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x180044F70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180027ED0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _invalid_parameter_noinfo @ 0x18006165A (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1800688AF (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800AE408 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800BA87C (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ?Add@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAVCAudioStream@@@Z @ 0x1800BE834 (-Add@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAA_KAEBQEAV.c)
 *     ?RemoveAt@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x1800C28E0 (-RemoveAt@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@QEAAX_K0.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C36C0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     WPP_SF_dq @ 0x1800C3A70 (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x1800C3C58 (WPP_SF_qq.c)
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
  size_t v32; // rdx
  void *v33; // rax
  __int64 v34; // r8
  const void *v35; // rdx
  size_t v36; // rax
  void *v37; // rax
  void *v38; // r14
  __int64 v39; // rcx
  void *v40; // rdx
  unsigned int v41; // r12d
  __int64 v42; // r14
  char *v43; // rax
  char *v44; // r13
  __int64 v45; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-28h] BYREF
  char v47; // [rsp+40h] [rbp-20h]
  LPCRITICAL_SECTION v48; // [rsp+48h] [rbp-18h] BYREF
  CAudioSession *v49; // [rsp+50h] [rbp-10h]
  size_t v50; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  size_t v52; // [rsp+A0h] [rbp+40h] BYREF
  char v53; // [rsp+B0h] [rbp+50h]

  v53 = a3;
  v3 = a3;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 62LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, this, a2);
  }
  (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)a2 + 160LL))(a2);
  v48 = (LPCRITICAL_SECTION)((char *)this + 48);
  LOBYTE(v49) = 0;
  ATL::CCritSecLock::Lock(&v48);
  v9 = 0;
  LODWORD(v52) = 0;
  if ( !*((_QWORD *)this + 13) )
    goto LABEL_18;
  v10 = 0LL;
  v11 = *((_QWORD *)this + 13);
  if ( !v11 )
    goto LABEL_66;
  while ( *(struct CAudioStream **)(*((_QWORD *)this + 12) + 8 * v10) != a2 )
  {
    LODWORD(v52) = ++v9;
    v10 = v9;
    if ( v9 >= v11 )
      goto LABEL_17;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[]((char *)this + 96, v10);
    WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 63LL, v34, (unsigned int)v52);
  }
  v6 = 1;
  v12 = *((_QWORD *)this + 13);
  if ( v10 >= v12 )
    goto LABEL_66;
  v13 = *((_QWORD *)this + 12);
  v14 = (size_t *)(v13 + 8 * v10);
  v8 = *v14;
  v15 = v10 + 1;
  if ( v10 + 1 < v10 || v15 > v12 )
    goto LABEL_66;
  v16 = v12 - v15;
  if ( v16 )
  {
    v35 = (const void *)(v13 + 8 * v15);
    if ( 8 * v16 )
    {
      if ( !v14 || !v35 )
        goto LABEL_93;
      memmove_0(v14, v35, 8 * v16);
    }
  }
  --*((_QWORD *)this + 13);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 200);
  v47 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v17 = *((_QWORD *)this + 31);
  v18 = *((_QWORD *)this + 32);
  if ( v17 >= v18 )
  {
    v31 = v17 + 1;
    if ( v17 + 1 > v18 )
    {
      v32 = *((int *)this + 66);
      if ( *((_QWORD *)this + 30) )
      {
        if ( !*((_DWORD *)this + 66) )
        {
          v32 = v18 >> 1;
          if ( v31 - v18 > v18 >> 1 )
            v32 = v31 - v18;
        }
        v36 = v32 + v18;
        if ( v31 >= v32 + v18 )
          v36 = v17 + 1;
        v52 = v36;
        v37 = calloc(v36, 8uLL);
        v38 = v37;
        if ( v37 )
        {
          v39 = *((_QWORD *)this + 31);
          v40 = (void *)*((_QWORD *)this + 30);
          if ( 8 * v39 )
          {
            if ( !v40 )
            {
              *(_DWORD *)_o__errno(v39) = 22;
              invalid_parameter_noinfo();
              goto LABEL_66;
            }
            memmove_0(v37, v40, 8 * v39);
            v40 = (void *)*((_QWORD *)this + 30);
          }
          free(v40);
          *((_QWORD *)this + 30) = v38;
          *((_QWORD *)this + 32) = v52;
          goto LABEL_13;
        }
      }
      else
      {
        if ( v32 > v31 )
          v31 = *((int *)this + 66);
        v33 = calloc(v31, 8uLL);
        *((_QWORD *)this + 30) = v33;
        if ( v33 )
        {
          *((_QWORD *)this + 32) = v31;
          goto LABEL_13;
        }
      }
      ATL::AtlThrowImpl(-2147024882);
    }
  }
LABEL_13:
  *(_QWORD *)(*((_QWORD *)this + 30) + 8 * v17) = v8;
  ++*((_QWORD *)this + 31);
  if ( v47 )
    LeaveCriticalSection(lpCriticalSection);
  v19 = (unsigned int)(*((_DWORD *)this + 22) - 1);
  *((_DWORD *)this + 22) = v19;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 64LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, v19);
  }
LABEL_17:
  v3 = v53;
LABEL_18:
  if ( (_BYTE)v49 )
    LeaveCriticalSection(v48);
  if ( !v6 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 128);
    v47 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    v41 = 0;
    if ( *((_QWORD *)this + 22) )
    {
      v42 = 0LL;
      v43 = (char *)this + 168;
      while ( *(struct CAudioStream **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                                         v43,
                                         v42) != a2 )
      {
        v42 = ++v41;
        v43 = (char *)this + 168;
        if ( (unsigned __int64)v41 >= *((_QWORD *)this + 22) )
          goto LABEL_84;
      }
      if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
        || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0 )
      {
        v44 = (char *)this + 168;
      }
      else
      {
        v44 = (char *)this + 168;
        if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[]((char *)this + 168, v42);
          WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 65LL, v45, v41);
        }
      }
      v8 = *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](v44, v42);
      v52 = v8;
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::RemoveAt(v44, v42);
      v48 = (LPCRITICAL_SECTION)((char *)this + 200);
      LOBYTE(v49) = 0;
      ATL::CCritSecLock::Lock(&v48);
      ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::Add((char *)this + 240, &v52);
      if ( (_BYTE)v49 )
        LeaveCriticalSection(v48);
    }
LABEL_84:
    if ( v47 )
      LeaveCriticalSection(lpCriticalSection);
  }
  if ( v8 )
  {
    if ( v3 )
    {
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
      v48 = (LPCRITICAL_SECTION)&CAudioStreamDestroy::`vftable';
      v49 = this;
      v50 = v8;
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
        (LPCRITICAL_SECTION)((char *)this + 496),
        (void (__fastcall ***)(_QWORD, __int64 *))&v48);
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
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x904, v22, v23);
      __debugbreak();
    }
    *(_QWORD *)(v8 + 64) = 0LL;
    v48 = (LPCRITICAL_SECTION)((char *)this + 200);
    LOBYTE(v49) = 0;
    ATL::CCritSecLock::Lock(&v48);
    if ( !*((_QWORD *)this + 31) )
      goto LABEL_37;
    v24 = 0LL;
    v25 = *((_QWORD *)this + 31);
    if ( v25 )
    {
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
      if ( v24 + 1 >= v24 && v28 <= v25 )
      {
        v29 = v25 - v28;
        if ( !v29 )
          goto LABEL_36;
        v15 = v26 + 8 * v28;
        if ( !(8 * v29) )
          goto LABEL_36;
        if ( v27 && v15 )
        {
          memmove_0(v27, (const void *)v15, 8 * v29);
LABEL_36:
          --*((_QWORD *)this + 31);
LABEL_37:
          (*(void (__fastcall **)(size_t))(*(_QWORD *)v8 + 64LL))(v8);
          if ( (_BYTE)v49 )
            LeaveCriticalSection(v48);
          (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
          (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 72LL))(
            ThreadPool,
            *((_QWORD *)this + 76));
          return 0LL;
        }
LABEL_93:
        *(_DWORD *)_o__errno(v15) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
    }
LABEL_66:
    ATL::AtlThrowImpl(-2147024809);
  }
  return 0LL;
}
