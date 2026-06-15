/*
 * XREFs of ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x1400063F0
 * Callers:
 *     ?Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z @ 0x140003B70 (-Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z.c)
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140003DA0 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14000236C (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140005A40 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?ValidateSubmixDescriptor@@YAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140006370 (-ValidateSubmixDescriptor@@YAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140006814 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B260 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000BF50 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     memcpy_0 @ 0x14001D9AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14002FDF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x14003103C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140031A04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSubmixImpl::Initialize(CSubmixImpl *this, struct SUBMIX_DESCRIPTOR *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  void *v6; // rdi
  char *v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  _WORD *v10; // rax
  _WORD *v11; // r10
  int v12; // r12d
  unsigned __int64 v13; // rcx
  _WORD *v14; // rdx
  int v15; // r8d
  __int64 v16; // r9
  unsigned __int64 v17; // rbx
  signed __int64 v18; // rdi
  __int16 v19; // ax
  unsigned __int64 v20; // rsi
  LPVOID v21; // rbx
  void *v22; // rcx
  unsigned int v23; // eax
  void **v24; // rdi
  LPVOID v25; // rbx
  void *v26; // rcx
  HRESULT Instance; // ebx
  __int64 v28; // rcx
  char *v29; // rbx
  __int64 v30; // rcx
  int SubmixPipeInstance; // edi
  __int64 v32; // rbx
  __int64 *i; // rcx
  struct ATL::CAtlPlex *v34; // r8
  __int64 *v35; // r8
  int v36; // edx
  __int64 v37; // rax
  ATL::CAtlException *v39; // rbx
  DWORD LastError; // ebx
  __int64 v41; // rdx
  int v42; // ebx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  struct _RTL_CRITICAL_SECTION_DEBUG *v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rdx
  int ppv; // [rsp+20h] [rbp-78h]
  LPVOID v48[2]; // [rsp+30h] [rbp-68h] BYREF
  ATL::CAtlException *v49; // [rsp+40h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-50h] BYREF
  struct tWAVEFORMATEX *v51; // [rsp+50h] [rbp-48h] BYREF
  int v52; // [rsp+58h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v48[1] = (LPVOID)-2LL;
  v4 = ValidateSubmixDescriptor(a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19C,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v4,
      ppv);
    return v5;
  }
  *((_QWORD *)this + 29) = *((_QWORD *)a2 + 7);
  *((_OWORD *)this + 15) = *(_OWORD *)((char *)a2 + 68);
  *((_DWORD *)this + 64) = *(_DWORD *)a2;
  *((_BYTE *)this + 16) = *((_BYTE *)a2 + 12);
  *((_BYTE *)this + 313) = *((_BYTE *)a2 + 13);
  v6 = (void *)*((_QWORD *)this + 1);
  if ( v6 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v6);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 1) = 0LL;
  v7 = (char *)*((_QWORD *)a2 + 4);
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)&v7[2 * v8] );
  *((_QWORD *)this + 1) = 0LL;
  v9 = v8 + 1;
  if ( v8 + 1 < v8 )
  {
    v12 = -2147024362;
    goto LABEL_89;
  }
  *((_QWORD *)this + 1) = 0LL;
  if ( !is_mul_ok(v9, 2uLL) )
  {
    v12 = -2147024362;
    goto LABEL_21;
  }
  v10 = CoTaskMemAlloc(2 * v9);
  v11 = v10;
  *((_QWORD *)this + 1) = v10;
  if ( !v10 )
  {
    v12 = -2147024882;
    goto LABEL_89;
  }
  v12 = 0;
  if ( v9 > 0x7FFFFFFF )
  {
    if ( v8 == -1LL )
      goto LABEL_21;
    goto LABEL_65;
  }
  if ( v8 >= 0x7FFFFFFF )
  {
    if ( v8 == -1LL )
      goto LABEL_21;
LABEL_65:
    *v10 = 0;
    goto LABEL_21;
  }
  if ( !v7 )
  {
    v7 = (char *)&unk_14006CF10;
    v8 = 0LL;
  }
  if ( v9 )
  {
    v13 = v9;
    v14 = v10;
    v15 = 0;
    v16 = 0LL;
    v17 = v8 - v9;
    v18 = v7 - (char *)v10;
    while ( v17 + v13 )
    {
      v19 = *(_WORD *)((char *)v14 + v18);
      if ( !v19 )
        break;
      *v14++ = v19;
      ++v16;
      if ( !--v13 )
      {
        --v14;
        --v16;
        v15 = -2147024774;
        break;
      }
    }
    *v14 = 0;
    v20 = v9 - v16;
    if ( v15 >= 0 && v20 > 1 && 2 * v20 > 2 )
      memset_0(&v11[v16 + 1], 0, 2 * v20 - 2);
  }
LABEL_21:
  if ( v12 < 0 )
  {
LABEL_89:
    v41 = 420LL;
    goto LABEL_90;
  }
  v21 = CoTaskMemAlloc(*((unsigned int *)a2 + 10));
  v22 = (void *)*((_QWORD *)this + 27);
  if ( v21 != v22 )
  {
    if ( v22 )
      CoTaskMemFree(v22);
    *((_QWORD *)this + 27) = v21;
    v22 = v21;
  }
  if ( !v22 )
  {
    v12 = -2147024882;
    v41 = 423LL;
    goto LABEL_90;
  }
  memcpy_0(v22, *((const void **)a2 + 6), *((unsigned int *)a2 + 10));
  v23 = *((_DWORD *)a2 + 4);
  v24 = (void **)((char *)this + 224);
  if ( v23 )
  {
    v25 = CoTaskMemAlloc(v23);
    v26 = *v24;
    if ( v25 != *v24 )
    {
      if ( v26 )
        CoTaskMemFree(v26);
      *v24 = v25;
      v26 = v25;
    }
    if ( v26 )
    {
      memcpy_0(v26, *((const void **)a2 + 3), *((unsigned int *)a2 + 4));
      goto LABEL_34;
    }
    v12 = -2147024882;
    v41 = 429LL;
LABEL_90:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v41,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v12,
      ppv);
    return (unsigned int)v12;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
  v51 = 0LL;
  LOBYTE(v52) = 1;
  v42 = CloneWaveFormat(*((const struct tWAVEFORMATEX **)this + 27), &v51);
  if ( (_BYTE)v52 )
  {
    DebugInfo = lpCriticalSection->DebugInfo;
    v44 = (struct _RTL_CRITICAL_SECTION_DEBUG *)v51;
    if ( v51 != (struct tWAVEFORMATEX *)lpCriticalSection->DebugInfo )
    {
      if ( DebugInfo )
        CoTaskMemFree(DebugInfo);
      lpCriticalSection->DebugInfo = v44;
    }
  }
  if ( v42 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B3,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v42,
      ppv);
    return (unsigned int)v42;
  }
LABEL_34:
  if ( *((_BYTE *)this + 313) )
    goto LABEL_45;
  v48[0] = 0LL;
  Instance = CoCreateInstance(
               &GUID_de83650f_8ce4_40ea_a08e_6f0e5cd46f6b,
               0LL,
               0x17u,
               &GUID_97ecdc10_b3b5_4dff_8dcc_abd71ac23c33,
               v48);
  if ( Instance < 0 )
  {
    v45 = 442LL;
LABEL_77:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v45,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)v48);
    return (unsigned int)Instance;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)*((_QWORD *)a2 + 7);
  v28 = *((_QWORD *)this + 27);
  *(float *)&v51 = (float)*(int *)(v28 + 4);
  HIDWORD(v51) = *(unsigned __int16 *)(v28 + 2);
  v52 = *((unsigned __int8 *)a2 + 12);
  v29 = (char *)v48[0];
  v30 = *((_QWORD *)this + 33);
  *((_QWORD *)this + 33) = 0LL;
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  Instance = (*(__int64 (__fastcall **)(char *, _QWORD, LPCRITICAL_SECTION *, char *))(*(_QWORD *)v29 + 24LL))(
               v29,
               *((_QWORD *)a2 + 4),
               &lpCriticalSection,
               (char *)this + 264);
  if ( Instance < 0 )
  {
    v45 = 450LL;
    goto LABEL_77;
  }
  if ( !*((_BYTE *)a2 + 84) )
    goto LABEL_43;
  SubmixPipeInstance = CPipeInstance::CreateSubmixPipeInstance(
                         *((struct IDeviceGraphObjectCache **)this + 33),
                         a2,
                         (struct CPipeInstance **)this + 3);
  if ( SubmixPipeInstance < 0 )
  {
    v46 = 456LL;
LABEL_82:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v46,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)SubmixPipeInstance,
      ppv);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)v48);
    return (unsigned int)SubmixPipeInstance;
  }
  SubmixPipeInstance = CPipeInstance::Initialize(*((CPipeInstance **)this + 3));
  if ( SubmixPipeInstance < 0 )
  {
    v46 = 457LL;
    goto LABEL_82;
  }
  Instance = CPipeInstance::ConnectAPOs(*((CPipeInstance **)this + 3), 0LL);
  if ( Instance < 0 )
  {
    v45 = 458LL;
    goto LABEL_77;
  }
LABEL_43:
  if ( v48[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v48[0] + 16LL))(v48[0]);
LABEL_45:
  lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecSubmixList;
  LOBYTE(v51) = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  try
  {
    v32 = SubmixList;
    i = (__int64 *)qword_140088710;
    if ( !qword_140088710 )
    {
      v34 = ATL::CAtlPlex::Create(&qword_140088708, (unsigned int)dword_140088718, 0x18uLL);
      if ( !v34 )
        ATL::AtlThrowImpl(-2147024882);
      v35 = (__int64 *)((char *)v34 + 24 * (unsigned int)(dword_140088718 - 1) + 8);
      v36 = dword_140088718 - 1;
      for ( i = (__int64 *)qword_140088710; v36 >= 0; --v36 )
      {
        *v35 = (__int64)i;
        i = v35;
        qword_140088710 = (__int64)v35;
        v35 -= 3;
      }
    }
  }
  catch ( ATL::CAtlException *v49 )
  {
    v39 = v49;
    if ( *(_DWORD *)v49 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v48[0]) = *(_DWORD *)v39;
    Instance = (HRESULT)v48[0];
    if ( SLODWORD(v48[0]) < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D3,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)LODWORD(v48[0]),
        ppv);
      if ( (_BYTE)v51 )
        LeaveCriticalSection(lpCriticalSection);
      return (unsigned int)Instance;
    }
    goto LABEL_54;
  }
  v37 = *i;
  i[2] = (__int64)this;
  qword_140088710 = v37;
  i[1] = 0LL;
  *i = v32;
  ++qword_140088700;
  if ( SubmixList )
    *(_QWORD *)(SubmixList + 8) = i;
  else
    qword_1400886F8 = (__int64)i;
  SubmixList = (__int64)i;
LABEL_54:
  if ( (_BYTE)v51 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
