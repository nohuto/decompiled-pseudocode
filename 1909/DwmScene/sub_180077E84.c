/*
 * XREFs of sub_180077E84 @ 0x180077E84
 * Callers:
 *     sub_180014D28 @ 0x180014D28 (sub_180014D28.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180063468 @ 0x180063468 (sub_180063468.c)
 *     sub_180063780 @ 0x180063780 (sub_180063780.c)
 *     sub_18006CE6C @ 0x18006CE6C (sub_18006CE6C.c)
 *     sub_18006CE9C @ 0x18006CE9C (sub_18006CE9C.c)
 *     sub_18006CED8 @ 0x18006CED8 (sub_18006CED8.c)
 *     sub_18006E7DC @ 0x18006E7DC (sub_18006E7DC.c)
 *     sub_18006F614 @ 0x18006F614 (sub_18006F614.c)
 *     sub_180072744 @ 0x180072744 (sub_180072744.c)
 *     sub_1800737C4 @ 0x1800737C4 (sub_1800737C4.c)
 *     sub_1800745B4 @ 0x1800745B4 (sub_1800745B4.c)
 *     sub_180077BAC @ 0x180077BAC (sub_180077BAC.c)
 *     sub_180077C8C @ 0x180077C8C (sub_180077C8C.c)
 *     sub_18007FCF0 @ 0x18007FCF0 (sub_18007FCF0.c)
 *     __RTDynamicCast @ 0x180125BA6 (__RTDynamicCast.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     memset @ 0x1801272D8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180077E84(__int64 a1, __int64 a2)
{
  unsigned int i; // esi
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  volatile signed __int32 *v16; // rbx
  __int64 *v17; // rcx
  __int64 v18; // r8
  char *v19; // rdx
  __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  volatile signed __int32 *v22; // [rsp+48h] [rbp-C0h]
  __int64 v23; // [rsp+50h] [rbp-B8h]
  __int64 v24[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25[4]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v26[4]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v28; // [rsp+C0h] [rbp-48h]
  __int64 v29[3]; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v30; // [rsp+E0h] [rbp-28h]
  _BYTE v31[256]; // [rsp+E8h] [rbp-20h] BYREF

  v23 = -2LL;
  v21 = a2;
  memset(v31, 0, 0xF8uLL);
  sub_1800737C4((__int64)v31, 3, 1);
  v27 = 0LL;
  v28 = 0LL;
  sub_180063468(a1 + 112, &v27);
  for ( i = 0; i < (unsigned int)sub_180077C8C(a1); ++i )
  {
    v21 = 0LL;
    v22 = 0LL;
    sub_180077BAC(a1, &v21, i);
    if ( !_RTDynamicCast(
            v21,
            0LL,
            &Spectre::Engine::RenderDevice `RTTI Type Descriptor',
            &Spectre::Engine::RenderDeviceGeneric `RTTI Type Descriptor',
            0) )
    {
      v5 = sub_18006CE9C(v21, v26);
      v6 = sub_18006CED8(v21, v25);
      v7 = sub_18006CE6C(v21, v24);
      v8 = v7[2];
      if ( v7[3] >= 8uLL )
        v7 = (_QWORD *)*v7;
      v9 = sub_180072744((__int64)&v31[16], (__int64)v7, v8);
      v10 = sub_18006E7DC(v9, ": Hardware Feature Level ");
      v11 = v6[2];
      if ( v6[3] >= 8uLL )
        v6 = (_QWORD *)*v6;
      v12 = sub_180072744(v10, (__int64)v6, v11);
      v13 = sub_18006E7DC(v12, ", Engine Feature Level ");
      v14 = v5[2];
      if ( v5[3] >= 8uLL )
        v5 = (_QWORD *)*v5;
      v15 = sub_180072744(v13, (__int64)v5, v14);
      sub_18006E7DC(v15, "; ");
      unknown_libname_116(v24);
      unknown_libname_116(v25);
      unknown_libname_116(v26);
    }
    if ( v22 )
    {
      if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
      {
        v16 = v22;
        (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
      }
    }
  }
  sub_18007FCF0(&v31[24], v29);
  v17 = v29;
  if ( v30 >= 8 )
    v17 = (__int64 *)v29[0];
  v18 = (__int64)v17 + 2 * v29[2];
  v19 = (char *)v29;
  if ( v30 >= 8 )
    v19 = (char *)v29[0];
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  sub_18006F614((const void **)a2, v19, v18);
  unknown_libname_116(v29);
  if ( (_BYTE)v28 )
    sub_180063780(v27);
  sub_1800745B4((__int64)&v31[152]);
  std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(&v31[152]);
  return a2;
}
