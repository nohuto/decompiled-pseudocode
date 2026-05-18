/*
 * XREFs of sub_180033E2C @ 0x180033E2C
 * Callers:
 *     sub_180021C80 @ 0x180021C80 (sub_180021C80.c)
 *     sub_180022370 @ 0x180022370 (sub_180022370.c)
 *     sub_1800284F0 @ 0x1800284F0 (sub_1800284F0.c)
 *     ?overflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHH@Z @ 0x180033B70 (-overflow@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAHH@Z.c)
 *     sub_18003F3D0 @ 0x18003F3D0 (sub_18003F3D0.c)
 *     sub_180044410 @ 0x180044410 (sub_180044410.c)
 *     sub_180044660 @ 0x180044660 (sub_180044660.c)
 *     sub_180044860 @ 0x180044860 (sub_180044860.c)
 *     sub_180044B40 @ 0x180044B40 (sub_180044B40.c)
 * Callees:
 *     sub_1800635BC @ 0x1800635BC (sub_1800635BC.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180033E2C(_QWORD *a1, _QWORD *a2)
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
  sub_1800635BC(v9 + 24);
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
