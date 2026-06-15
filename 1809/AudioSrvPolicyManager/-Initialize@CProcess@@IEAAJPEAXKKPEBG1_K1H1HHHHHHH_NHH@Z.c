/*
 * XREFs of ?Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHHH_NHH@Z @ 0x1800148DC
 * Callers:
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHHH_NHHPEAPEAV1@@Z @ 0x180014400 (-CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHHH_NHHPEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002F84 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002FB8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x180016AC8 (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x180018D90 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180019274 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x18001AE0C (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::Initialize(
        CProcess *this,
        HANDLE hSourceHandle,
        int a3,
        int a4,
        const unsigned __int16 *a5,
        const unsigned __int16 *a6,
        char *hObject,
        const unsigned __int16 *a8,
        int a9,
        const unsigned __int16 *a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        DWORD a18,
        int a19,
        int a20)
{
  HANDLE *v22; // rdi
  char *v23; // r14
  DWORD LastError; // ebx
  HANDLE CurrentProcess; // rbx
  HANDLE v26; // rax
  const char *v28; // r9
  unsigned int v29; // ebx
  __int64 result; // rax
  void *v31; // rdi
  DWORD v32; // ebx
  __int64 v33; // rdi
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned int v38; // ebx
  const char *v39; // r9
  void *v40; // r15
  DWORD v41; // ebx
  __int64 v42; // r9
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // ebx
  void *v47; // r12
  DWORD v48; // ebx
  __int64 v49; // r9
  int v50; // eax
  unsigned int v51; // ebx
  const unsigned __int16 *v52; // r14
  void *v53; // r12
  DWORD v54; // ebx
  int v55; // eax
  unsigned int v56; // ebx
  int v57; // eax
  unsigned int v58; // ebx
  DWORD v59; // r14d
  unsigned int v60; // r15d
  HANDLE v61; // rdi
  DWORD v62; // ebx
  void *v63; // rdi
  HANDLE v64; // rbx
  HANDLE v65; // rax
  DWORD *v66; // rdx
  char *v67; // rbx
  _DWORD *v68; // rcx
  _DWORD *i; // rax
  HANDLE v70; // r13
  DWORD v71; // edi
  const char *bInheritHandle; // [rsp+28h] [rbp-70h]
  _BYTE ProcessInformation[40]; // [rsp+48h] [rbp-50h] BYREF
  DWORD dwProcessId[4]; // [rsp+70h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  *((_DWORD *)this + 48) = a3;
  *((_DWORD *)this + 49) = a4;
  *((_DWORD *)this + 56) = a9;
  *((_DWORD *)this + 113) = a11;
  *((_DWORD *)this + 114) = a12;
  *((_DWORD *)this + 115) = a13;
  *((_DWORD *)this + 116) = a14;
  *((_DWORD *)this + 118) = a16;
  *((_DWORD *)this + 125) = a17;
  *((_DWORD *)this + 117) = a15;
  *((_QWORD *)this + 30) = hObject;
  *((_BYTE *)this + 810) = a18;
  *((_DWORD *)this + 119) = a19;
  *((_DWORD *)this + 120) = a20;
  hObject = 0LL;
  if ( hSourceHandle )
  {
    v22 = (HANDLE *)((char *)this + 184);
    v23 = (char *)*((_QWORD *)this + 23);
    if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      CloseHandle(v23);
      SetLastError(LastError);
    }
    *v22 = 0LL;
    CurrentProcess = GetCurrentProcess();
    v26 = GetCurrentProcess();
    if ( !DuplicateHandle(v26, hSourceHandle, CurrentProcess, v22, 0x101000u, 0, 0) )
    {
      v29 = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0xAB9,
              (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
              v28);
      if ( (unsigned __int64)(hObject - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(hObject);
      return v29;
    }
  }
  v31 = (void *)*((_QWORD *)this + 25);
  if ( v31 )
  {
    v32 = GetLastError();
    CoTaskMemFree(v31);
    SetLastError(v32);
  }
  *((_QWORD *)this + 25) = 0LL;
  v33 = -1LL;
  v34 = -1LL;
  do
    ++v34;
  while ( a5[v34] );
  try
  {
    v35 = _AllocStringWorker<CTCoAllocPolicy>(this, hSourceHandle, a5);
    v38 = v35;
    if ( v35 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xABF,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v35);
      if ( (unsigned __int64)(hObject - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(hObject);
      return v38;
    }
    v40 = (void *)*((_QWORD *)this + 27);
    if ( v40 )
    {
      v41 = GetLastError();
      CoTaskMemFree(v40);
      SetLastError(v41);
    }
    *((_QWORD *)this + 27) = 0LL;
    v42 = -1LL;
    do
      ++v42;
    while ( a8[v42] );
    v43 = _AllocStringWorker<CTCoAllocPolicy>(v37, v36, a8);
    v46 = v43;
    if ( v43 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAC1,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
        (const char *)(unsigned int)v43);
      if ( (unsigned __int64)(hObject - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(hObject);
      return v46;
    }
    if ( a6 )
    {
      v47 = (void *)*((_QWORD *)this + 26);
      if ( v47 )
      {
        v48 = GetLastError();
        CoTaskMemFree(v47);
        SetLastError(v48);
      }
      *((_QWORD *)this + 26) = 0LL;
      v49 = -1LL;
      do
        ++v49;
      while ( a6[v49] );
      v50 = _AllocStringWorker<CTCoAllocPolicy>(v45, v44, a6);
      v51 = v50;
      if ( v50 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAC8,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)(unsigned int)v50);
        if ( (unsigned __int64)(hObject - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(hObject);
        return v51;
      }
    }
    v52 = a10;
    if ( a10 )
    {
      v53 = (void *)*((_QWORD *)this + 29);
      if ( v53 )
      {
        v54 = GetLastError();
        CoTaskMemFree(v53);
        SetLastError(v54);
      }
      *((_QWORD *)this + 29) = 0LL;
      do
        ++v33;
      while ( v52[v33] );
      v55 = _AllocStringWorker<CTCoAllocPolicy>(v45, v44, v52);
      v56 = v55;
      if ( v55 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xACC,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)(unsigned int)v55);
        if ( (unsigned __int64)(hObject - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(hObject);
        return v56;
      }
    }
    if ( hSourceHandle )
    {
      v57 = CProcess::SetupProcessTerminationWatcher(this);
      v58 = v57;
      if ( v57 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAD5,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
          (const char *)(unsigned int)v57);
        if ( (unsigned __int64)(hObject - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          CloseHandle(hObject);
        return v58;
      }
    }
    v59 = *((_DWORD *)this + 48);
    a18 = v59;
    v60 = 0;
    v61 = hObject;
    if ( (unsigned __int64)(hObject - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v62 = GetLastError();
      CloseHandle(v61);
      SetLastError(v62);
    }
    hObject = 0LL;
    v63 = (void *)*((_QWORD *)this + 23);
    v64 = GetCurrentProcess();
    v65 = GetCurrentProcess();
    if ( !DuplicateHandle(v65, v63, v64, (LPHANDLE)&hObject, 0x1000u, 0, 0) )
      goto LABEL_62;
    while ( 1 )
    {
      v66 = (DWORD *)*((_QWORD *)this + 16);
      if ( *((DWORD **)this + 17) == v66 )
      {
        std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>((char *)this + 120, v66, &a18);
      }
      else
      {
        *v66 = v59;
        *((_QWORD *)this + 16) += 4LL;
      }
      v59 = 0;
      a18 = 0;
      v67 = hObject;
      if ( hObject )
      {
        if ( NtQueryInformationProcess(hObject, ProcessBasicInformation, ProcessInformation, 0x30u, 0LL) < 0 )
        {
          v67 = hObject;
        }
        else
        {
          v59 = dwProcessId[0];
          a18 = dwProcessId[0];
          v68 = (_DWORD *)*((_QWORD *)this + 16);
          for ( i = (_DWORD *)*((_QWORD *)this + 15); i != v68 && *i != dwProcessId[0]; ++i )
            ;
          if ( i != v68 )
          {
            wil::details::in1diag3::Log_HrMsg(
              retaddr,
              (void *)0xAF1,
              (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
              0LL,
              (int)"Encountered a stale parent PID",
              bInheritHandle);
LABEL_62:
            v67 = hObject;
LABEL_63:
            if ( (unsigned __int64)(v67 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              CloseHandle(v67);
            return 0LL;
          }
          v67 = (char *)OpenProcess(0x1000u, 0, dwProcessId[0]);
          v70 = hObject;
          if ( (unsigned __int64)(hObject - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          {
            v71 = GetLastError();
            CloseHandle(v70);
            SetLastError(v71);
          }
          hObject = v67;
        }
      }
      ++v60;
      if ( !v59 || v60 >= 0xA )
        goto LABEL_63;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAFD,
                           (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
                           v39);
  }
  return result;
}
