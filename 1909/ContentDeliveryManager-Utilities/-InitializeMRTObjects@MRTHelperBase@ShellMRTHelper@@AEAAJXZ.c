/*
 * XREFs of ?InitializeMRTObjects@MRTHelperBase@ShellMRTHelper@@AEAAJXZ @ 0x18009F098
 * Callers:
 *     ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x18009F4E4 (-Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000372C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180015268 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009FE58 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellMRTHelper::MRTHelperBase::InitializeMRTObjects(
        ShellMRTHelper::MRTHelperBase *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 *v5; // rsi
  __int64 v7; // rcx
  HRESULT Instance; // edi
  __int64 v9; // rdx
  __int64 result; // rax
  HRESULT v11; // eax
  PWSTR v12; // rcx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, GUID *, char *); // rbp
  _QWORD *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, GUID *, __int64 *); // rbp
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // ecx
  const wchar_t *v22; // r8
  int v23; // ecx
  int v24; // ecx
  const wchar_t *v25; // rdx
  int v26; // eax
  unsigned int v27; // ebx
  unsigned int v28; // eax
  unsigned int v29; // r8d
  unsigned int v30; // eax
  unsigned int v31; // r8d
  int ppv; // [rsp+20h] [rbp-38h]
  PWSTR ppszPathOut[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = (__int64 *)((char *)this + 8);
  if ( *((_QWORD *)this + 1) )
    return 0LL;
  if ( !*((_BYTE *)this + 45) && !*((_BYTE *)this + 46) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x8E,
      (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\shellmrthelper.h",
      a4);
    __debugbreak();
  }
  v7 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Instance = CoCreateInstance(
               &GUID_dbce7e40_7345_439d_b12c_114a11819a09,
               0LL,
               1u,
               &GUID_130a2f65_2be7_4309_9a58_a9052ff2b61c,
               (LPVOID *)this);
  if ( Instance < 0 )
  {
    v9 = 144LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\shellmrthelper.h",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  if ( !*((_BYTE *)this + 45) )
  {
    ppszPathOut[0] = 0LL;
    ppszPathOut[1] = (PWSTR)-1LL;
    ppszPathOut[2] = (PWSTR)-1LL;
    v11 = PathAllocCombine(*((PCWSTR *)this + 9), L"resources.pri", 0, ppszPathOut);
    Instance = v11;
    if ( v11 >= 0 )
    {
      Instance = (*(__int64 (__fastcall **)(_QWORD, PWSTR))(**(_QWORD **)this + 48LL))(*(_QWORD *)this, ppszPathOut[0]);
      v12 = ppszPathOut[0];
      if ( Instance >= 0 )
      {
        if ( ppszPathOut[0] )
          LocalFree(ppszPathOut[0]);
LABEL_23:
        v13 = *(_QWORD *)this;
        v14 = *(__int64 (__fastcall **)(__int64, GUID *, char *))(**(_QWORD **)this + 72LL);
        v15 = (_QWORD *)((char *)this + 16);
        v16 = *((_QWORD *)this + 2);
        if ( v16 )
        {
          *v15 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        Instance = v14(v13, &GUID_e3c22b30_8502_4b2f_9133_559674587e51, (char *)this + 16);
        if ( Instance < 0 )
        {
          v9 = 156LL;
          goto LABEL_11;
        }
        v17 = *(_QWORD *)this;
        v18 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(**(_QWORD **)this + 56LL);
        v19 = *v5;
        if ( *v5 )
        {
          *v5 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        Instance = v18(v17, &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd, v5);
        if ( Instance < 0 )
        {
          v9 = 157LL;
          goto LABEL_11;
        }
        if ( *((_WORD *)this + 21) )
        {
          if ( *((_BYTE *)this + 43) )
          {
            Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v15 + 112LL))(
                         *v15,
                         *((unsigned __int16 *)this + 20));
            if ( Instance < 0 )
            {
              v9 = 163LL;
              goto LABEL_11;
            }
          }
          else
          {
            Instance = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 120LL))(*v15);
            if ( Instance < 0 )
            {
              v9 = 167LL;
              goto LABEL_11;
            }
          }
        }
        if ( *((_BYTE *)this + 44) )
        {
          Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v15 + 128LL))(
                       *v15,
                       *((unsigned int *)this + 7));
          if ( Instance < 0 )
          {
            v9 = 173LL;
            goto LABEL_11;
          }
        }
        v20 = *((_DWORD *)this + 8);
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 != 1 )
            {
              v30 = wil::verify_hresult<long>(0x8000FFFF);
              wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0xBD, v31, (const char *)v30, ppv);
              JUMPOUT(0x18009F4DDLL);
            }
            v22 = L"light";
          }
          else
          {
            v22 = L"dark";
          }
          Instance = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, const wchar_t *))(*(_QWORD *)*v15 + 144LL))(
                       *v15,
                       L"Theme",
                       v22);
          if ( Instance < 0 )
          {
            v9 = 194LL;
            goto LABEL_11;
          }
        }
        v23 = *((_DWORD *)this + 9);
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            if ( v24 != 1 )
            {
              v28 = wil::verify_hresult<long>(0x8000FFFF);
              wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0xD3, v29, (const char *)v28, ppv);
              __debugbreak();
            }
            v25 = L"lightunplated";
          }
          else
          {
            v25 = L"unplated";
          }
          v26 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *))(*(_QWORD *)*v15 + 136LL))(*v15, v25);
          v27 = v26;
          if ( v26 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xD8,
              (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\shellmrthelper.h",
              (const char *)(unsigned int)v26);
            return v27;
          }
        }
        return 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (__int64)"internal\\shellcommondesktopbase\\inc\\tiles\\shellmrthelper.h",
        (const char *)(unsigned int)v11);
      v12 = ppszPathOut[0];
    }
    if ( v12 )
      LocalFree(v12);
    return (unsigned int)Instance;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 40LL))(
             *(_QWORD *)this,
             *((_QWORD *)this + 6));
  if ( (int)result >= 0 )
    goto LABEL_23;
  return result;
}
