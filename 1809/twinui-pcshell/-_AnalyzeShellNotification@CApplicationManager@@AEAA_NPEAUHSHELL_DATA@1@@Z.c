/*
 * XREFs of ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x180035340
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x180034B70 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002D934 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18003374C (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18004DE8C (-GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180050FF0 (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x180058CD0 (-GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z.c)
 *     ?Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ @ 0x18005CAD4 (-Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18007A96C (-IsTrayWindowStyleCheck@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHwnd@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x18007E4B0 (--$_FindFirstApplication@VCImmersiveAppFinderByHwnd@@@CApplicationManager@@AEAAJAEBVCImmersiveAp.c)
 *     ?Free@ARI@@YAXPEAX@Z @ 0x18007FB78 (-Free@ARI@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800840F0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180084158 (_Init_thread_header.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800E7180 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z @ 0x1800F30D0 (-ShouldTreatShellManagedWindowAsNotShellManaged@ShellManagedWindowHelper@@YA_NPEAUHWND__@@@Z.c)
 *     ?GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z @ 0x1800FB4A8 (-GetVisibleRootOwner@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@W4RootOwnerType@1@@Z.c)
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
  __int64 v11; // rax
  CallerIdentity *v12; // r14
  unsigned int **v13; // rsi
  __int64 v14; // rcx
  const char *v15; // r9
  HANDLE v16; // rbx
  const char *v17; // r9
  unsigned __int16 **v18; // r8
  const char *v19; // r9
  __int64 v20; // r14
  NTSTATUS v21; // eax
  unsigned __int128 v22; // rax
  __int64 v23; // rbx
  int v24; // eax
  unsigned int v25; // r14d
  const UNICODE_STRING *v26; // r15
  void *v27; // rdx
  signed int LastError; // r15d
  unsigned __int64 v29; // r12
  unsigned int *v30; // rbx
  unsigned __int64 v31; // r14
  unsigned int *v32; // rax
  unsigned __int64 v33; // rcx
  unsigned int *v34; // r9
  int v35; // r10d
  __int64 v36; // rdx
  char *v37; // r8
  unsigned __int64 v38; // r14
  unsigned int AppUserModelId; // eax
  HWND v40; // rcx
  bool v41; // al
  int v43; // edx
  ShellManagedWindowHelper *v44; // r14
  unsigned int v45; // eax
  int v46; // ecx
  unsigned __int64 v47; // rdx
  __int64 VisibleRootOwner; // rax
  __int64 v49; // rcx
  int v50; // edx
  RTL_SRWLOCK *v51; // rbx
  int First; // eax
  int v53; // ecx
  HWND v54; // rdx
  int WeakWindowAppId; // eax
  void *v56; // rdx
  __int16 v57; // ax
  HWND v58; // rdx
  unsigned __int16 *ReturnLength; // [rsp+20h] [rbp-89h]
  unsigned __int16 *ReturnLengtha; // [rsp+20h] [rbp-89h]
  unsigned int ReturnLengthb; // [rsp+20h] [rbp-89h]
  ULONG TokenInformationLength; // [rsp+30h] [rbp-79h] BYREF
  int v63; // [rsp+34h] [rbp-75h] BYREF
  struct _TOKEN_SECURITY_ATTRIBUTE_V1 *v64; // [rsp+38h] [rbp-71h] BYREF
  void *v65; // [rsp+40h] [rbp-69h] BYREF
  void *TokenHandle; // [rsp+48h] [rbp-61h] BYREF
  PVOID P[2]; // [rsp+50h] [rbp-59h] BYREF
  int v68; // [rsp+60h] [rbp-49h] BYREF
  DWORD dwProcessId; // [rsp+64h] [rbp-45h] BYREF
  int pvAttribute; // [rsp+68h] [rbp-41h] BYREF
  __int64 v71; // [rsp+70h] [rbp-39h] BYREF
  __int64 v72; // [rsp+78h] [rbp-31h] BYREF
  __int64 v73; // [rsp+80h] [rbp-29h] BYREF
  int v74; // [rsp+88h] [rbp-21h]
  __int64 v75; // [rsp+90h] [rbp-19h]
  PSRWLOCK v76; // [rsp+98h] [rbp-11h]
  char v77[8]; // [rsp+A0h] [rbp-9h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-1h] BYREF
  _DWORD v79[4]; // [rsp+B8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v75 = -2LL;
  if ( ((*(_QWORD *)a2 - 18LL) & 0xFFFFFFFFFFFFFFFBuLL) == 0 )
    return 1;
  v4 = 0;
  v5 = (HWND)*((_QWORD *)a2 + 1);
  if ( dword_18050FF00 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18050FF00);
    if ( dword_18050FF00 == -1 )
    {
      word_18050F360 = GetClassInfoW(0LL, L"Ghost", &WndClass);
      Init_thread_footer(&dword_18050FF00);
    }
  }
  if ( (unsigned __int16)GetClassLongW(v5, -32) == word_18050F360 )
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
    v79[0] = 20;
    v79[1] = 19;
    v79[2] = 23;
    v79[3] = 32;
    v49 = 0LL;
    while ( *(_QWORD *)a2 != v79[v49] )
    {
      if ( (unsigned __int64)++v49 >= 4 )
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
  if ( (unsigned int)GetWindowBand(v7, &v68)
    && ((v68 == 1 || v68 == 8) && v68 != 1 || v68 == 1 && (unsigned int)IsShellManagedWindow(v7))
    && !GetPropW(*((HWND *)a2 + 1), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") )
  {
    *((_DWORD *)a2 + 4) = 2;
  }
  else
  {
    v43 = *((_DWORD *)a2 + 6);
    v44 = (ShellManagedWindowHelper *)*((_QWORD *)a2 + 1);
    if ( ((unsigned int)(v43 - 1) <= 1 || v43 == 16)
      && (!(unsigned int)IsShellManagedWindow(*((_QWORD *)a2 + 1))
       || ShellManagedWindowHelper::ShouldTreatShellManagedWindowAsNotShellManaged(v44, v8))
      || GetPropW(*((HWND *)a2 + 1), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") )
    {
      *((_DWORD *)a2 + 4) = 1;
    }
    else
    {
      v45 = *((_DWORD *)a2 + 6);
      if ( v45 == 13 )
      {
        *((_DWORD *)a2 + 4) = 3;
      }
      else if ( v45 <= 0x11 && (v46 = 131344, _bittest(&v46, v45)) )
      {
        v51 = CApplicationManagerUtility::g_pIAMGlobals;
        v76 = CApplicationManagerUtility::g_pIAMGlobals;
        AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
        v71 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v71);
        v73 = *((_QWORD *)a2 + 1);
        v74 = 2;
        First = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHwnd>(this, &v73, &v71, v77);
        v53 = 4;
        if ( First >= 0 )
          v53 = 2;
        *((_DWORD *)a2 + 4) = v53;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v71);
        if ( v51 )
          ReleaseSRWLockShared(v51);
      }
      else
      {
        *((_DWORD *)a2 + 4) = 4;
      }
    }
  }
  *((_BYTE *)a2 + 28) = 0;
  v63 = 0;
  v9 = *((_QWORD *)this + 97);
  if ( v9
    && (*(int (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v9 + 48LL))(
         v9,
         *((unsigned int *)a2 + 2),
         0LL,
         &v63) >= 0
    && v63 == 1 )
  {
    *((_BYTE *)a2 + 28) = 1;
  }
  v10 = *((_DWORD *)a2 + 4);
  if ( (unsigned int)(v10 - 2) > 1 )
  {
    v47 = *(_QWORD *)a2;
    if ( *(_QWORD *)a2 == 34LL )
      return v4;
    if ( v10 != 1 )
    {
      if ( v47 == 20 )
      {
        if ( *((_QWORD *)a2 + 1) == *((_QWORD *)this + 96) )
          return 1;
      }
      else if ( v47 > 0x1B )
      {
        return 0;
      }
      return ((unsigned int)v47 >= 0x17 || (unsigned int)v47 < 0x14)
          && ((_DWORD)v47 == 19 || (_DWORD)v47 == 23 || (unsigned int)v47 > 0x18);
    }
    if ( v47 > 0x16 )
      goto LABEL_68;
    if ( (_DWORD)v47 != 20 )
    {
      v50 = v47 - 17;
      if ( v50 )
      {
        v47 = (unsigned int)(v50 - 4);
        if ( !(_DWORD)v47 )
        {
LABEL_70:
          v41 = 0;
LABEL_71:
          *((_BYTE *)a2 + 21) = v41;
          return 1;
        }
        if ( (_DWORD)v47 != 1 )
        {
LABEL_68:
          v40 = (HWND)*((_QWORD *)a2 + 1);
          if ( !*((_BYTE *)a2 + 20) )
          {
            v41 = CApplicationManagerUtility::IsTrayWindowStyleCheck(v40, (HWND)v47);
            goto LABEL_71;
          }
          if ( (GetWindowLongPtrW(v40, -20) & 0x40000) == 0 )
            goto LABEL_70;
        }
      }
    }
    v41 = 1;
    goto LABEL_71;
  }
  v11 = *(_QWORD *)a2;
  if ( *((_BYTE *)a2 + 20) )
  {
    if ( v11 == 24 )
    {
      VisibleRootOwner = 0LL;
    }
    else
    {
      VisibleRootOwner = CApplicationManagerUtility::GetVisibleRootOwner(*((_QWORD *)a2 + 1), v11 == 21);
      *((_BYTE *)a2 + 20) = 0;
    }
    goto LABEL_90;
  }
  if ( v11 == 32 && CApplicationManagerUtility::IsOwnedWindow(*((CApplicationManagerUtility **)a2 + 1), v8) )
  {
    VisibleRootOwner = CApplicationManagerUtility::GetVisibleRootOwner(*((_QWORD *)a2 + 1), 0LL);
LABEL_90:
    *((_QWORD *)a2 + 1) = VisibleRootOwner;
  }
  v12 = (CallerIdentity *)*((_QWORD *)a2 + 1);
  if ( v12 )
  {
    *((_BYTE *)a2 + 21) = 1;
    v13 = (unsigned int **)((char *)a2 + 32);
    if ( *((_QWORD *)a2 + 4) )
      return 1;
    if ( *((_DWORD *)a2 + 4) != 2 )
      return 1;
    if ( *(_QWORD *)a2 > 0x1DuLL )
      return 1;
    v14 = 604110848LL;
    if ( !_bittest64(&v14, *(_QWORD *)a2) )
      return 1;
    *v13 = 0LL;
    if ( !GetWindowThreadProcessId((HWND)v12, &dwProcessId) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x6B,
                    (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
                    v15);
      goto LABEL_156;
    }
    v16 = OpenProcess(0x1000u, 0, dwProcessId);
    v65 = v16;
    if ( (((unsigned __int64)v16 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v72 = 0LL;
      if ( (unsigned int)GetProcessUIContextInformation(v16, &v72) )
      {
        if ( (_DWORD)v72 == 2 )
        {
          WeakWindowAppId = CallerIdentity::GetWeakWindowAppId(v12, (HWND)a2 + 8, v18);
          LastError = WeakWindowAppId;
          if ( WeakWindowAppId < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x77,
              (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
              (const char *)(unsigned int)WeakWindowAppId,
              (int)ReturnLength);
            goto LABEL_155;
          }
        }
        if ( *v13 )
          goto LABEL_66;
        *v13 = 0LL;
        *(_OWORD *)P = 0LL;
        if ( v16 == GetCurrentProcess() )
        {
          v20 = -4LL;
          TokenHandle = (void *)-4LL;
        }
        else
        {
          if ( !OpenProcessToken(v16, 8u, &TokenHandle) )
          {
            LastError = GetLastError();
            if ( LastError )
              goto LABEL_44;
          }
          v20 = (__int64)TokenHandle;
        }
        v21 = NtQueryInformationToken((HANDLE)v20, TokenSecurityAttributes, 0LL, 0, &TokenInformationLength);
        if ( v21 == -1073741789 )
        {
          v22 = TokenInformationLength * (unsigned __int128)0x10uLL;
          if ( is_mul_ok(TokenInformationLength, 0x10uLL)
            && (*(_QWORD *)&v22 = RtlAllocateHeap(
                                    NtCurrentPeb()->ProcessHeap,
                                    DWORD2(v22),
                                    16LL * TokenInformationLength),
                (v23 = v22) != 0) )
          {
            memset_0((void *)v22, 0, TokenInformationLength);
            v24 = NtQueryInformationToken(
                    (HANDLE)v20,
                    TokenSecurityAttributes,
                    (PVOID)v23,
                    TokenInformationLength,
                    &TokenInformationLength);
            if ( v24 < 0 )
            {
              LastError = RtlNtStatusToDosErrorNoTeb(v24);
              ARI::Free((PVOID)v23, v56);
            }
            else if ( *(_DWORD *)(v23 + 4)
                   && (RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID"), v25 = 0, *(_DWORD *)(v23 + 4)) )
            {
              while ( 1 )
              {
                v26 = (const UNICODE_STRING *)(*(_QWORD *)(v23 + 8) + 40LL * v25);
                if ( !RtlCompareUnicodeString(&DestinationString, v26, 1u) )
                  break;
                if ( ++v25 >= *(_DWORD *)(v23 + 4) )
                  goto LABEL_96;
              }
              P[1] = (PVOID)v26;
              P[0] = (PVOID)v23;
              ARI::Free(0LL, v27);
              LastError = 0;
            }
            else
            {
LABEL_96:
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v23);
              LastError = 1168;
            }
          }
          else
          {
            ARI::Free(0LL, *((void **)&v22 + 1));
            LastError = 8;
          }
        }
        else if ( v21 )
        {
          LastError = RtlNtStatusToDosErrorNoTeb(v21);
        }
        else
        {
          LastError = 1359;
        }
        if ( TokenHandle != (void *)-4LL )
          CloseHandle(TokenHandle);
LABEL_44:
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        if ( LastError == -2147023728 || LastError == -2147024891 )
        {
LABEL_154:
          ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)P);
          if ( LastError < 0 )
            goto LABEL_155;
          goto LABEL_66;
        }
        if ( LastError < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA4,
            (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
            (const char *)(unsigned int)LastError,
            (int)ReturnLength);
          goto LABEL_154;
        }
        if ( (unsigned int)ARI::ProcessToken::SysAppId::GetAppUserModelId(
                             (ARI::ProcessToken::SysAppId *)P[1],
                             0LL,
                             (unsigned int)&v64,
                             0LL,
                             ReturnLength) != 122 )
        {
          LastError = -2147418113;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xA7,
            (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
            (const char *)0x8000FFFFLL,
            (int)ReturnLengtha);
          ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)P);
          goto LABEL_155;
        }
        CoTaskMemFree(0LL);
        v29 = (unsigned int)v64;
        v30 = 0LL;
        v31 = (unsigned int)v64 + 1LL;
        if ( v31 < (unsigned int)v64 )
        {
          LastError = -2147024362;
          goto LABEL_152;
        }
        if ( is_mul_ok(v31, 2uLL) )
        {
          v32 = (unsigned int *)CoTaskMemAlloc(2 * v31);
          v30 = v32;
          if ( !v32 )
          {
            LastError = -2147024882;
            goto LABEL_152;
          }
          LastError = 0;
          if ( v31 > 0x7FFFFFFF || v29 >= 0x7FFFFFFF )
          {
            *(_WORD *)v32 = 0;
          }
          else
          {
            v33 = v31;
            v34 = v32;
            v35 = 0;
            v36 = 0LL;
            v37 = (char *)((char *)&word_180411F30 - (char *)v32);
            while ( v33 != v31 )
            {
              v57 = *(_WORD *)&v37[(_QWORD)v34];
              if ( !v57 )
                break;
              *(_WORD *)v34 = v57;
              v34 = (unsigned int *)((char *)v34 + 2);
              ++v36;
              if ( !--v33 )
                goto LABEL_147;
            }
            if ( v33 )
              goto LABEL_58;
LABEL_147:
            v34 = (unsigned int *)((char *)v34 - 2);
            --v36;
            v35 = -2147024774;
LABEL_58:
            *(_WORD *)v34 = 0;
            v38 = v31 - v36;
            if ( v35 >= 0 && v38 > 1 && 2 * v38 > 2 )
              memset_0((char *)v30 + 2 * v36 + 2, 0, 2 * v38 - 2);
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
                             (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)(unsigned int)v29,
                             (unsigned int)&v64,
                             v30,
                             ReturnLengtha);
          if ( !AppUserModelId )
          {
            *v13 = v30;
            CoTaskMemFree(0LL);
            if ( P[0] )
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
LABEL_66:
            wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v65);
            return 1;
          }
          LastError = wil::details::in1diag3::Return_Win32(
                        retaddr,
                        (void *)0xAB,
                        (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
                        (const char *)AppUserModelId,
                        ReturnLengthb);
          goto LABEL_153;
        }
LABEL_152:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAA,
          (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
          (const char *)(unsigned int)LastError,
          (int)ReturnLengtha);
LABEL_153:
        CoTaskMemFree(v30);
        goto LABEL_154;
      }
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x70,
                    (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
                    v19);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x6D,
                    (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
                    v17);
    }
LABEL_155:
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v65);
LABEL_156:
    if ( LastError < 0 )
    {
      if ( CApplicationManagerUtility::IsValidWindow(*((CApplicationManagerUtility **)a2 + 1), v54)
        && !CApplicationManagerUtility::IsOwnedWindow(*((CApplicationManagerUtility **)a2 + 1), v58)
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
