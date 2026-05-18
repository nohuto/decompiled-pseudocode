/*
 * XREFs of sub_180023728 @ 0x180023728
 * Callers:
 *     sub_180023080 @ 0x180023080 (sub_180023080.c)
 * Callees:
 *     sub_180021ACC @ 0x180021ACC (sub_180021ACC.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_180023728(__int64 a1)
{
  _UNKNOWN **v1; // rax
  int v2; // ebx
  __int64 v4; // rax
  void (__fastcall *v5)(__int64, __int128 *); // rax
  __int128 v7; // [rsp+28h] [rbp-39h] BYREF
  int v8; // [rsp+38h] [rbp-29h]
  int v9; // [rsp+3Ch] [rbp-25h]
  int v10; // [rsp+40h] [rbp-21h]
  int v11; // [rsp+44h] [rbp-1Dh]
  __int128 v12; // [rsp+48h] [rbp-19h]
  __int128 v13; // [rsp+58h] [rbp-9h]
  __int128 v14; // [rsp+68h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+17h]
  __int64 v16; // [rsp+80h] [rbp+1Fh]
  int v17; // [rsp+88h] [rbp+27h]
  int v18; // [rsp+8Ch] [rbp+2Bh]
  __int64 v19; // [rsp+90h] [rbp+2Fh]
  int v20; // [rsp+98h] [rbp+37h]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF

  v1 = &retaddr;
  v2 = *(_DWORD *)(a1 + 416);
  if ( v2 != 1 )
  {
    if ( !v2 )
    {
      v4 = *(_QWORD *)a1;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v5 = *(void (__fastcall **)(__int64, __int128 *))(v4 + 88);
      v15 = 0LL;
      v16 = 0LL;
      v17 = 0;
      v18 = 0;
      v19 = 0LL;
      v20 = 0;
      v8 = 0;
      v7 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      v5(a1, &v7);
      v2 = v20 >= 1000 ? (v20 >= 2000) + 2 : 1;
      if ( *(_DWORD *)(a1 + 308) == 1 )
        v2 = 1;
    }
    LOBYTE(v1) = sub_180021ACC(a1);
    if ( !(_BYTE)v1 && *(_DWORD *)(a1 + 384) == 1 )
      v2 = 1;
  }
  *(_DWORD *)(a1 + 420) = v2;
  return (char)v1;
}
