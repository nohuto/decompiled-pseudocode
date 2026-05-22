/*
 * XREFs of ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x1801082E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18003A930 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x18003AFD4 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z @ 0x180108810 (-CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMCursor::SetPosition(DWMCursor *this, int a2, int a3, const char *a4)
{
  wil::details::in1diag3 *v7; // rcx
  int v8; // edi
  __int64 v9; // rdx
  RTL_SRWLOCK *Instance; // rax
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  int v16; // eax
  int v17; // eax
  RTL_SRWLOCK *v18; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // ebx
  __int64 v27; // [rsp+30h] [rbp-50h] BYREF
  int v28[2]; // [rsp+38h] [rbp-48h] BYREF
  int v29; // [rsp+40h] [rbp-40h] BYREF
  int v30; // [rsp+44h] [rbp-3Ch] BYREF
  int v31; // [rsp+48h] [rbp-38h] BYREF
  __int64 v32; // [rsp+50h] [rbp-30h]
  _DWORD v33[6]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v32 = -2LL;
  *((_DWORD *)this + 22) = a2;
  *((_DWORD *)this + 23) = a3;
  v7 = retaddr;
  if ( !ISMTestMode::s_instance )
    goto LABEL_31;
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9), 2LL);
    if ( v8 < 0 )
    {
      v9 = 197LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 9) + 40LL))(
           *((_QWORD *)this + 9),
           2LL,
           1LL);
    if ( v8 < 0 )
    {
      v9 = 198LL;
      goto LABEL_5;
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8));
    if ( v8 < 0 )
    {
      v9 = 200LL;
      goto LABEL_5;
    }
  }
  Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  if ( MPC3DStateHelper::GetPostProcessor(Instance) )
  {
    v29 = 0;
    v30 = 0;
    v31 = 0;
    *(_QWORD *)v28 = 0LL;
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int *))(**(_QWORD **)(*((_QWORD *)this + 4) + 368LL)
                                                                           + 64LL))(
            *(_QWORD *)(*((_QWORD *)this + 4) + 368LL),
            0LL,
            0LL,
            0LL,
            v28);
    v13 = retaddr;
    if ( v12 < 0 )
    {
LABEL_32:
      wil::details::in1diag3::FailFast_Hr(
        v13,
        (void *)0xD9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_33;
    }
    v27 = 0LL;
    if ( !*(_QWORD *)v28
      || (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))v28)(
           *(_QWORD *)v28,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v27) < 0 )
    {
LABEL_18:
      v33[0] = v29;
      v33[1] = v30;
      v33[2] = v31;
      v33[3] = a2;
      v33[4] = a3;
      v18 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
      PostProcessor = MPC3DStateHelper::GetPostProcessor(v18);
      v20 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, _DWORD *))(*(_QWORD *)PostProcessor + 56LL))(
              PostProcessor,
              v33);
      v8 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xEB,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)v20);
        v21 = v27;
        if ( v27 )
        {
          v27 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        v22 = *(_QWORD *)v28;
        if ( *(_QWORD *)v28 )
        {
          *(_QWORD *)v28 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
        return (unsigned int)v8;
      }
      v23 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      v24 = *(_QWORD *)v28;
      if ( *(_QWORD *)v28 )
      {
        *(_QWORD *)v28 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      goto LABEL_27;
    }
    v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 32LL))(v27, &v29);
    v15 = retaddr;
    if ( v14 < 0 )
    {
LABEL_33:
      wil::details::in1diag3::FailFast_Hr(
        v15,
        (void *)0xDE,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
    v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 40LL))(v27, &v30);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xDF,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
        (const char *)(unsigned int)v16);
      JUMPOUT(0x18010862CLL);
    }
    v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 48LL))(v27, &v31);
    if ( v17 >= 0 )
      goto LABEL_18;
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE0,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)v17);
LABEL_31:
    wil::details::in1diag3::_FailFast_Unexpected(
      v7,
      (void *)0x20,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismtestmode.cpp",
      a4);
    goto LABEL_32;
  }
LABEL_27:
  v25 = DWMCursor::CheckAndUpdateDpiScale(this, 1);
  v26 = v25;
  if ( v25 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEE,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
    (const char *)(unsigned int)v25);
  return v26;
}
