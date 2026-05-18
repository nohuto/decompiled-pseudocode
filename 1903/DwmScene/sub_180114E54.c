/*
 * XREFs of sub_180114E54 @ 0x180114E54
 * Callers:
 *     sub_1800772A0 @ 0x1800772A0 (sub_1800772A0.c)
 *     sub_1800793E0 @ 0x1800793E0 (sub_1800793E0.c)
 *     sub_1800796C4 @ 0x1800796C4 (sub_1800796C4.c)
 *     sub_18007A17C @ 0x18007A17C (sub_18007A17C.c)
 *     sub_18007A4A0 @ 0x18007A4A0 (sub_18007A4A0.c)
 *     sub_18007AEFC @ 0x18007AEFC (sub_18007AEFC.c)
 *     sub_18007C144 @ 0x18007C144 (sub_18007C144.c)
 *     sub_18007CBE4 @ 0x18007CBE4 (sub_18007CBE4.c)
 *     sub_18007D5C0 @ 0x18007D5C0 (sub_18007D5C0.c)
 *     sub_1800C2660 @ 0x1800C2660 (sub_1800C2660.c)
 *     sub_1800C2C40 @ 0x1800C2C40 (sub_1800C2C40.c)
 * Callees:
 *     sub_180115168 @ 0x180115168 (sub_180115168.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180114E54(_QWORD *a1, _QWORD *a2, __int64 a3, int a4, __int64 a5, __int64 a6, char a7)
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
    sub_180115168(*a1, 1, a3, a4, v9, v10);
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
