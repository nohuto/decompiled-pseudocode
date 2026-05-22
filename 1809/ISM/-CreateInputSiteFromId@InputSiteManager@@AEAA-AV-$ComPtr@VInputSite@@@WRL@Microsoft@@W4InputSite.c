/*
 * XREFs of ?CreateInputSiteFromId@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteType@@_K@Z @ 0x18001DE08
 * Callers:
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteType@@_K@Z @ 0x18001D8DC (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteTyp.c)
 * Callees:
 *     ??$_Emplace_reallocate@ULampUpdateState@@@?$vector@ULampUpdateState@@V?$allocator@ULampUpdateState@@@std@@@std@@QEAAPEAULampUpdateState@@QEAU2@$$QEAU2@@Z @ 0x18001E60C (--$_Emplace_reallocate@ULampUpdateState@@@-$vector@ULampUpdateState@@V-$allocator@ULampUpdateSta.c)
 *     ??0InputSite@@QEAA@W4InputSiteType@@_KAEBV?$ComPtr@VInputSiteManager@@@WRL@Microsoft@@@Z @ 0x18002101C (--0InputSite@@QEAA@W4InputSiteType@@_KAEBV-$ComPtr@VInputSiteManager@@@WRL@Microsoft@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall InputSiteManager::CreateInputSiteFromId(_QWORD *a1, __int64 *a2, unsigned int a3, __int64 a4)
{
  void *v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 *v11; // rdx
  _QWORD *v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v14; // [rsp+58h] [rbp+10h]

  v14 = a2;
  *a2 = 0LL;
  v8 = operator new(0x1A8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v13 = a1;
    if ( a1 )
      (*(void (__fastcall **)(_QWORD *))*a1)(a1);
    v9 = InputSite::InputSite(v8, a3, a4, &v13, 0, -2LL);
    if ( a1 )
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    if ( *a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 16LL))(*a2);
    *a2 = v9;
  }
  v10 = *a2;
  v13 = (_QWORD *)*a2;
  v11 = (__int64 *)a1[8];
  if ( (__int64 *)a1[9] == v11 )
  {
    std::vector<LampUpdateState>::_Emplace_reallocate<LampUpdateState>(a1 + 7, v11, &v13);
  }
  else
  {
    *v11 = v10;
    a1[8] += 8LL;
  }
  return a2;
}
