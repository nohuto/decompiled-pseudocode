/*
 * XREFs of ?SendKeyboardEvent@InputServiceProxy@@UEAAJPEBUKeyboardEvent@@I@Z @ 0x1800D3660
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputServiceProxy::SendKeyboardEvent(
        InputServiceProxy *this,
        const struct KeyboardEvent *a2,
        int a3)
{
  bool v4; // zf
  char v7; // si
  __int16 v8; // cx
  int Shared; // eax
  __int16 v10; // r8
  __int64 v11; // rdx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 (__fastcall *v16)(__int64, __int64 *, __int64, _QWORD, _QWORD, int, _QWORD, int, _QWORD); // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 (__fastcall *v27)(__int64, __int64 *, __int64, __int64, int, __int16, int, _QWORD, __int64, int, _QWORD); // rax
  int v28; // edx
  int v29; // eax
  int v30; // [rsp+28h] [rbp-31h]
  __int16 v31; // [rsp+28h] [rbp-31h]
  int v32; // [rsp+30h] [rbp-29h]
  __int64 v33; // [rsp+40h] [rbp-19h]
  __int64 v34; // [rsp+60h] [rbp+7h] BYREF
  int v35; // [rsp+68h] [rbp+Fh]
  int v36[2]; // [rsp+70h] [rbp+17h] BYREF
  int v37[2]; // [rsp+78h] [rbp+1Fh] BYREF
  __int16 v38; // [rsp+80h] [rbp+27h] BYREF
  __int16 v39; // [rsp+82h] [rbp+29h]
  __int16 v40; // [rsp+84h] [rbp+2Bh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = *(_DWORD *)a2 == 2;
  v40 = 0;
  v7 = 0;
  *(_QWORD *)v37 = 0LL;
  *(_QWORD *)v36 = 0LL;
  if ( v4 )
  {
    v8 = *((_WORD *)a2 + 8);
    if ( (unsigned __int16)(v8 + 10240) > 0x3FFu )
    {
      if ( (unsigned __int16)(v8 + 9216) > 0x3FFu )
      {
        v11 = 1LL;
        v38 = v8;
        v39 = 0;
      }
      else
      {
        v10 = *((_WORD *)this + 24);
        if ( !v10 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x78,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
            (const char *)0x80070057LL);
          return 2147942487LL;
        }
        if ( (unsigned __int16)(v10 + 10240) > 0x3FFu )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x6F,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
            (const char *)0x3FF);
          __debugbreak();
        }
        v11 = 2LL;
        v38 = *((_WORD *)this + 24);
        v39 = v8;
      }
      v13 = MsgStringCreateShared(&v38, v11, v37);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x85,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
          (const char *)(unsigned int)v13);
        __debugbreak();
      }
    }
    else
    {
      *((_WORD *)this + 24) = v8;
      v7 = 1;
    }
  }
  if ( *((_QWORD *)this + 4) )
  {
    Shared = MsgBlobCreateShared((char *)a2 + 36, 256LL, v36);
    if ( Shared < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x8E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
        (const char *)(unsigned int)Shared);
      __debugbreak();
    }
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        v18 = *((_QWORD *)a2 + 3);
        v19 = (__int64 *)*((_QWORD *)this + 4);
        v20 = *((unsigned __int16 *)a2 + 7);
        v21 = *((unsigned __int16 *)a2 + 2);
        v22 = *v19;
        v34 = 0LL;
        v35 = 0;
        v23 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64, __int64, _QWORD, __int64, int, _QWORD))(v22 + 48))(
                v19,
                &v34,
                v21,
                v20,
                *(_QWORD *)v36,
                v18,
                a3,
                0LL);
        if ( v23 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xAB,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
            (const char *)(unsigned int)v23);
          __debugbreak();
        }
      }
      else if ( *(_DWORD *)a2 == 2 && !v7 )
      {
        v14 = *((_QWORD *)this + 4);
        v15 = *((unsigned __int16 *)a2 + 2);
        v30 = *((_DWORD *)a2 + 8);
        v16 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64, _QWORD, _QWORD, int, _QWORD, int, _QWORD))(*(_QWORD *)v14 + 64LL);
        v34 = 0LL;
        v35 = 0;
        v17 = v16(v14, &v34, v15, 0LL, *(_QWORD *)v37, v30, *(_QWORD *)v36, a3, 0LL);
        if ( v17 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xBB,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
            (const char *)(unsigned int)v17);
          __debugbreak();
        }
      }
    }
    else
    {
      v24 = *((_QWORD *)this + 4);
      v25 = *((unsigned __int16 *)a2 + 2);
      v26 = *((unsigned __int16 *)a2 + 9);
      v33 = *((_QWORD *)a2 + 3);
      v27 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64, int, __int16, int, _QWORD, __int64, int, _QWORD))(*(_QWORD *)v24 + 32LL);
      v32 = *((_DWORD *)a2 + 8);
      v31 = *((_WORD *)a2 + 6);
      v28 = *((_DWORD *)a2 + 2);
      v34 = 0LL;
      v35 = 0;
      v29 = v27(v24, &v34, v26, v25, v28, v31, v32, *(_QWORD *)v36, v33, a3, 0LL);
      if ( v29 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x9E,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
          (const char *)(unsigned int)v29);
        JUMPOUT(0x1800D3990LL);
      }
    }
    MsgRelease(*(_QWORD *)v37);
    MsgRelease(*(_QWORD *)v36);
  }
  if ( *(_DWORD *)a2 == 2 && !v7 )
    *((_WORD *)this + 24) = 0;
  return 0LL;
}
