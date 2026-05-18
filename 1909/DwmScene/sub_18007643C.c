/*
 * XREFs of sub_18007643C @ 0x18007643C
 * Callers:
 *     sub_18000DCC0 @ 0x18000DCC0 (sub_18000DCC0.c)
 *     sub_180015CD4 @ 0x180015CD4 (sub_180015CD4.c)
 *     sub_180015DF4 @ 0x180015DF4 (sub_180015DF4.c)
 *     sub_180015F14 @ 0x180015F14 (sub_180015F14.c)
 *     sub_18001D8E4 @ 0x18001D8E4 (sub_18001D8E4.c)
 *     sub_180026880 @ 0x180026880 (sub_180026880.c)
 *     sub_180094950 @ 0x180094950 (sub_180094950.c)
 *     sub_180094A70 @ 0x180094A70 (sub_180094A70.c)
 *     sub_18009FD24 @ 0x18009FD24 (sub_18009FD24.c)
 *     sub_18009FE44 @ 0x18009FE44 (sub_18009FE44.c)
 *     sub_18009FF64 @ 0x18009FF64 (sub_18009FF64.c)
 *     sub_1800A0084 @ 0x1800A0084 (sub_1800A0084.c)
 *     sub_1800A01A4 @ 0x1800A01A4 (sub_1800A01A4.c)
 *     sub_1800A653C @ 0x1800A653C (sub_1800A653C.c)
 *     sub_1800F3DE4 @ 0x1800F3DE4 (sub_1800F3DE4.c)
 *     sub_1800F69C0 @ 0x1800F69C0 (sub_1800F69C0.c)
 * Callees:
 *     sub_180063288 @ 0x180063288 (sub_180063288.c)
 *     sub_180063468 @ 0x180063468 (sub_180063468.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_180063780 @ 0x180063780 (sub_180063780.c)
 *     sub_180064430 @ 0x180064430 (sub_180064430.c)
 *     ?SetScheduler@?$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEAVSchedulerBase@23@@Z @ 0x180064564 (-SetScheduler@-$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEA.c)
 *     sub_180064684 @ 0x180064684 (sub_180064684.c)
 *     sub_180077BAC @ 0x180077BAC (sub_180077BAC.c)
 *     sub_180077C8C @ 0x180077C8C (sub_180077C8C.c)
 *     sub_180077D04 @ 0x180077D04 (sub_180077D04.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall sub_18007643C(__int64 a1, __int64 a2, int a3)
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
  LOBYTE(v6) = sub_180064430(a2, 1);
  if ( (_BYTE)v6 )
  {
    if ( a3 == 2 )
    {
      v19 = 0LL;
      v20 = 0LL;
      sub_180063288(a1 + 1104, &v19);
      v17 = 0LL;
      v18 = 0LL;
      sub_180063468(a1 + 112, &v17);
      v7 = 0;
      v6 = sub_180077C8C(a1);
      if ( v6 )
      {
        do
        {
          v8 = sub_180077BAC(a1, v13, v7);
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
          v6 = sub_180077C8C(a1);
        }
        while ( v7 < v6 );
      }
      if ( (_BYTE)v18 )
        LOBYTE(v6) = sub_180063780(v17);
      if ( (_BYTE)v20 )
        LOBYTE(v6) = sub_180063778(v19);
    }
    if ( a3 == 1 )
    {
      v10 = sub_180077D04(a1, v15, 0LL);
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
      LOBYTE(v6) = sub_180064684(a2, 8, 1);
  }
  return v6;
}
