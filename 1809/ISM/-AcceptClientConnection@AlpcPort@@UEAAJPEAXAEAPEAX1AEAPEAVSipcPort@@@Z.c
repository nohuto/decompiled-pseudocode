/*
 * XREFs of ?AcceptClientConnection@AlpcPort@@UEAAJPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800A01D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180002698 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180004D78 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x18009FD04 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ?Return_GetLastError@in1diag0@details@wil@@YAJXZ @ 0x18009FD40 (-Return_GetLastError@in1diag0@details@wil@@YAJXZ.c)
 *     ?Return_NtStatus@in1diag0@details@wil@@YAJJ@Z @ 0x18009FD68 (-Return_NtStatus@in1diag0@details@wil@@YAJJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag0@details@wil@@YAXXZ @ 0x18009FDD8 (-_FailFast_GetLastError@in1diag0@details@wil@@YAXXZ.c)
 *     ??0AlpcPort@@AEAA@XZ @ 0x18009FE48 (--0AlpcPort@@AEAA@XZ.c)
 *     ??1AlpcPort@@UEAA@XZ @ 0x18009FF0C (--1AlpcPort@@UEAA@XZ.c)
 *     ?InitializeSectionListEntryPool@AlpcPort@@AEAAJ_K@Z @ 0x1800A11EC (-InitializeSectionListEntryPool@AlpcPort@@AEAAJ_K@Z.c)
 *     ?GetBoundaryDescriptor@SipcPrivateNamespace@@AEAAJAEAY0CG@$$CBGPEAPEAX@Z @ 0x1800A1848 (-GetBoundaryDescriptor@SipcPrivateNamespace@@AEAAJAEAY0CG@$$CBGPEAPEAX@Z.c)
 *     ?InitializeObjectNames@SipcPrivateNamespace@@AEAAXAEAY0CG@G@Z @ 0x1800A190C (-InitializeObjectNames@SipcPrivateNamespace@@AEAAXAEAY0CG@G@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 */

