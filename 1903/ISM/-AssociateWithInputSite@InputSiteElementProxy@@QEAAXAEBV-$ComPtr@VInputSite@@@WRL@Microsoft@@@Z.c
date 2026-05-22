/*
 * XREFs of ?AssociateWithInputSite@InputSiteElementProxy@@QEAAXAEBV?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x180005F70
 * Callers:
 *     ?RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@@Z @ 0x180005E50 (-RegisterInputSiteElement@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSite.c)
 *     ?OnInputSiteIdChanged@InputSiteElementProxy@@MEAAJXZ @ 0x180066D90 (-OnInputSiteIdChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputSiteElementProxy::AssociateWithInputSite(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx

  v2 = *a2;
  v4 = a1[20];
  if ( v4 != *a2 )
  {
    if ( v2 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 8LL))(*a2);
      v4 = a1[20];
    }
    a1[20] = v2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  (*(void (__fastcall **)(_QWORD *))(*a1 + 88LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 80LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 96LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 104LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 112LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 120LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 128LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 136LL))(a1);
  (*(void (__fastcall **)(_QWORD *))(*a1 + 144LL))(a1);
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 152LL))(a1);
}
