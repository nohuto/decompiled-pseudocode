/*
 * XREFs of sub_1800E0280 @ 0x1800E0280
 * Callers:
 *     sub_1800E0B90 @ 0x1800E0B90 (sub_1800E0B90.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E0280(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 (__fastcall *v4)(__int64, __int64, __int64, __int128 *, char); // rax
  __int64 result; // rax
  char v6; // [rsp+20h] [rbp-28h]
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  if ( *(_BYTE *)(a1 + 61) )
  {
    v6 = *(_BYTE *)(a1 + 60);
    v3 = *(unsigned int *)(a1 + 40);
    v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int128 *, char))(*(_QWORD *)a2 + 168LL);
    v7 = *(_OWORD *)(a1 + 44);
    result = v4(a2, a1 + 24, v3, &v7, v6);
    *(_BYTE *)(a1 + 61) = 0;
  }
  return result;
}
