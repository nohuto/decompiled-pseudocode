/*
 * XREFs of ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18001D500
 * Callers:
 *     ?GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z @ 0x18000F7D4 (-GetAppIdFromProcessId@CallerIdentity@@YAJKPEAPEAG@Z.c)
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x18001D1A0 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ?TryGetProcessExePathAndAppId@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@I@Z @ 0x1800AF9C8 (-TryGetProcessExePathAndAppId@@YA-AU-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180406D20 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x180406F50 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180407FA4 (-GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     ??1?$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ @ 0x18001D880 (--1-$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ.c)
 *     ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x18005C1B0 (-GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180109198 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Free@ARI@@YAXPEAX@Z @ 0x180406F24 (-Free@ARI@@YAXPEAX@Z.c)
 */

__int64 __fastcall CallerIdentity::GetProcessAppId(HANDLE ProcessHandle, unsigned int **a2, unsigned __int16 **a3)
{
  unsigned int v3; // edi
  void *v5; // r12
  ARI::ProcessToken::SysAppId *v6; // r13
  __int64 v7; // rbx
  NTSTATUS v8; // eax
  unsigned __int128 v9; // rax
  __int64 v10; // rsi
  int v11; // eax
  unsigned int v12; // ebx
  const UNICODE_STRING *v13; // rbp
  void *v14; // rdx
  signed int LastError; // ebx
  unsigned __int64 v16; // r15
  unsigned int *v17; // rsi
  unsigned __int64 v18; // rbx
  unsigned int *v19; // rax
  int v20; // r14d
  unsigned __int64 v21; // rcx
  char *v22; // r8
  unsigned int *v23; // r9
  int v24; // r10d
  __int64 v25; // rdx
  unsigned __int64 v26; // rbx
  unsigned int AppUserModelId; // eax
  void *v29; // rdx
  wil::details::in1diag3 *v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rdx
  __int16 v33; // ax
  unsigned __int16 *ReturnLength; // [rsp+20h] [rbp-78h]
  unsigned int ReturnLengtha; // [rsp+20h] [rbp-78h]
  unsigned int *v36; // [rsp+30h] [rbp-68h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  ULONG TokenInformationLength; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int **v40; // [rsp+A8h] [rbp+10h]
  struct _TOKEN_SECURITY_ATTRIBUTE_V1 *v41; // [rsp+B0h] [rbp+18h] BYREF
  void *TokenHandle; // [rsp+B8h] [rbp+20h] BYREF

  v40 = a2;
  v3 = 0;
  v5 = 0LL;
  v6 = 0LL;
  *a2 = 0LL;
  if ( ProcessHandle == GetCurrentProcess() )
  {
    v7 = -4LL;
    TokenHandle = (void *)-4LL;
  }
  else
  {
    if ( !OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
    {
      LastError = GetLastError();
      if ( LastError )
        goto LABEL_16;
    }
    v7 = (__int64)TokenHandle;
  }
  v8 = NtQueryInformationToken((HANDLE)v7, TokenSecurityAttributes, 0LL, 0, &TokenInformationLength);
  if ( v8 == -1073741789 )
  {
    v9 = TokenInformationLength * (unsigned __int128)0x10uLL;
    if ( is_mul_ok(TokenInformationLength, 0x10uLL)
      && (*(_QWORD *)&v9 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, DWORD2(v9), 16LL * TokenInformationLength),
          (v10 = v9) != 0) )
    {
      memset_0((void *)v9, 0, TokenInformationLength);
      v11 = NtQueryInformationToken(
              (HANDLE)v7,
              TokenSecurityAttributes,
              (PVOID)v10,
              TokenInformationLength,
              &TokenInformationLength);
      if ( v11 < 0 )
      {
        LastError = RtlNtStatusToDosErrorNoTeb(v11);
        ARI::Free((PVOID)v10, v29);
      }
      else if ( *(_DWORD *)(v10 + 4)
             && (RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID"), v12 = 0, *(_DWORD *)(v10 + 4)) )
      {
        while ( 1 )
        {
          v13 = (const UNICODE_STRING *)(*(_QWORD *)(v10 + 8) + 40LL * v12);
          if ( !RtlCompareUnicodeString(&DestinationString, v13, 1u) )
            break;
          if ( ++v12 >= *(_DWORD *)(v10 + 4) )
            goto LABEL_12;
        }
        v6 = (ARI::ProcessToken::SysAppId *)v13;
        v5 = (void *)v10;
        ARI::Free(0LL, v14);
        LastError = 0;
      }
      else
      {
LABEL_12:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v10);
        LastError = 1168;
      }
    }
    else
    {
      ARI::Free(0LL, *((void **)&v9 + 1));
      LastError = 8;
    }
  }
  else if ( v8 )
  {
    LastError = RtlNtStatusToDosErrorNoTeb(v8);
  }
  else
  {
    LastError = 1359;
  }
  if ( TokenHandle != (void *)-4LL )
    CloseHandle(TokenHandle);
LABEL_16:
  if ( LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  if ( LastError != -2147023728 && LastError != -2147024891 )
  {
    if ( LastError < 0 )
    {
      v30 = retaddr;
      v31 = (unsigned int)LastError;
      v32 = 165LL;
    }
    else
    {
      if ( (unsigned int)ARI::ProcessToken::SysAppId::GetAppUserModelId(v6, 0LL, (unsigned int)&v41, 0LL, ReturnLength) == 122 )
      {
        CoTaskMemFree(0LL);
        v16 = (unsigned int)v41;
        v17 = 0LL;
        v36 = 0LL;
        v18 = (unsigned int)v41 + 1LL;
        if ( v18 < (unsigned int)v41 )
        {
          v20 = -2147024362;
          goto LABEL_61;
        }
        if ( is_mul_ok(v18, 2uLL) )
        {
          v19 = (unsigned int *)CoTaskMemAlloc(2 * v18);
          v36 = v19;
          v17 = v19;
          if ( !v19 )
          {
            v20 = -2147024882;
            goto LABEL_61;
          }
          v20 = 0;
          if ( v18 > 0x7FFFFFFF || v16 >= 0x7FFFFFFF )
          {
            *(_WORD *)v19 = 0;
          }
          else
          {
            v21 = v18;
            v22 = (char *)((char *)&String2 - (char *)v19);
            v23 = v19;
            v24 = 0;
            v25 = 0LL;
            while ( v21 != v18 )
            {
              v33 = *(_WORD *)&v22[(_QWORD)v23];
              if ( !v33 )
                break;
              *(_WORD *)v23 = v33;
              ++v25;
              v23 = (unsigned int *)((char *)v23 + 2);
              if ( !--v21 )
                goto LABEL_56;
            }
            if ( v21 )
              goto LABEL_30;
LABEL_56:
            v23 = (unsigned int *)((char *)v23 - 2);
            v24 = -2147024774;
            --v25;
LABEL_30:
            v26 = v18 - v25;
            *(_WORD *)v23 = 0;
            if ( v24 >= 0 && v26 > 1 && 2 * v26 > 2 )
              memset_0((char *)v17 + 2 * v25 + 2, 0, 2 * v26 - 2);
          }
        }
        else
        {
          v20 = -2147024362;
        }
        if ( v20 >= 0 )
        {
          AppUserModelId = ARI::ProcessToken::SysAppId::GetAppUserModelId(
                             v6,
                             (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)(unsigned int)v16,
                             (unsigned int)&v41,
                             v17,
                             ReturnLength);
          if ( !AppUserModelId )
          {
            v36 = 0LL;
            *v40 = v17;
LABEL_37:
            CMemString<CMemString_PolicyCoTaskMem>::~CMemString<CMemString_PolicyCoTaskMem>(&v36);
            goto LABEL_38;
          }
          v20 = wil::details::in1diag3::Return_Win32(
                  retaddr,
                  (void *)0xAC,
                  (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
                  (const char *)AppUserModelId,
                  ReturnLengtha);
LABEL_62:
          v3 = v20;
          goto LABEL_37;
        }
LABEL_61:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAB,
          (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
          (const char *)(unsigned int)v20,
          (int)ReturnLength);
        goto LABEL_62;
      }
      v30 = retaddr;
      LastError = -2147418113;
      v32 = 168LL;
      v31 = 2147549183LL;
    }
    wil::details::in1diag3::Return_Hr(
      v30,
      (void *)v32,
      (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)v31,
      (int)ReturnLength);
  }
  v3 = LastError;
LABEL_38:
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return v3;
}
