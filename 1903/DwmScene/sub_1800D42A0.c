/*
 * XREFs of sub_1800D42A0 @ 0x1800D42A0
 * Callers:
 *     sub_1800D4220 @ 0x1800D4220 (sub_1800D4220.c)
 *     sub_1800D45A4 @ 0x1800D45A4 (sub_1800D45A4.c)
 * Callees:
 *     sub_18007DD0C @ 0x18007DD0C (sub_18007DD0C.c)
 *     sub_1800D315C @ 0x1800D315C (sub_1800D315C.c)
 *     sub_1800D3EC8 @ 0x1800D3EC8 (sub_1800D3EC8.c)
 *     sub_1800D4730 @ 0x1800D4730 (sub_1800D4730.c)
 *     sub_1801081A0 @ 0x1801081A0 (sub_1801081A0.c)
 *     atexit @ 0x180125F6C (atexit.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 *     _Init_thread_footer @ 0x180126778 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801267D8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_1800D42A0(_QWORD *a1, unsigned int a2)
{
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  volatile signed __int32 *v9; // rbx
  _QWORD *v11; // [rsp+30h] [rbp-40h] BYREF
  volatile signed __int32 *v12; // [rsp+38h] [rbp-38h]
  _QWORD v13[4]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v14[2]; // [rsp+60h] [rbp-10h] BYREF

  v13[2] = -2LL;
  v14[1] = HIDWORD(a1);
  v14[0] = a2;
  if ( dword_18026AAD8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 44LL) )
  {
    Init_thread_header(&dword_18026AAD8);
    if ( dword_18026AAD8 == -1 )
    {
      qword_18026AAC8 = sub_1800D4730(&qword_18026AAC8);
      atexit(sub_18013A640);
      Init_thread_footer(&dword_18026AAD8);
    }
  }
  v4 = (volatile signed __int32 *)operator new(0x30uLL);
  v5 = v4;
  v13[3] = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *(_QWORD *)v4 = std::_Ref_count_obj<Spectre::Engine::ShaderRegistration::`anonymous namespace'::EmbeddedShaderDatabase>::`vftable';
    v13[0] = v4 + 4;
    sub_1801081A0(v4 + 4, a2);
    *((_QWORD *)v5 + 2) = Spectre::Engine::ShaderRegistration::`anonymous namespace'::EmbeddedShaderDatabase::`vftable';
    v11 = v5 + 8;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
    *((_QWORD *)v5 + 4) = sub_18007DD0C();
  }
  else
  {
    v5 = 0LL;
  }
  v11 = v5 + 4;
  v12 = v5;
  v6 = sub_1800D315C((__int64)&qword_18026AAC8, v14, &v11);
  sub_1800D3EC8(&qword_18026AAC8, (__int64)v13, 0, (int *)(v6 + 32), (_QWORD *)v6);
  v7 = v13[0];
  *a1 = 0LL;
  a1[1] = 0LL;
  v8 = *(_QWORD *)(v7 + 48);
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  *a1 = *(_QWORD *)(v7 + 40);
  a1[1] = *(_QWORD *)(v7 + 48);
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      v9 = v12;
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return a1;
}
