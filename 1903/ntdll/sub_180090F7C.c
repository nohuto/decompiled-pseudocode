/*
 * XREFs of sub_180090F7C @ 0x180090F7C
 * Callers:
 *     sscanf @ 0x180090F40 (sscanf.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180090F7C(
        __int64 (__fastcall *a1)(__int64 *, __int64, __int64, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+38h] [rbp-30h]
  __int64 v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]

  v5 = -1LL;
  do
    ++v5;
  while ( *(_BYTE *)(a2 + v5) );
  if ( a2 && a3 )
  {
    v9 = a2;
    v7 = a2;
    if ( v5 > 0x7FFFFFFF )
      LODWORD(v5) = 0x7FFFFFFF;
    v10 = 73;
    v8 = v5;
    return a1(&v7, a3, a4, a5);
  }
  else
  {
    sub_18008C6D8();
    return 0xFFFFFFFFLL;
  }
}
