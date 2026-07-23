/*
 * XREFs of sub_180045F38 @ 0x180045F38
 * Callers:
 *     sub_180045D7C @ 0x180045D7C (sub_180045D7C.c)
 *     sub_18010AD30 @ 0x18010AD30 (sub_18010AD30.c)
 * Callees:
 *     sub_180040830 @ 0x180040830 (sub_180040830.c)
 *     sub_180046028 @ 0x180046028 (sub_180046028.c)
 *     sub_180046E04 @ 0x180046E04 (sub_180046E04.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

void *__fastcall sub_180045F38(_DWORD *a1, const void *a2, __int64 a3, unsigned int a4)
{
  void *v8; // rax
  void *v9; // rsi
  size_t v10; // r8
  __int64 v12; // rdx
  unsigned __int8 *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v8 = (void *)sub_180046028(a1, (__int64)&v15);
  v9 = v8;
  if ( v8 )
  {
    v10 = *(_QWORD *)a3;
    if ( *(_QWORD *)a3 >= *(_QWORD *)(a3 + 24) )
      v10 = *(_QWORD *)(a3 + 24);
    memmove(v8, a2, v10);
    if ( *(_DWORD *)(a3 + 16) )
    {
      v12 = (__int64)a2 + *(_QWORD *)a3 + 16;
      if ( (a4 & 0x10000000) == 0 )
        v12 = (__int64)a2 + *(_QWORD *)a3;
      v13 = (unsigned __int8 *)((v12 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v14 = (__int64)v9 + *(_QWORD *)(a3 + 24) + 16;
      if ( (a4 & 0x10000000) == 0 )
        v14 = (__int64)v9 + *(_QWORD *)(a3 + 24);
      memmove((void *)((v14 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v13, 16 * (v13[3] + 1LL));
      sub_180046E04(a1, v9, a4);
    }
    sub_180040830(a1, (unsigned __int64)a2, a4 & 0x11000001, 0LL, 0LL);
  }
  return v9;
}
