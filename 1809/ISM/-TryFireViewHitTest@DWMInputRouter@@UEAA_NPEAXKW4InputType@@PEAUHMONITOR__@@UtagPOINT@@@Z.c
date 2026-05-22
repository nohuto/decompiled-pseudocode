/*
 * XREFs of ?TryFireViewHitTest@DWMInputRouter@@UEAA_NPEAXKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z @ 0x18008B3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
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
  wil::details::in1diag3 *v11; // rcx
  int v12; // esi
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // rcx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v19; // rcx
  int v20; // eax
  bool v21; // zf
  int v22; // eax
  int v23; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v24[2]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v25; // [rsp+38h] [rbp-48h]
  __int64 v26; // [rsp+48h] [rbp-38h]
  __int128 v27; // [rsp+60h] [rbp-20h] BYREF
  __int64 v28; // [rsp+70h] [rbp-10h]
  int v29; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v24[1] = -2LL;
  if ( !a5 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 224) + 24LL))(*(_QWORD *)(a1 + 224), &a5);
    v11 = retaddr;
    if ( v10 < 0 )
      goto LABEL_17;
  }
  v12 = 0;
  v13 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 320);
  if ( !v13 )
    goto LABEL_8;
  v24[0] = 0LL;
  v14 = (**v13)(v13, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, v24);
  v15 = retaddr;
  if ( v14 < 0 )
  {
LABEL_18:
    wil::details::in1diag3::FailFast_Hr(
      v15,
      (void *)0x653,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v14);
    JUMPOUT(0x18008B5AALL);
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v24[0] + 48LL))(v24[0], &v23);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x657,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v16);
LABEL_17:
    wil::details::in1diag3::FailFast_Hr(
      v11,
      (void *)0x649,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_18;
  }
  v12 = v23;
  v17 = v24[0];
  if ( v24[0] )
  {
    v24[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
LABEL_8:
  if ( *(_DWORD *)(a1 + 380) == a2 && v12 == a2 )
    return 0;
  *(_DWORD *)(a1 + 380) = a2;
  v19 = *(_QWORD *)(a1 + 368);
  if ( v19 )
  {
    *(_QWORD *)&v25 = __PAIR64__(a3, a2);
    *((_QWORD *)&v25 + 1) = __PAIR64__(a6, a5);
    v26 = HIDWORD(a6);
    v20 = *(_DWORD *)(a1 + 376);
    v21 = v20 == -1;
    v22 = v20 + 1;
    *(_DWORD *)(a1 + 376) = v22;
    if ( v21 )
      *(_DWORD *)(a1 + 376) = ++v22;
    HIDWORD(v26) = v22;
    v27 = v25;
    v28 = v26;
    v29 = a4;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v19 + 24LL))(v19, &v27);
  }
  return 1;
}
