/*
 * XREFs of ??0BamoDataProviderRegistrarPrincipal@@QEAA@PEAVBamoConnection@dataprovider_AutoBamos@@@Z @ 0x1800E1AE4
 * Callers:
 *     ?Initialize@DataProviderManager@@AEAAJXZ @ 0x1800E1A5C (-Initialize@DataProviderManager@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180187DB0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

BamoDataProviderRegistrarPrincipal *__fastcall BamoDataProviderRegistrarPrincipal::BamoDataProviderRegistrarPrincipal(
        BamoDataProviderRegistrarPrincipal *this,
        struct dataprovider_AutoBamos::BamoConnection *a2)
{
  char *v2; // rbx
  __int64 v4; // rcx
  int v5; // eax
  int v7; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (char *)this + 16;
  *(_QWORD *)this = &BamoDataProviderRegistrarPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoDataProviderRegistrarPrincipal::`vftable'{for `IDataProviderRegistrarPrincipal'};
  *((_QWORD *)this + 2) = &Microsoft::BamoImpl::BamoPrincipalImpl::`vftable';
  *((_DWORD *)this + 6) = 1;
  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(struct dataprovider_AutoBamos::BamoConnection *))(*(_QWORD *)a2 + 24LL))(a2)
                 + 64);
  *((_QWORD *)v2 + 2) = v4;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *((_QWORD *)v2 + 4) = 0LL;
  *((_DWORD *)v2 + 6) = 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)v2 + 2) + 24LL) + 40LL)
                                                         + 24LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v2 + 2) + 24LL) + 40LL),
         *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v2 + 2) + 24LL) + 28LL),
         v2);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x263,
      (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v5,
      v7);
    __debugbreak();
  }
  *(_QWORD *)v2 = &BamoImpl::BamoDataProviderRegistrarPrincipalImpl::`vftable';
  return this;
}