__int64 __fastcall AlpcPort::AcceptClientConnection(
        AlpcPort *this,
        void *a2,
        void **a3,
        void **a4,
        struct SipcPort **a5)
{
  size_t v6; // rbx
  _DWORD *v7; // r15
  unsigned __int64 v8; // rdi
  unsigned int LastErrorFailHr; // ebx
  int LastError; // edi
  HANDLE v12; // rcx
  char *v13; // rbx
  __int64 v14; // rdx
  wil::details::in1diag0 *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  wil::details::in1diag0 *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  HANDLE v22; // rax
  wil::details *v23; // rcx
  HANDLE v24; // rbx
  HANDLE v25; // rax
  wil::details *v26; // rcx
  HANDLE v27; // rdi
  const char *v28; // r9
  AlpcPort *v29; // rax
  unsigned __int64 v30; // rdx
  AlpcPort *v31; // r14
  unsigned int v32; // esi
  const char *v33; // r9
  const char *v34; // r9
  const char *v35; // r9
  const char *v36; // r9
  _QWORD *v37; // r12
  void *v38; // rax
  char *v39; // r13
  DWORD v40; // esi
  void *v41; // rax
  HANDLE v42; // rdx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  const char *v47; // r9
  const char *v48; // r9
  const char *v49; // r9
  const char *v50; // r9
  void **v51; // rax
  HANDLE v52; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE BoundaryDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE hObject; // [rsp+60h] [rbp-A0h] BYREF
  void *v55; // [rsp+68h] [rbp-98h]
  void **v56; // [rsp+70h] [rbp-90h]
  void **v57; // [rsp+78h] [rbp-88h]
  struct SipcPort **v58; // [rsp+80h] [rbp-80h]
  __int128 v59; // [rsp+90h] [rbp-70h] BYREF
  _OWORD pSid[4]; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v61[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v62; // [rsp+120h] [rbp+20h]
  HANDLE Handle; // [rsp+130h] [rbp+30h] BYREF
  __int128 v64; // [rsp+138h] [rbp+38h]
  __int128 v65; // [rsp+148h] [rbp+48h]
  __int128 v66; // [rsp+158h] [rbp+58h]
  __int128 v67; // [rsp+168h] [rbp+68h]
  __int128 v68; // [rsp+178h] [rbp+78h]
  __int128 v69; // [rsp+188h] [rbp+88h]
  __int128 v70; // [rsp+198h] [rbp+98h]
  __int128 v71; // [rsp+1A8h] [rbp+A8h]
  __int128 v72; // [rsp+1B8h] [rbp+B8h]
  __int64 v73; // [rsp+1C8h] [rbp+C8h]
  WCHAR Name[51]; // [rsp+1D0h] [rbp+D0h] BYREF
  WCHAR v75[53]; // [rsp+236h] [rbp+136h] BYREF
  unsigned __int16 AliasPrefix[38]; // [rsp+2A0h] [rbp+1A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+348h] [rbp+248h]

  v56 = a3;
  *a3 = 0LL;
  *a4 = 0LL;
  v6 = 152LL;
  v55 = a2;
  v7 = (_DWORD *)((char *)this + 72);
  v58 = a5;
  *a5 = 0LL;
  v8 = *((__int16 *)this + 36);
  if ( *((__int16 *)this + 36) < 0 )
    v8 = 0LL;
  v57 = a4;
  if ( v8 < 0x98 )
    v6 = v8;
  memcpy_0(&v59, (char *)this + 112, v6);
  memset_0((char *)&pSid[-1] + v6, 0, 152 - v6);
  if ( v8 != 152 )
  {
    LastErrorFailHr = -2147418113;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8000FFFFLL);
    return LastErrorFailHr;
  }
  hObject = 0LL;
  v52 = 0LL;
  memset_0(&Handle, 0, 0x16CuLL);
  if ( !IsValidSid(pSid) || !IsValidSid((char *)v61 + 4) )
  {
    LastError = -2147024809;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x80070057LL);
LABEL_21:
    if ( !Handle || ClosePrivateNamespace(Handle, 1u) )
      return (unsigned int)LastError;
    goto LABEL_58;
  }
  v64 = v59;
  v65 = pSid[0];
  v66 = pSid[1];
  v67 = pSid[2];
  v68 = pSid[3];
  v69 = v61[0];
  v70 = v61[1];
  v71 = v61[2];
  v72 = v61[3];
  v73 = v62;
  SipcPrivateNamespace::InitializeObjectNames((SipcPrivateNamespace *)&Handle, (unsigned __int16 (*)[38])AliasPrefix);
  BoundaryDescriptor = 0LL;
  LastError = SipcPrivateNamespace::GetBoundaryDescriptor(
                (SipcPrivateNamespace *)&Handle,
                (const unsigned __int16 (*)[38])AliasPrefix,
                &BoundaryDescriptor);
  if ( LastError < 0 )
  {
    v12 = BoundaryDescriptor;
    if ( (char *)BoundaryDescriptor - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
      goto LABEL_20;
    goto LABEL_13;
  }
  v13 = (char *)BoundaryDescriptor;
  Handle = OpenPrivateNamespaceW(BoundaryDescriptor, AliasPrefix);
  if ( Handle )
  {
    if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      DeleteBoundaryDescriptor(v13);
    LastError = 0;
  }
  else
  {
    LastError = wil::details::in1diag0::Return_GetLastError(v15, v14, v16, v17);
    if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v12 = v13;
LABEL_13:
      DeleteBoundaryDescriptor(v12);
    }
  }
