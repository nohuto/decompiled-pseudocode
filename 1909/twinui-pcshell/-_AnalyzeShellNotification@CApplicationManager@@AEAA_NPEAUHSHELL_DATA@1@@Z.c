/*
 * XREFs of ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18002A3E0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180029C10 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ??$?0PEAX$$V@?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@$$QEAPEAX@Z @ 0x180027DDC (--$-0PEAX$$V@-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseH.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180027DEC (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ??1?$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ @ 0x180027E10 (--1-$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800407D0 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800534FC (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180056628 (-GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x18005B8E0 (-GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18008052C (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800836B8 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180089798 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180089800 (_Init_thread_header.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801207DC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180122920 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801281F0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x180137560 (-ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z.c)
 *     ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x1801409E8 (-GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z.c)
 *     ?Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ @ 0x180426524 (-Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ.c)
 *     ?Free@ARI@@YAXPEAX@Z @ 0x180426554 (-Free@ARI@@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::_AnalyzeShellNotification(
        CApplicationManager *this,
        struct CApplicationManager::HSHELL_DATA *a2)
{
  unsigned __int8 v4; // si
  HWND v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r14
  HWND v8; // rdx
  __int64 v9; // rcx
  int v10; // ecx
  CallerIdentity *v11; // r14
  unsigned int **v12; // rsi
  __int64 v13; // rcx
  const char *v14; // r9
  wil::details *v15; // rcx
  HANDLE v16; // rbx
  unsigned __int16 **v17; // r8
  const char *v18; // r9
  __int64 v19; // r14
  NTSTATUS v20; // eax
  unsigned __int128 v21; // rax
  __int64 v22; // rbx
  int v23; // eax
  signed int LastError; // r14d
  unsigned int v25; // r14d
  const UNICODE_STRING *v26; // r15
  void *v27; // rdx
  unsigned __int64 v28; // r12
  unsigned int *v29; // rbx
  unsigned __int64 v30; // r15
  unsigned int *v31; // rax
  unsigned __int64 v32; // rcx
  unsigned int *v33; // r8
  int v34; // r10d
  __int64 v35; // r9
  char *v36; // rdx
  unsigned __int64 v37; // r15
  unsigned int AppUserModelId; // eax
  int v40; // edx
  ShellManagedWindowHelper *v41; // r14
  unsigned int v42; // eax
  int v43; // ecx
  unsigned __int64 v44; // rdx
  HWND v45; // rcx
  bool v46; // al
  __int64 v47; // rcx
  int v48; // edx
  RTL_SRWLOCK *v49; // rbx
  __int64 VisibleRootOwner; // rax
  HWND v51; // rdx
  int WeakWindowAppId; // eax
  void *v53; // rdx
  __int16 v54; // ax
  HWND v55; // rdx
  unsigned __int16 *ReturnLength; // [rsp+20h] [rbp-99h]
  unsigned __int16 *ReturnLengtha; // [rsp+20h] [rbp-99h]
  unsigned int ReturnLengthb; // [rsp+20h] [rbp-99h]
  ULONG TokenInformationLength; // [rsp+30h] [rbp-89h] BYREF
  HANDLE ProcessHandle; // [rsp+38h] [rbp-81h] BYREF
  int v61; // [rsp+40h] [rbp-79h] BYREF
  _DWORD v62[3]; // [rsp+44h] [rbp-75h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-69h] BYREF
  void *TokenHandle; // [rsp+60h] [rbp-59h] BYREF
  int v65; // [rsp+68h] [rbp-51h] BYREF
  DWORD dwProcessId; // [rsp+6Ch] [rbp-4Dh] BYREF
  int pvAttribute; // [rsp+70h] [rbp-49h] BYREF
  __int64 v68; // [rsp+78h] [rbp-41h] BYREF
  __int64 v69; // [rsp+80h] [rbp-39h] BYREF
  HANDLE v70; // [rsp+88h] [rbp-31h] BYREF
  __int64 v71; // [rsp+90h] [rbp-29h] BYREF
  int v72; // [rsp+98h] [rbp-21h]
  __int64 v73; // [rsp+A0h] [rbp-19h]
  PSRWLOCK v74; // [rsp+A8h] [rbp-11h]
  char v75[8]; // [rsp+B0h] [rbp-9h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-1h] BYREF
  _DWORD v77[4]; // [rsp+C8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v73 = -2LL;
  if ( ((*(_QWORD *)a2 - 18LL) & 0xFFFFFFFFFFFFFFFBuLL) == 0 )
    return 1;
  v4 = 0;
  v5 = (HWND)*((_QWORD *)a2 + 1);
  if ( dword_1805C27F0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1805C27F0);
    if ( dword_1805C27F0 == -1 )
    {
      word_1805C1DC0 = GetClassInfoW(0LL, L"Ghost", &WndClass);
      Init_thread_footer(&dword_1805C27F0);
    }
  }
  if ( (unsigned __int16)GetClassLongW(v5, -32) == word_1805C1DC0 )
  {
    if ( ((*(_QWORD *)a2 - 17LL) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
    {
      *((_QWORD *)a2 + 5) = *((_QWORD *)a2 + 1);
      *((_QWORD *)a2 + 1) = HungWindowFromGhostWindow();
    }
    else
    {
      *((_QWORD *)a2 + 1) = 0LL;
    }
  }
  if ( (unsigned int)IsShellFrameWindow(*((_QWORD *)a2 + 1)) )
  {
    v77[0] = 20;
    v77[1] = 19;
    v77[2] = 23;
    v77[3] = 32;
    v47 = 0LL;
    while ( *(_QWORD *)a2 != v77[v47] )
    {
      if ( (unsigned __int64)++v47 >= 4 )
      {
        *((_QWORD *)a2 + 1) = 0LL;
        break;
      }
    }
  }
  v6 = *((_QWORD *)a2 + 1);
  if ( !v6 || !(unsigned int)GetWindowBand(v6, (char *)a2 + 24) )
    return v4;
  v7 = *((_QWORD *)a2 + 1);
  if ( (unsigned int)GetWindowBand(v7, &v65)
    && ((v65 == 1 || v65 == 8) && v65 != 1 || v65 == 1 && (unsigned int)IsShellManagedWindow(v7))
    && !GetPropW(*((HWND *)a2 + 1), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") )
  {
    *((_DWORD *)a2 + 4) = 2;
  }
  else
  {
    v40 = *((_DWORD *)a2 + 6);
    v41 = (ShellManagedWindowHelper *)*((_QWORD *)a2 + 1);
    if ( ((unsigned int)(v40 - 1) <= 1 || v40 == 16)
      && (!(unsigned int)IsShellManagedWindow(*((_QWORD *)a2 + 1))
       || ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsNotShellManaged(v41, v8))
      || GetPropW(*((HWND *)a2 + 1), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") )
    {
      *((_DWORD *)a2 + 4) = 1;
    }
    else
    {
      v42 = *((_DWORD *)a2 + 6);
      if ( v42 == 13 )
      {
        *((_DWORD *)a2 + 4) = 3;
      }
      else if ( v42 <= 0x11 && (v43 = 131344, _bittest(&v43, v42)) )
      {
        v49 = CApplicationManagerUtility::g_pIAMGlobals;
        v74 = CApplicationManagerUtility::g_pIAMGlobals;
        AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
        v68 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v68);
        v71 = *((_QWORD *)a2 + 1);
        v72 = 2;
        if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v71, &v68, v75) >= 0 )
          *((_DWORD *)a2 + 4) = 2;
        else
          *((_DWORD *)a2 + 4) = 4;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v68);
        if ( v49 )
          ReleaseSRWLockShared(v49);
      }
      else
      {
        *((_DWORD *)a2 + 4) = 4;
      }
    }
  }
  *((_BYTE *)a2 + 28) = 0;
  v61 = 0;
  v9 = *((_QWORD *)this + 97);
  if ( v9
    && (*(int (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v9 + 48LL))(
         v9,
         *((unsigned int *)a2 + 2),
         0LL,
         &v61) >= 0
    && v61 == 1 )
  {
    *((_BYTE *)a2 + 28) = 1;
  }
  v10 = *((_DWORD *)a2 + 4);
  if ( (unsigned int)(v10 - 2) > 1 )
  {
    v44 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 == 34LL )
      return v4;
    if ( v10 == 1 )
    {
      if ( v44 <= 0x16 )
      {
        if ( (_DWORD)v44 == 20 || (v48 = v44 - 17) == 0 )
        {
          *((_BYTE *)a2 + 21) = 1;
          return 1;
        }
        v44 = (unsigned int)(v48 - 4);
        if ( !(_DWORD)v44 )
        {
          *((_BYTE *)a2 + 21) = 0;
          return 1;
        }
        if ( (_DWORD)v44 == 1 )
        {
          *((_BYTE *)a2 + 21) = 1;
          return 1;
        }
      }
      v45 = (HWND)*((_QWORD *)a2 + 1);
      if ( *((_BYTE *)a2 + 20) )
        v46 = (GetWindowLongPtrW(v45, -20) & 0x40000) != 0;
      else
        v46 = CApplicationManagerUtility::IsTrayWindowStyleCheck(v45, (HWND)v44);
      *((_BYTE *)a2 + 21) = v46;
      return 1;
    }
    if ( v44 == 20 )
    {
      if ( *((_QWORD *)a2 + 1) == *((_QWORD *)this + 96) )
        return 1;
    }
    else if ( v44 > 0x1B )
    {
      return 0;
    }
    return ((unsigned int)v44 >= 0x17 || (unsigned int)v44 < 0x14)
        && ((_DWORD)v44 == 19 || (_DWORD)v44 == 23 || (unsigned int)v44 > 0x18);
  }
  if ( *((_BYTE *)a2 + 20) )
  {
    if ( *(_QWORD *)a2 == 24LL )
    {
      *((_QWORD *)a2 + 1) = 0LL;
      goto LABEL_21;
    }
    if ( *(_QWORD *)a2 == 21LL )
      VisibleRootOwner = CApplicationManagerUtility::GetVisibleRootOwner(*((_QWORD *)a2 + 1), 1LL);
    else
      VisibleRootOwner = CApplicationManagerUtility::GetVisibleRootOwner(*((_QWORD *)a2 + 1), 0LL);
    *((_BYTE *)a2 + 20) = 0;
    goto LABEL_133;
  }
  if ( *(_QWORD *)a2 == 32LL && CApplicationManagerUtility::IsOwnedWindow(*((CApplicationManagerUtility **)a2 + 1), v8) )
  {
    VisibleRootOwner = CApplicationManagerUtility::GetVisibleRootOwner(*((_QWORD *)a2 + 1), 0LL);
LABEL_133:
    *((_QWORD *)a2 + 1) = VisibleRootOwner;
  }
LABEL_21:
  v11 = (CallerIdentity *)*((_QWORD *)a2 + 1);
  if ( v11 )
  {
    *((_BYTE *)a2 + 21) = 1;
    v12 = (unsigned int **)((char *)a2 + 32);
    if ( *((_QWORD *)a2 + 4) )
      return 1;
    if ( *((_DWORD *)a2 + 4) != 2 )
      return 1;
    if ( *(_QWORD *)a2 > 0x1DuLL )
      return 1;
    v13 = 604110848LL;
    if ( !_bittest64(&v13, *(_QWORD *)a2) )
      return 1;
    *v12 = 0LL;
    if ( !GetWindowThreadProcessId((HWND)v11, &dwProcessId) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x6B,
                    (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
                    v14);
      goto LABEL_161;
    }
    v70 = OpenProcess(0x1000u, 0, dwProcessId);
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
      &ProcessHandle,
      &v70);
    v16 = ProcessHandle;
    if ( (((unsigned __int64)ProcessHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v69 = 0LL;
      if ( (unsigned int)GetProcessUIContextInformation(ProcessHandle, &v69) )
      {
        if ( (_DWORD)v69 == 2 )
        {
          WeakWindowAppId = CallerIdentity::GetWeakWindowAppId(v11, (HWND)a2 + 8, v17);
          LastError = WeakWindowAppId;
          if ( WeakWindowAppId < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x78,
              (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
              (const char *)(unsigned int)WeakWindowAppId,
              (int)ReturnLength);
            goto LABEL_160;
          }
        }
        if ( *v12 )
          goto LABEL_67;
        *v12 = 0LL;
        *(_OWORD *)P = 0LL;
        if ( v16 == GetCurrentProcess() )
        {
          v19 = -4LL;
          TokenHandle = (void *)-4LL;
        }
        else
        {
          if ( !OpenProcessToken(v16, 8u, &TokenHandle) )
          {
            LastError = GetLastError();
            if ( LastError )
              goto LABEL_45;
          }
          v19 = (__int64)TokenHandle;
        }
        v20 = NtQueryInformationToken((HANDLE)v19, TokenSecurityAttributes, 0LL, 0, &TokenInformationLength);
        if ( v20 == -1073741789 )
        {
          v21 = TokenInformationLength * (unsigned __int128)0x10uLL;
          if ( is_mul_ok(TokenInformationLength, 0x10uLL)
            && (*(_QWORD *)&v21 = RtlAllocateHeap(
                                    NtCurrentPeb()->ProcessHeap,
                                    DWORD2(v21),
                                    16LL * TokenInformationLength),
                (v22 = v21) != 0) )
          {
            memset_0((void *)v21, 0, TokenInformationLength);
            v23 = NtQueryInformationToken(
                    (HANDLE)v19,
                    TokenSecurityAttributes,
                    (PVOID)v22,
                    TokenInformationLength,
                    &TokenInformationLength);
            if ( v23 < 0 )
            {
              LastError = RtlNtStatusToDosErrorNoTeb(v23);
              ARI::Free((PVOID)v22, v53);
            }
            else if ( *(_DWORD *)(v22 + 4)
                   && (RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID"), v25 = 0, *(_DWORD *)(v22 + 4)) )
            {
              while ( 1 )
              {
                v26 = (const UNICODE_STRING *)(*(_QWORD *)(v22 + 8) + 40LL * v25);
                if ( !RtlCompareUnicodeString(&DestinationString, v26, 1u) )
                  break;
                if ( ++v25 >= *(_DWORD *)(v22 + 4) )
                  goto LABEL_39;
              }
              P[1] = (PVOID)v26;
              P[0] = (PVOID)v22;
              ARI::Free(0LL, v27);
              LastError = 0;
            }
            else
            {
LABEL_39:
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v22);
              LastError = 1168;
            }
          }
          else
          {
            ARI::Free(0LL, *((void **)&v21 + 1));
            LastError = 8;
          }
        }
        else if ( v20 )
        {
          LastError = RtlNtStatusToDosErrorNoTeb(v20);
        }
        else
        {
          LastError = 1359;
        }
        if ( TokenHandle != (void *)-4LL )
          CloseHandle(TokenHandle);
LABEL_45:
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        if ( LastError == -2147023728 || LastError == -2147024891 )
        {
LABEL_159:
          ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)P);
          if ( LastError < 0 )
            goto LABEL_160;
          goto LABEL_67;
        }
        if ( LastError < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA5,
            (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
            (const char *)(unsigned int)LastError,
            (int)ReturnLength);
          goto LABEL_159;
        }
        if ( (unsigned int)ARI::ProcessToken::SysAppId::GetAppUserModelId(
                             (ARI::ProcessToken::SysAppId *)P[1],
                             0LL,
                             (unsigned int)v62,
                             0LL,
                             ReturnLength) != 122 )
        {
          LastError = -2147418113;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA8,
            (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
            (const char *)0x8000FFFFLL,
            (int)ReturnLengtha);
          ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)P);
          goto LABEL_160;
        }
        CoTaskMemFree(0LL);
        v28 = v62[0];
        v29 = 0LL;
        *(_QWORD *)&v62[1] = 0LL;
        v30 = v62[0] + 1LL;
        if ( v30 < v62[0] )
        {
          LastError = -2147024362;
          goto LABEL_157;
        }
        if ( is_mul_ok(v30, 2uLL) )
        {
          v31 = (unsigned int *)CoTaskMemAlloc(2 * v30);
          v29 = v31;
          *(_QWORD *)&v62[1] = v31;
          if ( !v31 )
          {
            LastError = -2147024882;
            goto LABEL_157;
          }
          LastError = 0;
          if ( v30 > 0x7FFFFFFF || v28 >= 0x7FFFFFFF )
          {
            *(_WORD *)v31 = 0;
          }
          else
          {
            v32 = v30;
            v33 = v31;
            v34 = 0;
            v35 = 0LL;
            v36 = (char *)((char *)&szAgent - (char *)v31);
            while ( v32 != v30 )
            {
              v54 = *(_WORD *)&v36[(_QWORD)v33];
              if ( !v54 )
                break;
              *(_WORD *)v33 = v54;
              v33 = (unsigned int *)((char *)v33 + 2);
              ++v35;
              if ( !--v32 )
                goto LABEL_152;
            }
            if ( v32 )
              goto LABEL_59;
LABEL_152:
            v33 = (unsigned int *)((char *)v33 - 2);
            --v35;
            v34 = -2147024774;
LABEL_59:
            *(_WORD *)v33 = 0;
            v37 = v30 - v35;
            if ( v34 >= 0 && v37 > 1 && 2 * v37 > 2 )
              memset_0((char *)v29 + 2 * v35 + 2, 0, 2 * v37 - 2);
          }
        }
        else
        {
          LastError = -2147024362;
        }
        if ( LastError >= 0 )
        {
          AppUserModelId = ARI::ProcessToken::SysAppId::GetAppUserModelId(
                             (ARI::ProcessToken::SysAppId *)P[1],
                             (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)(unsigned int)v28,
                             (unsigned int)v62,
                             v29,
                             ReturnLengtha);
          if ( !AppUserModelId )
          {
            *(_QWORD *)&v62[1] = 0LL;
            *v12 = v29;
            CMemString<CMemString_PolicyCoTaskMem>::~CMemString<CMemString_PolicyCoTaskMem>((LPVOID *)&v62[1]);
            if ( P[0] )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
LABEL_67:
            wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&ProcessHandle);
            return 1;
          }
          LastError = wil::details::in1diag3::Return_Win32(
                        retaddr,
                        (void *)0xAC,
                        (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
                        (const char *)AppUserModelId,
                        ReturnLengthb);
          goto LABEL_158;
        }
LABEL_157:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAB,
          (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
          (const char *)(unsigned int)LastError,
          (int)ReturnLengtha);
LABEL_158:
        CMemString<CMemString_PolicyCoTaskMem>::~CMemString<CMemString_PolicyCoTaskMem>((LPVOID *)&v62[1]);
        goto LABEL_159;
      }
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x71,
                    (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
                    v18);
    }
    else
    {
      LastError = wil::details::GetLastErrorFailHr(v15);
    }
LABEL_160:
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&ProcessHandle);
LABEL_161:
    if ( LastError < 0 )
    {
      if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a2 + 1), v51)
        && !CApplicationManagerUtility::IsOwnedWindow(*((CApplicationManagerUtility **)a2 + 1), v55)
        && DwmGetWindowAttribute(*((HWND *)a2 + 1), 0xEu, &pvAttribute, 4u) >= 0
        && !pvAttribute )
      {
        (*(void (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                       + 24LL))(
          CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
          *((_QWORD *)a2 + 1),
          1LL);
        return 0;
      }
      return 0;
    }
    return 1;
  }
  return v4;
}
