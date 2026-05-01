/*
 * XREFs of ?CreateNewViewForWindow@ViewManagerBridge@@UEAAJPEAUHWND__@@PEBGPEAI@Z @ 0x180230430
 * Callers:
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x18021F530 (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewManagerBridge::CreateNewViewForWindow(
        ViewManagerBridge *this,
        HWND a2,
        const unsigned __int16 *a3,
        unsigned int *a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // r10
  const unsigned __int16 *v9; // rcx
  int v10; // eax
  unsigned int v11; // [rsp+50h] [rbp-48h] BYREF
  const unsigned __int16 *v12; // [rsp+58h] [rbp-40h]
  unsigned int v13; // [rsp+60h] [rbp-38h] BYREF
  int v14; // [rsp+64h] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  *a4 = 0;
  if ( *((_BYTE *)this + 145) )
  {
    v5 = -2147417848;
    v6 = 422LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = *((_QWORD *)this + 14);
  if ( a3 )
  {
    v9 = a3;
    v10 = 0;
    v12 = a3;
    while ( *a3 )
    {
      ++a3;
      ++v10;
    }
    v11 = v10 | 0x80000000;
  }
  else
  {
    v9 = 0LL;
    v12 = 0LL;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, HWND, _QWORD, unsigned __int64, _QWORD, _QWORD, int, _QWORD, unsigned int *))(*(_QWORD *)v8 + 24LL))(
         v8,
         a2,
         0LL,
         (unsigned __int64)&v11 & -(__int64)(v9 != 0LL),
         0LL,
         0LL,
         8,
         0LL,
         &v13);
  if ( v5 < 0 )
  {
    v6 = 433LL;
    goto LABEL_3;
  }
  v5 = v14;
  if ( v14 < 0 )
  {
    v6 = 435LL;
    goto LABEL_3;
  }
  *a4 = v13;
  return 0LL;
}
