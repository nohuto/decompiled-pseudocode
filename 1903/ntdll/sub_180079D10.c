/*
 * XREFs of sub_180079D10 @ 0x180079D10
 * Callers:
 *     sub_180079B64 @ 0x180079B64 (sub_180079B64.c)
 * Callees:
 *     sub_18004AF48 @ 0x18004AF48 (sub_18004AF48.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

_BYTE *__fastcall sub_180079D10(unsigned __int64 a1, __int64 a2, int a3)
{
  _BYTE *v5; // rax
  _BYTE *v6; // rbx

  v5 = (_BYTE *)((__int64 (__fastcall *)(_QWORD, __int64))(a1 ^ qword_180163540 ^ *(_QWORD *)(a1 + 40)))(
                  *(_QWORD *)a1,
                  ((((unsigned int)dword_180163534 >> 10) & 1) + 1LL) << 6);
  v6 = v5;
  if ( v5 )
  {
    memset(v5, 0, 0x40uLL);
    sub_18004AF48(v6, *(_BYTE *)(a2 + 1), a3);
  }
  return v6;
}
