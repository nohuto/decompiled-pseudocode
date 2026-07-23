/*
 * XREFs of sub_18002CAA8 @ 0x18002CAA8
 * Callers:
 *     sub_18002C944 @ 0x18002C944 (sub_18002C944.c)
 *     sub_18002ECFC @ 0x18002ECFC (sub_18002ECFC.c)
 *     sub_180083398 @ 0x180083398 (sub_180083398.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall sub_18002CAA8(__int64 a1, unsigned int a2)
{
  _UNKNOWN **i; // rbx
  int v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+40h] [rbp-18h]

  v5 = 0;
  v6 = a1 + 72;
  v7 = a1 + 88;
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *(_DWORD *)(a1 + 64);
  RtlEnterCriticalSection(&stru_18015F3F0);
  for ( i = (_UNKNOWN **)off_18015F560; i != &off_18015F560; i = (_UNKNOWN **)*i )
    ((void (__fastcall *)(_QWORD, int *, void *))i[2])(a2, &v5, i[3]);
  return RtlLeaveCriticalSection(&stru_18015F3F0);
}
