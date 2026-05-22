/*
 * XREFs of ?GetServerWindowForViewId@ViewHelper@@SAJPEAUIViewHierarchy@@KPEAPEAUIServerWindow@Server@Navigation@@@Z @ 0x18000C52C
 * Callers:
 *     ?NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z @ 0x180053CB8 (-NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z.c)
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x18008BBB0 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewHelper::GetServerWindowForViewId(
        struct IViewHierarchy *a1,
        unsigned int a2,
        struct Navigation::Server::IServerWindow **a3)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // ebx
  struct Navigation::Server::IServerWindow *v10; // rcx
  struct Navigation::Server::IServerWindow *v11; // rcx
  int (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v13; // rcx
  struct Navigation::Server::IServerWindow *v15; // rcx
  int (__fastcall ***v16)(_QWORD, GUID *, _QWORD *); // rcx
  struct Navigation::Server::IServerWindow *v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+28h] [rbp-28h] BYREF
  int (__fastcall ***v19)(_QWORD, GUID *, struct Navigation::Server::IServerWindow **); // [rsp+30h] [rbp-20h] BYREF
  _QWORD v20[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v22; // [rsp+70h] [rbp+20h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+38h] BYREF

  v20[1] = -2LL;
  (*(void (__fastcall **)(struct IViewHierarchy *, _QWORD *, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, v20, a2);
  v4 = v20[0];
  if ( !v20[0] )
    goto LABEL_21;
  v18 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v20[0] + 128LL))(v20[0], &v18);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x22,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
      (const char *)(unsigned int)v5);
    JUMPOUT(0x18000C770LL);
  }
  v6 = v18;
  if ( v18 )
  {
    v22 = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 48LL))(v18, &v22);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    v9 = 0;
    if ( v22 > 0 )
    {
      while ( 1 )
      {
        v19 = 0LL;
        v17 = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v18 + 56LL))(v18, v9, &v19) >= 0 )
        {
          v10 = v17;
          if ( v17 )
          {
            v17 = 0LL;
            (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v10 + 16LL))(v10);
          }
          if ( (**v19)(v19, &GUID_8b494dca_e0e9_479a_adf3_023a8da54cb7, &v17) >= 0
            && (*(int (__fastcall **)(struct Navigation::Server::IServerWindow *, unsigned int *))(*(_QWORD *)v17 + 88LL))(
                 v17,
                 &v23) >= 0
            && v23 <= 1 )
          {
            break;
          }
        }
        v11 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v11 + 16LL))(v11);
        }
        v12 = (int (__fastcall ***)(_QWORD, GUID *, _QWORD *))v19;
        if ( v19 )
        {
          v19 = 0LL;
          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v12)[2])(v12);
        }
        if ( (int)++v9 >= v22 )
          goto LABEL_18;
      }
      v15 = v17;
      if ( v17 )
      {
        (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v17 + 8LL))(v17);
        v15 = v17;
      }
      *a3 = v15;
      v7 = 0;
      if ( v15 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(struct Navigation::Server::IServerWindow *))(*(_QWORD *)v15 + 16LL))(v15);
      }
      v16 = (int (__fastcall ***)(_QWORD, GUID *, _QWORD *))v19;
      if ( v19 )
      {
        v19 = 0LL;
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[2])(v16);
      }
      v6 = v18;
      goto LABEL_32;
    }
LABEL_18:
    v13 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v4 = v20[0];
LABEL_21:
    v7 = -2147467259;
    goto LABEL_22;
  }
  v7 = -2147467259;
LABEL_32:
  if ( v6 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v4 = v20[0];
LABEL_22:
  if ( v4 )
  {
    v20[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v7;
}
