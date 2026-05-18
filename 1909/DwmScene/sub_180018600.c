/*
 * XREFs of sub_180018600 @ 0x180018600
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000C338 @ 0x18000C338 (sub_18000C338.c)
 *     sub_180016620 @ 0x180016620 (sub_180016620.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180018600(__int64 a1, __int64 a2, _QWORD *a3)
{
  signed int v4; // eax
  unsigned int v5; // ebx
  _QWORD *v6; // rcx
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  _QWORD *v9; // [rsp+30h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v8 = a2;
  v9 = 0LL;
  v4 = sub_180016620((__int64 *)&v9, &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = 0LL;
    *a3 = v9;
    v5 = 0;
  }
  else
  {
    sub_18000C338(retaddr, 407, (__int64)"SpectreRenderer.cpp", v4);
    v6 = v9;
  }
  if ( v6 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v6 + 16LL))(v6, *v6);
  }
  return v5;
}
