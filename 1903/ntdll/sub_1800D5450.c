/*
 * XREFs of sub_1800D5450 @ 0x1800D5450
 * Callers:
 *     sub_18001C610 @ 0x18001C610 (sub_18001C610.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800D553C @ 0x1800D553C (sub_1800D553C.c)
 *     sub_1800D5984 @ 0x1800D5984 (sub_1800D5984.c)
 */

__int64 __fastcall sub_1800D5450(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  int v5; // eax
  __int64 v6; // r9
  __int128 v7; // xmm0
  unsigned __int64 Root; // rbx
  __int64 v9; // r8
  int v10; // edi
  int v11; // eax
  unsigned __int64 v12; // rax
  _DWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  __int128 v16; // [rsp+30h] [rbp-18h]

  v4 = -4530927LL;
  v5 = sub_1800D5984(a3, a2, a3);
  v7 = *(_OWORD *)(v6 + 88);
  Root = (unsigned __int64)stru_1801665C0.Root;
  v14[0] = v5;
  v14[1] = *(_DWORD *)(v6 + 264);
  v15 = v9;
  v16 = v7;
  if ( ((__int64)stru_1801665C0.Min & 1) != 0 && stru_1801665C0.Root )
    Root = (unsigned __int64)&stru_1801665C0 ^ (unsigned __int64)stru_1801665C0.Root;
  v10 = (__int64)stru_1801665C0.Min & 1;
  if ( Root )
  {
    do
    {
      v11 = sub_1800D553C(v14, Root);
      if ( v11 >= 0 )
      {
        if ( v11 <= 0 )
          break;
        v12 = *(_QWORD *)(Root + 8);
      }
      else
      {
        v12 = *(_QWORD *)Root;
      }
      if ( v10 && v12 )
        Root ^= v12;
      else
        Root = v12;
    }
    while ( Root );
    if ( Root
      && (!qword_180165270 || (unsigned __int8)qword_180165270(*(_QWORD *)(a1 + 80), *(unsigned int *)(Root + 64))) )
    {
      return *(_QWORD *)(Root + 56);
    }
  }
  return v4;
}
