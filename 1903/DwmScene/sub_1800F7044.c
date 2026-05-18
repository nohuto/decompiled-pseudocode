/*
 * XREFs of sub_1800F7044 @ 0x1800F7044
 * Callers:
 *     sub_1800A9E30 @ 0x1800A9E30 (sub_1800A9E30.c)
 * Callees:
 *     sub_180026420 @ 0x180026420 (sub_180026420.c)
 *     sub_1800D1FB4 @ 0x1800D1FB4 (sub_1800D1FB4.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125AC8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F7044(__int64 a1)
{
  volatile signed __int32 *v2; // rbx
  __int64 result; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rcx
  __int64 *v14; // [rsp+28h] [rbp-10h] BYREF

  `eh vector destructor iterator'((void *)(a1 + 496), 0x10uLL, 0xAuLL, (void (*)(void *))unknown_libname_110);
  sub_180026420((__int64 ***)(a1 + 480), &v14, **(__int64 ***)(a1 + 480), *(__int64 **)(a1 + 480));
  j_j__o_free(*(_QWORD *)(a1 + 480));
  `eh vector destructor iterator'((void *)(a1 + 384), 0x10uLL, 6uLL, (void (*)(void *))unknown_libname_110);
  `eh vector destructor iterator'((void *)(a1 + 192), 0x20uLL, 6uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  v2 = *(volatile signed __int32 **)(a1 + 184);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  result = sub_1800D1FB4(a1 + 144);
  v4 = *(volatile signed __int32 **)(a1 + 104);
  if ( v4 )
  {
    result = (unsigned int)_InterlockedDecrement(v4 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedDecrement(v4 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = *(volatile signed __int32 **)(a1 + 88);
  if ( v5 )
  {
    result = (unsigned int)_InterlockedDecrement(v5 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      result = (unsigned int)_InterlockedDecrement(v5 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v6 = *(volatile signed __int32 **)(a1 + 72);
  if ( v6 )
  {
    result = (unsigned int)_InterlockedDecrement(v6 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      result = (unsigned int)_InterlockedDecrement(v6 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v7 = *(volatile signed __int32 **)(a1 + 56);
  if ( v7 )
  {
    result = (unsigned int)_InterlockedDecrement(v7 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = *(_QWORD *)(a1 + 24);
  if ( v8 )
  {
    v9 = (*(_QWORD *)(a1 + 40) - v8) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v9 >= 0x1000 )
    {
      v10 = v9 + 39;
      v11 = *(_QWORD *)(v8 - 8);
      v12 = v8 - v11;
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v10);
        JUMPOUT(0x1800F72B2LL);
      }
      v8 = v11;
    }
    result = j_j__o_free(v8);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v13 = *(volatile signed __int32 **)(a1 + 8);
  if ( v13 )
  {
    result = (unsigned int)_InterlockedDecrement(v13 + 3);
    if ( !(_DWORD)result )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
  }
  return result;
}
