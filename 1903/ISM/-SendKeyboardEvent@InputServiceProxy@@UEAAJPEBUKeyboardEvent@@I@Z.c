/*
 * XREFs of ?SendKeyboardEvent@InputServiceProxy@@UEAAJPEBUKeyboardEvent@@I@Z @ 0x180109690
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?OnKey@SurrogateCharAccumulator@@QEAAXG_NAEA_NQEAGAEAH@Z @ 0x1800C0AA4 (-OnKey@SurrogateCharAccumulator@@QEAAXG_NAEA_NQEAGAEAH@Z.c)
 */

__int64 __fastcall InputServiceProxy::SendKeyboardEvent(
        InputServiceProxy *this,
        const struct KeyboardEvent *a2,
        int a3)
{
  bool v3; // zf
  bool v7; // si
  unsigned int v8; // r14d
  int Shared; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 (__fastcall *v14)(__int64, __int64 *, __int64, __int64, _QWORD, int, _QWORD, int, _QWORD); // rax
  int v15; // eax
  __int64 v17; // rdx
  __int64 *v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 (__fastcall *v26)(__int64, __int64 *, __int64, __int64, int, int, int, _QWORD, __int64, int, _QWORD); // rax
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // [rsp+28h] [rbp-61h]
  int v31; // [rsp+28h] [rbp-61h]
  int v32; // [rsp+30h] [rbp-59h]
  __int64 v33; // [rsp+40h] [rbp-49h]
  bool v34; // [rsp+60h] [rbp-29h] BYREF
  __int64 v35; // [rsp+70h] [rbp-19h] BYREF
  int v36; // [rsp+78h] [rbp-11h]
  int v37[2]; // [rsp+80h] [rbp-9h] BYREF
  int v38; // [rsp+88h] [rbp-1h] BYREF
  int v39[2]; // [rsp+90h] [rbp+7h] BYREF
  unsigned __int16 v40[2]; // [rsp+98h] [rbp+Fh] BYREF
  __int16 v41; // [rsp+9Ch] [rbp+13h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v3 = *(_DWORD *)a2 == 2;
  v34 = 0;
  *(_DWORD *)v40 = 0;
  v7 = 0;
  v41 = 0;
  v8 = 0;
  v38 = 0;
  *(_QWORD *)v39 = 0LL;
  *(_QWORD *)v37 = 0LL;
  if ( v3 )
  {
    SurrogateCharAccumulator::OnKey(
      (InputServiceProxy *)((char *)this + 48),
      *((_WORD *)a2 + 10),
      (*((_BYTE *)a2 + 8) & 4) != 0,
      &v34,
      v40,
      &v38);
    v7 = v34;
    v8 = v38;
  }
  if ( *((_QWORD *)this + 4) )
  {
    Shared = MsgBlobCreateShared((char *)a2 + 36, 256LL, v37);
    if ( Shared < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        110LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
        (const char *)(unsigned int)Shared);
      __debugbreak();
    }
    if ( *((_DWORD *)a2 + 1) )
    {
      v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 288LL))(
              *((_QWORD *)this + 4),
              *((unsigned __int16 *)a2 + 11),
              *((unsigned __int16 *)a2 + 4),
              *((unsigned __int16 *)a2 + 8),
              *(_QWORD *)v37);
      if ( v29 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          177LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
          (const char *)(unsigned int)v29);
        JUMPOUT(0x18010998FLL);
      }
    }
    else if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)a2 == 1 )
      {
        v17 = *((_QWORD *)a2 + 3);
        v18 = (__int64 *)*((_QWORD *)this + 4);
        v19 = *((unsigned __int16 *)a2 + 9);
        v20 = *((unsigned __int16 *)a2 + 4);
        v21 = *v18;
        v35 = 0LL;
        v36 = 0;
        v22 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64, __int64, _QWORD, __int64, int, _QWORD))(v21 + 48))(
                v18,
                &v35,
                v20,
                v19,
                *(_QWORD *)v37,
                v17,
                a3,
                0LL);
        if ( v22 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            141LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
            (const char *)(unsigned int)v22);
          __debugbreak();
        }
      }
      else if ( *(_DWORD *)a2 == 2 && !v7 )
      {
        v10 = MsgStringCreateShared(v40, v8, v39);
        if ( v10 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            152LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
            (const char *)(unsigned int)v10);
          __debugbreak();
        }
        v11 = *((_QWORD *)this + 4);
        v12 = *((unsigned __int16 *)a2 + 9);
        v13 = *((unsigned __int16 *)a2 + 4);
        v14 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64, _QWORD, int, _QWORD, int, _QWORD))(*(_QWORD *)v11 + 64LL);
        v31 = *((_DWORD *)a2 + 8);
        v35 = 0LL;
        v36 = 0;
        v15 = v14(v11, &v35, v13, v12, *(_QWORD *)v39, v31, *(_QWORD *)v37, a3, 0LL);
        if ( v15 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            161LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
            (const char *)(unsigned int)v15);
          __debugbreak();
        }
        MsgRelease(*(_QWORD *)v39);
      }
    }
    else
    {
      v23 = *((_QWORD *)this + 4);
      v24 = *((unsigned __int16 *)a2 + 4);
      v25 = *((unsigned __int16 *)a2 + 11);
      v33 = *((_QWORD *)a2 + 3);
      v26 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64, int, int, int, _QWORD, __int64, int, _QWORD))(*(_QWORD *)v23 + 32LL);
      v32 = *((_DWORD *)a2 + 8);
      LOWORD(v30) = *((_WORD *)a2 + 8);
      v27 = *((_DWORD *)a2 + 3);
      v35 = 0LL;
      v36 = 0;
      v28 = v26(v23, &v35, v25, v24, v27, v30, v32, *(_QWORD *)v37, v33, a3, 0LL);
      if ( v28 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          128LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
          (const char *)(unsigned int)v28);
        __debugbreak();
      }
    }
    MsgRelease(*(_QWORD *)v37);
  }
  return 0LL;
}
