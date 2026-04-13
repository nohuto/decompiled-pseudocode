/*
 * XREFs of ?InitializeMRTObjects@MRTHelperBase@ShellMRTHelper@@AEAAJXZ @ 0x18009B4A8
 * Callers:
 *     ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x18009B818 (-Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000381C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // rdi
  _QWORD *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  unsigned int v19; // ebx
  PWSTR ppszPathOut[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = (__int64 *)((char *)this + 8);
  if ( *((_QWORD *)this + 1) )
    return 0LL;
  if ( !*((_BYTE *)this + 37) && !*((_BYTE *)this + 38) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x5F,
      (__int64)"internal\\onecoreuapshell\\inc\\shellmrthelper.h",
      a4);
    JUMPOUT(0x18009B80FLL);
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
    v9 = 97LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"internal\\onecoreuapshell\\inc\\shellmrthelper.h",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  if ( !*((_BYTE *)this + 37) )
  {
    ppszPathOut[0] = 0LL;
    ppszPathOut[1] = (PWSTR)-1LL;
    ppszPathOut[2] = (PWSTR)-1LL;
    v11 = PathAllocCombine(*((PCWSTR *)this + 8), L"resources.pri", 0, ppszPathOut);
    Instance = v11;
    if ( v11 >= 0 )
    {
      Instance = (*(__int64 (__fastcall **)(_QWORD, PWSTR))(**(_QWORD **)this + 48LL))(*(_QWORD *)this, ppszPathOut[0]);
      if ( Instance >= 0 )
      {
        if ( ppszPathOut[0] )
          LocalFree(ppszPathOut[0]);
LABEL_23:
        v12 = *(_QWORD *)this;
        v13 = (_QWORD *)((char *)this + 16);
        v14 = *((_QWORD *)this + 2);
        if ( v14 )
        {
          *v13 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, GUID *, char *))(*(_QWORD *)v12 + 72LL))(
                     v12,
                     &GUID_e3c22b30_8502_4b2f_9133_559674587e51,
                     (char *)this + 16);
        if ( Instance < 0 )
        {
          v9 = 109LL;
          goto LABEL_11;
        }
        v15 = *(_QWORD *)this;
        v16 = *v5;
        if ( *v5 )
        {
          *v5 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        Instance = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v15 + 56LL))(
                     v15,
                     &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd,
                     v5);
        if ( Instance < 0 )
        {
          v9 = 110LL;
          goto LABEL_11;
        }
        if ( *((_WORD *)this + 17) )
        {
          v17 = *v13;
          if ( *((_BYTE *)this + 35) )
          {
            Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v17 + 112LL))(
                         *v13,
                         *((unsigned __int16 *)this + 16));
            if ( Instance < 0 )
            {
              v9 = 116LL;
              goto LABEL_11;
            }
          }
          else
          {
            Instance = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 120LL))(*v13);
            if ( Instance < 0 )
            {
              v9 = 120LL;
              goto LABEL_11;
            }
          }
        }
        if ( *((_BYTE *)this + 36) )
        {
          v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v13 + 128LL))(*v13, *((unsigned int *)this + 7));
          v19 = v18;
          if ( v18 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x7E,
              (__int64)"internal\\onecoreuapshell\\inc\\shellmrthelper.h",
              (const char *)(unsigned int)v18);
            return v19;
          }
        }
        return 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6A,
        (__int64)"internal\\onecoreuapshell\\inc\\shellmrthelper.h",
        (const char *)(unsigned int)v11);
    }
    if ( ppszPathOut[0] )
      LocalFree(ppszPathOut[0]);
    return (unsigned int)Instance;
  }
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 40LL))(
             *(_QWORD *)this,
             *((_QWORD *)this + 5));
  if ( (int)result >= 0 )
    goto LABEL_23;
  return result;
}
