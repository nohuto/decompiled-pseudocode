/*
 * XREFs of ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJXZ @ 0x18010F6DC
 * Callers:
 *     ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x180110208 (-DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NO.c)
 *     ??$?0AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@AEA_NAEAPEAX@?$_Ref_count_obj@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAA@AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@AEA_NAEAPEAX@Z @ 0x18011C98C (--$-0AEAPEAUHSTRING__@@AEBU_GUID@@AEAW4HandleWrapperDesiredAccess@Holographic@Internal@Windows@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180109F10 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?Log_Error_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z @ 0x18010A114 (-Log_Error_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z.c)
 *     ??R?$default_delete@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEBAXPEAUCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@@Z @ 0x18011AAB8 (--R-$default_delete@UCmNotifContext@HolographicDriverHandleWrapper@Holographic@Internal@Windows@.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::OpenDriverHandle(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this)
{
  char *v2; // rbx
  const char *v3; // r9
  wil::details::in1diag3 *v4; // rcx
  char v5; // r12
  int v6; // ebx
  DWORD dwFlagsAndAttributes; // r14d
  const WCHAR *StringRawBuffer; // rax
  DWORD v9; // r8d
  DWORD v10; // edx
  HANDLE FileW; // rdi
  const char *v12; // r9
  char *v13; // rbp
  DWORD LastError; // ebx
  const WCHAR *v15; // rax
  HANDLE v16; // rbp
  char *v17; // rdi
  DWORD v18; // ebx
  void *v19; // rcx
  __int64 v20; // rdx
  void *v21; // rdx
  unsigned int v22; // ebx
  const char *v23; // r9
  struct _RTL_CRITICAL_SECTION **v24; // r13
  wil::details::in1diag3 *v25; // rcx
  struct _RTL_CRITICAL_SECTION *v26; // rbp
  HANDLE *p_OwningThread; // rdi
  struct _RTL_CRITICAL_SECTION *v28; // rbx
  DWORD v29; // edi
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // edi
  __int64 v33; // r8
  _DWORD *v34; // rcx
  HolographicDriverClientTrace *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r8
  struct _RTL_CRITICAL_SECTION *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // eax
  RTL_SRWLOCK *v42; // rdi
  __int64 v43; // rbx
  __int64 v44; // rsi
  __int64 v45; // rcx
  struct _RTL_CRITICAL_SECTION *v47; // [rsp+48h] [rbp-200h] BYREF
  char *OwningThread; // [rsp+50h] [rbp-1F8h]
  PSRWLOCK SRWLock; // [rsp+58h] [rbp-1F0h]
  __int64 v50; // [rsp+60h] [rbp-1E8h]
  char *v51; // [rsp+68h] [rbp-1E0h]
  _DWORD v52[4]; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v53; // [rsp+80h] [rbp-1C8h]
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+0h]

  v50 = -2LL;
  v2 = (char *)this + 112;
  SRWLock = (PSRWLOCK)((char *)this + 112);
  AcquireSRWLockExclusive((PSRWLOCK)this + 14);
  v51 = v2;
  AcquireSRWLockExclusive((PSRWLOCK)this + 15);
  OwningThread = (char *)this + 120;
  v4 = retaddr;
  if ( *((_QWORD *)this + 17) != -1LL )
    goto LABEL_57;
  v5 = 1;
  if ( *((int *)this + 32) >= 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1F2,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      v3);
    JUMPOUT(0x18010FBB9LL);
  }
  v6 = *((_DWORD *)this + 10);
  dwFlagsAndAttributes = *((_BYTE *)this + 169) != 0 ? 0x40000000 : 0;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 4), 0LL);
  v9 = 3;
  if ( v6 == 2 )
    v9 = 1;
  v10 = -1073741824;
  if ( v6 == 2 )
    v10 = 0x80000000;
  FileW = CreateFileW(StringRawBuffer, v10, v9, 0LL, 3u, dwFlagsAndAttributes, 0LL);
  v13 = (char *)*((_QWORD *)this + 17);
  if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v13);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 17) = FileW;
  if ( FileW == (HANDLE)-1LL && *((_DWORD *)this + 10) == 1 && GetLastError() == 5 )
  {
    v15 = WindowsGetStringRawBuffer(*((HSTRING *)this + 4), 0LL);
    v16 = CreateFileW(v15, 0x80000000, 1u, 0LL, 3u, dwFlagsAndAttributes, 0LL);
    v17 = (char *)*((_QWORD *)this + 17);
    if ( (unsigned __int64)(v17 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v18 = GetLastError();
      CloseHandle(v17);
      SetLastError(v18);
    }
    *((_QWORD *)this + 17) = v16;
  }
  v19 = (void *)*((_QWORD *)this + 17);
  if ( v19 == (void *)-1LL )
  {
    v20 = 542LL;
LABEL_20:
    v22 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)v20,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
            v12);
LABEL_32:
    if ( this != (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)-120LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 15);
    goto LABEL_52;
  }
  v21 = (void *)*((_QWORD *)this + 6);
  if ( v21 && !CreateIoCompletionPort(v19, v21, 0LL, 0) )
  {
    v20 = 546LL;
    goto LABEL_20;
  }
  *((_DWORD *)this + 32) = 0;
  AcquireSRWLockExclusive((PSRWLOCK)this + 18);
  v47 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 144);
  v24 = (struct _RTL_CRITICAL_SECTION **)((char *)this + 152);
  v25 = retaddr;
  if ( *((_QWORD *)this + 19) )
    goto LABEL_56;
  v26 = (struct _RTL_CRITICAL_SECTION *)operator new(0x40uLL);
  v47 = v26;
  InitializeCriticalSectionEx(v26, 0, 0);
  v26[1].DebugInfo = 0LL;
  *(_QWORD *)&v26[1].LockCount = CreateThreadpoolWork(
                                   (PTP_WORK_CALLBACK)Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext::UnregisterAsyncCallback,
                                   v26,
                                   0LL);
  p_OwningThread = &v26[1].OwningThread;
  v26[1].OwningThread = 0LL;
  v28 = v26;
  EnterCriticalSection(v26);
  v26[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)this;
  memset_0(v52, 0, 0x1A0uLL);
  v52[0] = 416;
  v52[2] = 1;
  v53 = *((_QWORD *)this + 17);
  OwningThread = (char *)v26[1].OwningThread;
  if ( OwningThread )
  {
    v29 = GetLastError();
    CM_Unregister_Notification(OwningThread, v30);
    SetLastError(v29);
    p_OwningThread = &v26[1].OwningThread;
  }
  *p_OwningThread = 0LL;
  v32 = CM_Register_Notification(
          v52,
          v26,
          &Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceHandleCallbackStatic,
          p_OwningThread);
  if ( v32 )
  {
    v34 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
    if ( !v34 || !*v34 )
      v5 = 0;
    if ( v5 )
    {
      HolographicDriverClientTrace::Instance();
      HolographicDriverClientTrace::Log_Error_(
        v35,
        v32,
        L"CM_MapCrToWin32Err() failed, hresult is actually a CONFIGRET value");
    }
    v22 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x248,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)0x8000FFFFLL);
    LeaveCriticalSection(v26);
    std::default_delete<Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext>::operator()(
      v36,
      v26,
      v37);
    if ( this != (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)-144LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 18);
    goto LABEL_32;
  }
  if ( v24 != &v47 )
  {
    v28 = 0LL;
    v38 = *v24;
    *v24 = v26;
    if ( v38 )
      std::default_delete<Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext>::operator()(
        v31,
        v38,
        v33);
  }
  LeaveCriticalSection(v26);
  if ( v28 )
    std::default_delete<Windows::Internal::Holographic::HolographicDriverHandleWrapper::CmNotifContext>::operator()(
      v39,
      v28,
      v40);
  if ( this != (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)-144LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 18);
  if ( this != (Windows::Internal::Holographic::HolographicDriverHandleWrapper *)-120LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 15);
  v41 = (*(__int64 (__fastcall **)(Windows::Internal::Holographic::HolographicDriverHandleWrapper *))(*(_QWORD *)this + 8LL))(this);
  v22 = v41;
  if ( v41 >= 0 )
  {
    v42 = (RTL_SRWLOCK *)((char *)this + 56);
    AcquireSRWLockShared((PSRWLOCK)this + 7);
    v47 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
    v43 = *((_QWORD *)this + 11);
    v44 = *((_QWORD *)this + 12);
    while ( v43 != v44 )
    {
      v45 = *(_QWORD *)(*(_QWORD *)v43 + 56LL);
      if ( !v45 )
      {
        std::_Xbad_function_call();
LABEL_56:
        wil::details::in1diag3::_FailFast_Unexpected(
          v25,
          (void *)0x22A,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
          v23);
LABEL_57:
        wil::details::in1diag3::_FailFast_Unexpected(
          v4,
          (void *)0x1F1,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
          v3);
        __debugbreak();
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
      v43 += 8LL;
    }
    if ( v42 )
      ReleaseSRWLockShared(v42);
    v22 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24F,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.h",
      (const char *)(unsigned int)v41);
  }
LABEL_52:
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return v22;
}