LABEL_20:
  if ( LastError < 0 )
    goto LABEL_21;
  v22 = OpenEventW(0x100000u, 0, Name);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    &hObject,
    v22);
  v24 = hObject;
  if ( !hObject )
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v23);
    if ( !Handle || ClosePrivateNamespace(Handle, 1u) )
      return LastErrorFailHr;
    goto LABEL_58;
  }
  v25 = OpenEventW(2u, 0, v75);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
    &v52,
    v25);
  v27 = v52;
  if ( !v52 )
  {
    LastError = wil::details::GetLastErrorFailHr(v26);
    if ( !Handle || ClosePrivateNamespace(Handle, 1u) )
    {
      if ( !CloseHandle(v24) )
      {
        wil::details::in1diag3::FailFast_GetLastError(
          retaddr,
          (void *)0x90E,
          (__int64)"internal\\sdk\\inc\\wil\\resource.h",
          v28);
        __debugbreak();
      }
      return (unsigned int)LastError;
    }
LABEL_58:
    wil::details::in1diag0::_FailFast_GetLastError(v19, v18, v20, v21);
    __debugbreak();
  }
  if ( Handle && !ClosePrivateNamespace(Handle, 1u) )
    goto LABEL_58;
  v29 = (AlpcPort *)operator new(0x1D0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v29 )
    v31 = AlpcPort::AlpcPort(v29);
  else
    v31 = 0LL;
  if ( !v31 )
  {
    v32 = -2147024882;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL);
    if ( !CloseHandle(v27) )
    {
      wil::details::in1diag3::FailFast_GetLastError(
        retaddr,
        (void *)0x90E,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v33);
      __debugbreak();
    }
    if ( !CloseHandle(v24) )
    {
      wil::details::in1diag3::FailFast_GetLastError(
        retaddr,
        (void *)0x90E,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v34);
      __debugbreak();
    }
    return v32;
  }
  v32 = AlpcPort::InitializeSectionListEntryPool(v31, v30);
  if ( (v32 & 0x80000000) != 0 )
  {
    AlpcPort::~AlpcPort(v31);
    operator delete(v31, (const struct std::nothrow_t *)0x1D0);
    if ( !CloseHandle(v27) )
    {
      wil::details::in1diag3::FailFast_GetLastError(
        retaddr,
        (void *)0x90E,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v35);
      __debugbreak();
    }
    if ( !CloseHandle(v24) )
    {
      wil::details::in1diag3::FailFast_GetLastError(
        retaddr,
        (void *)0x90E,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v36);
      __debugbreak();
    }
    return v32;
  }
  *v7 = 2621440;
  v37 = (_QWORD *)((char *)v31 + 8);
  v38 = (void *)*((_QWORD *)this + 1);
  v39 = (char *)*((_QWORD *)v31 + 1);
  v52 = v38;
  if ( (unsigned __int64)(v39 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v40 = GetLastError();
    CloseHandle(v39);
    SetLastError(v40);
  }
  v41 = v55;
  v42 = v52;
  *v37 = 0LL;
  v43 = NtAlpcAcceptConnectPort(
          (char *)v31 + 8,
          v42,
          0LL,
          0LL,
          &AlpcPort::ServerEndpointAlpcAttributes,
          v41,
          v7,
          0LL,
          1);
  if ( v43 < 0 )
  {
    v32 = wil::details::in1diag0::Return_NtStatus((wil::details::in1diag0 *)(unsigned int)v43, v44, v45, v46);
    AlpcPort::~AlpcPort(v31);
    operator delete(v31, (const struct std::nothrow_t *)0x1D0);
    if ( !CloseHandle(v27) )
    {
      wil::details::in1diag3::FailFast_GetLastError(
        retaddr,
        (void *)0x90E,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v47);
      JUMPOUT(0x1800A07C3LL);
    }
    if ( !CloseHandle(v24) )
    {
      wil::details::in1diag3::FailFast_GetLastError(
        retaddr,
        (void *)0x90E,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v48);
      __debugbreak();
    }
    return v32;
  }
  if ( ((*v37 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v32 = v43 | 0x90000000;
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(v43 | 0x90000000));
    AlpcPort::~AlpcPort(v31);
    operator delete(v31, (const struct std::nothrow_t *)0x1D0);
    if ( !CloseHandle(v27) )
    {
      wil::details::in1diag3::FailFast_GetLastError(
        retaddr,
        (void *)0x90E,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v49);
      __debugbreak();
    }
    if ( !CloseHandle(v24) )
    {
      wil::details::in1diag3::FailFast_GetLastError(
        retaddr,
        (void *)0x90E,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v50);
      __debugbreak();
    }
    return v32;
  }
  memset_0(v7, 0, 0x28uLL);
  *((_QWORD *)v7 + 40) = 0LL;
  v51 = v56;
  *((_WORD *)v7 + 1) = 40;
  v7[80] = 1610612736;
  *v51 = v24;
  *v57 = v27;
  *v58 = v31;
  return 0LL;
}
