/*
 * XREFs of ?CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z @ 0x180010144
 * Callers:
 *     ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x18000F530 (-RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800035D8 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800131A4 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CAF80 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800CB1E8 (memcpy_0.c)
 *     memset_0 @ 0x1800CB2A9 (memset_0.c)
 */

__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::CreatePhoneLink(
        ContentManagement::PhoneShellNamespaceHelper *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        LPCWSTR *a4)
{
  HRESULT v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  char v10; // r15
  __int64 v11; // r14
  char *FileW; // rbx
  const char *v13; // r9
  __int64 v14; // rdx
  int v15; // r14d
  ULONG v16; // edi
  void *v17; // rax
  _WORD *v18; // rsi
  unsigned int Length; // eax
  __int64 v20; // rcx
  NTSTATUS v21; // eax
  unsigned int LastError; // eax
  LPCWSTR lpPathName; // [rsp+50h] [rbp-59h] BYREF
  __int64 v25; // [rsp+58h] [rbp-51h]
  __int64 v26; // [rsp+60h] [rbp-49h]
  _UNICODE_STRING NtPathName; // [rsp+68h] [rbp-41h] BYREF
  ULONG InputBufferLength; // [rsp+78h] [rbp-31h]
  PVOID InputBuffer; // [rsp+80h] [rbp-29h]
  PWSTR ppszPath; // [rsp+88h] [rbp-21h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp-19h] BYREF
  _BYTE FileInformation[32]; // [rsp+A0h] [rbp-9h] BYREF
  int v33; // [rsp+C0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  *a4 = 0LL;
  ppszPath = 0LL;
  v7 = SHGetKnownFolderPath(&FOLDERID_Profile, 0x1000u, 0LL, &ppszPath);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_32;
  }
  lpPathName = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         &lpPathName,
         L"%ws\\%ws",
         ppszPath,
         a2);
  v8 = v9;
  if ( v9 >= 0 )
  {
    CreateDirectoryW(lpPathName, 0LL);
    v10 = 1;
    *(_DWORD *)&NtPathName.Length = 0;
    NtPathName.Buffer = 0LL;
    InputBuffer = 0LL;
    v11 = -1LL;
    FileW = (char *)CreateFileW(lpPathName, 0x40000000u, 1u, 0LL, 3u, 0x2200000u, 0LL);
    if ( FileW == (char *)-1LL )
    {
      v14 = 905LL;
    }
    else if ( RtlDosPathNameToNtPathName_U(a3, &NtPathName, 0LL, 0LL) )
    {
      do
        ++v11;
      while ( a3[v11] );
      v15 = 2 * v11;
      v16 = v15 + NtPathName.Length + 20;
      InputBufferLength = v16;
      v17 = operator new[](v16, (const struct std::nothrow_t *)&std::nothrow);
      InputBuffer = v17;
      if ( !v17 )
      {
        v8 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x394,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)0x8007000ELL);
LABEL_21:
        if ( (unsigned __int64)(FileW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(FileW);
        if ( NtPathName.Buffer )
          RtlFreeUnicodeString(&NtPathName);
        if ( InputBuffer )
          operator delete(InputBuffer);
        if ( v10 )
          RemoveDirectoryW(lpPathName);
        goto LABEL_29;
      }
      memset_0(v17, 0, v16);
      v18 = InputBuffer;
      *((_WORD *)InputBuffer + 2) = v16 - 8;
      *(_DWORD *)v18 = -1610612733;
      v18[4] = 0;
      Length = NtPathName.Length;
      v18[5] = NtPathName.Length;
      memcpy_0(v18 + 8, NtPathName.Buffer, Length);
      v20 = (unsigned __int16)v18[5];
      v18[7] = v15;
      v20 += 2LL;
      v18[6] = v20;
      memcpy_0((char *)v18 + v20 + 16, a3, (unsigned __int16)v15);
      IoStatusBlock.Pointer = 0LL;
      IoStatusBlock.Information = 0LL;
      v21 = NtFsControlFile(FileW, 0LL, 0LL, 0LL, &IoStatusBlock, 0x900A4u, v18, InputBufferLength, 0LL, 0);
      if ( v21 < 0 )
      {
        LastError = wil::details::in1diag3::Return_NtStatus(
                      retaddr,
                      (void *)0x3B2,
                      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                      (const char *)(unsigned int)v21);
LABEL_19:
        v8 = LastError;
        goto LABEL_21;
      }
      if ( GetFileInformationByHandleEx(FileW, FileBasicInfo, FileInformation, 0x28u) )
      {
        v33 |= 7u;
        if ( SetFileInformationByHandle(FileW, FileBasicInfo, FileInformation, 0x28u) )
        {
          v10 = 0;
          *a4 = lpPathName;
          v8 = 0;
          lpPathName = 0LL;
          v26 = 0LL;
          v25 = 0LL;
          goto LABEL_21;
        }
        v14 = 952LL;
      }
      else
      {
        v14 = 950LL;
      }
    }
    else
    {
      v14 = 908LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v14,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                  v13);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x370,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v9);
LABEL_29:
  if ( lpPathName )
  {
    CoTaskMemFree((LPVOID)lpPathName);
    lpPathName = 0LL;
  }
  v25 = 0LL;
  v26 = 0LL;
LABEL_32:
  if ( ppszPath )
    CoTaskMemFree(ppszPath);
  return v8;
}
