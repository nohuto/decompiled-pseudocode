/*
 * XREFs of sub_18007632C @ 0x18007632C
 * Callers:
 *     sub_18000DC70 @ 0x18000DC70 (sub_18000DC70.c)
 *     sub_180015C64 @ 0x180015C64 (sub_180015C64.c)
 *     sub_180015D84 @ 0x180015D84 (sub_180015D84.c)
 *     sub_180015EA4 @ 0x180015EA4 (sub_180015EA4.c)
 *     sub_18001D7D4 @ 0x18001D7D4 (sub_18001D7D4.c)
 *     sub_180026770 @ 0x180026770 (sub_180026770.c)
 *     sub_180094840 @ 0x180094840 (sub_180094840.c)
 *     sub_180094960 @ 0x180094960 (sub_180094960.c)
 *     sub_18009FC14 @ 0x18009FC14 (sub_18009FC14.c)
 *     sub_18009FD34 @ 0x18009FD34 (sub_18009FD34.c)
 *     sub_18009FE54 @ 0x18009FE54 (sub_18009FE54.c)
 *     sub_18009FF74 @ 0x18009FF74 (sub_18009FF74.c)
 *     sub_1800A0094 @ 0x1800A0094 (sub_1800A0094.c)
 *     sub_1800A642C @ 0x1800A642C (sub_1800A642C.c)
 *     sub_1800F3CD4 @ 0x1800F3CD4 (sub_1800F3CD4.c)
 *     sub_1800F68B0 @ 0x1800F68B0 (sub_1800F68B0.c)
 * Callees:
 *     sub_180063178 @ 0x180063178 (sub_180063178.c)
 *     sub_180063358 @ 0x180063358 (sub_180063358.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_180063670 @ 0x180063670 (sub_180063670.c)
 *     sub_180064320 @ 0x180064320 (sub_180064320.c)
 *     ?SetScheduler@?$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEAVSchedulerBase@23@@Z @ 0x180064454 (-SetScheduler@-$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEA.c)
 *     sub_180064574 @ 0x180064574 (sub_180064574.c)
 *     sub_180077A9C @ 0x180077A9C (sub_180077A9C.c)
 *     sub_180077B7C @ 0x180077B7C (sub_180077B7C.c)
 *     sub_180077BF4 @ 0x180077BF4 (sub_180077BF4.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall sub_18007632C(__int64 a1, __int64 a2, int a3)
{
  unsigned __int32 v6; // eax
  unsigned __int32 v7; // esi
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rbx
  _BYTE v13[8]; // [rsp+28h] [rbp-48h] BYREF
  volatile signed __int32 *v14; // [rsp+30h] [rbp-40h]
  _BYTE v15[8]; // [rsp+38h] [rbp-38h] BYREF
  volatile signed __int32 *v16; // [rsp+40h] [rbp-30h]
  __int64 v17; // [rsp+48h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h]
  __int64 v19; // [rsp+58h] [rbp-18h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h]

  Concurrency::details::ListArray<Concurrency::details::ScheduleGroupBase>::SetScheduler(a2, a1);
  LOBYTE(v6) = sub_180064320(a2, 1);
  if ( (_BYTE)v6 )
  {
    if ( a3 == 2 )
    {
      v19 = 0LL;
      v20 = 0LL;
      sub_180063178(a1 + 1104, &v19);
      v17 = 0LL;
      v18 = 0LL;
      sub_180063358(a1 + 112, &v17);
      v7 = 0;
      v6 = sub_180077B7C(a1);
      if ( v6 )
      {
        do
        {
          v8 = sub_180077A9C(a1, v13, v7);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v8);
          v9 = v14;
          if ( v14 )
          {
            if ( !_InterlockedDecrement(v14 + 2) )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
              if ( !_InterlockedDecrement(v9 + 3) )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
            }
          }
          ++v7;
          v6 = sub_180077B7C(a1);
        }
        while ( v7 < v6 );
      }
      if ( (_BYTE)v18 )
        LOBYTE(v6) = sub_180063670(v17);
      if ( (_BYTE)v20 )
        LOBYTE(v6) = sub_180063668(v19);
    }
    if ( a3 == 1 )
    {
      v10 = sub_180077BF4(a1, v15, 0LL);
      LOBYTE(v6) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v10);
      v11 = v16;
      if ( v16 )
      {
        v6 = _InterlockedDecrement(v16 + 2);
        if ( !v6 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
          v6 = _InterlockedDecrement(v11 + 3);
          if ( !v6 )
            LOBYTE(v6) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        }
      }
    }
    if ( !*(_DWORD *)(a1 + 552) )
      LOBYTE(v6) = sub_180064574(a2, 8, 1);
  }
  return v6;
}
