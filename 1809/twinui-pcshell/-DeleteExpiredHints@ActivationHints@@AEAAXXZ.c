/*
 * XREFs of ?DeleteExpiredHints@ActivationHints@@AEAAXXZ @ 0x18032B940
 * Callers:
 *     ?AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z @ 0x18032B560 (-AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z.c)
 *     ?GetAndDeleteFirstHint@ActivationHints@@UEAAJUAppIdInfo@@AEBU_GUID@@PEAPEAX@Z @ 0x18032B9C0 (-GetAndDeleteFirstHint@ActivationHints@@UEAAJUAppIdInfo@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?erase@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@0@Z @ 0x18032C134 (-erase@-$vector@UHint@ActivationHints@@V-$allocator@UHint@ActivationHints@@@std@@@std@@QEAA-AV-$.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x18032C2C8 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 */

void __fastcall ActivationHints::DeleteExpiredHints(ActivationHints *this)
{
  __int64 v2; // r8
  __int64 i; // r9
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF
  char v5; // [rsp+40h] [rbp+18h] BYREF

  std::chrono::steady_clock::now(&v4);
  v2 = *((_QWORD *)this + 21);
  for ( i = *((_QWORD *)this + 20); i != v2; i += 80LL )
  {
    if ( v4 - *(_QWORD *)(i + 64) <= 120000000000LL )
      break;
  }
  std::vector<ActivationHints::Hint>::erase((char *)this + 160, &v5, *((_QWORD *)this + 20));
}
