/*
 * XREFs of sub_1800DB880 @ 0x1800DB880
 * Callers:
 *     sub_1800BE208 @ 0x1800BE208 (sub_1800BE208.c)
 *     sub_1800C9538 @ 0x1800C9538 (sub_1800C9538.c)
 * Callees:
 *     sub_18000FC30 @ 0x18000FC30 (sub_18000FC30.c)
 *     sub_1800DE5E8 @ 0x1800DE5E8 (sub_1800DE5E8.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_1800DB880(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 result; // rax
  volatile signed __int32 *v8; // rbx
  signed __int32 v9; // eax
  bool v10; // zf
  __int128 v11; // [rsp+48h] [rbp-20h] BYREF

  v11 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v11 = *a2;
  *((_QWORD *)&v11 + 1) = v4;
  sub_1800DE5E8(a1, &v11);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)*a2 + 8LL))(
    *a2,
    *(_QWORD *)(a1 + 32),
    *(unsigned int *)(a1 + 8),
    *(unsigned int *)(a1 + 12),
    *(_DWORD *)(a1 + 20),
    *(_DWORD *)(a1 + 28));
  v5 = *(_QWORD *)(a1 + 48);
  if ( *(_QWORD *)(a1 + 56) == v5 )
  {
    result = sub_18000FC30((char **)(a1 + 40), (char *)v5, a2);
  }
  else
  {
    *(_QWORD *)v5 = 0LL;
    *(_QWORD *)(v5 + 8) = 0LL;
    v6 = a2[1];
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    *(_QWORD *)v5 = *a2;
    result = a2[1];
    *(_QWORD *)(v5 + 8) = result;
    *(_QWORD *)(a1 + 48) += 16LL;
  }
  v8 = (volatile signed __int32 *)a2[1];
  if ( v8 )
  {
    v9 = _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF);
    v10 = v9 == 1;
    result = (unsigned int)(v9 - 1);
    if ( v10 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      result = (unsigned int)_InterlockedDecrement(v8 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return result;
}
