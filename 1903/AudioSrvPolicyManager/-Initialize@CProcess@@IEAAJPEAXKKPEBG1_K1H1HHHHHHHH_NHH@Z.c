/*
 * XREFs of ?Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x18001175C
 * Callers:
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHHHH_NHHPEAPEAV1@@Z @ 0x18001126C (-CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHHHH_NHHPEAPEAV1@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800010A0 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002D18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x18000499C (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?CoAllocString@@YAJPEBGPEAPEAG@Z @ 0x18000D724 (-CoAllocString@@YAJPEBGPEAPEAG@Z.c)
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x180013958 (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x180015C00 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z.c)
 *     __security_check_cookie @ 0x1800343C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::Initialize(
        CProcess *this,
        HANDLE hSourceHandle,
        int a3,
        int a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        unsigned __int64 a7,
        unsigned __int16 *a8,
        int a9,
        const unsigned __int16 *a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        bool a19,
        int a20,
        int a21)
{
  unsigned __int16 *bInheritHandle; // r12
  HANDLE *v24; // rdi
  char *v25; // r14
  DWORD LastError; // ebx
  HANDLE CurrentProcess; // rbx
  HANDLE v28; // rax
  const char *v30; // r9
  unsigned int v31; // ebx
  __int64 result; // rax
  void *v33; // r14
  DWORD v34; // ebx
  int v35; // eax
  unsigned int v36; // ebx
  const GUID *v37; // r9
  void *v38; // r14
  DWORD v39; // ebx
  int v40; // eax
  unsigned int v41; // ebx
  void *v42; // r14
  DWORD v43; // ebx
  int v44; // eax
  unsigned int v45; // ebx
  void *v46; // r14
  DWORD v47; // ebx
  int v48; // eax
  unsigned int v49; // ebx
  int v50; // eax
  unsigned int v51; // ebx
  DWORD v52; // r14d
  unsigned int v53; // r15d
  DWORD v54; // ebx
  void *v55; // rdi
  HANDLE v56; // rbx
  HANDLE v57; // rax
  DWORD *v58; // rdx
  char *v59; // rbx
  _DWORD *v60; // rcx
  _DWORD *i; // rax
  const struct _TlgProvider_t *v62; // rcx
  const GUID *v63; // r8
  HANDLE v64; // r13
  DWORD v65; // edi
  HANDLE hObject; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int16 *v67; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int16 *v68[2]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE ProcessInformation[40]; // [rsp+60h] [rbp-A8h] BYREF
  DWORD dwProcessId[2]; // [rsp+88h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int16 **v72; // [rsp+B0h] [rbp-58h]
  __int64 v73; // [rsp+B8h] [rbp-50h]
  unsigned __int16 **v74; // [rsp+C0h] [rbp-48h]
  __int64 v75; // [rsp+C8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]

  v68[1] = (unsigned __int16 *)-2LL;
  v68[0] = a5;
  v67 = a8;
  bInheritHandle = (unsigned __int16 *)a10;
  *((_DWORD *)this + 48) = a3;
  *((_DWORD *)this + 49) = a4;
  *((_DWORD *)this + 56) = a9;
  *((_DWORD *)this + 113) = a11;
  *((_DWORD *)this + 114) = a12;
  *((_DWORD *)this + 115) = a13;
  *((_DWORD *)this + 116) = a14;
  *((_DWORD *)this + 118) = a16;
  *((_DWORD *)this + 119) = a17;
  *((_DWORD *)this + 126) = a18;
  *((_DWORD *)this + 117) = a15;
  *((_QWORD *)this + 30) = a7;
  *((_BYTE *)this + 818) = a19;
  *((_DWORD *)this + 120) = a20;
  *((_DWORD *)this + 121) = a21;
  hObject = 0LL;
  if ( hSourceHandle )
  {
    v24 = (HANDLE *)((char *)this + 184);
    v25 = (char *)*((_QWORD *)this + 23);
    if ( (unsigned __int64)(v25 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      CloseHandle(v25);
      SetLastError(LastError);
    }
    *v24 = 0LL;
    CurrentProcess = GetCurrentProcess();
    v28 = GetCurrentProcess();
    if ( !DuplicateHandle(v28, hSourceHandle, CurrentProcess, v24, 0x101000u, 0, 0) )
    {
      v31 = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0xAE3,
              (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
              v30);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      return v31;
    }
  }
  v33 = (void *)*((_QWORD *)this + 25);
  if ( v33 )
  {
    v34 = GetLastError();
    CoTaskMemFree(v33);
    SetLastError(v34);
  }
  try
  {
    *((_QWORD *)this + 25) = 0LL;
    v35 = CoAllocString(v68[0], (unsigned __int16 **)this + 25);
    v36 = v35;
    if ( v35 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAE9,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v35);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      return v36;
    }
    v38 = (void *)*((_QWORD *)this + 27);
    if ( v38 )
    {
      v39 = GetLastError();
      CoTaskMemFree(v38);
      SetLastError(v39);
    }
    *((_QWORD *)this + 27) = 0LL;
    v40 = CoAllocString(v67, (unsigned __int16 **)this + 27);
    v41 = v40;
    if ( v40 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAEB,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v40);
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
        CloseHandle(hObject);
      return v41;
    }
    if ( a6 )
    {
      v42 = (void *)*((_QWORD *)this + 26);
      if ( v42 )
      {
        v43 = GetLastError();
        CoTaskMemFree(v42);
        SetLastError(v43);
      }
      *((_QWORD *)this + 26) = 0LL;
      v44 = CoAllocString(a6, (unsigned __int16 **)this + 26);
      v45 = v44;
      if ( v44 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAF2,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)(unsigned int)v44);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        return v45;
      }
    }
    if ( a10 )
    {
      v46 = (void *)*((_QWORD *)this + 29);
      if ( v46 )
      {
        v47 = GetLastError();
        CoTaskMemFree(v46);
        SetLastError(v47);
      }
      *((_QWORD *)this + 29) = 0LL;
      v48 = CoAllocString(a10, (unsigned __int16 **)this + 29);
      v49 = v48;
      bInheritHandle = 0LL;
      if ( v48 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAF6,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)(unsigned int)v48);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        return v49;
      }
    }
    if ( hSourceHandle )
    {
      v50 = CProcess::SetupProcessTerminationWatcher(this);
      v51 = v50;
      if ( v50 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAFF,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)(unsigned int)v50);
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        return v51;
      }
    }
    v52 = *((_DWORD *)this + 48);
    LODWORD(v67) = v52;
    v53 = (unsigned int)bInheritHandle;
    if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    {
      v54 = GetLastError();
      CloseHandle(hObject);
      SetLastError(v54);
    }
    hObject = bInheritHandle;
    v55 = (void *)*((_QWORD *)this + 23);
    v56 = GetCurrentProcess();
    v57 = GetCurrentProcess();
    if ( !DuplicateHandle(v57, v55, v56, &hObject, 0x1000u, (BOOL)bInheritHandle, (DWORD)bInheritHandle) )
      goto LABEL_54;
    while ( 1 )
    {
      v58 = (DWORD *)*((_QWORD *)this + 16);
      if ( *((DWORD **)this + 17) == v58 )
      {
        std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>((char *)this + 120, v58, &v67);
      }
      else
      {
        *v58 = v52;
        *((_QWORD *)this + 16) += 4LL;
      }
      v52 = (unsigned int)bInheritHandle;
      LODWORD(v67) = (_DWORD)bInheritHandle;
      v59 = (char *)hObject;
      if ( hObject )
      {
        if ( NtQueryInformationProcess(
               hObject,
               ProcessBasicInformation,
               ProcessInformation,
               0x30u,
               (PULONG)bInheritHandle) < 0 )
        {
          v59 = (char *)hObject;
        }
        else
        {
          v52 = dwProcessId[0];
          LODWORD(v67) = dwProcessId[0];
          v60 = (_DWORD *)*((_QWORD *)this + 16);
          for ( i = (_DWORD *)*((_QWORD *)this + 15); i != v60 && *i != dwProcessId[0]; ++i )
            ;
          if ( i != v60 )
          {
            v62 = (const struct _TlgProvider_t *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
            if ( *(_DWORD *)v62 > 4u )
            {
              LODWORD(v67) = v52;
              v72 = &v67;
              v73 = 4LL;
              LODWORD(v68[0]) = *((_DWORD *)this + 48);
              v74 = v68;
              v75 = 4LL;
              TlgWrite(v62, &unk_180042D78, v63, v37, 4u, &pData);
            }
LABEL_54:
            v59 = (char *)hObject;
LABEL_55:
            if ( (unsigned __int64)(v59 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              CloseHandle(v59);
            return 0LL;
          }
          v59 = (char *)OpenProcess(0x1000u, 0, dwProcessId[0]);
          v64 = hObject;
          if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          {
            v65 = GetLastError();
            CloseHandle(v64);
            SetLastError(v65);
          }
          hObject = v59;
        }
      }
      ++v53;
      if ( !v52 || v53 >= 0xA )
        goto LABEL_55;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB2B,
                           (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                           (const char *)v37);
  }
  return result;
}
