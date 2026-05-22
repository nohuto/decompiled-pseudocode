/*
 * XREFs of ?clear@?$list@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAAXXZ @ 0x180084F98
 * Callers:
 *     ??1Win32kInterop@@UEAA@XZ @ 0x1800812FC (--1Win32kInterop@@UEAA@XZ.c)
 *     ??1?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@QEAA@XZ @ 0x1800814EC (--1-$unordered_map@KUTargetingInfo@Win32kInterop@@U-$hash@K@std@@U-$equal_to@K@4@V-$allocator@U-.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAUInputContext@@@Z@std@@V?$function@$$A6AXPEAUInputInfo@@@Z@4@@Z @ 0x1800838E4 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAUInputCon.c)
 *     ??1?$list@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@QEAA@XZ @ 0x180084E50 (--1-$list@U-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V-$allocator@U-$pair@$$CBKUTargetingI.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::list<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>::clear(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = **(_QWORD ***)a1;
  **(_QWORD **)a1 = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( v2 != *(_QWORD **)a1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      v4 = v2[8];
      if ( v4 )
      {
        v2[8] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v5 = v2[4];
      if ( v5 )
      {
        v2[4] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      v6 = v2[3];
      if ( v6 )
      {
        v2[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      operator delete(v2, (const struct std::nothrow_t *)0x50);
      v2 = v3;
    }
    while ( v3 != *(_QWORD **)a1 );
  }
}
