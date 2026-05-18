/*
 * XREFs of sub_18006D6F0 @ 0x18006D6F0
 * Callers:
 *     sub_1800249C0 @ 0x1800249C0 (sub_1800249C0.c)
 *     sub_1800B6AF0 @ 0x1800B6AF0 (sub_1800B6AF0.c)
 * Callees:
 *     unknown_libname_115 @ 0x1800100A8 (unknown_libname_115.c)
 *     sub_1800E2694 @ 0x1800E2694 (sub_1800E2694.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006D6F0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 3976) )
  {
    v3 = *(_QWORD *)(a1 + 3864);
    v4 = *(_QWORD *)(a1 + 3856);
    if ( v4 != v3 )
    {
      do
      {
        v5 = *(_QWORD *)(v4 + 56);
        if ( v5 )
        {
          LOBYTE(a2) = v5 != v4;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
          *(_QWORD *)(v4 + 56) = 0LL;
        }
        v4 += 64LL;
      }
      while ( v4 != v3 );
      v4 = *(_QWORD *)(a1 + 3856);
    }
    *(_QWORD *)(a1 + 3864) = v4;
    sub_1800E2694(a1 + 608);
    sub_1800E2694(a1 + 832);
    sub_1800E2694(a1 + 1056);
    v6 = *(_QWORD *)(a1 + 256);
    v7 = *(_QWORD *)(a1 + 248);
    if ( v7 != v6 )
    {
      do
      {
        unknown_libname_115(v7, 0);
        v7 += 16LL;
      }
      while ( v7 != v6 );
      v7 = *(_QWORD *)(a1 + 248);
    }
    *(_QWORD *)(a1 + 256) = v7;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 256LL))(a1);
    *(_BYTE *)(a1 + 3976) = 0;
  }
  return result;
}
