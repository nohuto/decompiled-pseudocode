/*
 * XREFs of ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@PEAUIAppInstallInfoRecord@ContentManagement@@V123@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@@XWinRT@@SAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@2@PEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18005A540
 * Callers:
 *     ?GetAt@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x180059000 (-GetAt@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVAppI.c)
 *     ?GetMany@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIAppInstallInfoRecord@ContentManagement@@PEAI@Z @ 0x180059780 (-GetMany@-$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U-$DefaultEqualityPredicate@PEAVAp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<ContentManagement::IAppInstallInfoRecord>,ContentManagement::IAppInstallInfoRecord *,XWinRT::detail::GitStorageType<ContentManagement::IAppInstallInfoRecord>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>>::ResolveDemand(
        __int64 a1,
        _QWORD *a2)
{
  int v3; // esi
  _DWORD *v4; // rdi

  *a2 = 0LL;
  v3 = 0;
  if ( *(_BYTE *)(a1 + 8) )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD *))(*(_QWORD *)qword_18018F7C8 + 40LL))(
           qword_18018F7C8,
           *(unsigned int *)(*(_QWORD *)a1 + 4LL),
           &GUID_82929d2b_e4ba_49a3_af91_dadf7766d476,
           a2);
    if ( v3 >= 0 )
    {
      v4 = *(_DWORD **)a1;
      if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 0xFFFFFFFF) == 1 && v4 )
      {
        if ( v4[1] )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18018F7C8 + 32LL))(qword_18018F7C8);
        operator delete(v4);
      }
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)a1 = 0LL;
    }
  }
  else
  {
    *a2 = *(_QWORD *)a1;
    *(_QWORD *)a1 = 0LL;
  }
  return (unsigned int)v3;
}
