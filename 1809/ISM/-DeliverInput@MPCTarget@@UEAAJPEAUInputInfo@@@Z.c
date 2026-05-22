/*
 * XREFs of ?DeliverInput@MPCTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18000BB30
 * Callers:
 *     ?DeliverInput@MPCFocusTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18000B520 (-DeliverInput@MPCFocusTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     IsSubscribedForEventType @ 0x18000B9F8 (IsSubscribedForEventType.c)
 *     IsSubscribedForEventType_0 @ 0x18000BA6C (IsSubscribedForEventType_0.c)
 *     ?MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z @ 0x18000BF30 (-MPCTarget_DeliverInput_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAULegacyInputInfo@@J@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCTarget::DeliverInput(MPCTarget *this, struct InputInfo *a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // r8
  const char *v8; // r9
  __int64 v9; // rcx
  unsigned int v10; // r14d
  int v11; // eax
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // r12
  const char *v16; // r9
  unsigned int v17; // edi
  unsigned int v18; // edi
  _DWORD *v19; // rcx
  ISMTracing *v20; // rcx
  __int64 v21; // rcx
  __int64 v23; // [rsp+48h] [rbp-29h] BYREF
  int v24; // [rsp+50h] [rbp-21h] BYREF
  __int64 v25; // [rsp+58h] [rbp-19h]
  _QWORD *v26; // [rsp+60h] [rbp-11h]
  _OWORD v27[3]; // [rsp+68h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v25 = -2LL;
  v6 = retaddr;
  if ( (*(_DWORD *)a2 & 0x62600) == 0 )
    goto LABEL_60;
  if ( (*(_DWORD *)a2 & 0x42600) == 0
    || (*(unsigned __int8 (__fastcall **)(MPCTarget *))(*(_QWORD *)this + 80LL))(this) && *((_BYTE *)a2 + 1586) )
  {
    return 0LL;
  }
  v9 = *((_QWORD *)this + 5);
  v10 = -2147417853;
  if ( v9 )
  {
    if ( !*((_BYTE *)a2 + 1586) )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v9 + 24LL))(v9, a2);
      if ( v11 != -2147417853 && v11 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xF0,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
          (const char *)(unsigned int)v11);
        goto LABEL_62;
      }
    }
  }
  v12 = *(_QWORD **)((char *)this + (*((_QWORD *)this + 4) != 0LL ? 8 : 0) + 24);
  v26 = v12;
  if ( v12 )
    (*(void (__fastcall **)(_QWORD *))(*v12 + 8LL))(v12);
  v13 = 0LL;
  v23 = 0LL;
  v14 = v12[49];
  v15 = v12[50];
  if ( v14 != v15 )
  {
    while ( 1 )
    {
      if ( v13 )
      {
        v23 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v14 + 8))(
             *(_QWORD *)(v14 + 8),
             &GUID_9a5daf6a_38f8_287c_c758_186a8416bbfc,
             &v23) >= 0 )
        break;
      v14 += 16LL;
      if ( v14 == v15 )
        break;
      v13 = v23;
    }
    v13 = v23;
  }
  if ( !v13 )
    goto LABEL_50;
  v24 = *((_DWORD *)a2 + 132);
  v27[0] = *((_OWORD *)a2 + 42);
  v27[1] = *((_OWORD *)a2 + 43);
  v27[2] = *((_OWORD *)a2 + 44);
  if ( *(_DWORD *)a2 != 512 )
  {
    if ( *(_DWORD *)a2 == 0x40000 )
    {
      if ( IsSubscribedForEventType(4, v13, v7, v8) )
        (*(void (__fastcall **)(__int64, int *, char *, char *, _OWORD *))(*(_QWORD *)v23 + 32LL))(
          v23,
          &v24,
          (char *)a2 + 1144,
          (char *)a2 + 1152,
          v27);
      goto LABEL_49;
    }
    if ( *(_DWORD *)a2 != 1024 && *(_DWORD *)a2 != 0x2000 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x134,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
        v8);
      JUMPOUT(0x18000BF01LL);
    }
    switch ( *((_DWORD *)a2 + 131) )
    {
      case 1:
        v18 = 1;
        break;
      case 2:
        v18 = 8;
        break;
      case 3:
LABEL_42:
        v18 = 4;
        break;
      case 4:
        v18 = 16;
        break;
      case 5:
        v18 = 2;
        break;
      case 6:
        goto LABEL_42;
      default:
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x88,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
          v8);
LABEL_60:
        wil::details::in1diag3::_FailFast_Unexpected(
          v6,
          (void *)0xD8,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
          a4);
        __debugbreak();
    }
    if ( IsSubscribedForEventType(v18, v13, v7, v8) )
      (*(void (__fastcall **)(__int64, int *, _QWORD, char *, _QWORD, _OWORD *))(*(_QWORD *)v23 + 40LL))(
        v23,
        &v24,
        v18,
        (char *)a2 + 1144,
        *((_QWORD *)a2 + 2),
        v27);
    goto LABEL_49;
  }
  if ( IsSubscribedForEventType_0(*((_DWORD *)a2 + 130), v13, v7, v8) )
  {
    v17 = 2;
    switch ( *((_DWORD *)a2 + 130) )
    {
      case 2:
        v17 = 8;
        goto LABEL_30;
      case 3:
        v17 = 16;
        goto LABEL_30;
      case 4:
LABEL_30:
        (*(void (__fastcall **)(__int64, int *, _QWORD, char *, _OWORD *))(*(_QWORD *)v23 + 24LL))(
          v23,
          &v24,
          v17,
          (char *)a2 + 1144,
          v27);
        goto LABEL_49;
      case 5:
        v17 = 1;
        goto LABEL_30;
      case 6:
        v17 = 4;
        goto LABEL_30;
    }
LABEL_62:
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x67,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpctarget.cpp",
      v16);
    __debugbreak();
  }
LABEL_49:
  v10 = 0;
LABEL_50:
  v19 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v19 && *v19 )
  {
    ISMTracing::Instance();
    ISMTracing::MPCTarget_DeliverInput_(v20, this, a2, v10);
  }
  v21 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( v12 )
    (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
  return v10;
}
