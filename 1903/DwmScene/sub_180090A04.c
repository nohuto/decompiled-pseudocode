/*
 * XREFs of sub_180090A04 @ 0x180090A04
 * Callers:
 *     sub_180011788 @ 0x180011788 (sub_180011788.c)
 *     sub_18009BC50 @ 0x18009BC50 (sub_18009BC50.c)
 *     sub_1800C1340 @ 0x1800C1340 (sub_1800C1340.c)
 *     sub_1800C3634 @ 0x1800C3634 (sub_1800C3634.c)
 *     sub_1800DC25C @ 0x1800DC25C (sub_1800DC25C.c)
 *     sub_1800FA400 @ 0x1800FA400 (sub_1800FA400.c)
 *     sub_180111890 @ 0x180111890 (sub_180111890.c)
 * Callees:
 *     sub_180090B2C @ 0x180090B2C (sub_180090B2C.c)
 *     sub_1800A3FCC @ 0x1800A3FCC (sub_1800A3FCC.c)
 *     sub_1800A9304 @ 0x1800A9304 (sub_1800A9304.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180090A04(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  unsigned int v10; // eax
  __int64 v11; // r8
  volatile signed __int32 *v12; // rdi
  _BYTE v13[8]; // [rsp+38h] [rbp-20h] BYREF
  volatile signed __int32 *v14; // [rsp+40h] [rbp-18h]

  result = 0LL;
  v7 = *(volatile signed __int32 **)(a1 + 144);
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v7 = *(volatile signed __int32 **)(a1 + 144);
  }
  v8 = *(_QWORD *)(a1 + 136);
  if ( v8 )
  {
    v9 = (_QWORD *)sub_1800A9304(v8, v13);
    v10 = sub_1800A3FCC(*v9, a2);
    LOBYTE(v11) = a3;
    result = sub_180090B2C(a1, v10, v11);
    v12 = v14;
    if ( v14 )
    {
      result = (unsigned int)_InterlockedDecrement(v14 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        result = (unsigned int)_InterlockedDecrement(v12 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
  }
  if ( v7 )
  {
    result = (unsigned int)_InterlockedDecrement(v7 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
