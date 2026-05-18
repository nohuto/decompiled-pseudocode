/*
 * XREFs of sub_18011528C @ 0x18011528C
 * Callers:
 *     sub_180014CB8 @ 0x180014CB8 (sub_180014CB8.c)
 * Callees:
 *     sub_180114C58 @ 0x180114C58 (sub_180114C58.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18011528C(_QWORD *a1)
{
  volatile signed __int32 *v2; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v12; // [rsp+28h] [rbp-38h] BYREF
  volatile signed __int32 *v13; // [rsp+30h] [rbp-30h]
  volatile signed __int32 *v14; // [rsp+38h] [rbp-28h] BYREF
  volatile signed __int32 *v15; // [rsp+40h] [rbp-20h]
  volatile signed __int32 *v16; // [rsp+48h] [rbp-18h] BYREF
  volatile signed __int32 *v17; // [rsp+50h] [rbp-10h]

  v16 = 0LL;
  v17 = 0LL;
  v2 = (volatile signed __int32 *)operator new(0x18uLL);
  v3 = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 2) = 1;
    *((_DWORD *)v2 + 3) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Utils::ETWTraceProvider>::`vftable';
    *((_QWORD *)v2 + 2) = &Spectre::Utils::ETWTraceProvider::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
    _InterlockedAdd(v3 + 2, 1u);
  v16 = v3 + 4;
  v17 = v3;
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v14 = 0LL;
  v15 = 0LL;
  v4 = (volatile signed __int32 *)operator new(0x18uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 1;
    *((_DWORD *)v4 + 3) = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Utils::DefaultTimeProvider>::`vftable';
    *((_QWORD *)v4 + 2) = &Spectre::Utils::DefaultTimeProvider::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
    _InterlockedAdd(v5 + 2, 1u);
  v14 = v5 + 4;
  v15 = v5;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v12 = 0LL;
  v13 = 0LL;
  v6 = (volatile signed __int32 *)operator new(0x18uLL);
  v7 = v6;
  if ( v6 )
  {
    *((_DWORD *)v6 + 2) = 1;
    *((_DWORD *)v6 + 3) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<Spectre::Utils::DefaultMemoryStatsProvider>::`vftable';
    *((_QWORD *)v6 + 2) = &Spectre::Utils::DefaultMemoryStatsProvider::`vftable';
  }
  else
  {
    v7 = 0LL;
  }
  if ( v7 )
    _InterlockedAdd(v7 + 2, 1u);
  v12 = v7 + 4;
  v13 = v7;
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  sub_180114C58(a1, (__int64 *)&v16, (__int64 *)&v14, (__int64 *)&v12);
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      v8 = v13;
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      v9 = v15;
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      v10 = v17;
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  return a1;
}
