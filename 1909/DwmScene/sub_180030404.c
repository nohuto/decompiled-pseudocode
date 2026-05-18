/*
 * XREFs of sub_180030404 @ 0x180030404
 * Callers:
 *     sub_18003171C @ 0x18003171C (sub_18003171C.c)
 *     sub_180031A54 @ 0x180031A54 (sub_180031A54.c)
 * Callees:
 *     sub_18002FC7C @ 0x18002FC7C (sub_18002FC7C.c)
 *     sub_180030058 @ 0x180030058 (sub_180030058.c)
 *     sub_18009EC3C @ 0x18009EC3C (sub_18009EC3C.c)
 *     sub_18009ECC8 @ 0x18009ECC8 (sub_18009ECC8.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180030404(_QWORD *a1)
{
  __int64 v2; // rsi
  int v3; // ebx
  __int16 v4; // ax
  __int64 **v5; // rax
  __int64 v6; // rsi
  int v7; // ebx
  char v8; // al
  __int64 *v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rcx
  __int64 *v12; // [rsp+40h] [rbp+8h] BYREF
  char v13; // [rsp+48h] [rbp+10h] BYREF

  if ( !a1[20] )
  {
    v2 = a1[21];
    if ( v2 )
    {
      v3 = sub_18009ECC8();
      v4 = sub_18009EC3C(a1);
      v5 = sub_18002FC7C((__int64)a1, &v12, v2, v4, v3);
    }
    else
    {
      v6 = a1[22];
      if ( !v6 )
        return;
      v7 = sub_18009ECC8();
      v8 = sub_18009EC3C(a1);
      v5 = sub_180030058((__int64)a1, &v12, v6, v8, v7);
    }
    v9 = 0LL;
    if ( &v13 != (char *)v5 )
    {
      v9 = *v5;
      *v5 = 0LL;
    }
    v10 = a1[20];
    a1[20] = v9;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v11 + 16))(v11);
    }
  }
}
