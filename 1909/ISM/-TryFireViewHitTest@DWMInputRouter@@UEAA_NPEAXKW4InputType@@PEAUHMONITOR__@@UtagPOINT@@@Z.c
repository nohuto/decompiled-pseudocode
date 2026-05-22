/*
 * XREFs of ?TryFireViewHitTest@DWMInputRouter@@UEAA_NPEAXKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z @ 0x1800C53A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x1800081B0 (-InternalRelease@-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall DWMInputRouter::TryFireViewHitTest(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  int v10; // eax
  int v11; // ebx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // r14
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rbx
  int v14; // eax
  int v15; // eax
  __int64 v17; // rcx
  int v18; // eax
  bool v19; // zf
  int v20; // eax
  int v21; // [rsp+20h] [rbp-60h] BYREF
  __int64 v22[2]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v23; // [rsp+38h] [rbp-48h]
  __int64 v24; // [rsp+48h] [rbp-38h]
  __int128 v25; // [rsp+60h] [rbp-20h] BYREF
  __int64 v26; // [rsp+70h] [rbp-10h]
  int v27; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v22[1] = -2LL;
  if ( !a5 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 224) + 24LL))(*(_QWORD *)(a1 + 224), &a5);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1755LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
  }
  v11 = 0;
  v12 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 320);
  if ( v12 )
  {
    v22[0] = 0LL;
    v13 = **v12;
    Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(v22);
    v14 = v13(v12, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, v22);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1765LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
    v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v22[0] + 48LL))(v22[0], &v21);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1769LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v15);
      __debugbreak();
    }
    v11 = v21;
    Microsoft::WRL::ComPtr<IFocusInputTarget>::InternalRelease(v22);
  }
  if ( *(_DWORD *)(a1 + 380) == a2 && v11 == a2 )
    return 0;
  *(_DWORD *)(a1 + 380) = a2;
  v17 = *(_QWORD *)(a1 + 368);
  if ( v17 )
  {
    *(_QWORD *)&v23 = __PAIR64__(a3, a2);
    *((_QWORD *)&v23 + 1) = __PAIR64__(a6, a5);
    LODWORD(v24) = HIDWORD(a6);
    v18 = *(_DWORD *)(a1 + 376);
    v19 = v18 == -1;
    v20 = v18 + 1;
    *(_DWORD *)(a1 + 376) = v20;
    if ( v19 )
      *(_DWORD *)(a1 + 376) = ++v20;
    HIDWORD(v24) = v20;
    v25 = v23;
    v26 = v24;
    v27 = a4;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v17 + 24LL))(v17, &v25);
  }
  return 1;
}
