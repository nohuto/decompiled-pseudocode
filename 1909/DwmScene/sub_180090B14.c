/*
 * XREFs of sub_180090B14 @ 0x180090B14
 * Callers:
 *     sub_1800117D8 @ 0x1800117D8 (sub_1800117D8.c)
 *     sub_18009BD60 @ 0x18009BD60 (sub_18009BD60.c)
 *     sub_1800C1450 @ 0x1800C1450 (sub_1800C1450.c)
 *     sub_1800C3744 @ 0x1800C3744 (sub_1800C3744.c)
 *     sub_1800DC36C @ 0x1800DC36C (sub_1800DC36C.c)
 *     sub_1800FA510 @ 0x1800FA510 (sub_1800FA510.c)
 *     sub_1801119A0 @ 0x1801119A0 (sub_1801119A0.c)
 * Callees:
 *     sub_180090C3C @ 0x180090C3C (sub_180090C3C.c)
 *     sub_1800A40DC @ 0x1800A40DC (sub_1800A40DC.c)
 *     sub_1800A9414 @ 0x1800A9414 (sub_1800A9414.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180090B14(__int64 a1, __int64 a2, char a3)
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
    v9 = (_QWORD *)sub_1800A9414(v8, v13);
    v10 = sub_1800A40DC(*v9, a2);
    LOBYTE(v11) = a3;
    result = sub_180090C3C(a1, v10, v11);
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
