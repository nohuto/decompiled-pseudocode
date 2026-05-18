/*
 * XREFs of sub_1800302F4 @ 0x1800302F4
 * Callers:
 *     sub_18003160C @ 0x18003160C (sub_18003160C.c)
 *     sub_180031944 @ 0x180031944 (sub_180031944.c)
 * Callees:
 *     sub_18002FB6C @ 0x18002FB6C (sub_18002FB6C.c)
 *     sub_18002FF48 @ 0x18002FF48 (sub_18002FF48.c)
 *     sub_18009EB2C @ 0x18009EB2C (sub_18009EB2C.c)
 *     sub_18009EBB8 @ 0x18009EBB8 (sub_18009EBB8.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800302F4(_QWORD *a1)
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
      v3 = sub_18009EBB8();
      v4 = sub_18009EB2C(a1);
      v5 = sub_18002FB6C((__int64)a1, &v12, v2, v4, v3);
    }
    else
    {
      v6 = a1[22];
      if ( !v6 )
        return;
      v7 = sub_18009EBB8();
      v8 = sub_18009EB2C(a1);
      v5 = sub_18002FF48((__int64)a1, &v12, v6, v8, v7);
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
