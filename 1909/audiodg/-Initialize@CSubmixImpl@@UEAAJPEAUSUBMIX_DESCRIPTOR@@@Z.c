/*
 * XREFs of ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x14000D290
 * Callers:
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x140013340 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 *     ?Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z @ 0x140013760 (-Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140001D58 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140003980 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140003DB4 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140003FAC (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140005B10 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009EBC (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCB4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AddHead@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCSubmixImpl@@@Z @ 0x14000D578 (-AddHead@-$CAtlList@PEAVCSubmixImpl@@V-$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@QEAAPEAU__PO.c)
 *     ?ValidateSubmixDescriptor@@YAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x14000D65C (-ValidateSubmixDescriptor@@YAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     __security_check_cookie @ 0x140015E90 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1400181EF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSubmixImpl::Initialize(CSubmixImpl *this, struct SUBMIX_DESCRIPTOR *a2)
{
  int v4; // ebx
  void *v5; // r15
  const unsigned __int16 *v6; // r13
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r12
  char *v9; // rax
  void *v10; // rax
  void *v11; // rcx
  void *v12; // rax
  void *v13; // rcx
  int Instance; // eax
  __int64 v15; // rcx
  char *v16; // rbx
  __int64 v17; // rcx
  CPipeInstance **v18; // r15
  __int64 v19; // rcx
  ATL::CAtlException *v21; // rbx
  __int64 v22; // rdx
  DWORD LastError; // ebx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  __int64 v25; // rdx
  int ppv; // [rsp+20h] [rbp-88h]
  LPVOID v27[2]; // [rsp+40h] [rbp-68h] BYREF
  ATL::CAtlException *v28; // [rsp+50h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-50h] BYREF
  struct tWAVEFORMATEX *v30; // [rsp+60h] [rbp-48h] BYREF
  int v31; // [rsp+68h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v27[1] = (LPVOID)-2LL;
  v4 = ValidateSubmixDescriptor(a2);
  if ( v4 < 0 )
  {
    v22 = 417LL;
    goto LABEL_54;
  }
  *((_QWORD *)this + 29) = *((_QWORD *)a2 + 7);
  *((_OWORD *)this + 15) = *(_OWORD *)((char *)a2 + 68);
  *((_DWORD *)this + 64) = *(_DWORD *)a2;
  *((_BYTE *)this + 16) = *((_BYTE *)a2 + 12);
  *((_BYTE *)this + 313) = *((_BYTE *)a2 + 13);
  v5 = (void *)*((_QWORD *)this + 1);
  if ( v5 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v5);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 1) = 0LL;
  v6 = (const unsigned __int16 *)*((_QWORD *)a2 + 4);
  v7 = -1LL;
  do
    ++v7;
  while ( v6[v7] );
  v8 = v7 + 1;
  if ( v7 + 1 < v7 )
  {
    v4 = -2147024362;
    goto LABEL_53;
  }
  if ( is_mul_ok(v8, 2uLL) )
  {
    v9 = (char *)CoTaskMemAlloc(2 * v8);
    *((_QWORD *)this + 1) = v9;
    if ( !v9 )
    {
      v4 = -2147024882;
      goto LABEL_53;
    }
    v4 = 0;
    StringCchCopyNExW(v9, v7 + 1, v6, v7);
  }
  else
  {
    v4 = -2147024362;
  }
  if ( v4 < 0 )
  {
LABEL_53:
    v22 = 425LL;
    goto LABEL_54;
  }
  v10 = CoTaskMemAlloc(*((unsigned int *)a2 + 10));
  v11 = (void *)*((_QWORD *)this + 27);
  *((_QWORD *)this + 27) = v10;
  if ( v11 )
  {
    CoTaskMemFree(v11);
    v10 = (void *)*((_QWORD *)this + 27);
  }
  if ( !v10 )
  {
    v4 = -2147024882;
    v22 = 428LL;
    goto LABEL_54;
  }
  memcpy_0(v10, *((const void **)a2 + 6), *((unsigned int *)a2 + 10));
  if ( *((_DWORD *)a2 + 4) )
  {
    v12 = CoTaskMemAlloc(*((unsigned int *)a2 + 4));
    v13 = (void *)*((_QWORD *)this + 28);
    *((_QWORD *)this + 28) = v12;
    if ( v13 )
    {
      CoTaskMemFree(v13);
      v12 = (void *)*((_QWORD *)this + 28);
    }
    if ( v12 )
    {
      memcpy_0(v12, *((const void **)a2 + 3), *((unsigned int *)a2 + 4));
      goto LABEL_19;
    }
    v4 = -2147024882;
    v22 = 434LL;
LABEL_54:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v4,
      ppv);
    return (unsigned int)v4;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
  v30 = 0LL;
  LOBYTE(v31) = 1;
  v4 = CloneWaveFormat(*((const struct tWAVEFORMATEX **)this + 27), &v30);
  if ( (_BYTE)v31 )
  {
    DebugInfo = lpCriticalSection->DebugInfo;
    lpCriticalSection->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)v30;
    if ( DebugInfo )
      CoTaskMemFree(DebugInfo);
  }
  if ( v4 < 0 )
  {
    v22 = 440LL;
    goto LABEL_54;
  }
LABEL_19:
  if ( !*((_BYTE *)this + 313) )
  {
    v27[0] = 0LL;
    Instance = CoCreateInstance(
                 &GUID_de83650f_8ce4_40ea_a08e_6f0e5cd46f6b,
                 0LL,
                 0x17u,
                 &GUID_97ecdc10_b3b5_4dff_8dcc_abd71ac23c33,
                 v27);
    v4 = Instance;
    if ( Instance < 0 )
    {
      v25 = 447LL;
    }
    else
    {
      lpCriticalSection = (LPCRITICAL_SECTION)*((_QWORD *)a2 + 7);
      v15 = *((_QWORD *)this + 27);
      *(float *)&v30 = (float)*(int *)(v15 + 4);
      HIDWORD(v30) = *(unsigned __int16 *)(v15 + 2);
      v31 = *((unsigned __int8 *)a2 + 12);
      v16 = (char *)v27[0];
      v17 = *((_QWORD *)this + 33);
      *((_QWORD *)this + 33) = 0LL;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      Instance = (*(__int64 (__fastcall **)(char *, _QWORD, LPCRITICAL_SECTION *, char *))(*(_QWORD *)v16 + 24LL))(
                   v16,
                   *((_QWORD *)a2 + 4),
                   &lpCriticalSection,
                   (char *)this + 264);
      v4 = Instance;
      if ( Instance < 0 )
      {
        v25 = 455LL;
      }
      else
      {
        if ( !*((_BYTE *)a2 + 84) )
        {
LABEL_28:
          wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)v27);
          goto LABEL_29;
        }
        v18 = (CPipeInstance **)((char *)this + 24);
        Instance = CPipeInstance::CreateSubmixPipeInstance(
                     *((struct IUnknown **)this + 33),
                     a2,
                     (struct CPipeInstance **)this + 3);
        v4 = Instance;
        if ( Instance < 0 )
        {
          v25 = 461LL;
        }
        else
        {
          Instance = CPipeInstance::Initialize(*v18);
          v4 = Instance;
          if ( Instance < 0 )
          {
            v25 = 462LL;
          }
          else
          {
            Instance = CPipeInstance::ConnectAPOs(*v18, 0LL);
            v4 = Instance;
            if ( Instance >= 0 )
              goto LABEL_28;
            v25 = 463LL;
          }
        }
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)v27);
    return (unsigned int)v4;
  }
LABEL_29:
  lpCriticalSection = (LPCRITICAL_SECTION)&g_CritSecSubmixList;
  LOBYTE(v30) = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  try
  {
    v27[0] = this;
    ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::AddHead(v19, v27);
  }
  catch ( ATL::CAtlException *v28 )
  {
    v21 = v28;
    if ( *(_DWORD *)v28 == -1073741571 )
      _o__resetstkoflw();
    LODWORD(v27[0]) = *(_DWORD *)v21;
    v4 = (int)v27[0];
    if ( SLODWORD(v27[0]) < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D8,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)LODWORD(v27[0]),
        ppv);
      if ( (_BYTE)v30 )
        LeaveCriticalSection(lpCriticalSection);
      return (unsigned int)v4;
    }
  }
  if ( (_BYTE)v30 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
