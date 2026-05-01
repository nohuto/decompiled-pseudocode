/*
 * XREFs of ?DeleteExpiredHints@ActivationHints@@AEAAXXZ @ 0x18007E324
 * Callers:
 *     ?GetAndDeleteFirstHint@ActivationHints@@UEAAJUAppIdInfo@@AEBU_GUID@@PEAPEAX@Z @ 0x18007E230 (-GetAndDeleteFirstHint@ActivationHints@@UEAAJUAppIdInfo@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z @ 0x1803AB290 (-AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x18007E370 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180216A2C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1Hint@ActivationHints@@QEAA@XZ @ 0x1803AB164 (--1Hint@ActivationHints@@QEAA@XZ.c)
 */

void __fastcall ActivationHints::DeleteExpiredHints(ActivationHints *this)
{
  ActivationHints::Hint *v2; // rdi
  ActivationHints::Hint *v3; // rbx
  ActivationHints::Hint *v4; // rdx
  __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  ActivationHints::Hint *i; // rsi
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  std::chrono::steady_clock::now(&v9);
  v2 = (ActivationHints::Hint *)*((_QWORD *)this + 21);
  v3 = (ActivationHints::Hint *)*((_QWORD *)this + 20);
  if ( v3 != v2 )
  {
    v4 = (ActivationHints::Hint *)*((_QWORD *)this + 20);
    do
    {
      if ( v9 - *((_QWORD *)v4 + 8) <= 120000000000LL )
        break;
      v4 = (ActivationHints::Hint *)((char *)v4 + 80);
    }
    while ( v4 != v2 );
    if ( v3 != v4 )
    {
      if ( v4 != v2 )
      {
        v5 = (__int64 *)((char *)v4 + 72);
        do
        {
          std::wstring::operator=(v3, v5 - 9);
          std::wstring::operator=((char *)v3 + 32, v5 - 5);
          *((_QWORD *)v3 + 8) = *(v5 - 1);
          v6 = *v5;
          *v5 = 0LL;
          v7 = *((_QWORD *)v3 + 9);
          *((_QWORD *)v3 + 9) = v6;
          if ( v7 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
          v5 += 10;
          v3 = (ActivationHints::Hint *)((char *)v3 + 80);
        }
        while ( v5 - 9 != (__int64 *)v2 );
        v2 = (ActivationHints::Hint *)*((_QWORD *)this + 21);
      }
      for ( i = v3; i != v2; i = (ActivationHints::Hint *)((char *)i + 80) )
        ActivationHints::Hint::~Hint(i);
      *((_QWORD *)this + 21) = v3;
    }
  }
}
