/*
 * XREFs of ?RegisterWaitHandler@RIMDeviceCollection@@AEAAJPEAXP6AJ0K0@Z0@Z @ 0x18005EDDC
 * Callers:
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x18005E704 (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RIMDeviceCollection::RegisterWaitHandler(
        RIMDeviceCollection *this,
        void *a2,
        int (*a3)(void *, unsigned int, void *),
        void *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  _QWORD *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  v7 = CoreUICreate(&v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1186LL;
LABEL_7:
    v10 = (unsigned int)v7;
    goto LABEL_8;
  }
  if ( !v14 )
  {
    v8 = -2147418113;
    v10 = 2147549183LL;
    v9 = 1190LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)v10);
    goto LABEL_10;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD *, void *, int (*)(void *, unsigned int, void *), void *))(*v14 + 264LL))(
         v14,
         a2,
         a3,
         a4);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 1196LL;
    goto LABEL_7;
  }
  v8 = 0;
LABEL_10:
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v11 + 16LL))(v11, *v11);
  }
  return v8;
}
