/*
 * XREFs of sub_180033D1C @ 0x180033D1C
 * Callers:
 *     sub_180021B70 @ 0x180021B70 (sub_180021B70.c)
 *     sub_180022260 @ 0x180022260 (sub_180022260.c)
 *     sub_1800283E0 @ 0x1800283E0 (sub_1800283E0.c)
 *     ?overflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHH@Z @ 0x180033A60 (-overflow@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAHH@Z.c)
 *     sub_18003F2C0 @ 0x18003F2C0 (sub_18003F2C0.c)
 *     sub_180044300 @ 0x180044300 (sub_180044300.c)
 *     sub_180044550 @ 0x180044550 (sub_180044550.c)
 *     sub_180044750 @ 0x180044750 (sub_180044750.c)
 *     sub_180044A30 @ 0x180044A30 (sub_180044A30.c)
 * Callees:
 *     sub_1800634AC @ 0x1800634AC (sub_1800634AC.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180033D1C(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rcx
  signed __int32 v8; // eax
  __int128 v9; // [rsp+28h] [rbp-20h]

  v9 = 0LL;
  v4 = a1[10];
  if ( v4 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v4 + 8);
      if ( !v8 )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v8 + 1, v8) )
      {
        *(_QWORD *)&v9 = a1[9];
        v5 = a1[10];
        *((_QWORD *)&v9 + 1) = v5;
        goto LABEL_3;
      }
    }
  }
  v5 = 0LL;
LABEL_3:
  sub_1800634AC(v9 + 24);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v9 + 1))(*((_QWORD *)&v9 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v9 + 1) + 8LL))(*((_QWORD *)&v9 + 1));
    }
  }
  v6 = a1[18];
  *a2 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  return a2;
}
