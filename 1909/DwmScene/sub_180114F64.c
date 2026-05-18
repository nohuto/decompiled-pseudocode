/*
 * XREFs of sub_180114F64 @ 0x180114F64
 * Callers:
 *     sub_1800773B0 @ 0x1800773B0 (sub_1800773B0.c)
 *     sub_1800794F0 @ 0x1800794F0 (sub_1800794F0.c)
 *     sub_1800797D4 @ 0x1800797D4 (sub_1800797D4.c)
 *     sub_18007A28C @ 0x18007A28C (sub_18007A28C.c)
 *     sub_18007A5B0 @ 0x18007A5B0 (sub_18007A5B0.c)
 *     sub_18007B00C @ 0x18007B00C (sub_18007B00C.c)
 *     sub_18007C254 @ 0x18007C254 (sub_18007C254.c)
 *     sub_18007CCF4 @ 0x18007CCF4 (sub_18007CCF4.c)
 *     sub_18007D6D0 @ 0x18007D6D0 (sub_18007D6D0.c)
 *     sub_1800C2770 @ 0x1800C2770 (sub_1800C2770.c)
 *     sub_1800C2D50 @ 0x1800C2D50 (sub_1800C2D50.c)
 * Callees:
 *     sub_180115278 @ 0x180115278 (sub_180115278.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180114F64(_QWORD *a1, _QWORD *a2, __int64 a3, int a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  char v11; // al
  volatile signed __int32 *v12; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = *a2;
  a1[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *((_DWORD *)a1 + 4) = a4;
  a1[3] = a3;
  v9 = a5;
  a1[4] = a5;
  v10 = a6;
  a1[5] = a6;
  v11 = a7;
  *((_BYTE *)a1 + 48) = a7;
  a1[7] = 0LL;
  if ( v11 )
  {
    (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 16LL) + 8LL))(*(_QWORD *)(*a1 + 16LL), &a5);
    a1[7] = a5;
  }
  else
  {
    sub_180115278(*a1, 1, a3, a4, v9, v10);
  }
  v12 = (volatile signed __int32 *)a2[1];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return a1;
}
