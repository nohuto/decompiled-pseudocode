/*
 * XREFs of sub_180044E88 @ 0x180044E88
 * Callers:
 *     sub_18003DA10 @ 0x18003DA10 (sub_18003DA10.c)
 *     sub_180042150 @ 0x180042150 (sub_180042150.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18002317C @ 0x18002317C (sub_18002317C.c)
 *     sub_1800253B0 @ 0x1800253B0 (sub_1800253B0.c)
 *     sub_180065810 @ 0x180065810 (sub_180065810.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180044E88(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v8; // eax
  _DWORD *v9; // rcx
  _QWORD *v10; // r8
  int v11; // edi
  __int64 v12; // rcx
  unsigned int v14; // eax
  _QWORD v16[3]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v17[4]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v19[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v20; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v21; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v22; // [rsp+F8h] [rbp-10h]
  __int64 v23; // [rsp+100h] [rbp-8h]

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  LODWORD(v21) = *(_DWORD *)(a4 + 16);
  v8 = 0;
  v9 = v19;
  do
    *v9++ = v8++;
  while ( v8 < 4 );
  HIDWORD(v21) = *((_DWORD *)v19 + *(unsigned int *)(a4 + 24));
  LODWORD(v22) = a6;
  v20 = 0LL;
  sub_18002317C(a3, &v20);
  v19[0] = 0LL;
  v19[1] = 0LL;
  v10 = 0LL;
  if ( HIDWORD(v21) == 2 )
  {
    HIDWORD(v22) = 0x10000;
  }
  else
  {
    v19[0] = a5;
    v10 = v19;
  }
  *a1 = 0LL;
  *a1 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *, _QWORD *))(*(_QWORD *)v20 + 24LL))(v20, &v21, v10, a1);
  sub_1800253B0(a3, v11);
  if ( v11 < 0 )
  {
    sub_18000E498(v17);
    v14 = (unsigned int)sub_18000E498(v16);
    sub_180065810((unsigned int)pExceptionObject, v14, 84, v11, (__int64)v17, 0, 1, -2LL, a1);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v12 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return a1;
}
