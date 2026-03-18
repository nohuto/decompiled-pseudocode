/*
 * XREFs of GreSaveScreenBits @ 0x1C0299198
 * Callers:
 *     CreateSpb @ 0x1C015D8BC (CreateSpb.c)
 *     ?SpbApc@@YAXPEAX00@Z @ 0x1C0208C10 (-SpbApc@@YAXPEAX00@Z.c)
 *     FreeSpb @ 0x1C0208ED4 (FreeSpb.c)
 *     RestoreSpb @ 0x1C02090E0 (RestoreSpb.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C023BFD8 (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0043E30 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0046A44 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSaveScreenBits(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rsi
  __int64 (__fastcall *v9)(struct _SURFOBJ *, _QWORD, __int64, _QWORD *); // rdi
  struct _SURFOBJ *v10; // rbx
  _QWORD *v11; // r9
  __int64 v13; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+38h] [rbp-60h] BYREF
  __int64 v15; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v16[8]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-48h] BYREF

  v6 = 0LL;
  v17[0] = 0LL;
  v17[1] = 0LL;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v16, ghsemDynamicModeChange);
  v15 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( (*(_DWORD *)(a1 + 40) & 0x400) == 0 )
  {
    v14 = ghsemSprite;
    GreAcquireSemaphore(ghsemSprite);
    v9 = *(__int64 (__fastcall **)(struct _SURFOBJ *, _QWORD, __int64, _QWORD *))(a1 + 3008);
    if ( v9 )
    {
      v10 = (struct _SURFOBJ *)((*(_QWORD *)(a1 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(a1 + 2552) != 0LL));
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v13, v10);
      v11 = v17;
      if ( a2 != 2 )
        v11 = a4;
      v6 = v9(v10, a2, a3, v11);
      if ( v13 )
        GreUnlockDisplayDevice(*(_QWORD *)(v13 + 48));
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v14);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v16);
  return v6;
}
