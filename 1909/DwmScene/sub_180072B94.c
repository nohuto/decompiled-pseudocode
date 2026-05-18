/*
 * XREFs of sub_180072B94 @ 0x180072B94
 * Callers:
 *     sub_18007B940 @ 0x18007B940 (sub_18007B940.c)
 * Callees:
 *     _Xtime_get_ticks @ 0x180127612 (_Xtime_get_ticks.c)
 */

__int64 __fastcall sub_180072B94(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 ticks; // rax
  __int64 v6; // rcx

  v4 = 0LL;
  if ( *a2 > 0 )
  {
    ticks = Xtime_get_ticks();
    v6 = 1000000000 * *a2;
    v4 = (v6 + 100 * ticks) / 1000000000;
    *(_DWORD *)(a1 + 8) = v6 + 100 * ticks - 1000000000 * v4;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
  }
  *(_QWORD *)a1 = v4;
  return a1;
}
